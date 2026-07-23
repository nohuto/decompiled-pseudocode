/*
 * XREFs of PopUserPresentSetWorker @ 0x1404C8F50
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     PopSetNotificationWork @ 0x1404274C0 (PopSetNotificationWork.c)
 *     PopUpdateSystemIdleContext @ 0x1409C0E94 (PopUpdateSystemIdleContext.c)
 *     PopNotifyConsoleUserPresent @ 0x1409F9560 (PopNotifyConsoleUserPresent.c)
 *     PopInvokeWin32Callout @ 0x140ABE89C (PopInvokeWin32Callout.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

void PopUserPresentSetWorker()
{
  KIRQL i; // al
  KIRQL v1; // bl
  unsigned int v2; // edi
  _QWORD v3[5]; // [rsp+30h] [rbp-28h] BYREF

  for ( i = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock); ; i = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock) )
  {
    v1 = i;
    if ( dword_140E67708 != 1 )
      break;
    v2 = dword_140E67704;
    dword_140E67708 = 2;
    KeReleaseSpinLock(&PopUserPresentLock, i);
    if ( BYTE1(PpmIdlePolicyLock.IoSelfBoostsEntry.Next)
      && !_InterlockedExchange((volatile __int32 *)PpmIdlePolicyLock.PriorityFloorCounts, 1) )
    {
      PopAwayModeUserPresenceDpcObject.TargetInfoAsUlong = 275;
      PopAwayModeUserPresenceDpcObject.DeferredRoutine = PopAwayModeUserPresenceDpc;
      PopAwayModeUserPresenceDpcObject.DpcData = 0LL;
      PopAwayModeUserPresenceDpcObject.DeferredContext = PpmIdlePolicyLock.PriorityFloorCounts;
      PopAwayModeUserPresenceDpcObject.ProcessorHistory = 0LL;
      KiSetTimerEx((__int64)&qword_140E67750, -30000000LL, 0, 0, (__int64)&PopAwayModeUserPresenceDpcObject);
      PopAwaymodeExitReason = v2;
      PopSetNotificationWork(0x40u);
    }
    PopNotifyConsoleUserPresent(0LL, v2);
    if ( ((__int64)PpmIdlePolicyLock.Teb & 3) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&PpmIdlePolicyLock.Teb, 3u);
      memset(v3, 0, 32);
      if ( BYTE1(PsAltSystemCallRegistrationLock.Timer.DueTime.LowPart) )
      {
        PopInvokeWin32Callout(3LL, v3, 2LL);
        if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
          __fastfail(0x20u);
      }
      PopAcquirePolicyLock();
      PopUpdateSystemIdleContext(4LL);
      PopReleasePolicyLock();
    }
  }
  if ( HIDWORD(PpmIdlePolicyLock.IoSelfBoostsEntry.Next) )
    KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
  dword_140E67708 = 0;
  dword_140E67704 = 0;
  KeReleaseSpinLock(&PopUserPresentLock, v1);
}
