/*
 * XREFs of ?_Tidy@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x1802C4BE8
 * Callers:
 *     ??1SnapAssistState@@QEAA@XZ @ 0x18010A954 (--1SnapAssistState@@QEAA@XZ.c)
 *     ??1XamlSnapAssistViewHost@@UEAA@XZ @ 0x180197CA4 (--1XamlSnapAssistViewHost@@UEAA@XZ.c)
 *     ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x1802BCABC (-Initialize@GuidedSnapAssistData@@AEAAXAEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V.c)
 *     ?_Destroy@?$_Ref_count_obj2@VGuidedSnapAssistData@@@std@@EEAAXXZ @ 0x1802C3230 (-_Destroy@-$_Ref_count_obj2@VGuidedSnapAssistData@@@std@@EEAAXXZ.c)
 *     ??1?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1802D1A10 (--1-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USnapAss.c)
 *     ??4?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180599A54 (--4-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USnapAss.c)
 *     ??1?$_Tidy_guard@V?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAA@XZ @ 0x1806985E8 (--1-$_Tidy_guard@V-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$all.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFE0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
