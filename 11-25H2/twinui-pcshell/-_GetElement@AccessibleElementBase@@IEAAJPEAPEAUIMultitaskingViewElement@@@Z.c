/*
 * XREFs of ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804C0120
 * Callers:
 *     ?ElementProviderFromPoint@AccessibleElementBase@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z @ 0x1804BED30 (-ElementProviderFromPoint@AccessibleElementBase@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z.c)
 *     ?GetFocus@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z @ 0x1804BEEA0 (-GetFocus@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z.c)
 *     ?GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1804BF190 (-GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1804BF570 (-GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 *     ?GetSelection@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1804BF630 (-GetSelection@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 *     ?Invoke@AccessibleElementBase@@UEAAJXZ @ 0x1804BF870 (-Invoke@AccessibleElementBase@@UEAAJXZ.c)
 *     ?Navigate@AccessibleElementBase@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x1804BF950 (-Navigate@AccessibleElementBase@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@.c)
 *     ?ScrollIntoView@AccessibleElementBase@@UEAAJXZ @ 0x1804BFD50 (-ScrollIntoView@AccessibleElementBase@@UEAAJXZ.c)
 *     ?Select@AccessibleElementBase@@UEAAJXZ @ 0x1804BFE00 (-Select@AccessibleElementBase@@UEAAJXZ.c)
 *     ?SetFocus@AccessibleElementBase@@UEAAJXZ @ 0x1804BFE80 (-SetFocus@AccessibleElementBase@@UEAAJXZ.c)
 *     ?ShowContextMenu@AccessibleElementBase@@UEAAJXZ @ 0x1804BFFC0 (-ShowContextMenu@AccessibleElementBase@@UEAAJXZ.c)
 *     ?_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z @ 0x1804C0238 (-_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z.c)
 *     ?_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z @ 0x1804C0368 (-_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z.c)
 *     ?get_BoundingRectangle@AccessibleElementBase@@UEAAJPEAUUiaRect@@@Z @ 0x1804C0560 (-get_BoundingRectangle@AccessibleElementBase@@UEAAJPEAUUiaRect@@@Z.c)
 *     ?get_FragmentRoot@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z @ 0x1804C0790 (-get_FragmentRoot@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z.c)
 *     ?get_HostRawElementProvider@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804C0AE0 (-get_HostRawElementProvider@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z.c)
 *     ?get_IsSelected@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1804C0B90 (-get_IsSelected@AccessibleElementBase@@UEAAJPEAH@Z.c)
 *     ?get_SelectionContainer@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804C0CA0 (-get_SelectionContainer@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AccessibleElementBase::_GetElement(
        AccessibleElementBase *this,
        struct IMultitaskingViewElement **a2)
{
  return AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, (void **)a2);
}
