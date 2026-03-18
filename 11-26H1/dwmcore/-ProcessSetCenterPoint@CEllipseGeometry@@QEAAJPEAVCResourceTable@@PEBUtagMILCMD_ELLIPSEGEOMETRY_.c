/*
 * XREFs of ?ProcessSetCenterPoint@CEllipseGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ELLIPSEGEOMETRY_SETCENTERPOINT@@@Z @ 0x18021FA78
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEllipseGeometry::ProcessSetCenterPoint(
        CEllipseGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ELLIPSEGEOMETRY_SETCENTERPOINT *a3)
{
  return ((__int64 (__fastcall *)(CEllipseGeometry *, void *, char *))off_1803DC5E0)(
           this,
           &CEllipseGeometry::sc_CenterPoint,
           (char *)a3 + 8);
}
