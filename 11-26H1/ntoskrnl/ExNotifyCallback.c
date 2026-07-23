/*
 * XREFs of ExNotifyCallback @ 0x140474150
 * Callers:
 *     PnprLockPagesForReplace @ 0x1407B29F8 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1407B32FC (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x1407D4600 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopDispatchAcDcCallback @ 0x1407DA720 (PopDispatchAcDcCallback.c)
 *     PopDispatchCallback @ 0x1407DA770 (PopDispatchCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x14083F9A0 (SLSendPolicyChangeNotifications.c)
 *     AlpcpCompleteDispatchMessage @ 0x140990918 (AlpcpCompleteDispatchMessage.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     NtNotifyChangeSession @ 0x140B4ED50 (NtNotifyChangeSession.c)
 *     PopNotifyCallbacksPreSleep @ 0x140B5EE28 (PopNotifyCallbacksPreSleep.c)
 *     PopUnlockAfterSleepWorker @ 0x140C0ACC0 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140C86D10 (KiFilterFiberContext.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  _QWORD *v3; // rdi
  KSPIN_LOCK *v5; // rbp
  KIRQL v6; // al
  _QWORD *v7; // rbx
  KIRQL v8; // si
  int v9; // eax
  bool v10; // zf

  if ( CallbackObject )
  {
    v3 = (char *)CallbackObject + 16;
    if ( (_QWORD *)*v3 != v3 )
    {
      v5 = (KSPIN_LOCK *)((char *)CallbackObject + 8);
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)CallbackObject + 1);
      v7 = (_QWORD *)*v3;
      v8 = v6;
      if ( v6 == 2 )
      {
        while ( v7 != v3 )
        {
          guard_dispatch_icall_no_overrides(v7[4], Argument1);
          v7 = (_QWORD *)*v7;
        }
      }
      else
      {
        while ( v7 != v3 )
        {
          if ( !*((_BYTE *)v7 + 44) )
          {
            ++*((_DWORD *)v7 + 10);
            KeReleaseSpinLock(v5, v8);
            guard_dispatch_icall_no_overrides(v7[4], Argument1);
            v8 = KeAcquireSpinLockRaiseToDpc(v5);
            v9 = *((_DWORD *)v7 + 10) - 1;
            v10 = *((_BYTE *)v7 + 44) == 0;
            *((_DWORD *)v7 + 10) = v9;
            if ( !v10 && !v9 )
              KeSetEvent(&word_140EFF2A0, 0, 0);
          }
          v7 = (_QWORD *)*v7;
        }
      }
      KxReleaseSpinLock(v5);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
      __writecr8(v8);
    }
  }
}
