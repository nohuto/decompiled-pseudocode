/*
 * XREFs of ??1?$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C8028
 * Callers:
 *     ?ProcessHapticNotificationMessage@HapticProcessor@@SAJPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@Z @ 0x1800CA110 (-ProcessHapticNotificationMessage@HapticProcessor@@SAJPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@Z.c)
 *     ?TryFindControllerForInput@HapticProcessor@@CAJPEBUtagINPUT_MESSAGE_DATA@@PEAPEAVBamoSimpleHapticsControllerPrincipal@@PEAW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEAI@Z @ 0x1800CAA28 (-TryFindControllerForInput@HapticProcessor@@CAJPEBUtagINPUT_MESSAGE_DATA@@PEAPEAVBamoSimpleHapti.c)
 *     ?TryFindMouseHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CABBC (-TryFindMouseHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControlle.c)
 *     ?TryFindPenHapticControllerForMessage@HapticProcessor@@CAJPEBUtagMSG@@PEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CAD94 (-TryFindPenHapticControllerForMessage@HapticProcessor@@CAJPEBUtagMSG@@PEAPEAVBamoSimpleHapticsCo.c)
 *     ?TryFindTouchpadHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CAF18 (-TryFindTouchpadHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsContro.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180108B7C (--$_Emplace_reallocate@AEBV-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@-$vector@V-$Co.c)
 *     ??4?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180109A6C (--4-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@@Z @ 0x180109AFC (-ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@.c)
 *     ?SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@Z @ 0x180109F14 (-SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@.c)
 *     ??1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ @ 0x180117024 (--1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180130DB0 (--1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 *     ??1?$CalloutWrapper@VBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18018DA28 (--1-$CalloutWrapper@VBamoHapticDeviceManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??1BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18018DB7C (--1BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 *     ?AttachHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@4@@Z @ 0x18018E0A4 (-AttachHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@$$QEAV-$unique_any_t@V-$un.c)
 *     ?OnHapticInterfaceQueryRemove@HapticDeviceManager@@QEAAJK@Z @ 0x18018FC58 (-OnHapticInterfaceQueryRemove@HapticDeviceManager@@QEAAJK@Z.c)
 *     ?OnHapticInterfaceRemoval@HapticDeviceManager@@QEAAJK@Z @ 0x18018FCE4 (-OnHapticInterfaceRemoval@HapticDeviceManager@@QEAAJK@Z.c)
 *     ?QueryRemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x1801903A0 (-QueryRemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?QueryRemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x180190464 (-QueryRemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?RemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x18019118C (-RemoveHapticMouse@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?RemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x180191268 (-RemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x180191A20 (-TryAttachHapticMouse@HapticDeviceManager@@QEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??1PenDevice@@UEAA@XZ @ 0x180194B6C (--1PenDevice@@UEAA@XZ.c)
 *     _HapticProcessor::ProcessHapticNotificationMessage_::_1_::dtor$0 @ 0x1801D9396 (_HapticProcessor--ProcessHapticNotificationMessage_--_1_--dtor$0.c)
 *     _HapticDeviceManager::QueryRemoveHapticTouchpad_::_1_::dtor$0 @ 0x1801D93DE (_HapticDeviceManager--QueryRemoveHapticTouchpad_--_1_--dtor$0.c)
 *     _HapticDeviceManager::RemoveHapticTouchpad_::_1_::dtor$0 @ 0x1801D93F0 (_HapticDeviceManager--RemoveHapticTouchpad_--_1_--dtor$0.c)
 *     _HapticProcessor::TryFindTouchpadHapticControllerForHandle_::_1_::dtor$1 @ 0x1801D9414 (_HapticProcessor--TryFindTouchpadHapticControllerForHandle_--_1_--dtor$1.c)
 *     _HapticProcessor::TryFindMouseHapticControllerForHandle_::_1_::dtor$3 @ 0x1801D9426 (_HapticProcessor--TryFindMouseHapticControllerForHandle_--_1_--dtor$3.c)
 *     _HapticProcessor::TryFindTouchpadHapticControllerForHandle_::_1_::dtor$2 @ 0x1801D9438 (_HapticProcessor--TryFindTouchpadHapticControllerForHandle_--_1_--dtor$2.c)
 *     _HapticProcessor::TryFindTouchpadHapticControllerForHandle_::_1_::dtor$3 @ 0x1801D945C (_HapticProcessor--TryFindTouchpadHapticControllerForHandle_--_1_--dtor$3.c)
 *     _Microsoft::BamoImpl::CalloutWrapper_Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_PrincipalImpl_::CalloutWrapper_Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_PrincipalImpl__::_1_::dtor$0 @ 0x1801DC3F6 (_Microsoft--BamoImpl--CalloutWrapper_Microsoft--Bamo--Lib--BamoImpl--ISMBamos_AutoBamos--BamoLis.c)
 *     _HapticDeviceManager::AttachHapticTouchpad_::_1_::dtor$0 @ 0x1801DC460 (_HapticDeviceManager--AttachHapticTouchpad_--_1_--dtor$0.c)
 *     _HapticDeviceManager::AttachHapticTouchpad_::_1_::dtor$2 @ 0x1801DC496 (_HapticDeviceManager--AttachHapticTouchpad_--_1_--dtor$2.c)
 *     _HapticDeviceManager::TryAttachHapticMouse_::_1_::dtor$2 @ 0x1801DC5A0 (_HapticDeviceManager--TryAttachHapticMouse_--_1_--dtor$2.c)
 *     _HapticDeviceManager::TryAttachHapticMouse_::_1_::dtor$4 @ 0x1801DC5D6 (_HapticDeviceManager--TryAttachHapticMouse_--_1_--dtor$4.c)
 *     _PenDevice::PenDevice_::_1_::dtor$2 @ 0x1801DC7E8 (_PenDevice--PenDevice_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
