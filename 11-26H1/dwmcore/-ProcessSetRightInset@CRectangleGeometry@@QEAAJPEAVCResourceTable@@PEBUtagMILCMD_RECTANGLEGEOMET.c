/*
 * XREFs of ?ProcessSetRightInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET@@@Z @ 0x1801B7580
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetRightInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET *a3)
{
  return ((__int64 (__fastcall *)(CRectangleGeometry *, void *, char *))off_1803DC3D8)(
           this,
           &CRectangleGeometry::sc_Right,
           (char *)a3 + 8);
}
