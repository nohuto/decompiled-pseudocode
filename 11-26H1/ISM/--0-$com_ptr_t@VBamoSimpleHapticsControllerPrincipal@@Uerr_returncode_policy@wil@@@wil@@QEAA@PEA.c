/*
 * XREFs of ??0?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800C7EA4
 * Callers:
 *     ?PlayWaveformOnController@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@IIAEBUtagINPUT_HAPTIC_SETTINGS@@@Z @ 0x1800C9F20 (-PlayWaveformOnController@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINP.c)
 *     ?TryFindMouseHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CABBC (-TryFindMouseHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControlle.c)
 *     ?TryFindPenHapticControllerForMessage@HapticProcessor@@CAJPEBUtagMSG@@PEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CAD94 (-TryFindPenHapticControllerForMessage@HapticProcessor@@CAJPEBUtagMSG@@PEAPEAVBamoSimpleHapticsCo.c)
 *     ?TryFindTouchpadHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CAF18 (-TryFindTouchpadHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsContro.c)
 *     ?UpdateBamoProperties@PenHapticDevice@@QEAAXXZ @ 0x18018C560 (-UpdateBamoProperties@PenHapticDevice@@QEAAXXZ.c)
 *     ?AttachHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@4@@Z @ 0x18018E0A4 (-AttachHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@$$QEAV-$unique_any_t@V-$un.c)
 *     ?InitializeProxyUnderLock@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerPrincipal_Stub@2345@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoSimpleHapticsControllerPrincipal@@@Bamo@Microsoft@@MEAAJPEAVBamoList_SimpleHapticsControllerPrincipal_Stub@ISMBamos_AutoBamos@Lib@23@@Z @ 0x18018F0F0 (-InitializeProxyUnderLock@-$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerPrincipal.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerPrincipal_Stub@2345@V?$com_ptr_t@VBamoSimpleHapticsControllerPrincipal@@Uerr_returncode_policy@wil@@@wil@@PEAVBamoSimpleHapticsControllerPrincipal@@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x18018F3B8 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerPrincipal_Principal@I.c)
 *     ?OnHapticInterfaceQueryRemove@HapticDeviceManager@@QEAAJK@Z @ 0x18018FC58 (-OnHapticInterfaceQueryRemove@HapticDeviceManager@@QEAAJK@Z.c)
 *     ?OnHapticInterfaceRemoval@HapticDeviceManager@@QEAAJK@Z @ 0x18018FCE4 (-OnHapticInterfaceRemoval@HapticDeviceManager@@QEAAJK@Z.c)
 *     ?QueryRemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x1801903A0 (-QueryRemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?QueryRemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x180190464 (-QueryRemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?RemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x18019118C (-RemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?RemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x180191268 (-RemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x180191A20 (-TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>::com_ptr_t<BamoSimpleHapticsControllerPrincipal,wil::err_returncode_policy>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD))
{
  *a1 = a2;
  if ( a2 )
    (**a2)(a2);
  return a1;
}
