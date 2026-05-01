/*
 * XREFs of ?DoSnapRegionsOverlap@SnapLayoutHelpers@@YA_NW4RegionOverlapMode@1@AEBUCRect@Geometry@@1H@Z @ 0x180587870
 * Callers:
 *     ?AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z @ 0x1800DA680 (-AdvanceGuidedSnapAssist@CSnapAssistControllerBase@@UEAAJ_K@Z.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_______lambda_36235454365469fccadfc3a0ea7b3429___ @ 0x1805823A4 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Geometry--CRect_______l.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_______lambda_6cce0248af815829567eceed5222eb6d___ @ 0x180582454 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Geometry--_ea_180582454.c)
 *     _lambda_a1608a121236b09cf8aed0d49703ab26_::operator() @ 0x180582ED4 (_lambda_a1608a121236b09cf8aed0d49703ab26_--operator().c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall SnapLayoutHelpers::DoSnapRegionsOverlap(
        int a1,
        SnapRectHelpers *a2,
        const struct Geometry::CRect *a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
    return SnapRectHelpers::IsEqualWithErrorThreshold(a2, a3, (const struct Geometry::CRect *)(unsigned int)a4, (int)a4);
  if ( a1 != 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA02,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      a4);
  return SnapRectHelpers::IntersectsWithErrorThreshold(
           (RECT *)a2,
           (RECT *)a3,
           (const struct Geometry::CRect *)(unsigned int)a4);
}
