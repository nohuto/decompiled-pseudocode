/*
 * XREFs of GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x18034EAD0
 * Callers:
 *     GamingOverlayExperienceManager::SendGamepadCommand$_InitCoro$2 @ 0x18034EA4C (GamingOverlayExperienceManager--SendGamepadCommand$_InitCoro$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800287E0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$com_query@VGamingOverlayExperienceManager@@PEAV1@@wil@@YA?AV?$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@0@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033F4D0 (--$com_query@VGamingOverlayExperienceManager@@PEAV1@@wil@@YA-AV-$com_ptr_t@VGamingOverlayExperie.c)
 *     ??1?$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18034113C (--1-$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x1803446E8 (-GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180349B9C (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x180352AF8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@detai.c)
 *     ?IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ @ 0x18035ACB8 (-IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall GamingOverlayExperienceManager::SendGamepadCommand__ResumeCoro_1(char *a1)
{
  __int64 v2; // r15
  int v3; // eax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, SID *, GUID *, char *); // rbx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  wchar_t *v10; // rbx
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, SID *, GUID *, char *); // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // r9
  unsigned __int8 v18; // r8
  unsigned __int64 v19; // r8
  const WCHAR *v20; // rdx
  int v21; // eax
  int v22; // eax
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_48;
      case 2:
        *((_QWORD *)a1 + 2) = 0LL;
        v2 = *(_QWORD *)(a1 + 225);
        *((_QWORD *)a1 + 3) = v2;
        wil::com_query<GamingOverlayExperienceManager,GamingOverlayExperienceManager *>(
          (__int64 *)a1 + 2,
          (__int64 *)a1 + 3);
        if ( !GamingOverlayExperienceManager::GameBarSupportsGamepadCommands((GamingOverlayExperienceManager *)v2) )
          goto LABEL_47;
        v3 = *(_DWORD *)(a1 + 241);
        if ( v3 != 2 )
        {
          if ( v3 != 1 )
            goto LABEL_47;
          v15 = *(_DWORD *)(a1 + 245);
          if ( v15 )
          {
            if ( v15 == 1 )
            {
              v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_SHARE_LONGPRESS&source=GbEm";
            }
            else
            {
              if ( v15 != 2 )
                goto LABEL_47;
              v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_SHARE_DOUBLEPRESS&source=GbEm";
            }
          }
          else
          {
            v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_SHARE_SHORTPRESS&source=GbEm";
          }
          goto LABEL_35;
        }
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
          goto LABEL_12;
        *((_QWORD *)a1 + 4) = 0LL;
        v4 = *(_QWORD *)(v2 + 408);
        v5 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v4 + 24LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 4);
        v6 = v5(v4, &SID_ImmersiveLauncher, &GUID_d8d60399_a0f1_f987_5551_321fd1b49864, a1 + 32);
        v7 = retaddr;
        if ( v6 >= 0 )
        {
          v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 4) + 40LL))(*((_QWORD *)a1 + 4), 5LL);
          v7 = retaddr;
          if ( v6 >= 0 )
          {
LABEL_11:
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 4);
LABEL_12:
            v9 = *(_DWORD *)(a1 + 245);
            switch ( v9 )
            {
              case 0:
                if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl)
                  || !(unsigned int)IsGamingFullScreenExperienceActive()
                  || !NexusPolicyManager::IsLegacyNexusEnabled(*(NexusPolicyManager **)(v2 + 968)) )
                {
                  v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_NEXUS_SHORTPRESS&source=GbEm";
                  break;
                }
LABEL_47:
                wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>((__int64 *)a1 + 2);
                goto LABEL_48;
              case 1:
                if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
                {
                  *((_QWORD *)a1 + 5) = 0LL;
                  v11 = *(_QWORD *)(v2 + 408);
                  v12 = *(int (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v11 + 24LL);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 5);
                  if ( v12(v11, &SID_AllUpView, &GUID_e053969d_e07d_482d_ae3b_17d1f01bf1ad, a1 + 40) >= 0 )
                  {
                    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 392) + 24LL))(*(_QWORD *)(v2 + 392));
                    if ( v13 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x144A,
                        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
                        (const char *)(unsigned int)v13);
                    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 5) + 24LL))(
                            *((_QWORD *)a1 + 5),
                            0LL,
                            0LL);
                    if ( v14 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x144B,
                        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
                        (const char *)(unsigned int)v14);
                  }
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 5);
                  wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>((__int64 *)a1 + 2);
LABEL_48:
                  if ( *((_WORD *)a1 + 5) )
                    operator delete(a1, (const struct std::nothrow_t *)0x100);
                  return;
                }
                v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_NEXUS_LONGPRESS&source=GbEm";
                break;
              case 2:
                v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_NEXUS_DOUBLEPRESS&source=GbEm";
                break;
              default:
                goto LABEL_47;
            }
LABEL_35:
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
            {
              memset_0(a1 + 48, 0, 0x82uLL);
              v16 = 0LL;
              v17 = *(_QWORD *)(a1 + 233);
              do
              {
                v18 = *(_BYTE *)(v17 + v16) & 0xF;
                *(_WORD *)&a1[4 * v16 + 48] = (*(_BYTE *)(v17 + v16) >> 4)
                                            + ((unsigned __int8)(*(_BYTE *)(v17 + v16) >> 4) < 0xAu ? 48 : 55);
                *(_WORD *)&a1[4 * v16++ + 50] = v18 + (v18 < 0xAu ? 48 : 55);
              }
              while ( v16 < 0x20 );
              std::wstring::wstring((char **)a1 + 24, v10);
              std::wstring::append((_QWORD *)a1 + 24, L"&deviceId=", 0xAuLL);
              v19 = -1LL;
              do
                ++v19;
              while ( *(_WORD *)&a1[2 * v19 + 48] );
              std::wstring::append((_QWORD *)a1 + 24, a1 + 48, v19);
              v20 = (const WCHAR *)(a1 + 192);
              if ( *((_QWORD *)a1 + 27) > 7uLL )
                v20 = (const WCHAR *)*((_QWORD *)a1 + 24);
              v21 = GamingOverlayExperienceManager::LaunchGameBar((GamingOverlayExperienceManager *)v2, v20, 7u);
              if ( v21 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1480,
                  (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
                  (const char *)(unsigned int)v21);
              std::wstring::_Tidy_deallocate((void **)a1 + 24);
            }
            else
            {
              v22 = GamingOverlayExperienceManager::LaunchGameBar((GamingOverlayExperienceManager *)v2, v10, 7u);
              if ( v22 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x1484,
                  (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
                  (const char *)(unsigned int)v22);
            }
            goto LABEL_47;
          }
          v8 = 5156LL;
        }
        else
        {
          v8 = 5154LL;
        }
        wil::details::in1diag3::_Log_Hr(
          v7,
          (void *)v8,
          (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v6);
        goto LABEL_11;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
