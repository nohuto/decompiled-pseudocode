/*
 * XREFs of ??1?$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@MEAA@XZ @ 0x1802C3BF8
 * Callers:
 *     ??1TouchEdgeGestureManager@@UEAA@XZ @ 0x1800B75AC (--1TouchEdgeGestureManager@@UEAA@XZ.c)
 *     ??1?$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@winrt@@UEAA@XZ @ 0x1802C3BE8 (--1-$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGes.c)
 * Callees:
 *     ?subtract_final_reference@?$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@IEAAIXZ @ 0x1801BC754 (-subtract_final_reference@-$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@W.c)
 */

__int64 __fastcall winrt::impl::root_implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::~root_implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>(
        __int64 a1)
{
  winrt::impl::root_implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::subtract_final_reference(a1);
  return winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
}
