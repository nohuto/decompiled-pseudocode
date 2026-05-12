/*
 * XREFs of NvmeAdapterCompleteFabricControllerKeepAlive @ 0x1400E56C0
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x140043CC4 (StorEtwNvmeControllerEvent.c)
 */

int __fastcall NvmeAdapterCompleteFabricControllerKeepAlive(LARGE_INTEGER *a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  bool v4; // zf
  unsigned int v5; // r9d
  unsigned int i; // r8d
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9; // r8
  LARGE_INTEGER v10; // rax
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B0h] [rbp+8h] BYREF

  v2 = &retaddr;
  v4 = *(_BYTE *)(a2 + 2) == 40;
  PerformanceFrequency.QuadPart = 0LL;
  if ( v4 )
  {
    v5 = *(_DWORD *)(a2 + 56);
    if ( v5 )
    {
      for ( i = 0; i < v5; ++i )
      {
        LODWORD(v2) = i;
        v7 = *(unsigned int *)(a2 + 4LL * i + 120);
        if ( (unsigned int)v7 >= 0x80 && (unsigned int)v7 < *(_DWORD *)(a2 + 16) )
        {
          v8 = a2 + v7;
          if ( *(_DWORD *)v8 == 67 )
            goto LABEL_10;
        }
      }
    }
  }
  v8 = 0LL;
LABEL_10:
  v9 = *(_BYTE *)(a2 + 3);
  if ( v9 != 1 )
  {
    if ( v9 == 37 || v9 == 2 )
      return (int)v2;
LABEL_18:
    LODWORD(v2) = StorEtwNvmeControllerEvent(
                    (__int64)a1,
                    1,
                    3LL,
                    (__int64)L"Keep Alive failed",
                    L"SrbStatus",
                    v9,
                    L"SCT",
                    ((unsigned __int64)*(unsigned __int16 *)(v8 + 86) >> 9) & 7,
                    L"SC",
                    (unsigned __int64)*(unsigned __int16 *)(v8 + 86) >> 1,
                    (void *)&word_140152E7C,
                    0,
                    (void *)&word_140152E7C,
                    0,
                    (void *)&word_140152E7C,
                    0,
                    (void *)&word_140152E7C,
                    0,
                    (void *)&word_140152E7C,
                    0);
    return (int)v2;
  }
  if ( (*(_WORD *)(v8 + 86) & 0xFFE) != 0 )
    goto LABEL_18;
  if ( UseQPCTime )
    v10 = KeQueryPerformanceCounter(&PerformanceFrequency);
  else
    v10.QuadPart = KeQueryUnbiasedInterruptTime();
  a1[136] = v10;
  LODWORD(v2) = StorEtwNvmeControllerEvent(
                  (__int64)a1,
                  1,
                  4LL,
                  (__int64)L"Keep Alive response received",
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0,
                  (void *)&word_140152E7C,
                  0);
  return (int)v2;
}
