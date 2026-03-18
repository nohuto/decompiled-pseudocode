/*
 * XREFs of EtwTraceDisplayChange @ 0x1400EABC0
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1400EA20C (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401D5B48 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     McTemplateK0qqhhh_EtwWriteTransfer @ 0x1400EB42C (McTemplateK0qqhhh_EtwWriteTransfer.c)
 *     ?DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z @ 0x1401DA944 (-DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z.c)
 */

void __fastcall EtwTraceDisplayChange(int a1, __int64 a2, int a3)
{
  int v3; // edx
  __int64 UserSessionState; // rax
  __int64 v5; // rax

  v3 = 0x8000;
  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x2000000000008000LL) != 0
    && (qword_1402A9DC8 & 0x2000000000008000LL) == qword_1402A9DC8 )
  {
    UserSessionState = W32GetUserSessionState(a1, 0x8000, a3);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0qqhhh_EtwWriteTransfer(
        *(_DWORD *)(UserSessionState + 2824),
        v3,
        a3,
        *(_DWORD *)(UserSessionState + 2816),
        *(_DWORD *)(UserSessionState + 2824),
        *(_WORD *)(UserSessionState + 2884),
        *(_WORD *)(UserSessionState + 2888),
        *(_WORD *)(UserSessionState + 2892));
  }
  if ( dword_1402A9E40 && (qword_1402A9E50 & 2) != 0 && (qword_1402A9E58 & 2) == qword_1402A9E58 )
  {
    v5 = W32GetUserSessionState(a1, v3, a3);
    InputTraceLogging::Power::DisplayChange((const struct _POWER_DISPLAY_STATE *)(v5 + 2816));
  }
}
