/*
 * XREFs of TtmpCalloutWatchdogCallback @ 0x1407EB3F0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     TtmiLogCalloutWatchdogCrashSkipped @ 0x1407EE3C0 (TtmiLogCalloutWatchdogCrashSkipped.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B43CF0 (DbgkWerCaptureLiveKernelDump.c)
 */

__int64 __fastcall TtmpCalloutWatchdogCallback(
        __int64 a1,
        ULONG a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  int v9; // ecx
  int v11; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h] BYREF

  v11 = 0;
  v12 = 37LL;
  if ( NtPowerInformation(PowerInformationInternal, &v12, 8u, &v11, 4u) < 0 )
  {
    v9 = -1;
  }
  else
  {
    v9 = v11;
    if ( TtmpDeviceCalloutCrashDumpEnabled && !v11 )
      KeBugCheckEx(a2, a3, a4, BugCheckParameter3, BugCheckParameter4);
  }
  TtmiLogCalloutWatchdogCrashSkipped(v9, a2, a3, a4, BugCheckParameter3, BugCheckParameter4);
  DbgkWerCaptureLiveKernelDump(
    (unsigned int)L"TTMDCallout",
    a2,
    a3,
    a4,
    BugCheckParameter3,
    BugCheckParameter4,
    0LL,
    (__int64)xHalGetInterruptTranslator,
    0);
  return 0LL;
}
