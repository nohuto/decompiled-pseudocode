/*
 * XREFs of DbgkWerCaptureLiveKernelDump @ 0x140B43CF0
 * Callers:
 *     PopUserPresentSet @ 0x1404273D4 (PopUserPresentSet.c)
 *     ExHandleLogBadReference @ 0x140466170 (ExHandleLogBadReference.c)
 *     PopIdlePhaseWatchdogCallback @ 0x1404E8B40 (PopIdlePhaseWatchdogCallback.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x1406079E8 (PopFxEnforceDirectedPowerTransition.c)
 *     PopPowerButtonWorkCallback @ 0x14060FE80 (PopPowerButtonWorkCallback.c)
 *     PopBSDiagCaptureLiveDump @ 0x140610C1C (PopBSDiagCaptureLiveDump.c)
 *     PopDripsWatchdogTakeAction @ 0x14061674C (PopDripsWatchdogTakeAction.c)
 *     CarLiveDump @ 0x140650740 (CarLiveDump.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x1406D80B0 (ExpResourceTimeoutCaptureLiveDump.c)
 *     UcpLogEventGenerateDump @ 0x140717A38 (UcpLogEventGenerateDump.c)
 *     PopWin32CalloutWatchdogCallback @ 0x1407E26A0 (PopWin32CalloutWatchdogCallback.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1407E2930 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1407E8D4C (PopDeepSleepWatchdogTakeAction.c)
 *     TtmpCalloutWatchdogCallback @ 0x1407EB3F0 (TtmpCalloutWatchdogCallback.c)
 *     PsForceCrashForInvalidAccess @ 0x140802B70 (PsForceCrashForInvalidAccess.c)
 *     ExpIoPoolDeadlockWorker @ 0x140845B30 (ExpIoPoolDeadlockWorker.c)
 *     VfPtGenerateTraceInformation @ 0x140C2FC6C (VfPtGenerateTraceInformation.c)
 * Callees:
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140B43D70 (DbgkWerCaptureLiveKernelDump2.c)
 */

__int64 __fastcall DbgkWerCaptureLiveKernelDump(
        const wchar_t *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  _DWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+5Ch] [rbp-1Ch]
  int v15; // [rsp+64h] [rbp-14h]

  v14 = 0LL;
  v15 = 0;
  v10[0] = 1;
  v10[1] = 40;
  v11 = a8;
  v12 = a7;
  v13 = a9;
  return DbgkWerCaptureLiveKernelDump2(a1, a5, a6, (__int64)v10);
}
