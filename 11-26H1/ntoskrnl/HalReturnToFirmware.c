/*
 * XREFs of HalReturnToFirmware @ 0x140581B60
 * Callers:
 *     HalpLegacyShutdown @ 0x140581D10 (HalpLegacyShutdown.c)
 *     HalpShutdownReset @ 0x1405821D0 (HalpShutdownReset.c)
 *     HaliAcpiSleep @ 0x1405A4F20 (HaliAcpiSleep.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x1405FCA00 (KiDeferredBugcheckRecoveryWorker.c)
 *     ExRebootSystemForRecovery @ 0x1406CF57C (ExRebootSystemForRecovery.c)
 *     PopSaveHiberContext @ 0x140C01D50 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140C04024 (PopShutdownSystem.c)
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 *     HdlspBugCheckProcessing @ 0x140C521F8 (HdlspBugCheckProcessing.c)
 * Callees:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     KdPowerTransitionEx @ 0x140503C90 (KdPowerTransitionEx.c)
 *     HalpReboot @ 0x140581E74 (HalpReboot.c)
 *     HalpShutdown @ 0x140581FB0 (HalpShutdown.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
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
