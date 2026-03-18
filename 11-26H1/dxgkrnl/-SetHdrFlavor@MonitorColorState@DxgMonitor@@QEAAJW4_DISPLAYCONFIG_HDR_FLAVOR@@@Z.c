/*
 * XREFs of ?SetHdrFlavor@MonitorColorState@DxgMonitor@@QEAAJW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14027D590
 * Callers:
 *     ?MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14026FC0C (-MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140362598 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetHdrFlavor(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx

  v2 = (int)a2;
  if ( *((_DWORD *)a1 + 116) == (_DWORD)a2 )
    return 255LL;
  if ( (((_DWORD)a2 - 1) & (unsigned int)a2) != 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1987;
    return 3221225485LL;
  }
  if ( (_DWORD)a2 && ((unsigned int)a2 & *((_DWORD *)a1 + 115)) == 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1998;
    return 3221225485LL;
  }
  v5 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = v2;
  v6 = *a1;
  *((_DWORD *)a1 + 116) = v2;
  WdLogGlobalForLineNumber = 1994;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 72LL))(v6) )
    (*(void (__fastcall **)(__int64, __int64, const wchar_t *, _QWORD))(*(_QWORD *)a1[1] + 136LL))(
      a1[1],
      4LL,
      L"HdrFlavor",
      (unsigned int)v2);
  DxgMonitor::MonitorColorState::_ReevaluateColorAndLuminanceSources((DxgMonitor::MonitorColorState *)a1);
  return 0LL;
}
