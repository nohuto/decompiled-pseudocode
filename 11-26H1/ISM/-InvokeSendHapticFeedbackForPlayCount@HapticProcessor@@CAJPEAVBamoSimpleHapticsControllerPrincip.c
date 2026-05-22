/*
 * XREFs of ?InvokeSendHapticFeedbackForPlayCount@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@GAEBUtagINPUT_HAPTIC_SETTINGS@@II@Z @ 0x1800C9A60
 * Callers:
 *     ?PlayWaveformOnController@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@IIAEBUtagINPUT_HAPTIC_SETTINGS@@@Z @ 0x1800C9F20 (-PlayWaveformOnController@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINP.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA_NXZ @ 0x1800CB6E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA.c)
 *     ?SendHapticFeedbackForPlayCountImpl@TouchpadHapticDevice@@QEAAJGMII@Z @ 0x18018AB50 (-SendHapticFeedbackForPlayCountImpl@TouchpadHapticDevice@@QEAAJGMII@Z.c)
 *     ?SendHapticFeedbackForPlayCountImpl@PenHapticDevice@@QEAAJGMII@Z @ 0x18018C420 (-SendHapticFeedbackForPlayCountImpl@PenHapticDevice@@QEAAJGMII@Z.c)
 *     ?SendHapticFeedbackForPlayCountImpl@MouseHapticDevice@@QEAAJGMII@Z @ 0x18018CD20 (-SendHapticFeedbackForPlayCountImpl@MouseHapticDevice@@QEAAJGMII@Z.c)
 */

__int64 __fastcall HapticProcessor::InvokeSendHapticFeedbackForPlayCount(
        struct BamoSimpleHapticsControllerPrincipal *a1,
        enum tagINPUT_MESSAGE_DEVICE_TYPE a2,
        unsigned __int16 a3,
        const struct tagINPUT_HAPTIC_SETTINGS *a4)
{
  switch ( a2 )
  {
    case 2:
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MouseHaptics2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MouseHaptics2>::GetImpl'::`2'::impl) )
        return MouseHapticDevice::SendHapticFeedbackForPlayCountImpl(a1, a3, *((double *)a4 + 6), 1u, 0);
      break;
    case 8:
      return PenHapticDevice::SendHapticFeedbackForPlayCountImpl(a1, a3, *((double *)a4 + 2), 1u, 0);
    case 16:
      return TouchpadHapticDevice::SendHapticFeedbackForPlayCountImpl(a1, a3, *((double *)a4 + 4), 1u, 0);
  }
  return 0LL;
}
