/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA_NXZ @ 0x1800CB6E8
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180076CF0 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x180083360 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 *     ?InvokeSendHapticFeedbackForPlayCount@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@GAEBUtagINPUT_HAPTIC_SETTINGS@@II@Z @ 0x1800C9A60 (-InvokeSendHapticFeedbackForPlayCount@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincip.c)
 *     ?TryFindControllerForInput@HapticProcessor@@CAJPEBUtagINPUT_MESSAGE_DATA@@PEAPEAVBamoSimpleHapticsControllerPrincipal@@PEAW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEAI@Z @ 0x1800CAA28 (-TryFindControllerForInput@HapticProcessor@@CAJPEBUtagINPUT_MESSAGE_DATA@@PEAPEAVBamoSimpleHapti.c)
 *     ??0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x1800D20CC (--0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ??1RIMRawInputProvider@@MEAA@XZ @ 0x1800D2218 (--1RIMRawInputProvider@@MEAA@XZ.c)
 *     ?OnDeviceQueryRemove@HIDDeviceCollection@@MEAAJK@Z @ 0x1800DFBF0 (-OnDeviceQueryRemove@HIDDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800DFC70 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     ?AttachHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@4@@Z @ 0x18018E0A4 (-AttachHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@$$QEAV-$unique_any_t@V-$un.c)
 *     ?EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@AEBU_GUID@@@Z @ 0x18018ED88 (-EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_po.c)
 *     ?QueryRemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z @ 0x180190464 (-QueryRemoveHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@@Z.c)
 *     ?Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18019BF58 (-Initialize@MouseProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceQueryRemove@MouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18019C230 (-OnDeviceQueryRemove@MouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18019C260 (-OnDeviceRemoval@MouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800C8334 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CA384 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAAX_NW4Rep.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_MouseHaptics2>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MouseHaptics2>::GetCachedFeatureEnabledState(a1, &v5);
  v2 = v5 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MouseHaptics2>::ReportUsage((__int64)a1, v5 & 1, v3);
  return v2;
}
