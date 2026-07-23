/*
 * XREFs of KsepEvntLogShimsApplied @ 0x140600ACC
 * Callers:
 *     KseDriverLoadImage @ 0x140A38A18 (KseDriverLoadImage.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     KsepPoolAllocatePaged @ 0x1404D7BFC (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 */

void __fastcall KsepEvntLogShimsApplied(unsigned __int16 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r12d
  unsigned __int16 v6; // r14
  __int64 Paged; // rax
  UNICODE_STRING *v8; // rsi
  wchar_t *v9; // rdi
  UNICODE_STRING *v10; // rbx
  unsigned __int16 *v11; // r15
  wchar_t *Buffer; // rbx
  unsigned int i; // ebx
  ULONG v14; // eax
  unsigned int v15; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int16 *v17; // [rsp+58h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  __int64 v19; // [rsp+70h] [rbp-19h]
  __int64 v20; // [rsp+78h] [rbp-11h]
  unsigned int *v21; // [rsp+80h] [rbp-9h]
  __int64 v22; // [rsp+88h] [rbp-1h]
  wchar_t *v23; // [rsp+90h] [rbp+7h]
  int v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+9Ch] [rbp+13h]

  v3 = 0;
  v17 = a1;
  v15 = a3;
  v6 = 0;
  Destination = 0LL;
  if ( stru_140E66D40.StackLimit
    && EtwEventEnabled((REGHANDLE)stru_140E66D40.StackLimit, &KseShimsApplied)
    && v15
    && a2
    && a1 )
  {
    Paged = KsepPoolAllocatePaged();
    v8 = (UNICODE_STRING *)Paged;
    if ( Paged )
    {
      v9 = (wchar_t *)(Paged + 16LL * v15);
      do
      {
        v10 = &v8[v3];
        *v10 = 0LL;
        v10->Buffer = v9;
        v9 += 39;
        v10->MaximumLength = 78;
        RtlStringFromGUIDEx((PGUID)(a2 + 80LL * v3++), v10, 0);
        v6 += v10->Length + 4;
      }
      while ( v3 < v15 );
      v11 = v17;
      if ( v6 )
      {
        Destination.Buffer = (wchar_t *)KsepPoolAllocatePaged();
        Buffer = Destination.Buffer;
        if ( Destination.Buffer )
        {
          Destination.MaximumLength = v6;
          for ( i = 0; i < v15; ++i )
          {
            if ( RtlAppendUnicodeStringToString(&Destination, &v8[i]) < 0
              || i != v15 - 1 && RtlAppendUnicodeToString(&Destination, L"\n") < 0 )
            {
              goto LABEL_18;
            }
          }
          Buffer = Destination.Buffer;
          UserData.Ptr = *((_QWORD *)v11 + 1);
          v14 = *v11 + 2;
          v20 = 4LL;
          UserData.Size = v14;
          v19 = a2 + 68;
          v21 = &v15;
          v22 = 4LL;
          v24 = Destination.Length + 2;
          UserData.Reserved = 0;
          v23 = Destination.Buffer;
          v25 = 0;
          EtwWriteEx((REGHANDLE)stru_140E66D40.StackLimit, &KseShimsApplied, 0LL, 0, 0LL, 0LL, 4u, &UserData);
        }
      }
      else
      {
LABEL_18:
        Buffer = Destination.Buffer;
      }
      KsepPoolFreePaged(v8);
    }
    else
    {
      Buffer = Destination.Buffer;
    }
    if ( Buffer )
      KsepPoolFreePaged(Buffer);
  }
}
