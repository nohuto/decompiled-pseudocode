/*
 * XREFs of ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804D2038
 * Callers:
 *     ?ElementProviderFromPoint@AccessibleElementBase@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z @ 0x1804D0C90 (-ElementProviderFromPoint@AccessibleElementBase@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z.c)
 *     ?GetFocus@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z @ 0x1804D0E00 (-GetFocus@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragment@@@Z.c)
 *     ?GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1804D10E0 (-GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1804D14C0 (-GetRuntimeId@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 *     ?GetSelection@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x1804D1580 (-GetSelection@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z.c)
 *     ?Invoke@AccessibleElementBase@@UEAAJXZ @ 0x1804D17C0 (-Invoke@AccessibleElementBase@@UEAAJXZ.c)
 *     ?Navigate@AccessibleElementBase@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@Z @ 0x1804D18A0 (-Navigate@AccessibleElementBase@@UEAAJW4NavigateDirection@@PEAPEAUIRawElementProviderFragment@@@.c)
 *     ?ScrollIntoView@AccessibleElementBase@@UEAAJXZ @ 0x1804D1CD0 (-ScrollIntoView@AccessibleElementBase@@UEAAJXZ.c)
 *     ?Select@AccessibleElementBase@@UEAAJXZ @ 0x1804D1D80 (-Select@AccessibleElementBase@@UEAAJXZ.c)
 *     ?SetFocus@AccessibleElementBase@@UEAAJXZ @ 0x1804D1E00 (-SetFocus@AccessibleElementBase@@UEAAJXZ.c)
 *     ?ShowContextMenu@AccessibleElementBase@@UEAAJXZ @ 0x1804D1F50 (-ShowContextMenu@AccessibleElementBase@@UEAAJXZ.c)
 *     ?_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z @ 0x1804D2164 (-_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z.c)
 *     ?_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z @ 0x1804D22A0 (-_GetParentScrollViewer@AccessibleElementBase@@IEAAJPEAPEAUIScrollViewer@@@Z.c)
 *     ?get_BoundingRectangle@AccessibleElementBase@@UEAAJPEAUUiaRect@@@Z @ 0x1804D24B0 (-get_BoundingRectangle@AccessibleElementBase@@UEAAJPEAUUiaRect@@@Z.c)
 *     ?get_FragmentRoot@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z @ 0x1804D26F0 (-get_FragmentRoot@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z.c)
 *     ?get_HostRawElementProvider@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804D2A60 (-get_HostRawElementProvider@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z.c)
 *     ?get_IsSelected@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1804D2B10 (-get_IsSelected@AccessibleElementBase@@UEAAJPEAH@Z.c)
 *     ?get_SelectionContainer@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804D2C20 (-get_SelectionContainer@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AccessibleElementBase::_GetElement(
        AccessibleElementBase *this,
        struct IMultitaskingViewElement **a2)
{
  return AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, (void **)a2);
}
