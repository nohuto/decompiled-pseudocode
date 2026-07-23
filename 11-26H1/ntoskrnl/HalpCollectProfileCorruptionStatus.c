/*
 * XREFs of HalpCollectProfileCorruptionStatus @ 0x1404ED9E8
 * Callers:
 *     HalpQueryProfileInformation @ 0x140B1B8D8 (HalpQueryProfileInformation.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     HalpCollectSamplingProfileCorruptionStatus @ 0x14058263C (HalpCollectSamplingProfileCorruptionStatus.c)
 */

__int64 __fastcall HalpCollectProfileCorruptionStatus(unsigned int **a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // r10d
  unsigned int *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned int v8; // eax
  _DWORD *v10; // rdi
  __int64 v11; // rsi
  unsigned int **i; // rbx
  __int64 v13; // r9
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rcx
  bool v19; // al
  char v20; // al
  int v21; // ecx
  LARGE_INTEGER PerformanceCounter; // rax

  v4 = a2;
  if ( (unsigned int)a2 < 8 )
  {
    *a3 = 8;
    return 3221225476LL;
  }
  v5 = *a1;
  if ( *a1 == (unsigned int *)&HalpSampleProfilingCounters )
    return HalpCollectSamplingProfileCorruptionStatus(a1, a2, a3);
  v6 = v5[5];
  v7 = v5[4];
  v8 = 16 * v5[5] + 24;
  *a3 = v8;
  if ( v4 < v8 )
    return 3221225476LL;
  *((_DWORD *)a1 + 4) = v6;
  *((_DWORD *)a1 + 2) = v7;
  if ( (_DWORD)v6 )
  {
    v10 = v5 + 10;
    v11 = v6;
    for ( i = a1 + 4; ; i += 2 )
    {
      v13 = (unsigned int)v10[3];
      v14 = v10[4];
      if ( (_DWORD)v13 == -1 )
        break;
      v15 = *(_QWORD *)(KiProcessorBlock[v7] + 88);
      if ( v14 )
      {
        v16 = v14 - 1;
        if ( v16 )
        {
          v21 = v16 - 99;
          if ( v21 )
          {
            if ( v21 == 1 )
              v15 += 72LL;
            else
              v15 = 0LL;
          }
          else
          {
            v15 += 48LL;
          }
        }
        else
        {
          v15 += 24LL;
        }
      }
      v17 = *(_QWORD *)(v15 + 16);
      v18 = v17 + 48 * v13;
      v19 = *(_DWORD *)(v18 + 24) == 1 && *(_DWORD *)(v18 + 36) == *v10;
      *((_BYTE *)i + 5) = v19;
      if ( !v19 )
        goto LABEL_16;
      *(_DWORD *)i = *(_DWORD *)(v18 + 36);
      v20 = *(_BYTE *)(v17 + 48 * v13 + 40);
      *((_BYTE *)i + 4) = v20;
      if ( v20 )
      {
        PerformanceCounter = *(LARGE_INTEGER *)(v17 + 48 * v13 + 8);
        goto LABEL_26;
      }
      *(i - 1) = 0LL;
LABEL_16:
      v10 += 10;
      if ( !--v11 )
        return 0LL;
    }
    *((_WORD *)i + 2) = 256;
    *(_DWORD *)i = *v10;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
LABEL_26:
    *(i - 1) = (unsigned int *)PerformanceCounter.QuadPart;
    goto LABEL_16;
  }
  return 0LL;
}
