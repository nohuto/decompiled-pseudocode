/*
 * XREFs of ?CacheMonitorInfoCollectionAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1802323D0
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x180299B00 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 * Callees:
 *     MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_InitCoro$2 @ 0x18025A4E8 (MultitaskingViewGestureHandler--CacheMonitorInfoCollectionAsync$_InitCoro$2.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync(__int64 a1, __int64 a2)
{
  void *v4; // rax
  int v6; // [rsp+98h] [rbp+10h] BYREF

  v4 = operator new(0x60uLL);
  v6 = 0;
  MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync__InitCoro_2(&v6, v4, a2, a1);
  return a2;
}
