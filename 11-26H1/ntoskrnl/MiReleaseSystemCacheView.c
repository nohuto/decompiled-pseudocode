/*
 * XREFs of MiReleaseSystemCacheView @ 0x1402A6600
 * Callers:
 *     MiPartitionPeriodicTick @ 0x1402A6458 (MiPartitionPeriodicTick.c)
 *     MiObtainSystemCacheView @ 0x1402C6BA0 (MiObtainSystemCacheView.c)
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MmFreeSystemCacheReserveView @ 0x140870E50 (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiInsertReadiedSystemCacheViews @ 0x1402A28A4 (MiInsertReadiedSystemCacheViews.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402A2E28 (MiReturnSystemCacheRegionsToKva.c)
 *     MiGetSystemCacheReverseMap @ 0x1402C6730 (MiGetSystemCacheReverseMap.c)
 *     MiGetSystemCacheRegionsToFree @ 0x1404849A4 (MiGetSystemCacheRegionsToFree.c)
 */

void __fastcall MiReleaseSystemCacheView(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *SystemCacheReverseMap; // rsi
  unsigned __int64 v4; // r15
  int v5; // ebp
  int v6; // edx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int64 v10; // rdx
  __int64 **v11; // rax
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = a1;
  if ( a2 )
  {
    SystemCacheReverseMap = (__int64 *)MiGetSystemCacheReverseMap(a2);
    v2 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * (((unsigned __int64)SystemCacheReverseMap[4] >> 6) & 0x3FF));
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 22300) )
      return;
    SystemCacheReverseMap = 0LL;
  }
  v13[1] = v13;
  v13[0] = v13;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 2752));
  _InterlockedOr(v12, 0);
  v5 = KiTbFlushTimeStamp;
  if ( *(_QWORD *)(v2 + 2576) )
  {
    v6 = *(_DWORD *)(v2 + 2584);
    if ( (unsigned int)(KiTbFlushTimeStamp - v6) > 2 || (v6 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v6) >= 2 )
      MiInsertReadiedSystemCacheViews(v2, (_QWORD *)(v2 + 2560));
  }
  if ( *(_QWORD *)(v2 + 2608) )
  {
    v7 = *(_DWORD *)(v2 + 2616);
    if ( (unsigned int)(v5 - v7) > 2 || (v7 & 1) == 0 && (unsigned int)(v5 - v7) >= 2 )
      MiInsertReadiedSystemCacheViews(v2, (_QWORD *)(v2 + 2592));
  }
  if ( *(_QWORD *)(v2 + 2640) )
  {
    v8 = *(_DWORD *)(v2 + 2648);
    if ( (unsigned int)(v5 - v8) > 2 || (v8 & 1) == 0 && (unsigned int)(v5 - v8) >= 2 )
      MiInsertReadiedSystemCacheViews(v2, (_QWORD *)(v2 + 2624));
  }
  if ( *(_QWORD *)(v2 + 2672) )
  {
    v9 = *(_DWORD *)(v2 + 2680);
    if ( (unsigned int)(v5 - v9) > 2 || (v9 & 1) == 0 && (unsigned int)(v5 - v9) >= 2 )
      MiInsertReadiedSystemCacheViews(v2, (_QWORD *)(v2 + 2656));
  }
  if ( SystemCacheReverseMap )
  {
    v10 = v2 + 32 * ((v5 & 3) + 80LL);
    if ( !*(_QWORD *)(v10 + 16) )
      *(_DWORD *)(v10 + 24) = v5;
    SystemCacheReverseMap[4] = SystemCacheReverseMap[4] & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
    v11 = *(__int64 ***)(v10 + 8);
    if ( *v11 != (__int64 *)v10 )
      __fastfail(3u);
    *SystemCacheReverseMap = v10;
    SystemCacheReverseMap[1] = (__int64)v11;
    *v11 = SystemCacheReverseMap;
    *(_QWORD *)(v10 + 8) = SystemCacheReverseMap;
    ++*(_QWORD *)(v10 + 16);
  }
  else
  {
    MiGetSystemCacheRegionsToFree(v2, v13);
  }
  if ( (_BYTE)v4 == 17 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(v2 + 2752) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v2 + 2752), retaddr);
  }
  else
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *(_DWORD *)(v2 + 2752) = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v2 + 2752), retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
    __writecr8(v4);
  }
  if ( v13[0] != v13 )
    MiReturnSystemCacheRegionsToKva(v2, v13);
}
