/*
 * XREFs of ??_E?$heap_implements@VTouchGestureSettings@@@impl@winrt@@UEAAPEAXI@Z @ 0x18058B6F8
 * Callers:
 *     ??_ETouchGestureSettings@@W7EAAPEAXI@Z @ 0x18058B670 (--_ETouchGestureSettings@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??1TouchGestureSettings@@UEAA@XZ @ 0x1802C8720 (--1TouchGestureSettings@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TouchGestureSettings *__fastcall winrt::impl::heap_implements<TouchGestureSettings>::`vector deleting destructor'(
        TouchGestureSettings *a1,
        struct wil::details::wnf_subscription_state_base *a2)
{
  char v2; // bl

  v2 = (char)a2;
  TouchGestureSettings::~TouchGestureSettings(a1, a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x78);
  return a1;
}
