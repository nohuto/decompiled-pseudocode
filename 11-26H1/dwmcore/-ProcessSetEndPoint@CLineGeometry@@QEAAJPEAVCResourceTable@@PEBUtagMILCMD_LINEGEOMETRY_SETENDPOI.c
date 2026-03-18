/*
 * XREFs of ?ProcessSetEndPoint@CLineGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEGEOMETRY_SETENDPOINT@@@Z @ 0x18021F9D8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLineGeometry::ProcessSetEndPoint(
        CLineGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LINEGEOMETRY_SETENDPOINT *a3)
{
  return ((__int64 (__fastcall *)(CLineGeometry *, void *, char *))off_1803DC2E8)(
           this,
           &CLineGeometry::sc_EndPoint,
           (char *)a3 + 8);
}
