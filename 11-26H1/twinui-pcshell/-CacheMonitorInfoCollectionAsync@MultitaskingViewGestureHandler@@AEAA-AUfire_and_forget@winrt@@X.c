/*
 * XREFs of ?CacheMonitorInfoCollectionAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1802537F8
 * Callers:
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x180290EB0 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 * Callees:
 *     MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x1802536A0 (MultitaskingViewGestureHandler--CacheMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BYTE *__fastcall MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync(
        void (__fastcall *a1)(__int64 a1),
        _BYTE *a2)
{
  void (__fastcall **v5)(__int64); // [rsp+40h] [rbp+8h]

  v5 = (void (__fastcall **)(__int64))operator new(0x60uLL);
  v5[11] = a1;
  *v5 = MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync__ResumeCoro_1;
  *((_DWORD *)v5 + 2) = 65538;
  *a2 = 0;
  *((_BYTE *)v5 + 80) = 0;
  MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync__ResumeCoro_1((__int64)v5);
  return a2;
}
