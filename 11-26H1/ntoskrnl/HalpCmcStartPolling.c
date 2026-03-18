/*
 * XREFs of HalpCmcStartPolling @ 0x14057AB8C
 * Callers:
 *     HalpCmciDeferredRoutine @ 0x14057E660 (HalpCmciDeferredRoutine.c)
 *     HalpInitializeCmc @ 0x140BE9DA8 (HalpInitializeCmc.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404B938C (HalpIsMicrosoftCompatibleHvLoaded.c)
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
            (__int64)&qword_140E10768,
            -10000LL * (unsigned int)HalpCmcContext,
            HalpCmcContext,
            0,
            (__int64)&dword_140E107A8);
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
