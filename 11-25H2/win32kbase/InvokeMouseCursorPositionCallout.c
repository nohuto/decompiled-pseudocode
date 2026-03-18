/*
 * XREFs of InvokeMouseCursorPositionCallout @ 0x14018CA50
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1400BD1F0 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     IsKSTThread @ 0x1400BD2E0 (IsKSTThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall InvokeMouseCursorPositionCallout(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  __int64 *v13; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v14[20]; // [rsp+30h] [rbp-C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v13, "MouseCursorPosCallout", 0LL);
  if ( !IsInputThread(v7, v6) && !IsKSTThread(v9, v8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2446LL);
  memset(v14, 0, sizeof(v14));
  v14[0] = 0x300000000LL;
  v14[3] = a3;
  LODWORD(v14[2]) = a1;
  v14[1] = a2;
  UserSessionState = W32GetUserSessionState(v11, v10);
  InputExtensibilityCallout::CallUserModeLockFree(
    *(InputExtensibilityCallout **)(UserSessionState + 16408),
    (struct _CLIENT_DEVICE_NOTIFICATION *)v14);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v13);
}
