/*
 * XREFs of HalReturnToFirmware @ 0x14057F640
 * Callers:
 *     HalpLegacyShutdown @ 0x14057F7F0 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x14057FCB0 (HalpShutdownReset.c)
 *     HaliAcpiSleep @ 0x1405A2710 (HaliAcpiSleep.c)
 *     KeBugCheck2 @ 0x1405E5F10 (KeBugCheck2.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405F9FE0 (KiDeferredBugcheckRecoveryWorker.c)
 *     ExRebootSystemForRecovery @ 0x1406CB54C (ExRebootSystemForRecovery.c)
 *     PopSaveHiberContext @ 0x140BFBD50 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140BFDFD4 (PopShutdownSystem.c)
 *     KdpSendWaitContinue @ 0x140C17038 (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x140C4C1F8 (HdlspBugCheckProcessing.c)
 * Callees:
 *     DbgPrint @ 0x140396F60 (DbgPrint.c)
 *     KdPowerTransitionEx @ 0x14050A220 (KdPowerTransitionEx.c)
 *     HalpReboot @ 0x14057F954 (HalpReboot.c)
 *     HalpShutdown @ 0x14057FA90 (HalpShutdown.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall __noreturn HalReturnToFirmware(int a1)
{
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( (unsigned int)(v1 - 1) >= 2 )
      {
        DbgPrint("HalReturnToFirmware called\n");
        __debugbreak();
      }
    }
    else
    {
      KdPowerTransitionEx(4, 0);
      HalpShutdown();
    }
  }
  KdPowerTransitionEx(4, 0);
  if ( HalpRebootHandler )
    guard_dispatch_icall_no_overrides(v3, v2);
  HalpReboot();
}
