/*
 * XREFs of HalpCmcStartPolling @ 0x14057D0BC
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x140580B80 (HalpCmciDeferredRoutine.c)
 *     HalpInitializeCmc @ 0x140BEFDA8 (HalpInitializeCmc.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B2BBC (HalpIsMicrosoftCompatibleHvLoaded.c)
 */

void HalpCmcStartPolling()
{
  KIRQL v5; // bl

  if ( !HalpIsMicrosoftCompatibleHvLoaded() )
    goto LABEL_4;
  if ( HalpIsMicrosoftCompatibleHvLoaded() )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    if ( (__PAIR64__(_RBX, _RAX) & 0x100000000LL) != 0 )
    {
LABEL_4:
      v5 = KeAcquireSpinLockRaiseToDpc(&HalpCmcFallbackLock);
      if ( HalpCmcPollingInitialized )
      {
        if ( (HalpMcaPollForCmc
           || HalpCmciRevertToPolledMode
           || HalpCmcPollingStartDeferred != (_BYTE)HalpCmciRevertToPolledMode)
          && !HalpCmcPollingStarted )
        {
          KiSetTimerEx(
            (__int64)&qword_140E10898,
            -10000LL * (unsigned int)HalpCmcContext,
            HalpCmcContext,
            0,
            (__int64)&dword_140E108D8);
          HalpCmcPollingStarted = 1;
        }
      }
      else
      {
        HalpCmcPollingStartDeferred = 1;
      }
      KeReleaseSpinLock(&HalpCmcFallbackLock, v5);
    }
  }
}
