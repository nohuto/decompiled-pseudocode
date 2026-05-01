/*
 * XREFs of ??1?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1801579D8
 * Callers:
 *     ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x1801571EC (-ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pa.c)
 *     ?LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x1801574A8 (-LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pair@PEBGP.c)
 *     ??1?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@XZ @ 0x1801579CC (--1-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@XZ.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18028F404 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18028F578 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@@std@@QEAA@XZ @ 0x180319858 (--1-$_Tidy_guard@V-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@@st.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803F13AC (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1803F14D8 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     _KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow_::_1_::dtor$1 @ 0x1806CD4D0 (_KeyboardHosting--TabTipAdapter--InvokeInputAppRequestedShow_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow_::_1_::dtor$1 @ 0x1806CD589 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--UpdateTabsForWindow_--_1_--dtor.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateTabsForWindow_::_1_::dtor$2 @ 0x1806CD59B (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--UpdateTabsForWindo_ea_1806CD59B.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel_::_1_::dtor$2 @ 0x1806CD68C (_winrt--Windows--Internal--Shell--implementation--WindowData--SyncWindowTabDataMode_ea_1806CD68C.c)
 *     _TouchGestureComponent::UpdateSuppressionRegions_::_1_::dtor$0 @ 0x1806D1DD8 (_TouchGestureComponent--UpdateSuppressionRegions_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::OnTabsChanged_::_1_::dtor$2 @ 0x1806D1DEA (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--OnTabsChanged_--_1_--dtor$2.c)
 *     _TouchGestureComponent::GetSuppressedDisplayRects_::_1_::dtor$0 @ 0x1806F73EB (_TouchGestureComponent--GetSuppressedDisplayRects_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<winrt::Windows::Foundation::Rect>::~vector<winrt::Windows::Foundation::Rect>(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = std::_Deallocate<16>(v2, (a1[2] - v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
