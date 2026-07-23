/*
 * XREFs of ExInitializePoolTracker @ 0x140CEC048
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x1406D6B74 (ExInitializePoolHeapManagement.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     ExpInsertPoolTracker @ 0x14034CF24 (ExpInsertPoolTracker.c)
 *     ExpInitializePoolTrackerTable @ 0x1406D013C (ExpInitializePoolTrackerTable.c)
 *     ExpSeedHotTags @ 0x140CEC194 (ExpSeedHotTags.c)
 */

__int64 ExInitializePoolTracker()
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // eax
  int v8; // ecx
  int v9; // ecx
  __int64 result; // rax
  int v11; // ecx

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = (unsigned __int64)MEMORY[0xFFFFF78000000014] << 32;
  v2 = v1 ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc();
  v3 = (unsigned __int64)(unsigned int)ExGenRandom(0, v1) << 32;
  v5 = v2 ^ (v3 | (unsigned int)ExGenRandom(0, v4));
  if ( !v5 )
    v5 = 1LL;
  stru_140FC11F0.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)v5;
  v6 = KeLargestCacheLine;
  if ( _BitScanReverse((unsigned int *)&v8, KeLargestCacheLine) )
    v6 = 1 << v8;
  if ( v6 < 0x10 )
  {
    ExpCacheLineSize = 16;
LABEL_7:
    v9 = 0;
    goto LABEL_8;
  }
  v11 = 4096;
  if ( v6 <= 0x1000 )
  {
    ExpCacheLineSize = v6;
    v11 = v6;
    if ( v6 <= 0x10 )
      goto LABEL_7;
  }
  else
  {
    ExpCacheLineSize = 4096;
  }
  v9 = v11 - 16;
LABEL_8:
  ExpCacheAlignExtra = v9;
  result = ExpInitializePoolTrackerTable();
  if ( (int)result >= 0 )
  {
    stru_140EFF2C0.ThreadLock = stru_140EFF2C0.QuantumTarget;
    ExpSeedHotTags();
    ExpTaggedPoolLock = 0LL;
    ExpInsertPoolTracker(
      0x6C6F6F50u,
      (80 * (__int64)stru_140EFF2C0.StackLimit + 4095) & 0xFFFFFFFFFFFFF000uLL,
      64LL,
      stru_140EFF2C0.QuantumTarget);
    return 0LL;
  }
  return result;
}
