/*
 * XREFs of ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804B8C08
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x1804B9AA0 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAPEAX@Z @ 0x1804BBFF0 (-_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAP.c)
 *     ?IsEmpty@CScrollViewerHost@@UEAA_NXZ @ 0x1804C88E0 (-IsEmpty@CScrollViewerHost@@UEAA_NXZ.c)
 *     ?SetFocused@CScrollViewerHost@@UEAAX_N@Z @ 0x1804C8D60 (-SetFocused@CScrollViewerHost@@UEAAX_N@Z.c)
 *     ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804C8F88 (-_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x1804C91D4 (-_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804D2620 (-get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z.c)
 *     ?SetFocused@CScrollViewer@@UEAAX_N@Z @ 0x1804D9360 (-SetFocused@CScrollViewer@@UEAAX_N@Z.c)
 *     ?v_LayoutChildren@CScrollViewer@@MEAAXXZ @ 0x1804D9C90 (-v_LayoutChildren@CScrollViewer@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v4(v3, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, a2);
}
