/*
 * XREFs of rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x14017F5C8
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1400310C8 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dDdd @ 0x14010F040 (WPP_RECORDER_AND_TRACE_SF_dDdd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1401DCBA4 (rimAbIsPointInGlobalPenDeadzone.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int IsPointInGlobalPenDeadzone; // r15d
  __int64 v7; // rcx
  char v8; // r14
  char v9; // r12
  __int64 UserSessionState; // rax
  __int64 v12; // [rsp+20h] [rbp-68h]

  IsPointInGlobalPenDeadzone = 0;
  if ( !*(_DWORD *)(W32GetUserSessionState(a1, a2) + 244) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 167LL);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 3 )
  {
    IsPointInGlobalPenDeadzone = rimAbIsPointInGlobalPenDeadzone(a1, a2 + 156, a3);
    if ( IsPointInGlobalPenDeadzone )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v7 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v7 & 1) == 0)
        || (v8 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v8 = 0;
      }
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(v7, WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_dDdd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v8,
          v9,
          *(_QWORD *)(UserSessionState + 19336),
          v12,
          1u,
          0xCu,
          (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
      }
    }
  }
  return IsPointInGlobalPenDeadzone;
}
