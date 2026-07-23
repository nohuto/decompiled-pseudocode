/*
 * XREFs of MiTimeToWriteMemory @ 0x140486350
 * Callers:
 *     MiComputeSoloZeroingTime @ 0x1404FAAFC (MiComputeSoloZeroingTime.c)
 *     MiEstimateTimeToFillPfns @ 0x1406ED4E8 (MiEstimateTimeToFillPfns.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiTimeToWriteMemory(unsigned int a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // r8

  v5 = *(_QWORD *)(384LL * a1 + qword_140E2D838 + 376);
  if ( v5 )
  {
    if ( a2 == 3 )
    {
      v6 = 0LL;
      v7 = v5 + 56LL * a3 + 72;
      while ( 1 )
      {
        v8 = *(_QWORD *)(v7 + 48);
        if ( v8 )
          break;
        ++v6;
        v7 += 168LL;
        if ( v6 >= 3 )
          goto LABEL_6;
      }
LABEL_9:
      v9 = *(_QWORD *)(v8 + 8LL * a4);
      v10 = *(_QWORD *)(v7 + 8);
      if ( v10 )
        return a5 * v9 / v10;
      goto LABEL_6;
    }
    v7 = v5 + 56 * (a3 + 2LL * a2 + a2) + 72;
    v8 = *(_QWORD *)(v7 + 48);
    if ( v8 )
      goto LABEL_9;
  }
LABEL_6:
  v9 = 1216LL;
  v10 = 0x200000LL;
  return a5 * v9 / v10;
}
