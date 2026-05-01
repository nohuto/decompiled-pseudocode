/*
 * XREFs of ?GetBorderAnchors@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@1@W421@@Z @ 0x1805879AC
 * Callers:
 *     ?DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@1@@ZP6A_N00PEAW441@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@1@@Z @ 0x1805874CC (-DetermineFillWindow@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@1@AEBV-$CCoSimpleArray@V-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SnapLayoutHelpers::GetBorderAnchors(unsigned int a1)
{
  if ( a1 != 7 )
  {
    if ( a1 == 11 )
      return 10LL;
    if ( a1 != 13 )
    {
      if ( a1 != 14 )
        return a1;
      return 10LL;
    }
  }
  return 5LL;
}
