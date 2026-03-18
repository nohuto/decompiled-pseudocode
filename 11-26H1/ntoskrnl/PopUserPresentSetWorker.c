/*
 * XREFs of PopUserPresentSetWorker @ 0x1404CF520
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     PopSetNotificationWork @ 0x1404385A0 (PopSetNotificationWork.c)
 *     PopUpdateSystemIdleContext @ 0x140945524 (PopUpdateSystemIdleContext.c)
 *     PopNotifyConsoleUserPresent @ 0x140A3DB40 (PopNotifyConsoleUserPresent.c)
 *     PopInvokeWin32Callout @ 0x140ABCA7C (PopInvokeWin32Callout.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

void PopUserPresentSetWorker()
{
  KIRQL i; // al
  KIRQL v1; // bl
  unsigned int v2; // edi
  _QWORD v3[5]; // [rsp+30h] [rbp-28h] BYREF

  for ( i = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F11D08.WaitBlock[0].Thread);
        ;
        i = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F11D08.WaitBlock[0].Thread) )
  {
    v1 = i;
    if ( HIDWORD(stru_140E66FF0.Padding[3]) != 1 )
      break;
    v2 = stru_140E66FF0.Padding[3];
    HIDWORD(stru_140E66FF0.Padding[3]) = 2;
    KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F11D08.WaitBlock[0].Thread, i);
    if ( byte_140F106D1 && !_InterlockedExchange(&dword_140F106D8, 1) )
    {
      dword_140F11040.TargetInfoAsUlong = 275;
      qword_140F11058 = (__int64)PopAwayModeUserPresenceDpc;
      qword_140F11078 = 0LL;
      qword_140F11060 = (__int64)&dword_140F106D8;
      qword_140F11050 = 0LL;
      KiSetTimerEx((__int64)&qword_140E674E0, -30000000LL, 0, 0, (__int64)&dword_140F11040);
      HIDWORD(stru_140F10828.ReadTransferCount) = v2;
      PopSetNotificationWork(0x40u);
    }
    PopNotifyConsoleUserPresent(0LL, v2);
    if ( (dword_140F105A0[0] & 3) == 0 )
    {
      _InterlockedOr(dword_140F105A0, 3u);
      memset(v3, 0, 32);
      if ( LOBYTE(PsAltSystemCallRegistrationLock.TrapFrame) )
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
  if ( dword_140F106D4 )
    KeSetEvent(&word_140F11020, 0, 0);
  stru_140E66FF0.Padding[3] = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&stru_140F11D08.WaitBlock[0].Thread, v1);
}
