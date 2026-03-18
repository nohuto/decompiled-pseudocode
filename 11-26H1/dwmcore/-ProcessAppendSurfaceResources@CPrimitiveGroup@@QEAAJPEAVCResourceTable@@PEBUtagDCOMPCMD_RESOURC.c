/*
 * XREFs of ?ProcessAppendSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x1802498F8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ProcessSetSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x180205398 (-ProcessSetSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_S.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAppendSurfaceResources(
        char **this,
        struct CResourceTable *a2,
        const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *a3,
        const void *a4,
        unsigned int a5)
{
  return CPrimitiveGroup::ProcessSetSurfaceResources(this, a2, a3, a4, a5, 1);
}
