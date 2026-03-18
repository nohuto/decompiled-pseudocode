/*
 * XREFs of ?ProcessSetRadius@CEllipseGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ELLIPSEGEOMETRY_SETRADIUS@@@Z @ 0x1801D9F90
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEllipseGeometry::ProcessSetRadius(
        CEllipseGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ELLIPSEGEOMETRY_SETRADIUS *a3)
{
  return ((__int64 (__fastcall *)(CEllipseGeometry *, void *, char *))off_1803DC608)(
           this,
           &CEllipseGeometry::sc_Radius,
           (char *)a3 + 8);
}
