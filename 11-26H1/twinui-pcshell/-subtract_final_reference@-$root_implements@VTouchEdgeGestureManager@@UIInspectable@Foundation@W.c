/*
 * XREFs of ?subtract_final_reference@?$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@IEAAIXZ @ 0x1801BC754
 * Callers:
 *     ?Release@?$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@winrt@@UEAAKXZ @ 0x1801BC700 (-Release@-$implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchE.c)
 *     ??1?$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEdgeGesture@@UIGameFocusEvents@@@impl@winrt@@MEAA@XZ @ 0x1802C3BF8 (--1-$root_implements@VTouchEdgeGestureManager@@UIInspectable@Foundation@Windows@winrt@@UITouchEd.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800E712C (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

__int64 __fastcall winrt::impl::root_implements<TouchEdgeGestureManager,winrt::Windows::Foundation::IInspectable,ITouchEdgeGesture,IGameFocusEvents>::subtract_final_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  volatile signed __int64 *v2; // rcx
  unsigned int v4; // edx
  signed __int64 v5; // rtt

  v1 = std::_Atomic_storage<unsigned __int64,8>::load(a1 + 8);
  do
  {
    if ( v1 < 0 )
      return winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * v1));
    v4 = v1 - 1;
    v5 = v1;
    v1 = _InterlockedCompareExchange64(v2, v1 - 1, v1);
  }
  while ( v5 != v1 );
  return v4;
}
