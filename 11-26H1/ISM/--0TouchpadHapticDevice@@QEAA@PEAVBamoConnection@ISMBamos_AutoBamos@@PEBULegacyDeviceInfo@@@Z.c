/*
 * XREFs of ??0TouchpadHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@PEBULegacyDeviceInfo@@@Z @ 0x18018863C
 * Callers:
 *     ?AttachHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@$$QEAV?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@4@@Z @ 0x18018E0A4 (-AttachHapticTouchpad@HapticDeviceManager@@QEAAJPEBULegacyDeviceInfo@@$$QEAV-$unique_any_t@V-$un.c)
 * Callees:
 *     ?SetSupportedFeedback@BamoSimpleHapticsControllerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180082070 (-SetSupportedFeedback@BamoSimpleHapticsControllerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsContr.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??4?$com_ptr_t@VBamoEdgyGestureRecognitionConfigurationProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x1800AEE4C (--4-$com_ptr_t@VBamoEdgyGestureRecognitionConfigurationProxy@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ??0?$ListPrincipal@USimpleHapticsControllerFeedback@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x180188490 (--0-$ListPrincipal@USimpleHapticsControllerFeedback@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEA.c)
 *     ??0BamoSimpleHapticsControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180188500 (--0BamoSimpleHapticsControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0CompliantHapticInterface@@QEAA@_N0@Z @ 0x180188570 (--0CompliantHapticInterface@@QEAA@_N0@Z.c)
 *     ?SetDeviceType@BamoSimpleHapticsControllerPrincipal@@UEAAXW4HapticDeviceType@@@Z @ 0x18018AD90 (-SetDeviceType@BamoSimpleHapticsControllerPrincipal@@UEAAXW4HapticDeviceType@@@Z.c)
 *     ?SetInterfacePath@BamoSimpleHapticsControllerPrincipal@@UEAAJPEBG@Z @ 0x18018AE50 (-SetInterfacePath@BamoSimpleHapticsControllerPrincipal@@UEAAJPEBG@Z.c)
 *     ?SetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018AF90 (-SetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsPlayCountSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018B050 (-SetIsPlayCountSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018B110 (-SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018B1D0 (-SetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
TouchpadHapticDevice *__fastcall TouchpadHapticDevice::TouchpadHapticDevice(
        TouchpadHapticDevice *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2,
        const struct LegacyDeviceInfo *a3)
{
  _QWORD *v6; // rax
  _QWORD *v8; // [rsp+50h] [rbp+18h]

  BamoSimpleHapticsControllerPrincipal::BamoSimpleHapticsControllerPrincipal(this, a2);
  *(_QWORD *)this = &TouchpadHapticDevice::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &MouseHapticDevice::`vftable'{for `ISimpleHapticsControllerPrincipal'};
  CompliantHapticInterface::CompliantHapticInterface((TouchpadHapticDevice *)((char *)this + 88));
  *((_QWORD *)this + 77) = 0LL;
  BamoSimpleHapticsControllerPrincipal::SetDeviceType((char *)this + 8, 2LL);
  BamoSimpleHapticsControllerPrincipal::SetInterfacePath(
    (TouchpadHapticDevice *)((char *)this + 8),
    (const unsigned __int16 *)a3 + 38);
  BamoSimpleHapticsControllerPrincipal::SetIsIntensitySupported((TouchpadHapticDevice *)((char *)this + 8), 0);
  BamoSimpleHapticsControllerPrincipal::SetIsPlayCountSupported((TouchpadHapticDevice *)((char *)this + 8), 0);
  BamoSimpleHapticsControllerPrincipal::SetIsReplayPauseIntervalSupported((TouchpadHapticDevice *)((char *)this + 8), 0);
  BamoSimpleHapticsControllerPrincipal::SetIsPlayDurationSupported((TouchpadHapticDevice *)((char *)this + 8), 0);
  v8 = operator new(0x50uLL);
  v6 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<SimpleHapticsControllerFeedback>::ListPrincipal<SimpleHapticsControllerFeedback>(
         v8,
         a2);
  wil::com_ptr_t<BamoEdgyGestureRecognitionConfigurationProxy,wil::err_returncode_policy>::operator=(
    (__int64 *)this + 77,
    (void (__fastcall ***)(_QWORD))v6);
  BamoSimpleHapticsControllerPrincipal::SetSupportedFeedback(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)this + 1,
    *((struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal **)this + 77));
  return this;
}
