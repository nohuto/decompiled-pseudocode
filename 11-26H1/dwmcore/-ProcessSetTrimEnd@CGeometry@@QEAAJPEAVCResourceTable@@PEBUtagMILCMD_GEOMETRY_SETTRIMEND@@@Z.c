/*
 * XREFs of ?ProcessSetTrimEnd@CGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY_SETTRIMEND@@@Z @ 0x1801DC9C4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGeometry::ProcessSetTrimEnd(
        CGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRY_SETTRIMEND *a3)
{
  return ((__int64 (__fastcall *)(CGeometry *, void *, char *))off_1803DC270)(
           this,
           &CGeometry::sc_TrimEnd,
           (char *)a3 + 8);
}
