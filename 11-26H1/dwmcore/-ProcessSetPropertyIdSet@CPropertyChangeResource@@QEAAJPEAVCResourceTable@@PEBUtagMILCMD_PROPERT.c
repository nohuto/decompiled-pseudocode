/*
 * XREFs of ?ProcessSetPropertyIdSet@CPropertyChangeResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROPERTYCHANGERESOURCE_SETPROPERTYIDSET@@@Z @ 0x1801C6D40
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPropertyChangeResource::ProcessSetPropertyIdSet(
        CPropertyChangeResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROPERTYCHANGERESOURCE_SETPROPERTYIDSET *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)this;
  *((_DWORD *)this + 19) = *((_DWORD *)a3 + 2);
  return (*(__int64 (**)(void))(v3 + 200))();
}
