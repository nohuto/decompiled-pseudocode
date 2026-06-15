/*
 * XREFs of ?GetSystemEffect@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18013A1BC
 * Callers:
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x18007C528 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 * Callees:
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F634 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F8E8 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 */

__int64 __fastcall EffectPack::GetSystemEffect(
        EffectPack *a1,
        int a2,
        struct _GUID *a3,
        __int64 a4,
        struct IAudioProcessingObject **a5,
        struct IAudioSystemEffects2 **a6,
        __int64 a7,
        struct IAudioSystemEffects2 **a8)
{
  struct _GUID v9; // [rsp+40h] [rbp-18h] BYREF

  switch ( a2 )
  {
    case 1:
      v9 = *a3;
      return EffectPack::GetStreamEffect(a1, &v9, (_QWORD *)1, 0, 0LL, 0LL, a8);
    case 2:
      v9 = *a3;
      return EffectPack::GetModeEffect((unsigned __int64)a1, (__m128i *)&v9, 1LL, 0, 0LL, 0LL, a8);
    case 3:
      return EffectPack::GetEndpointEffect((struct _RTL_CRITICAL_SECTION *)a1, 1LL, 0LL, 0LL, 0LL, a8);
    default:
      if ( a8 )
        *a8 = 0LL;
      return 2147942487LL;
  }
}
