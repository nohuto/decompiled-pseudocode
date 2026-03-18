/*
 * XREFs of ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x1400D5AFC
 * Callers:
 *     ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400A0744 (-GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1400D5634 (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 *     ?bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1400D58A4 (-bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x140216338 (-bAddPolygon@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@PEAU_POINTFIX@@@Z @ 0x140306AA0 (-bCreateRegion@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::bPolyLineTo(
        EPATHOBJ *this,
        const struct EXFORMOBJR *a2,
        const struct _POINTL *a3,
        __int64 a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]

  v5[2] = 0LL;
  v5[0] = a3;
  v5[1] = (unsigned int)a4;
  v6 = 0;
  return EPATHOBJ::bPolyLineTo(this, a2, v5, a4);
}
