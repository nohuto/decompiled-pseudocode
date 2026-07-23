/*
 * XREFs of PopUserPresentSet @ 0x1404273D4
 * Callers:
 *     PoSetUserPresent @ 0x140427200 (PoSetUserPresent.c)
 *     PopSetSystemState @ 0x1404272D4 (PopSetSystemState.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopCheckForWork @ 0x1404274F4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14042756C (PopGetPolicyWorker.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B43CF0 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall PopUserPresentSet(__int32 a1)
{
  KIRQL v2; // bl
  KIRQL v3; // al
  int v4; // ebx

  if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x40000) != 0 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
    v4 = dword_140E67708;
    KeReleaseSpinLock(&PopUserPresentLock, v3);
    DbgkWerCaptureLiveKernelDump(
      (unsigned int)L"UserPresenceSet",
      160,
      273,
      v4,
      SLODWORD(PpmIdlePolicyLock.Teb),
      0LL,
      0LL,
      0LL,
      0);
  }
  if ( byte_140F10421 == 3 )
  {
    _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
    _InterlockedExchange(&PopPendingUserPresenceMonitorOnReason, a1);
  }
  else
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
    if ( HIDWORD(PpmIdlePolicyLock.IoSelfBoostsEntry.Next) )
    {
      if ( !dword_140E67708 )
        KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
      KeReleaseSpinLock(&PopUserPresentLock, v2);
    }
    else
    {
      dword_140E67704 = a1;
      if ( !dword_140E67708 )
        ExQueueWorkItem(&PopUserPresentWorkItem, DelayedWorkQueue);
      dword_140E67708 = 1;
      KeReleaseSpinLock(&PopUserPresentLock, v2);
      if ( PopIdleScanInterval )
      {
        _InterlockedOr(&PopPendingSystemIdleResetMask, 4u);
        PopGetPolicyWorker(128LL);
        PopCheckForWork();
      }
    }
  }
}
