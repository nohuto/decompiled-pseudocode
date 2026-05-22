/*
 * XREFs of ??0PenHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18018BFD8
 * Callers:
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x180195658 (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 * Callees:
 *     ??0BamoSimpleHapticsControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180188500 (--0BamoSimpleHapticsControllerPrincipal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?SetDeviceType@BamoSimpleHapticsControllerPrincipal@@UEAAXW4HapticDeviceType@@@Z @ 0x18018AD90 (-SetDeviceType@BamoSimpleHapticsControllerPrincipal@@UEAAXW4HapticDeviceType@@@Z.c)
 *     ?SetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018AF90 (-SetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsPlayCountSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018B050 (-SetIsPlayCountSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018B110 (-SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018B1D0 (-SetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
PenHapticDevice *__fastcall PenHapticDevice::PenHapticDevice(
        PenHapticDevice *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  BamoSimpleHapticsControllerPrincipal::BamoSimpleHapticsControllerPrincipal(this, a2);
  *(_QWORD *)this = &PenHapticDevice::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &MouseHapticDevice::`vftable'{for `ISimpleHapticsControllerPrincipal'};
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  BamoSimpleHapticsControllerPrincipal::SetDeviceType((__int64)this + 8, 1);
  BamoSimpleHapticsControllerPrincipal::SetIsIntensitySupported(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)this + 1,
    1);
  BamoSimpleHapticsControllerPrincipal::SetIsPlayCountSupported(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)this + 1,
    1);
  BamoSimpleHapticsControllerPrincipal::SetIsReplayPauseIntervalSupported(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)this + 1,
    1);
  BamoSimpleHapticsControllerPrincipal::SetIsPlayDurationSupported(
    (struct Microsoft::BamoImpl::ConnectionIndirector **)this + 1,
    1);
  return this;
}
