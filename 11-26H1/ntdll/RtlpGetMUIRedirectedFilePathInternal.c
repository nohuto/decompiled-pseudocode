/*
 * XREFs of RtlpGetMUIRedirectedFilePathInternal @ 0x1800335D0
 * Callers:
 *     RtlpGetMUIRedirectedFilePath @ 0x180035170 (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     RtlDoesFileExists_UEx @ 0x1800A5EEC (RtlDoesFileExists_UEx.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpGetMUIRedirectedFilePathInternal(
        __int64 a1,
        const wchar_t *a2,
        const wchar_t *a3,
        _DWORD *a4,
        char a5,
        void *a6)
{
  void *v9; // rdi
  unsigned __int64 v10; // rax
  int appended; // ebx
  void *Heap_0; // rax
  size_t v14; // rax
  unsigned __int16 v15; // dx
  unsigned int v16; // r15d
  unsigned int v17; // r12d
  char *v18; // r14
  unsigned __int64 v19; // rbx
  size_t v20; // rax
  unsigned __int16 v21; // dx
  unsigned int v22; // r15d
  unsigned int v23; // r12d
  char *v24; // r14
  unsigned __int64 v25; // rbx
  __int64 v26; // rdx
  const void *v27; // rsi
  unsigned __int64 v28; // r14
  void *Src[2]; // [rsp+38h] [rbp-60h] BYREF
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
      Heap_0 = (void *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8LL, 520LL);
      v9 = Heap_0;
      if ( Heap_0 )
      {
        Src[0] = (void *)34078720;
        Src[1] = Heap_0;
        appended = RtlAppendUnicodeToString((unsigned __int16 *)Src, a2);
        if ( appended >= 0 )
        {
          v32 = L"\\";
          v14 = wcslen(L"\\");
          if ( v14 > 0x7FFE
            || (v15 = 2 * v14,
                v30 = 2 * v14,
                v31 = 2 * v14 + 2,
                v16 = WORD1(Src[0]),
                v17 = LOWORD(Src[0]) + (unsigned __int16)(2 * v14),
                v17 > WORD1(Src[0])) )
          {
            appended = -1073741789;
          }
          else
          {
            v18 = (char *)Src[1] + 2 * ((unsigned __int64)LOWORD(Src[0]) >> 1);
            v19 = v15;
            memmove(v18, L"\\", v15);
            LOWORD(Src[0]) = v17;
            if ( (unsigned int)(unsigned __int16)v17 + 1 < v16 )
              *(_WORD *)&v18[2 * (v19 >> 1)] = 0;
            appended = 0;
          }
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeStringToString(Src, a1);
            if ( appended >= 0 )
            {
              v35 = L"\\";
              v20 = wcslen(L"\\");
              if ( v20 > 0x7FFE
                || (v21 = 2 * v20,
                    v33 = 2 * v20,
                    v34 = 2 * v20 + 2,
                    v22 = WORD1(Src[0]),
                    v23 = LOWORD(Src[0]) + (unsigned __int16)(2 * v20),
                    v23 > WORD1(Src[0])) )
              {
                appended = -1073741789;
              }
              else
              {
                v24 = (char *)Src[1] + 2 * ((unsigned __int64)LOWORD(Src[0]) >> 1);
                v25 = v21;
                memmove(v24, L"\\", v21);
                LOWORD(Src[0]) = v23;
                if ( (unsigned int)(unsigned __int16)v23 + 1 < v22 )
                  *(_WORD *)&v24[2 * (v25 >> 1)] = 0;
                appended = 0;
              }
              if ( appended >= 0 )
              {
                appended = RtlAppendUnicodeToString((unsigned __int16 *)Src, a3);
                if ( appended >= 0 )
                {
                  if ( !a5 || (appended = RtlAppendUnicodeToString((unsigned __int16 *)Src, L".mui"), appended >= 0) )
                  {
                    LOBYTE(v26) = 1;
                    v27 = Src[1];
                    if ( (unsigned __int8)RtlDoesFileExists_UEx(Src[1], v26) )
                    {
                      if ( a6 )
                      {
                        v28 = (unsigned __int64)LOWORD(Src[0]) >> 1;
                        if ( (unsigned int)*a4 < v28 + 1 )
                        {
                          *a4 = v28 + 1;
                          appended = -1073741789;
                        }
                        else
                        {
                          memmove(a6, v27, LOWORD(Src[0]));
                          *((_WORD *)a6 + v28) = 0;
                        }
                      }
                      else if ( a4 )
                      {
                        *a4 = (LOWORD(Src[0]) >> 1) + 1;
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
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0LL, v9);
  return (unsigned int)appended;
}
