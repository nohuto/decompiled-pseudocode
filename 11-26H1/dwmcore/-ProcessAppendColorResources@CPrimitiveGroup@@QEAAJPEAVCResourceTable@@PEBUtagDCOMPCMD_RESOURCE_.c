/*
 * XREFs of ?ProcessAppendColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x18024977C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ProcessSetColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027DF94 (-ProcessSetColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SET.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAppendColorResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *a3,
        const void *a4,
        unsigned int a5)
{
  return CPrimitiveGroup::ProcessSetColorResources(this, a2, a3, a4, a5, 1);
}
