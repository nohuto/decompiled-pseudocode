/*
 * XREFs of EtwTraceDisplayChange @ 0x1400B7070
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x14007FE94 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B0834 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x1400B7BF4 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     McTemplateK0qqhhh_EtwWriteTransfer @ 0x1400B7C30 (McTemplateK0qqhhh_EtwWriteTransfer.c)
 *     ?DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z @ 0x1401B7728 (-DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z.c)
 */

void __fastcall EtwTraceDisplayChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 UserSessionState; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_14029EDB8 - 1) > 2u
    && (qword_14029EDA0 & 0x2000000000008000LL) != 0
    && (qword_14029EDA8 & 0x2000000000008000LL) == qword_14029EDA8 )
  {
    UserSessionState = W32GetUserSessionState(a1, 0x2000000000008000LL);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0qqhhh_EtwWriteTransfer(
        v5,
        *(_DWORD *)(UserSessionState + 2824),
        a3,
        *(_DWORD *)(UserSessionState + 2816),
        *(_DWORD *)(UserSessionState + 2824),
        *(_WORD *)(UserSessionState + 2884),
        *(_WORD *)(UserSessionState + 2888),
        *(_WORD *)(UserSessionState + 2892));
  }
  if ( (unsigned __int8)InputTraceLogging::Enabled(2LL, 0LL, a3, a4) )
  {
    v8 = W32GetUserSessionState(v7, v6);
    InputTraceLogging::Power::DisplayChange((const struct _POWER_DISPLAY_STATE *)(v8 + 2816));
  }
}
