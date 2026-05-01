/*
 * XREFs of ?IsEqualWithErrorThreshold@SnapRectHelpers@@YA_NAEBUCRect@Geometry@@0H@Z @ 0x1805B1694
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18006E57C (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 *     ?DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z @ 0x1805AB8D4 (-DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___ @ 0x1805BDCD4 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windows--Internal-.c)
 *     ?ItemSnapped@SnapAssistState@@QEAA?AU?$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@Multitasking@ComposableShell@Internal@Windows@winrt@@@std@@PEAUHWND__@@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBURect@Foundation@9winrt@@@Z @ 0x1806C025C (-ItemSnapped@SnapAssistState@@QEAA-AU-$pair@W4SnapAssistStateTransition@@UISwitchItemDataSource@.c)
 * Callees:
 *     <none>
 */

bool __fastcall SnapRectHelpers::IsEqualWithErrorThreshold(
        SnapRectHelpers *this,
        const struct Geometry::CRect *a2,
        const struct Geometry::CRect *a3)
{
  unsigned int v3; // r9d

  v3 = 2 * (_DWORD)a3;
  return (int)a3 + *(_DWORD *)this - *(_DWORD *)a2 <= (unsigned int)(2 * (_DWORD)a3)
      && (int)a3 + *((_DWORD *)this + 1) - *((_DWORD *)a2 + 1) <= v3
      && (int)a3 + *((_DWORD *)this + 2) - *((_DWORD *)a2 + 2) <= v3
      && (int)a3 + *((_DWORD *)this + 3) - *((_DWORD *)a2 + 3) <= v3;
}
