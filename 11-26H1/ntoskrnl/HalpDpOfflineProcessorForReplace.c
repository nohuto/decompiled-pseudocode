/*
 * XREFs of HalpDpOfflineProcessorForReplace @ 0x140BEDED0
 * Callers:
 *     HalpDpReplaceTarget @ 0x140BEE530 (HalpDpReplaceTarget.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     KeSweepLocalCaches @ 0x1404B7D00 (KeSweepLocalCaches.c)
 *     HalpInterruptOfflineProcessor @ 0x14059A120 (HalpInterruptOfflineProcessor.c)
 *     KeSaveStateForHibernate @ 0x140727DD0 (KeSaveStateForHibernate.c)
 *     HalpDpPostReplaceInitialization @ 0x140BEE0F0 (HalpDpPostReplaceInitialization.c)
 */

__int64 __fastcall HalpDpOfflineProcessorForReplace(__int64 a1)
{
  bool v2; // bp
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = HalpDisableInterrupts();
  CurrentIrql = KeGetCurrentIrql();
  v4 = 94LL * KeGetPcr()->Prcb.Number;
  v6 = __rdtsc();
  KeSaveStateForHibernate((__int64)&HalpDeviceBlockUnblockPushLock.QueueListEntry.Flink[v4]);
  if ( *(_DWORD *)(a1 + 56) < *(_DWORD *)a1 )
  {
    KeSweepLocalCaches();
    HalpInterruptOfflineProcessor((volatile signed __int32 *)(a1 + 56));
  }
  HalpDpPostReplaceInitialization(a1, &v6);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v2 )
    _enable();
  return result;
}
