/*
 * XREFs of ??0CPolygonBuilder@@QEAA@XZ @ 0x180054AD8
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180007FE4 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1800548C0 (-GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180014448 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 */

CPolygonBuilder *__fastcall CPolygonBuilder::CPolygonBuilder(CPolygonBuilder *this, __int64 a2)
{
  CPolygonBuilder *v2; // rcx

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>(
    (__int64)this,
    a2);
  *(_QWORD *)v2 = &CPolygonBuilder::`vftable';
  *((_QWORD *)v2 + 2) = (char *)v2 + 40;
  *((_QWORD *)v2 + 3) = (char *)v2 + 40;
  *((_QWORD *)v2 + 4) = (char *)v2 + 360;
  return v2;
}
