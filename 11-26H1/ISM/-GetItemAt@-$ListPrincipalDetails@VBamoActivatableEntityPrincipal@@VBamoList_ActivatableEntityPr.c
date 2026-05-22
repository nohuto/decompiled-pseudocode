/*
 * XREFs of ?GetItemAt@?$ListPrincipalDetails@VBamoActivatableEntityPrincipal@@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@3@VBamoList_ActivatableEntityPrincipal_Stub@3456@$00$0A@$0A@@Bamo@Microsoft@@QEAAPEAVBamoActivatableEntityPrincipal@@I@Z @ 0x180028078
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x1800278E4 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x180027DAC (-find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA-AV-$com_ptr_t@VActivatableEntityBamoPri.c)
 *     ?find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x180027F0C (-find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV-$function@$$A6A_NPEAVActivatableEntit.c)
 *     ?TryFindMouseHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CABBC (-TryFindMouseHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControlle.c)
 *     ?TryFindTouchpadHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CAF18 (-TryFindTouchpadHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsContro.c)
 *     ?OnHapticInterfaceQueryRemove@HapticDeviceManager@@QEAAJK@Z @ 0x18018FC58 (-OnHapticInterfaceQueryRemove@HapticDeviceManager@@QEAAJK@Z.c)
 *     ?OnHapticInterfaceRemoval@HapticDeviceManager@@QEAAJK@Z @ 0x18018FCE4 (-OnHapticInterfaceRemoval@HapticDeviceManager@@QEAAJK@Z.c)
 *     ?QueryRemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x1801903A0 (-QueryRemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?QueryRemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x180190464 (-QueryRemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?RemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x18019118C (-RemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?RemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x180191268 (-RemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ @ 0x1800280E4 (-VerifyLockHeldIfOffThread@BaseBamoConnection@Bamo@Microsoft@@QEBAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalDetails<BamoActivatableEntityPrincipal,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub,1,0,0>::GetItemAt(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v2; // rax
  Microsoft::Bamo::BaseBamoConnection *v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[4];
  v4 = 0LL;
  v5 = a2;
  v6 = *(_QWORD *)(v2 + 32);
  if ( *(int *)(v6 + 8) > 0 )
    v4 = *(Microsoft::Bamo::BaseBamoConnection **)(v6 + 16);
  Microsoft::Bamo::BaseBamoConnection::VerifyLockHeldIfOffThread(v4);
  v8 = a1[7];
  if ( v5 >= (a1[8] - v8) >> 3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x49,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
      v7);
  return *(_QWORD *)(v8 + 8 * v5);
}
