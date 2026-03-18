/*
 * XREFs of ?ProcessSetRotationAngle@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE@@@Z @ 0x1801BDD7C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComponentTransform2D::ProcessSetRotationAngle(
        CComponentTransform2D *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE *a3)
{
  return ((__int64 (__fastcall *)(CComponentTransform2D *, void *, char *))off_1803DC0B8)(
           this,
           &CComponentTransform2D::sc_RotationAngle,
           (char *)a3 + 8);
}
