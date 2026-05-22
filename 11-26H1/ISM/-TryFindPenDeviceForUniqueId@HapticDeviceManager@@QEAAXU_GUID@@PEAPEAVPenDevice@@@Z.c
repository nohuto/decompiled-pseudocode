/*
 * XREFs of ?TryFindPenDeviceForUniqueId@HapticDeviceManager@@QEAAXU_GUID@@PEAPEAVPenDevice@@@Z @ 0x180191C20
 * Callers:
 *     ?TryFindPenHapticControllerForMessage@HapticProcessor@@CAJPEBUtagMSG@@PEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CAD94 (-TryFindPenHapticControllerForMessage@HapticProcessor@@CAJPEBUtagMSG@@PEAPEAVBamoSimpleHapticsCo.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoInputSpacePayloadPrincipal@@@Z @ 0x18002FF60 (--0-$com_ptr_t@VBamoInputSpacePayloadPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVBamoIn.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@HapticDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBU_GUID@@@Z @ 0x180191FC0 (-find@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@.c)
 */

void __fastcall HapticDeviceManager::TryFindPenDeviceForUniqueId(
        HapticDeviceManager *this,
        struct _GUID *a2,
        struct PenDevice **a3)
{
  struct PenDevice **v4; // rbx
  struct PenDevice *v5; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct PenDevice **)((char *)this + 80);
  std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,HapticDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::find(
    (char *)this + 80,
    &v5,
    a2);
  if ( v5 != *v4 )
  {
    wil::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>::com_ptr_t<BamoInputSpacePayloadPrincipal,wil::err_exception_policy>(
      &v5,
      *((void (__fastcall ****)(_QWORD))v5 + 6));
    *a3 = v5;
    v5 = 0LL;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v5);
  }
}
