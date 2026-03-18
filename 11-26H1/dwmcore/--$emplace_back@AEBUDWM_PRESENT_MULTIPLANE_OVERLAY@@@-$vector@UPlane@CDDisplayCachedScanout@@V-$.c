/*
 * XREFs of ??$emplace_back@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@QEAAAEAUPlane@CDDisplayCachedScanout@@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1802AA550
 * Callers:
 *     ?Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1800FAE08 (-Set@CDDisplayCachedScanout@@QEAAXIPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IIPEAUIDisplayScanout@Cor.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@AEAAPEAUPlane@CDDisplayCachedScanout@@QEAU23@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801C3964 (--$_Emplace_reallocate@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@-$vector@UPlane@CDDisplayCachedScano.c)
 *     ??0Plane@CDDisplayCachedScanout@@QEAA@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1801C3ABC (--0Plane@CDDisplayCachedScanout@@QEAA@AEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z.c)
 */

CDDisplayCachedScanout::Plane *__fastcall std::vector<CDDisplayCachedScanout::Plane>::emplace_back<DWM_PRESENT_MULTIPLANE_OVERLAY const &>(
        __int64 *a1,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a2)
{
  __int64 v3; // rcx

  if ( a1[1] == a1[2] )
    return std::vector<CDDisplayCachedScanout::Plane>::_Emplace_reallocate<DWM_PRESENT_MULTIPLANE_OVERLAY const &>(
             a1,
             a1[1],
             a2);
  CDDisplayCachedScanout::Plane::Plane((CDDisplayCachedScanout::Plane *)a1[1], a2);
  v3 = a1[1];
  a1[1] = v3 + 88;
  return (CDDisplayCachedScanout::Plane *)v3;
}
