/*
 * XREFs of ?UpdateTargetAppDetailsCacheIfNecessary@CopilotHotkeyManager@@AEAAXXZ @ 0x180636294
 * Callers:
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180633140 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     ?OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z @ 0x18063391C (-OnPenButtonCopilotAction@CopilotHotkeyManager@@QEAAXAEBUPenButtonActionData@@@Z.c)
 *     ?subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z @ 0x180637760 (-subscribe_to_services@CopilotHotkeyManager@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x1800303F0 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?9GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x180211A58 (--$-9GU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802B2A8C (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$try_get_value@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@YA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAUHKEY__@@PEBG1@Z @ 0x180335130 (--$try_get_value@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@@YA-AV-$.c)
 *     ??1?$_Optional_destruct_base@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@std@@QEAA@XZ @ 0x180335398 (--1-$_Optional_destruct_base@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180622F30 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??1TargetAppExtensionDetails@@QEAA@XZ @ 0x1806230B4 (--1TargetAppExtensionDetails@@QEAA@XZ.c)
 *     ??4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z @ 0x180623184 (--4TargetAppExtensionDetails@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x1806232F8 (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ @ 0x180623AF4 (-ClearFastpathRegistrationProperties@CopilotHotkeyManager@@AEAAXXZ.c)
 *     ?GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA?AUTargetAppExtensionDetails@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180625824 (-GetTargetAppExtensionDetails@CopilotHotkeyManager@@AEAA-AUTargetAppExtensionDetails@@V-$basic_s.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CopilotHotkeyManager::UpdateTargetAppDetailsCacheIfNecessary(CopilotHotkeyManager *this)
{
  __int64 v2; // rax
  void *TargetAppExtensionDetails; // rax
  void *v4; // [rsp+28h] [rbp-E0h] BYREF
  wchar_t v5[16]; // [rsp+30h] [rbp-D8h] BYREF
  char v6; // [rsp+50h] [rbp-B8h]
  _BYTE v7[32]; // [rsp+58h] [rbp-B0h] BYREF
  char v8; // [rsp+78h] [rbp-90h]
  _BYTE v9[40]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v10; // [rsp+A8h] [rbp-60h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-50h]
  __int128 v12; // [rsp+C8h] [rbp-40h]
  __m128i v13; // [rsp+D8h] [rbp-30h]
  __int128 v14; // [rsp+E8h] [rbp-20h]
  __m128i v15; // [rsp+F8h] [rbp-10h]
  __int64 v16; // [rsp+108h] [rbp+0h]
  __int128 v17; // [rsp+110h] [rbp+8h]
  __int64 v18; // [rsp+120h] [rbp+18h]
  __int64 v19; // [rsp+128h] [rbp+20h]
  __int64 v20; // [rsp+130h] [rbp+28h]
  __int128 v21; // [rsp+138h] [rbp+30h]
  __m128i v22; // [rsp+148h] [rbp+40h]
  __int64 v23; // [rsp+158h] [rbp+50h]
  __int128 v24; // [rsp+160h] [rbp+58h]
  __int64 v25; // [rsp+170h] [rbp+68h]
  __int64 v26; // [rsp+178h] [rbp+70h]
  __int64 v27; // [rsp+180h] [rbp+78h]
  __int128 v28; // [rsp+188h] [rbp+80h]
  __m128i v29; // [rsp+198h] [rbp+90h]
  __int64 v30; // [rsp+1A8h] [rbp+A0h]
  __int128 v31; // [rsp+1B0h] [rbp+A8h]
  __int64 v32; // [rsp+1C0h] [rbp+B8h]
  __int64 v33; // [rsp+1C8h] [rbp+C0h]
  __int64 v34; // [rsp+1D0h] [rbp+C8h]

  wil::reg::try_get_value<std::wstring>((__int64)v7, HKEY_CURRENT_USER);
  wil::reg::try_get_value<std::wstring>((__int64)v5, HKEY_CURRENT_USER);
  if ( !v6
    || !v8
    || !std::wstring::_Equal((__int64)v7, (__int64)L"App")
    && (!v8 || !std::wstring::_Equal((__int64)v7, (__int64)L"AppEnforcedByPolicy")) )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                  (__int64)this + 568,
                  (__int64 *)&v4)
             + 283) = 1;
    tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v4);
    v10 = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v10) = 0;
    v12 = 0LL;
    v13 = si128;
    LOWORD(v12) = 0;
    v14 = 0LL;
    v15 = si128;
    LOWORD(v14) = 0;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 7LL;
    LOWORD(v17) = 0;
    v20 = 0LL;
    v21 = 0LL;
    v22 = si128;
    LOWORD(v21) = 0;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 7LL;
    LOWORD(v24) = 0;
    v27 = 0LL;
    v28 = 0LL;
    v29 = si128;
    LOWORD(v28) = 0;
    v30 = 0LL;
    v34 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 7LL;
    LOWORD(v31) = 0;
    TargetAppExtensionDetails::operator=((__int64)this + 208, (__int64)&v10);
    TargetAppExtensionDetails::~TargetAppExtensionDetails((TargetAppExtensionDetails *)&v10);
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 28) )
    goto LABEL_9;
  if ( !v6 )
    goto LABEL_13;
  if ( std::operator!=<unsigned short>(v5, (const wchar_t *)this + 104) )
  {
LABEL_9:
    if ( v6 )
    {
      v2 = std::wstring::wstring((__int64)v9, v5);
      TargetAppExtensionDetails = CopilotHotkeyManager::GetTargetAppExtensionDetails(this, &v10, v2);
      TargetAppExtensionDetails::operator=((__int64)this + 208, (__int64)TargetAppExtensionDetails);
      TargetAppExtensionDetails::~TargetAppExtensionDetails((TargetAppExtensionDetails *)&v10);
      CopilotHotkeyManager::ClearFastpathRegistrationProperties(this);
      goto LABEL_12;
    }
LABEL_13:
    std::_Throw_bad_optional_access();
  }
LABEL_12:
  std::_Optional_destruct_base<std::wstring,0>::~_Optional_destruct_base<std::wstring,0>((__int64)v5);
  std::_Optional_destruct_base<std::wstring,0>::~_Optional_destruct_base<std::wstring,0>((__int64)v7);
}
