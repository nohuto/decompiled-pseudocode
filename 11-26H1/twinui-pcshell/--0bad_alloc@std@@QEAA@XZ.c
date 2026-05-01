/*
 * XREFs of ??0bad_alloc@std@@QEAA@XZ @ 0x1802C6358
 * Callers:
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x1802C9C3C (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802D9518 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$get_weak@UTabTipAdapter@KeyboardHosting@@@?$root_implements@UTabTipAdapter@KeyboardHosting@@UIMessageProxyReconnectAdapterOwner@@UIRemoteTabTipAdapter@@@impl@winrt@@IEAA?AU?$weak_ref@UTabTipAdapter@KeyboardHosting@@@2@XZ @ 0x180477A74 (--$get_weak@UTabTipAdapter@KeyboardHosting@@@-$root_implements@UTabTipAdapter@KeyboardHosting@@U.c)
 *     ??$?0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@URect@Foundation@Windows@winrt@@@std@@@std@@@std@@X@?$com_array@URect@Foundation@Windows@winrt@@@winrt@@QEAA@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@URect@Foundation@Windows@winrt@@@std@@@std@@@std@@0@Z @ 0x18058E574 (--$-0V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@URect@Foundation@Windows@winrt@@@.c)
 *     ??$get_weak@USharedDesktopBackgroundVisualHost@@@?$root_implements@USharedDesktopBackgroundVisualHost@@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@UISharedDesktopBackgroundVisualWindowProvider@34567@@impl@winrt@@IEAA?AU?$weak_ref@USharedDesktopBackgroundVisualHost@@@2@XZ @ 0x1805E1D28 (--$get_weak@USharedDesktopBackgroundVisualHost@@@-$root_implements@USharedDesktopBackgroundVisua.c)
 * Callees:
 *     <none>
 */

std::bad_alloc *__fastcall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = "bad allocation";
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
