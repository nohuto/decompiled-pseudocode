/*
 * XREFs of MiLockDynamicMemoryShared @ 0x1404CB6E0
 * Callers:
 *     MiIssuePageHeatList @ 0x1402F383C (MiIssuePageHeatList.c)
 *     MiGetChannelInformation @ 0x1404A43F4 (MiGetChannelInformation.c)
 *     MiAddPartitionHugeRange @ 0x1406EB048 (MiAddPartitionHugeRange.c)
 *     MiMarkHugePfnBad @ 0x1406EC7AC (MiMarkHugePfnBad.c)
 *     MiFinishResume @ 0x1406EF990 (MiFinishResume.c)
 *     MiAddPhysicalMemory @ 0x14086501C (MiAddPhysicalMemory.c)
 *     MiGetPhysicalMemoryRanges @ 0x1408663A4 (MiGetPhysicalMemoryRanges.c)
 *     MiMapNewPfns @ 0x140866674 (MiMapNewPfns.c)
 *     MmDuplicateMemory @ 0x140C0CEE0 (MmDuplicateMemory.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  volatile signed __int64 *v4; // rdi
  LegacyAutoBoost *v5; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a2 + 486);
  v4 = (volatile signed __int64 *)(a1 + 264);
  v5 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 264, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64(v4, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v4, 0, v5, (struct _KTHREAD *)v4);
  if ( v5 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v5 + 33) |= 2u;
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  return result;
}
