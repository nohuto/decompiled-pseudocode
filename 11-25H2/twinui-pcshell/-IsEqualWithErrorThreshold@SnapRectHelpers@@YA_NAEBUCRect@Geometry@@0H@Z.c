/*
 * XREFs of ?IsEqualWithErrorThreshold@SnapRectHelpers@@YA_NAEBUCRect@Geometry@@0H@Z @ 0x18058D46C
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800560EC (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_8aafd0e0e31e0023c064f20d88d85697___ @ 0x18028D958 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windows--Internal-.c)
 *     ?DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z @ 0x180587870 (-DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___ @ 0x1805999AC (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windo_ea_1805999AC.c)
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
