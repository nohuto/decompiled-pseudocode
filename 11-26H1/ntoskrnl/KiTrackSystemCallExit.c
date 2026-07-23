/*
 * XREFs of KiTrackSystemCallExit @ 0x1407BEA50
 * Callers:
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 * Callees:
 *     PerfInfoLogSysCallExit @ 0x1404C3600 (PerfInfoLogSysCallExit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiTrackSystemCallExit(__int64 a1, __int64 a2)
{
  if ( a1 && *(_BYTE *)(a1 + 41) )
  {
    _InterlockedAdd(&KiSystemServiceTraceCallbacksActive, 1u);
    if ( *(_BYTE *)(a1 + 41) )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 56));
    _InterlockedDecrement(&KiSystemServiceTraceCallbacksActive);
  }
  if ( (BYTE8(PerfGlobalGroupMask) & 0x40) != 0 )
    PerfInfoLogSysCallExit(a2);
  return a2;
}
