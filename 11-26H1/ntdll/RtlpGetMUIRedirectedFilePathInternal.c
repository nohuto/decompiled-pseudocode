/*
 * XREFs of RtlpGetMUIRedirectedFilePathInternal @ 0x18001E730
 * Callers:
 *     RtlpGetMUIRedirectedFilePath @ 0x1800202D0 (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18001D520 (RtlAppendUnicodeToString.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlAppendUnicodeStringToString @ 0x180043340 (RtlAppendUnicodeStringToString.c)
 *     RtlDoesFileExists_UEx @ 0x1800A501C (RtlDoesFileExists_UEx.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePathInternal(
        PCUNICODE_STRING Source,
        PCWSTR a2,
        PCWSTR a3,
        _DWORD *a4,
        char a5,
        void *a6)
{
  wchar_t *v9; // rdi
  unsigned __int64 v10; // rax
  NTSTATUS appended; // ebx
  wchar_t *Heap_0; // rax
  size_t v14; // rax
  unsigned __int16 v15; // dx
  unsigned int MaximumLength; // r15d
  unsigned int v17; // r12d
  wchar_t *v18; // r14
  unsigned __int64 v19; // rbx
  size_t v20; // rax
  unsigned __int16 v21; // dx
  unsigned int v22; // r15d
  unsigned int v23; // r12d
  wchar_t *v24; // r14
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  wchar_t *Buffer; // rsi
  unsigned __int64 v28; // r14
  _UNICODE_STRING Destination; // [rsp+38h] [rbp-60h] BYREF
  __int16 v30; // [rsp+48h] [rbp-50h]
  __int16 v31; // [rsp+4Ah] [rbp-4Eh]
  const wchar_t *v32; // [rsp+50h] [rbp-48h]
  __int16 v33; // [rsp+58h] [rbp-40h]
  __int16 v34; // [rsp+5Ah] [rbp-3Eh]
  const wchar_t *v35; // [rsp+60h] [rbp-38h]

  v9 = 0LL;
  if ( a2 && a3 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a2[v10] );
    if ( v10 < 0x104 )
    {
      Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
      v9 = Heap_0;
      if ( Heap_0 )
      {
        *(_QWORD *)&Destination.Length = 34078720LL;
        Destination.Buffer = Heap_0;
        appended = RtlAppendUnicodeToString(&Destination, a2);
        if ( appended >= 0 )
        {
          v32 = L"\\";
          v14 = wcslen(L"\\");
          if ( v14 > 0x7FFE
            || (v15 = 2 * v14,
                v30 = 2 * v14,
                v31 = 2 * v14 + 2,
                MaximumLength = Destination.MaximumLength,
                v17 = Destination.Length + (unsigned __int16)(2 * v14),
                v17 > Destination.MaximumLength) )
          {
            appended = -1073741789;
          }
          else
          {
            v18 = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
            v19 = v15;
            memmove(v18, L"\\", v15);
            Destination.Length = v17;
            if ( (unsigned int)(unsigned __int16)v17 + 1 < MaximumLength )
              v18[v19 >> 1] = 0;
            appended = 0;
          }
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeStringToString(&Destination, Source);
            if ( appended >= 0 )
            {
              v35 = L"\\";
              v20 = wcslen(L"\\");
              if ( v20 > 0x7FFE
                || (v21 = 2 * v20,
                    v33 = 2 * v20,
                    v34 = 2 * v20 + 2,
                    v22 = Destination.MaximumLength,
                    v23 = Destination.Length + (unsigned __int16)(2 * v20),
                    v23 > Destination.MaximumLength) )
              {
                appended = -1073741789;
              }
              else
              {
                v24 = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
                v25 = v21;
                memmove(v24, L"\\", v21);
                Destination.Length = v23;
                if ( (unsigned int)(unsigned __int16)v23 + 1 < v22 )
                  v24[v25 >> 1] = 0;
                appended = 0;
              }
              if ( appended >= 0 )
              {
                appended = RtlAppendUnicodeToString(&Destination, a3);
                if ( appended >= 0 )
                {
                  if ( !a5 || (appended = RtlAppendUnicodeToString(&Destination, L".mui"), appended >= 0) )
                  {
                    LOBYTE(v26) = 1;
                    Buffer = Destination.Buffer;
                    if ( (unsigned __int8)RtlDoesFileExists_UEx(Destination.Buffer, v26) )
                    {
                      if ( a6 )
                      {
                        v28 = (unsigned __int64)Destination.Length >> 1;
                        if ( (unsigned int)*a4 < v28 + 1 )
                        {
                          *a4 = v28 + 1;
                          appended = -1073741789;
                        }
                        else
                        {
                          memmove(a6, Buffer, Destination.Length);
                          *((_WORD *)a6 + v28) = 0;
                        }
                      }
                      else if ( a4 )
                      {
                        *a4 = (Destination.Length >> 1) + 1;
                      }
                    }
                    else
                    {
                      appended = -1073741809;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        appended = -1073741801;
      }
    }
    else
    {
      appended = -1073741306;
    }
  }
  else
  {
    appended = -1073741811;
  }
  if ( v9 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v9);
  return (unsigned int)appended;
}
