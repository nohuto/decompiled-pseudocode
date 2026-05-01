/*
 * XREFs of ?IsViewHalfSnappedLeft@CShellSnapComponent@@UEAAHPEAUIApplicationView@@@Z @ 0x18057C6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DetermineSnapRegionForView@SnapLayoutHelpers@@YA?AW4SnapRegion@@PEAUIApplicationView@@@Z @ 0x1800D9A88 (-DetermineSnapRegionForView@SnapLayoutHelpers@@YA-AW4SnapRegion@@PEAUIApplicationView@@@Z.c)
 */

_BOOL8 __fastcall CShellSnapComponent::IsViewHalfSnappedLeft(CShellSnapComponent *this, struct IApplicationView *a2)
{
  return (unsigned int)SnapLayoutHelpers::DetermineSnapRegionForView((__int64)a2) == 8;
}
