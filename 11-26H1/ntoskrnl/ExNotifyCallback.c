/*
 * XREFs of ExNotifyCallback @ 0x14047A7E0
 * Callers:
 *     PnprLockPagesForReplace @ 0x1407AF998 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1407B029C (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x1407D1560 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopDispatchAcDcCallback @ 0x1407D7380 (PopDispatchAcDcCallback.c)
 *     PopDispatchCallback @ 0x1407D73D0 (PopDispatchCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x140839760 (SLSendPolicyChangeNotifications.c)
 *     AlpcpCompleteDispatchMessage @ 0x1409BF938 (AlpcpCompleteDispatchMessage.c)
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 *     NtNotifyChangeSession @ 0x140B4CFC0 (NtNotifyChangeSession.c)
 *     PopNotifyCallbacksPreSleep @ 0x140B5BB0C (PopNotifyCallbacksPreSleep.c)
 *     PopUnlockAfterSleepWorker @ 0x140C04AB0 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140C80D10 (KiFilterFiberContext.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
              KeSetEvent(&word_140EFEF60, 0, 0);
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
