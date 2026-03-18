/*
 * XREFs of ??$UnRegisterNotifier@VCVisualGroup@@@CResource@@QEAAXAEAV?$com_ptr_t@VCVisualGroup@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802583E0
 * Callers:
 *     ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST@@@Z @ 0x1802172F4 (-ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRE.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x180258414 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 */

void __fastcall CResource::UnRegisterNotifier<CVisualGroup>(CResource *a1, struct CResource **a2)
{
  CResource *v3; // rcx

  CResource::UnRegisterNotifierInternal(a1, *a2);
  v3 = *a2;
  *a2 = 0LL;
  if ( v3 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v3);
}
