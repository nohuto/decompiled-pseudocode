/*
 * XREFs of ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020
 * Callers:
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18004F3B8 (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x18004FC1C (-GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z.c)
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18004FD7C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 *     ??1CPathSegmentsShape@@UEAA@XZ @ 0x18004FF50 (--1CPathSegmentsShape@@UEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18004FF78 (-_Tidy@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPathData@@@WRL@Mi.c)
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1800553F4 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
 *     ??1CPathGeometry@@MEAA@XZ @ 0x1801B643C (--1CPathGeometry@@MEAA@XZ.c)
 *     ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x1801B8F60 (-GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@0@@Z @ 0x1801CAA48 (--$_Destroy_range@V-$allocator@V-$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??1CComplexShape@@UEAA@XZ @ 0x18021EA80 (--1CComplexShape@@UEAA@XZ.c)
 *     ??1CInteractionTracker2@@UEAA@XZ @ 0x180271474 (--1CInteractionTracker2@@UEAA@XZ.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180271730 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CleanDirties@CInteractionTracker2@@IEAAXXZ @ 0x180272760 (-CleanDirties@CInteractionTracker2@@IEAAXXZ.c)
 *     ?ProcessSetInertiaCenterpointX@CInteractionTracker2@@AEAAXXZ @ 0x180274D58 (-ProcessSetInertiaCenterpointX@CInteractionTracker2@@AEAAXXZ.c)
 *     ?ProcessSetInertiaCenterpointY@CInteractionTracker2@@AEAAXXZ @ 0x180274DC0 (-ProcessSetInertiaCenterpointY@CInteractionTracker2@@AEAAXXZ.c)
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18027AA20 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??1CSynchronousSuperWetInk@@EEAA@XZ @ 0x180284A74 (--1CSynchronousSuperWetInk@@EEAA@XZ.c)
 *     ?DetachFromChannel@CSynchronousSuperWetInk@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180284B60 (-DetachFromChannel@CSynchronousSuperWetInk@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ??1CGenericInkTipPointSource@@EEAA@XZ @ 0x180288C88 (--1CGenericInkTipPointSource@@EEAA@XZ.c)
 *     ?Dispose@CGenericInkTipPointSource@@QEAAXXZ @ 0x180288DF0 (-Dispose@CGenericInkTipPointSource@@QEAAXXZ.c)
 *     ??_ECExpressionForce@@EEAAPEAXI@Z @ 0x18028E830 (--_ECExpressionForce@@EEAAPEAXI@Z.c)
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x180294100 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( !v2 )
    return 0LL;
  *a1 = 0LL;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
