/*
 * XREFs of ?RemoveAt@?$ListPrincipalCommon@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180191074
 * Callers:
 *     ?OnHapticInterfaceRemoval@HapticDeviceManager@@QEAAJK@Z @ 0x18018FCE4 (-OnHapticInterfaceRemoval@HapticDeviceManager@@QEAAJK@Z.c)
 *     ?RemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x18019118C (-RemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?RemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x180191268 (-RemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800173F8 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ @ 0x180027508 (-IsDisconnected@BaseBamoConnection@Bamo@Microsoft@@QEBA_NXZ.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18002752C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800276A8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEE10 (--4-$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>>::RemoveAt(
        _QWORD *a1,
        unsigned int a2)
{
  unsigned __int64 v2; // r12
  __int64 v4; // rcx
  struct Microsoft::Bamo::BaseBamoConnection *v5; // rsi
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 *v8; // r15
  __int64 *i; // rdi
  int v10; // eax
  Microsoft::BamoImpl::BamoImplObject *v12[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = a2;
  v4 = *(_QWORD *)(a1[4] + 32LL);
  if ( *(int *)(v4 + 8) <= 0 )
    v5 = 0LL;
  else
    v5 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v4 + 16);
  Microsoft::Bamo::Lock::Lock(v12, v5);
  v7 = a1[7];
  v8 = (__int64 *)a1[8];
  if ( v2 >= ((__int64)v8 - v7) >> 3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xA7,
      (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v6);
  for ( i = (__int64 *)(v7 + 8 * v2 + 8); i != v8; ++i )
    wil::com_ptr_t<ActivatableEntityBamoPrincipal,wil::err_exception_policy>::operator=(i - 1, i);
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)(a1[8] - 8LL));
  a1[8] -= 8LL;
  if ( !Microsoft::Bamo::BaseBamoConnection::IsDisconnected(v5) )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(a1[1] + 32LL))(a1 + 1, (unsigned int)v2);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB1,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v10,
        (int)v12[0]);
  }
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v12);
  return 0LL;
}
