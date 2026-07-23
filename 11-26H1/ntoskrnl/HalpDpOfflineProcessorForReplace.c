/*
 * XREFs of HalpDpOfflineProcessorForReplace @ 0x140BF3ED0
 * Callers:
 *     HalpDpReplaceTarget @ 0x140BF4530 (HalpDpReplaceTarget.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     KeSweepLocalCaches @ 0x1404B1530 (KeSweepLocalCaches.c)
 *     HalpInterruptOfflineProcessor @ 0x14059C8A0 (HalpInterruptOfflineProcessor.c)
 *     KeSaveStateForHibernate @ 0x14072C9A0 (KeSaveStateForHibernate.c)
 *     HalpDpPostReplaceInitialization @ 0x140BF40F0 (HalpDpPostReplaceInitialization.c)
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
  v4 = 1504LL * KeGetPcr()->Prcb.Number;
  v6 = __rdtsc();
  KeSaveStateForHibernate((__int64)HalpDeviceBlockUnblockPushLock.WaitBlock[3].Thread + v4);
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
