/*
 * XREFs of PsBoostThreadOutstandingIoQoS @ 0x1402F0600
 * Callers:
 *     ExpBoostIoAfterAcquire @ 0x140205314 (ExpBoostIoAfterAcquire.c)
 *     ExpApplyPriorityBoost @ 0x14020570C (ExpApplyPriorityBoost.c)
 *     ?KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_LIST_ENTRY@@22@Z @ 0x14027125C (-KiAbProcessThreadLocks@LegacyAutoBoost@@YAXPEAU_KTHREAD@@T_KI_AB_BOOST_STRATEGY@1@PEAU_SINGLE_L.c)
 *     ?KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140375A20 (-KiAbpProcessThreadState@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_STATE@1@PEAU_AB_BOOST_CONTEX.c)
 *     ?KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z @ 0x140376BF0 (-KiAbpProcessEntry@AutoBoost@@YAXPEAU_KTHREAD@@PEAU_AB_THREAD_ENTRY@1@PEAU_AB_BOOST_CONTEXT@1@@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PsBoostThreadOutstandingIoQoS(__int64 a1)
{
  _QWORD *SListFaultAddress; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8

  if ( *(_DWORD *)(a1 + 1512) )
  {
    SListFaultAddress = IopSessionNotificationLock.SListFaultAddress;
    if ( IopSessionNotificationLock.SListFaultAddress )
    {
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)IopSessionNotificationLock.SListFaultAddress + 11) )
      {
        if ( SListFaultAddress[12] )
        {
          guard_dispatch_icall_no_overrides(a1, v3, v4);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)IopSessionNotificationLock.SListFaultAddress + 11);
        }
      }
    }
  }
}
