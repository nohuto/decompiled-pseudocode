/*
 * XREFs of GetWindowNCMetrics @ 0x140042BB0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     GetResizeBorderWidthForDpi @ 0x140042EEC (GetResizeBorderWidthForDpi.c)
 *     GetDPIServerInfo @ 0x140042F14 (GetDPIServerInfo.c)
 *     GetWindowFrameMetricForDpi @ 0x140042FB0 (GetWindowFrameMetricForDpi.c)
 *     GetDpiForSystem @ 0x1400433C4 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x14004B938 (GetDpiDependentMetric.c)
 *     GreExtGetObjectW @ 0x14007D99C (GreExtGetObjectW.c)
 */

INT __fastcall GetWindowNCMetrics(__int64 a1)
{
  __int64 DpiForSystem; // rbp
  __int64 v3; // rcx
  __int64 DPIServerInfo; // rbx
  HSURF *DPIMetrics; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  INT result; // eax
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax

  DpiForSystem = (unsigned int)GetDpiForSystem();
  *(_DWORD *)(a1 + 20) = GetDpiDependentMetric(13LL, DpiForSystem);
  *(_DWORD *)(a1 + 220) = GetDpiDependentMetric(26LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 4) = GetResizeBorderWidthForDpi(DpiForSystem);
  *(_DWORD *)(a1 + 8) = GetDpiDependentMetric(0LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 12) = GetDpiDependentMetric(10LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 16) = GetDpiDependentMetric(12LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 116) = GetDpiDependentMetric(23LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 120) = GetDpiDependentMetric(24LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 216) = GetDpiDependentMetric(25LL, (unsigned int)DpiForSystem);
  *(_DWORD *)(a1 + 500) = GetWindowFrameMetricForDpi(v3, (unsigned int)DpiForSystem);
  DPIServerInfo = GetDPIServerInfo();
  DPIMetrics = (HSURF *)GetDPIMetrics();
  GreExtGetObjectW(*(HSURF *)(DPIServerInfo + 8));
  GreExtGetObjectW(DPIMetrics[4]);
  GreExtGetObjectW(*DPIMetrics);
  GreExtGetObjectW(DPIMetrics[7]);
  v8 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872);
  *(_OWORD *)(a1 + 408) = *(_OWORD *)(v8 + 5004);
  *(_OWORD *)(a1 + 424) = *(_OWORD *)(v8 + 5020);
  *(_OWORD *)(a1 + 440) = *(_OWORD *)(v8 + 5036);
  *(_OWORD *)(a1 + 456) = *(_OWORD *)(v8 + 5052);
  *(_OWORD *)(a1 + 472) = *(_OWORD *)(v8 + 5068);
  *(_QWORD *)(a1 + 488) = *(_QWORD *)(v8 + 5084);
  *(_DWORD *)(a1 + 496) = *(_DWORD *)(v8 + 5092);
  v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19872);
  result = *(unsigned __int16 *)(v12 + 6998);
  if ( (_DWORD)DpiForSystem != result )
  {
    UserSessionState = W32GetUserSessionState(v12, v11);
    *(_DWORD *)(a1 + 412) = EngMulDiv(
                              *(_DWORD *)(a1 + 412),
                              DpiForSystem,
                              *(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 6998LL));
    v17 = W32GetUserSessionState(v16, v15);
    result = EngMulDiv(*(_DWORD *)(a1 + 408), DpiForSystem, *(unsigned __int16 *)(*(_QWORD *)(v17 + 19872) + 6998LL));
    *(_DWORD *)(a1 + 408) = result;
  }
  return result;
}
