/*
 * XREFs of ?CreateCompositeSystemEffect@@YAJPEBU_tlgProvider_t@@W4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@W4FormatChangePosition@@W4AUDIO_DIRECTION@@IPEBU_GUID@@PEAPEAUICompositeSystemEffect@@@Z @ 0x18014F30C
 * Callers:
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180009970 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 * Callees:
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AEAW4__MIDL___MIDL_itf_audioenginecore_0000_0000_0002@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18014EC2C (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAPEBU_tlgProvider_t@@AE.c)
 */

__int64 __fastcall CreateCompositeSystemEffect(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v9 = a2;
  v8 = a1;
  return Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,_tlgProvider_t const * &,enum __MIDL___MIDL_itf_audioenginecore_0000_0000_0002 &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
           a7,
           &v8,
           &v9,
           &v10,
           &v11,
           &a5,
           &a6);
}
