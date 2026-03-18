/*
 * XREFs of ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST@@@Z @ 0x1802172F4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18014CFD0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z @ 0x1801D3F8C (--4-$com_ptr_t@VCDesktopTree@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDesktopTree@@@Z.c)
 *     ??$UnRegisterNotifier@VCVisualGroup@@@CResource@@QEAAXAEAV?$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802583E0 (--$UnRegisterNotifier@VCVisualGroup@@@CResource@@QEAAXAEAV-$com_ptr_t@VCVisualGroup@@Uerr_return.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetFilterList(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST *a3)
{
  struct CResource *v3; // rbx
  unsigned int v5; // edx
  __int64 Resource; // rax
  CResource **v8; // rdi
  CResource *v9; // rcx
  CResource *v10; // rax
  CResource *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  v12 = 0LL;
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x9Fu);
    wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(&v12, Resource);
    v3 = v12;
  }
  v8 = (CResource **)((char *)this + 2632);
  if ( v3 != *((struct CResource **)this + 329) )
  {
    CResource::RegisterNotifier(this, v3);
    CResource::UnRegisterNotifier<CVisualGroup>(this, (char *)this + 2632);
    v9 = *v8;
    v10 = v3;
    v3 = 0LL;
    *v8 = v10;
    if ( !v9 )
      return 0LL;
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v9);
  }
  if ( v3 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v3);
  return 0LL;
}
