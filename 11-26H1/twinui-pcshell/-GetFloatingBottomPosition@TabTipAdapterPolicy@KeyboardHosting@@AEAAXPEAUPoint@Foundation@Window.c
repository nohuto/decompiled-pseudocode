/*
 * XREFs of ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x18024E7BC
 * Callers:
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800B9230 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18024EFF0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18013DDD4 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180215318 (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z @ 0x180475E80 (--0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z.c)
 *     ?GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA?AUMonitorInformationSnapshot@2@XZ @ 0x180476314 (-GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA-AUMonitorInformationSnapshot@2@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        struct Windows::Foundation::Point *a2,
        unsigned int a3)
{
  char IsEnabled; // al
  char v6; // cl
  _QWORD *v7; // rsi
  _QWORD *v8; // r14
  float v9; // xmm7_4
  __int64 v10; // rbx
  __int64 v11; // rax
  float v12; // xmm8_4
  __int64 v13; // rbx
  __int64 v14; // rax
  float v15; // xmm8_4
  float v16; // xmm7_4
  float v17; // xmm7_4
  __int64 v18; // rbx
  __int64 v19; // rax
  float v20; // xmm8_4
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned int v23; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v24[16]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v25[24]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v26[8]; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+58h] [rbp-A8h]
  float v28; // [rsp+6Ch] [rbp-94h]
  float v29; // [rsp+70h] [rbp-90h]
  float v30; // [rsp+74h] [rbp-8Ch]
  float v31; // [rsp+78h] [rbp-88h]
  _BYTE v32[8]; // [rsp+A0h] [rbp-60h] BYREF
  float v33; // [rsp+A8h] [rbp-58h]
  float v34; // [rsp+ACh] [rbp-54h]
  float v35; // [rsp+B0h] [rbp-50h]
  float v36; // [rsp+B4h] [rbp-4Ch]
  int v37; // [rsp+C8h] [rbp-38h]

  v23 = a3;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
  v6 = *((_BYTE *)this + 860);
  v7 = (_QWORD *)((char *)this + 840);
  v8 = (_QWORD *)((char *)this + 824);
  if ( IsEnabled )
  {
    KeyboardHosting::MonitorInformation::GetSnapshot((char *)this + (v6 != 0 ? 0xA8 : 0) + 232, v26);
    v9 = (float)v27;
    v10 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                       v7,
                       (__int64)v24,
                       &v23);
    v11 = std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
            v8,
            (__int64)v25,
            &v23);
    v12 = (float)((float)((float)(v9 * v30) / 100.0) - *(float *)(v10 + 32)) * *(float *)(*(_QWORD *)v11 + 32LL);
    v13 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                       v7,
                       (__int64)v25,
                       &v23);
    v14 = std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
            v8,
            (__int64)v24,
            &v23);
    v15 = v12 + v28;
    v16 = (float)((float)((float)((float)(v9 * v31) / 100.0) - *(float *)(v13 + 36)) * *(float *)(*(_QWORD *)v14 + 36LL))
        + v29;
  }
  else
  {
    KeyboardHosting::MonitorInformation::MonitorInformation(
      (KeyboardHosting::MonitorInformation *)v32,
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + (v6 != 0 ? 0xA8 : 0) + 232));
    v17 = (float)v37;
    v18 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                       v7,
                       (__int64)v25,
                       &v23);
    v19 = std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
            v8,
            (__int64)v24,
            &v23);
    v20 = (float)((float)((float)(v17 * v35) / 100.0) - *(float *)(v18 + 32)) * *(float *)(*(_QWORD *)v19 + 32LL);
    v21 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                       v7,
                       (__int64)v25,
                       &v23);
    v22 = std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
            v8,
            (__int64)v24,
            &v23);
    v15 = v20 + v33;
    v16 = (float)((float)((float)((float)(v17 * v36) / 100.0) - *(float *)(v21 + 36)) * *(float *)(*(_QWORD *)v22 + 36LL))
        + v34;
  }
  *(float *)a2 = v15;
  *((float *)a2 + 1) = v16;
}
