/*
 * XREFs of InvokeMouseCursorPositionCallout @ 0x140064640
 * Callers:
 *     <none>
 * Callees:
 *     IsKSTThread @ 0x1400659B0 (IsKSTThread.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x140065A50 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall InvokeMouseCursorPositionCallout(int a1, __int64 a2, __int64 a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 UserSessionState; // rax
  _BYTE v10[8]; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v11[20]; // [rsp+30h] [rbp-C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)v10,
    "MouseCursorPosCallout",
    0LL);
  if ( !(unsigned __int8)IsInputThread() && !(unsigned __int8)IsKSTThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2490LL);
  memset(v11, 0, sizeof(v11));
  v11[0] = 0x300000000LL;
  v11[3] = a3;
  LODWORD(v11[2]) = a1;
  v11[1] = a2;
  UserSessionState = W32GetUserSessionState(v7, v6, v8);
  InputExtensibilityCallout::CallUserModeLockFree(
    *(InputExtensibilityCallout **)(UserSessionState + 16400),
    (struct _CLIENT_DEVICE_NOTIFICATION *)v11);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v10);
}
