/*
 * XREFs of ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x1804849B4
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18024EFF0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 *     ?HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveAnimationType@Text@Shell@Internal@5@PEAIPEAU345@PEAW4ShellRequestType@7895@@Z @ 0x180483380 (-HandleDragEnded@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIURect@Foundation@Windows@@PEAW4MoveA.c)
 * Callees:
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18013DCC4 (--$_Try_emplace@AEBI$$V@-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18013DDD4 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18019199C (-find@-$_Tree@V-$_Tmap_traits@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180215318 (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802AB0D4 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z @ 0x180475E80 (--0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z.c)
 *     ?GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA?AUMonitorInformationSnapshot@2@XZ @ 0x180476314 (-GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA-AUMonitorInformationSnapshot@2@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::Foundation::Point *a2,
        int a3)
{
  char IsEnabled; // al
  char v6; // cl
  float v7; // xmm11_4
  float v8; // xmm12_4
  __m128 v9; // xmm0
  float v10; // xmm8_4
  float v11; // xmm7_4
  __int64 v12; // rax
  __int64 v13; // rcx
  float v14; // xmm10_4
  float v15; // xmm8_4
  _QWORD *v16; // rdi
  float v17; // xmm6_4
  _QWORD *v18; // r15
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  const WCHAR *v22; // r8
  unsigned int v23; // eax
  __int64 v24; // rax
  const WCHAR *v25; // r8
  unsigned int v26; // eax
  const wchar_t *v27; // rax
  const char *cbData; // [rsp+30h] [rbp-D8h]
  _QWORD lpData[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 Data; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v32[16]; // [rsp+68h] [rbp-A0h] BYREF
  int v33; // [rsp+78h] [rbp-90h] BYREF
  int v34; // [rsp+80h] [rbp-88h]
  __m128 v35; // [rsp+94h] [rbp-74h]
  _BYTE v36[8]; // [rsp+C8h] [rbp-40h] BYREF
  __m128 v37; // [rsp+D0h] [rbp-38h]
  int v38; // [rsp+F0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  LODWORD(lpData[0]) = a3;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
  v6 = *((_BYTE *)this + 860);
  if ( IsEnabled )
  {
    KeyboardHosting::MonitorInformation::GetSnapshot((__int64)this + (v6 != 0 ? 400LL : 232LL), (__int64)&v33);
    v7 = *(float *)a2 - v35.m128_f32[0];
    v8 = *((float *)a2 + 1) - v35.m128_f32[1];
    v9 = _mm_div_ps(
           _mm_mul_ps(
             v35,
             _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v34), (__m128)COERCE_UNSIGNED_INT((float)v34), 0)),
           (__m128)_xmm);
    LODWORD(v10) = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
    LODWORD(v11) = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
  }
  else
  {
    KeyboardHosting::MonitorInformation::MonitorInformation(
      (KeyboardHosting::MonitorInformation *)v36,
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + (v6 != 0 ? 400LL : 232LL)));
    v7 = *(float *)a2 - v37.m128_f32[0];
    v8 = *((float *)a2 + 1) - v37.m128_f32[1];
    v9 = _mm_div_ps(
           _mm_mul_ps(
             v37,
             _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v38), (__m128)COERCE_UNSIGNED_INT((float)v38), 0)),
           (__m128)_xmm);
    LODWORD(v11) = _mm_shuffle_ps(v9, v9, 255).m128_u32[0];
    LODWORD(v10) = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  }
  *(__m128 *)&lpData[1] = v9;
  v12 = std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
          (_QWORD *)this + 105,
          (__int64)&lpData[1],
          (unsigned int *)lpData);
  v13 = *(_QWORD *)v12;
  v14 = *(float *)(*(_QWORD *)v12 + 36LL);
  if ( v10 < *(float *)(*(_QWORD *)v12 + 32LL) || v11 < v14 )
  {
    v16 = (_QWORD *)((char *)this + 824);
    *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                            (_QWORD *)this + 103,
                            (__int64)&lpData[1],
                            (unsigned int *)lpData)
             + 40LL) = 0;
  }
  else
  {
    if ( v10 <= *(float *)(v13 + 32) )
    {
      v16 = (_QWORD *)((char *)this + 824);
      *(_DWORD *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               (_QWORD *)this + 103,
                               (__int64)&lpData[1],
                               (unsigned int *)lpData)
                + 32LL) = 0;
    }
    else
    {
      v15 = fmaxf(0.0, v7 / (float)(v10 - *(float *)(v13 + 32)));
      if ( v15 >= 1.0 )
        v15 = FLOAT_1_0;
      v16 = (_QWORD *)((char *)this + 824);
      *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                              (_QWORD *)this + 103,
                              (__int64)&lpData[1],
                              (unsigned int *)lpData)
               + 32LL) = v15;
    }
    if ( v11 <= v14 )
    {
      *(_DWORD *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               v16,
                               (__int64)&lpData[1],
                               (unsigned int *)lpData)
                + 36LL) = 0;
    }
    else
    {
      v17 = fmaxf(0.0, v8 / (float)(v11 - v14));
      if ( v17 >= 1.0 )
        v17 = FLOAT_1_0;
      *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                              v16,
                              (__int64)&lpData[1],
                              (unsigned int *)lpData)
               + 36LL) = v17;
    }
    *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                            v16,
                            (__int64)&lpData[1],
                            (unsigned int *)lpData)
             + 40LL) = 1;
  }
  if ( *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                               v16,
                               (__int64)&lpData[1],
                               (unsigned int *)lpData)
                + 40LL) )
  {
    v18 = (_QWORD *)((char *)this + 88);
    v19 = std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::find(
            (__int64 **)this + 9,
            &lpData[1],
            lpData);
    v20 = *std::_Tree<std::_Tmap_traits<unsigned int,std::wstring,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::wstring>>,0>>::find(
             (__int64 **)this + 11,
             &Data,
             lpData);
    if ( *v19 == *((_QWORD *)this + 9) )
    {
      v27 = L"XPosition";
      if ( v20 == *v18 )
        v27 = L"XPosition and YPosition";
    }
    else
    {
      if ( v20 != *v18 )
      {
        LODWORD(Data) = (int)(float)((float)*((int *)this + 27)
                                   * *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                                             v16,
                                                             (__int64)v32,
                                                             (unsigned int *)lpData)
                                              + 32LL));
        v21 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(
                (_QWORD *)this + 9,
                (__int64)v32,
                (unsigned int *)lpData);
        v22 = (const WCHAR *)(*(_QWORD *)v21 + 40LL);
        if ( *(_QWORD *)(*(_QWORD *)v21 + 64LL) > 7uLL )
          v22 = *(const WCHAR **)v22;
        v23 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v22, 4u, &Data, 4u);
        if ( v23 )
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            1989LL,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)v23);
        LODWORD(lpData[1]) = (int)(float)((float)*((int *)this + 27)
                                        * *(float *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                                                  v16,
                                                                  (__int64)v32,
                                                                  (unsigned int *)lpData)
                                                   + 36LL));
        v24 = std::map<unsigned int,std::wstring>::_Try_emplace<unsigned int const &,>(
                (_QWORD *)this + 11,
                (__int64)v32,
                (unsigned int *)lpData);
        v25 = (const WCHAR *)(*(_QWORD *)v24 + 40LL);
        if ( *(_QWORD *)(*(_QWORD *)v24 + 64LL) > 7uLL )
          v25 = *(const WCHAR **)v25;
        v26 = RegSetKeyValueW(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\TabletTip\\1.7", v25, 4u, &lpData[1], 4u);
        if ( v26 )
          wil::details::in1diag3::_Log_Win32(
            retaddr,
            1992LL,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
            (const char *)v26);
        return 0LL;
      }
      v27 = L"YPosition";
    }
    LODWORD(cbData) = lpData[0];
    wil::details::in1diag3::Log_HrMsg(
      retaddr,
      (void *)0x7CE,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x8000FFFFLL,
      (unsigned __int64)"View id %u is missing key(s) for %ls",
      cbData,
      v27);
  }
  return 0LL;
}
