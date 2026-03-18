/*
 * XREFs of ?ProcessSetSize@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETSIZE@@@Z @ 0x1801DBCD0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetSize(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETSIZE *a3)
{
  return ((__int64 (__fastcall *)(CRectangleGeometry *, void *, char *))off_1803DC590)(
           this,
           &CRectangleGeometry::sc_Size,
           (char *)a3 + 8);
}
