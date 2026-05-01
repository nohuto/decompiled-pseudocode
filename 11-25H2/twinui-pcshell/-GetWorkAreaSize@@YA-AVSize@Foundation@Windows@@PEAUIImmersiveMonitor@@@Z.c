/*
 * XREFs of ?GetWorkAreaSize@@YA?AVSize@Foundation@Windows@@PEAUIImmersiveMonitor@@@Z @ 0x1801099DC
 * Callers:
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1801055B0 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180108F20 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18067BA60 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float *__fastcall GetWorkAreaSize(float *a1, __int64 *a2)
{
  __int64 v2; // rax
  int v4; // eax
  float v5; // xmm1_4
  float v6; // xmm0_4
  float *result; // rax
  int v8[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *a2;
  *(_OWORD *)v8 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, int *))(v2 + 88))(a2, v8);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3F,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\utils.h",
      (const char *)(unsigned int)v4,
      v8[0]);
  v5 = (float)(v8[2] - v8[0]);
  v6 = (float)(v8[3] - v8[1]);
  if ( v5 < 0.0 || v6 < 0.0 )
  {
    __abi_WinRTraiseInvalidArgumentException();
    __debugbreak();
    JUMPOUT(0x180109A89LL);
  }
  *a1 = v5;
  result = a1;
  a1[1] = v6;
  return result;
}
