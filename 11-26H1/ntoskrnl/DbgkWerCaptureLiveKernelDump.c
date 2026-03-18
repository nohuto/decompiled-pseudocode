/*
 * XREFs of DbgkWerCaptureLiveKernelDump @ 0x140B41E00
 * Callers:
 *     PopUserPresentSet @ 0x1404384B4 (PopUserPresentSet.c)
 *     ExHandleLogBadReference @ 0x14046C9F0 (ExHandleLogBadReference.c)
 *     PopIdlePhaseWatchdogCallback @ 0x1404EF560 (PopIdlePhaseWatchdogCallback.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x140604EE8 (PopFxEnforceDirectedPowerTransition.c)
 *     PopPowerButtonWorkCallback @ 0x14060CD70 (PopPowerButtonWorkCallback.c)
 *     PopBSDiagCaptureLiveDump @ 0x14060DB1C (PopBSDiagCaptureLiveDump.c)
 *     PopDripsWatchdogTakeAction @ 0x14061388C (PopDripsWatchdogTakeAction.c)
 *     CarLiveDump @ 0x14064CB60 (CarLiveDump.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x1406D4030 (ExpResourceTimeoutCaptureLiveDump.c)
 *     UcpLogEventGenerateDump @ 0x140712D40 (UcpLogEventGenerateDump.c)
 *     PopWin32CalloutWatchdogCallback @ 0x1407DE020 (PopWin32CalloutWatchdogCallback.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1407DE2B0 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1407E3A00 (PopDeepSleepWatchdogTakeAction.c)
 *     TtmpCalloutWatchdogCallback @ 0x1407E5890 (TtmpCalloutWatchdogCallback.c)
 *     PsForceCrashForInvalidAccess @ 0x1407FD140 (PsForceCrashForInvalidAccess.c)
 *     ExpIoPoolDeadlockWorker @ 0x14083F8F0 (ExpIoPoolDeadlockWorker.c)
 *     VfPtGenerateTraceInformation @ 0x140C29C5C (VfPtGenerateTraceInformation.c)
 * Callees:
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140B41E80 (DbgkWerCaptureLiveKernelDump2.c)
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
