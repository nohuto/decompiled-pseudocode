/*
 * XREFs of ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x1400D5B3C
 * Callers:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x140079C98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400A0744 (-GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1400D5634 (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x140216338 (-bAddPolygon@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@PEAU_POINTFIX@@@Z @ 0x140306AA0 (-bCreateRegion@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@PEAU_POINTFIX@@@Z.c)
 *     ?GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z @ 0x140332DB4 (-GrepPolyBezier@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::bMoveTo(EPATHOBJ *this, const struct EXFORMOBJR *a2, const struct _POINTL *a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+38h] [rbp-10h]

  v4[0] = a3;
  v4[2] = 0LL;
  v4[1] = 1LL;
  v5 = 0;
  return EPATHOBJ::bMoveTo(this, a2, v4);
}
