/*
 * XREFs of RIMMarkSiblingMouseDevice @ 0x1402049FC
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1401AE388 (-RimDeviceExtendedProps@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     RIMCAUsageToLegacyFlag @ 0x1401BE0C0 (RIMCAUsageToLegacyFlag.c)
 */

void __fastcall RIMMarkSiblingMouseDevice(struct RIMDEV *a1, __int16 a2, int a3)
{
  bool v5; // di
  bool v6; // si
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx

  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      82,
      (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
      (char)a1);
  }
  *((_WORD *)a1 + 432) = (*((_WORD *)a1 + 432) | RIMCAUsageToLegacyFlag(a2)) & 0xFFFE;
  if ( a2 == 5 )
    *((_DWORD *)a1 + 42) |= 0x18000000u;
  InputTraceLogging::RIM::RimDeviceExtendedProps(a1);
}
