/*
 * XREFs of KiGetNextIdleSearchTargetInGeneration @ 0x140241930
 * Callers:
 *     KiSearchForNewThreadsWithinL0SearchContext @ 0x1402411E0 (KiSearchForNewThreadsWithinL0SearchContext.c)
 *     KiSearchForNewThreadsWithinSearchContext @ 0x140241560 (KiSearchForNewThreadsWithinSearchContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall KiGetNextIdleSearchTargetInGeneration(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 *a5,
        _QWORD *a6)
{
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rsi
  unsigned __int16 i; // r9
  __int64 v12; // r10
  signed __int64 v13; // rbx
  __int64 v14; // r11
  unsigned __int64 v15; // r8
  int v16; // r13d
  unsigned int j; // edx
  unsigned __int64 v18; // rax
  unsigned int v19; // r13d
  ULONG_PTR v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  int v23; // ebx
  unsigned int k; // edx
  unsigned __int64 v25; // rax
  int v26; // ecx
  unsigned __int64 v27; // rbx
  __int64 v28; // r10
  unsigned __int8 v29; // dl
  __int64 result; // rax

  v8 = *(_QWORD *)(a2 + 192);
  v9 = a1 + 32LL * *(unsigned __int16 *)(a1 + 1056);
  v10 = 0LL;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( i >= *(_WORD *)(a3 + 10) )
      {
        v29 = 0;
        v21 = 0LL;
        i = -1;
        goto LABEL_25;
      }
      v12 = a3 + 16LL * i;
      v13 = *(_QWORD *)(v12 + 24);
      v14 = *(_QWORD *)(KiSubNodes + 8LL * *(unsigned __int16 *)(v9 + 2LL * i + 1064));
      v15 = v13;
      if ( v14 == v8 && (KiCacheAwareScheduling & 2) != 0 && (*(_QWORD *)(a2 + 36528) & v13) != 0 )
      {
        v15 = *(_QWORD *)(a2 + 36528) & v13;
        goto LABEL_7;
      }
      if ( !v13 )
        break;
LABEL_7:
      v16 = 0;
      for ( j = *(unsigned __int8 *)(a2 + 209) % (unsigned int)__popcnt(v15) + 1; j; --j )
      {
        _BitScanForward64(&v18, v15);
        v16 += v18 + 1;
        v15 >>= (unsigned __int8)v18 + 1;
      }
      v19 = v16 - 1;
      v20 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * *(unsigned __int16 *)(v14 + 136)].Flink
                             + v19)];
      if ( v13 == _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v12 + 24),
                    v13 & ~*(_QWORD *)(v20 + 36480),
                    v13) )
      {
        v21 = *(_QWORD *)(v20 + 36488);
        if ( !v21 )
          KeBugCheckEx(0x200u, 1uLL, v19 | ((unsigned __int64)*(unsigned __int16 *)(v14 + 136) << 8), v20, 0LL);
        v29 = 1;
        goto LABEL_25;
      }
LABEL_23:
      _mm_pause();
    }
    v22 = *(_QWORD *)(v12 + 16);
    if ( v14 == v8 && (KiCacheAwareScheduling & 2) != 0 && (*(_QWORD *)(a2 + 36528) & v22) != 0 )
      break;
    if ( v22 )
      goto LABEL_18;
  }
  v22 &= *(_QWORD *)(a2 + 36528);
LABEL_18:
  v23 = 0;
  for ( k = *(unsigned __int8 *)(a2 + 209) % (unsigned int)__popcnt(v22) + 1; k; --k )
  {
    _BitScanForward64(&v25, v22);
    v23 += v25 + 1;
    v22 >>= (unsigned __int8)v25 + 1;
  }
  v26 = v23 - 1;
  v27 = (unsigned int)(v23 - 1);
  if ( !_interlockedbittestandreset64((volatile signed __int32 *)(v12 + 16), v27) )
    goto LABEL_23;
  v28 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16
                                                                                        * *(unsigned __int16 *)(v14 + 136)].Flink
        + v26);
  if ( !KiProcessorBlock[v28] )
    KeBugCheckEx(0x200u, 2uLL, v27 | ((unsigned __int64)*(unsigned __int16 *)(v14 + 136) << 8), (unsigned int)v28, 0LL);
  v21 = 0LL;
  v29 = 1;
  v10 = KiProcessorBlock[v28];
LABEL_25:
  *a4 = i;
  *a5 = v10;
  result = v29;
  *a6 = v21;
  return result;
}
