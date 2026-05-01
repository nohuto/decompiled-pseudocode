/*
 * XREFs of ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x1806106A8
 * Callers:
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x18060E000 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     ?subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180611A60 (-subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x180190FA4 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     ??$?9GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x18021CB48 (--$-9GU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$try_get_value@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x180335938 (--$try_get_value@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@@YA-AV-$.c)
 *     ??1?$_Optional_destruct_base@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@std@@QEAA@XZ @ 0x180335B8C (--1-$_Optional_destruct_base@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805FDF84 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x1805FE164 (--1TargetAppExtensionDetails@@QEAA@XZ.c)
 *     ??4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z @ 0x1805FE1D8 (--4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1805FE2DC (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ @ 0x1805FE8F4 (-ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180600690 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55994114@@@details@wil@@QEAA_NXZ @ 0x1806109B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55994114@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CopilotHotkeyManager::UpdateTargetAppDetailsCacheIfNecessary(CopilotHotkeyManager *this)
{
  char *v2; // rax
  __int64 *TargetAppExtensionDetails; // rax
  void *v4; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v5[4]; // [rsp+30h] [rbp-D8h] BYREF
  char v6; // [rsp+50h] [rbp-B8h]
  char v7[40]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v8[40]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v9; // [rsp+A8h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-50h]
  __int128 v11; // [rsp+C8h] [rbp-40h]
  __m128i v12; // [rsp+D8h] [rbp-30h]
  __int128 v13; // [rsp+E8h] [rbp-20h]
  __m128i v14; // [rsp+F8h] [rbp-10h]
  __int64 v15; // [rsp+108h] [rbp+0h]
  __int128 v16; // [rsp+110h] [rbp+8h]
  __int64 v17; // [rsp+120h] [rbp+18h]
  __int64 v18; // [rsp+128h] [rbp+20h]
  __int64 v19; // [rsp+130h] [rbp+28h]
  __int128 v20; // [rsp+138h] [rbp+30h]
  __m128i v21; // [rsp+148h] [rbp+40h]
  __int64 v22; // [rsp+158h] [rbp+50h]

  wil::reg::try_get_value<std::wstring>((__int64)v7, HKEY_CURRENT_USER);
  wil::reg::try_get_value<std::wstring>((__int64)v5, HKEY_CURRENT_USER);
  if ( v6
    && v7[32]
    && (std::wstring::_Equal(v7, (char *)L"App") || std::wstring::_Equal(v7, (char *)L"AppEnforcedByPolicy")) )
  {
    if ( !*((_QWORD *)this + 26) || std::operator!=<unsigned short>(v5, (unsigned __int16 *)this + 96) )
    {
      v2 = (char *)std::wstring::wstring((__int64)v8, (__int64)v5);
      TargetAppExtensionDetails = CopilotHotkeyManager::GetTargetAppExtensionDetails(this, (__int64 *)&v9, v2);
      TargetAppExtensionDetails::operator=((__int64)this + 192, (__int64)TargetAppExtensionDetails);
      TargetAppExtensionDetails::~TargetAppExtensionDetails((void **)&v9);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55994114>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55994114>::GetImpl'::`2'::impl) )
        CopilotHotkeyManager::ClearFastpathRegistrationProperties((RTL_SRWLOCK *)this);
    }
  }
  else
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                  (__int64)this + 432,
                  (__int64 *)&v4)
             + 275) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v4);
    v9 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v9) = 0;
    v11 = 0LL;
    v12 = si128;
    LOWORD(v11) = 0;
    v13 = 0LL;
    v14 = si128;
    LOWORD(v13) = 0;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 7LL;
    LOWORD(v16) = 0;
    v19 = 0LL;
    v22 = 0LL;
    v20 = 0LL;
    v21 = si128;
    LOWORD(v20) = 0;
    TargetAppExtensionDetails::operator=((__int64)this + 192, (__int64)&v9);
    TargetAppExtensionDetails::~TargetAppExtensionDetails((void **)&v9);
  }
  std::_Optional_destruct_base<std::wstring,0>::~_Optional_destruct_base<std::wstring,0>((__int64)v5);
  std::_Optional_destruct_base<std::wstring,0>::~_Optional_destruct_base<std::wstring,0>((__int64)v7);
}
