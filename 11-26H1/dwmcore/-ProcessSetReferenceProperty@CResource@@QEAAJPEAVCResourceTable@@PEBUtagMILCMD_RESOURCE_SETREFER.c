/*
 * XREFs of ?ProcessSetReferenceProperty@CResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RESOURCE_SETREFERENCEPROPERTY@@@Z @ 0x18021BD0C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180151FC4 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CResource::ProcessSetReferenceProperty(
        CResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RESOURCE_SETREFERENCEPROPERTY *a3)
{
  struct CResource *ResourceWithoutType; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  void *retaddr; // [rsp+28h] [rbp+0h]

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 3));
  if ( !ResourceWithoutType && *(_DWORD *)(v5 + 12) )
    ModuleFailFastForHRESULT(-2003303421, retaddr);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, struct CResource *))(*(_QWORD *)v4 + 104LL))(
           v4,
           *(unsigned int *)(v5 + 8),
           ResourceWithoutType);
}
