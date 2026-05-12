/*
 * XREFs of sub_14003328C @ 0x14003328C
 * Callers:
 *     sub_1400330B8 @ 0x1400330B8 (sub_1400330B8.c)
 * Callees:
 *     sub_1400336C8 @ 0x1400336C8 (sub_1400336C8.c)
 *     sub_140033828 @ 0x140033828 (sub_140033828.c)
 *     sub_140053614 @ 0x140053614 (sub_140053614.c)
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 */

__int64 __fastcall sub_14003328C(__int64 a1, struct _UNICODE_STRING *a2)
{
  int v3; // edi
  __int16 v5; // bx
  unsigned __int16 v6; // bx
  __int64 v7; // r15
  char *Pool2; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  void *v11; // r12
  int v12; // eax
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  PVOID P[2]; // [rsp+58h] [rbp-39h] BYREF
  PVOID Args[2]; // [rsp+68h] [rbp-29h] BYREF
  PVOID v18[2]; // [rsp+78h] [rbp-19h] BYREF
  _STRING DestinationString; // [rsp+88h] [rbp-9h] BYREF
  struct _STRING v20; // [rsp+98h] [rbp+7h] BYREF
  struct _STRING v21; // [rsp+A8h] [rbp+17h] BYREF
  struct _STRING SourceString; // [rsp+B8h] [rbp+27h] BYREF

  v20 = 0LL;
  *(_OWORD *)P = 0LL;
  v21 = 0LL;
  *(_OWORD *)v18 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)Args = 0LL;
  RtlInitAnsiString(&DestinationString, (PCSZ)(a1 + 168));
  v3 = sub_1400336C8(1229218130LL, &DestinationString, Args);
  if ( v3 >= 0 )
  {
    RtlInitAnsiString(&v20, (PCSZ)(a1 + 177));
    v3 = sub_1400336C8(1229218130LL, &v20, P);
    if ( v3 >= 0 )
    {
      if ( !Args[1] && !P[1] )
      {
        v3 = -1073741811;
        goto LABEL_2;
      }
      if ( *(_DWORD *)(a1 + 3432) == 17 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5080LL);
        if ( v14 )
        {
          v15 = -1LL;
          do
            ++v15;
          while ( *(_WORD *)(v14 + 2 * v15) );
        }
        else
        {
          LOWORD(v15) = 0;
        }
        v6 = v15 + LOWORD(P[0]) + 4;
      }
      else
      {
        RtlInitAnsiString(&v21, (PCSZ)(a1 + 242));
        v3 = sub_1400336C8(1229218130LL, &v21, v18);
        if ( v3 < 0 )
          goto LABEL_2;
        if ( LOWORD(v18[0]) )
          v5 = LOWORD(v18[0]) + LOWORD(Args[0]) + 5;
        else
          v5 = LOWORD(Args[0]) + 32;
        v6 = LOWORD(P[0]) + v5;
      }
      v7 = *(_QWORD *)(a1 + 8);
      Pool2 = (char *)ExAllocatePool2(64LL, v6, 1229218130LL);
      if ( Pool2 )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = ExAllocatePool2(64LL, 2LL * v6, 1229218130LL);
        v11 = (void *)v10;
        if ( v10 || !v9 )
        {
          if ( v10 )
          {
            if ( *(_DWORD *)(a1 + 3432) == 17 )
            {
              v12 = sub_140033828(Pool2, 0, "%s : ", (char)P[1]);
            }
            else if ( LOWORD(v18[0]) )
            {
              if ( LOWORD(Args[0]) )
                v12 = sub_140033828(Pool2, 0, "%s %s : %s", (char)Args[1]);
              else
                v12 = sub_140033828(Pool2, 0, "%s : %s", (char)P[1]);
            }
            else if ( LOWORD(Args[0]) )
            {
              v12 = sub_140033828(Pool2, 0, "%s %s : LUN %d", (char)Args[1]);
            }
            else
            {
              v12 = sub_140033828(Pool2, 0, "%s : LUN %d", (char)P[1]);
            }
            v3 = v12;
            if ( v12 < 0 )
            {
              ExFreePoolWithTag(v11, 0x49446152u);
            }
            else
            {
              a2->Buffer = (PWSTR)v11;
              a2->Length = 0;
              a2->MaximumLength = 2 * v6;
              RtlInitAnsiString(&SourceString, Pool2);
              v13 = RtlAnsiStringToUnicodeString(a2, &SourceString, 0);
              v3 = v13;
              if ( *(_DWORD *)(a1 + 3432) == 17 && v13 >= 0 && *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5080LL) )
                sub_140053614(a2);
            }
            goto LABEL_23;
          }
        }
        else
        {
          sub_14008D9B8(v9, 64, 2 * v6, 1229218130, 0x80000000);
        }
        v3 = -1073741801;
LABEL_23:
        ExFreePoolWithTag(Pool2, 0x49446152u);
        goto LABEL_2;
      }
      if ( v7 )
        sub_14008D9B8(v7, 64, v6, 1229218130, 0x80000000);
      v3 = -1073741801;
    }
  }
LABEL_2:
  if ( v18[1] )
    ExFreePoolWithTag(v18[1], 0x49446152u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x49446152u);
  if ( Args[1] )
    ExFreePoolWithTag(Args[1], 0x49446152u);
  return (unsigned int)v3;
}
