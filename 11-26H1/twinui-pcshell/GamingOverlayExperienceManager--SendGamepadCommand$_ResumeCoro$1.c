/*
 * XREFs of GamingOverlayExperienceManager::SendGamepadCommand$_ResumeCoro$1 @ 0x180353120
 * Callers:
 *     ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@AEBUAPP_LOCAL_DEVICE_ID@@W4SystemButtons@Gaming@Internal@Windows@@W4GamepadButtonEventKind@@@Z @ 0x1803536AC (-SendGamepadCommand@GamingOverlayExperienceManager@@AEAA-AUfire_and_forget@winrt@@AEBUAPP_LOCAL_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180030428 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180033DA8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$com_query@VGamingOverlayExperienceManager@@PEAV1@@wil@@YA?AV?$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@0@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033F410 (--$com_query@VGamingOverlayExperienceManager@@PEAV1@@wil@@YA-AV-$com_ptr_t@VGamingOverlayExperie.c)
 *     ??1?$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180342034 (--1-$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x180347394 (-GameBarSupportsGamepadCommands@GamingOverlayExperienceManager@@AEAA_NXZ.c)
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x18034D490 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59192315@@@details@wil@@QEAA_NXZ @ 0x180358A0C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59192315@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x180358B40 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprove_ea_180358B40.c)
 *     ?IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ @ 0x180361628 (-IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ.c)
 *     ?ShouldNexusLongPressOpenTaskSwitcher@NexusPolicyManager@@QEBA_NXZ @ 0x180361958 (-ShouldNexusLongPressOpenTaskSwitcher@NexusPolicyManager@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
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
  const WCHAR *v10; // rbx
  NexusPolicyManager *v11; // rcx
  __int64 v12; // rdi
  int (__fastcall *v13)(__int64, SID *, GUID *, char *); // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  int (__fastcall *v17)(__int64, SID *, GUID *, char *); // rbx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned __int64 v22; // r9
  __int64 v23; // r10
  unsigned __int8 v24; // cl
  const WCHAR *v25; // rdx
  int v26; // eax
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_54;
      case 2:
        *((_QWORD *)a1 + 2) = 0LL;
        v2 = *((_QWORD *)a1 + 31);
        *((_QWORD *)a1 + 3) = v2;
        wil::com_query<GamingOverlayExperienceManager,GamingOverlayExperienceManager *>(
          (_QWORD *)a1 + 2,
          (volatile int *)a1 + 6);
        if ( !GamingOverlayExperienceManager::GameBarSupportsGamepadCommands((GamingOverlayExperienceManager *)v2) )
          goto LABEL_53;
        v3 = *((_DWORD *)a1 + 66);
        if ( v3 != 2 )
        {
          if ( v3 != 1 )
            goto LABEL_53;
          v20 = *((_DWORD *)a1 + 67);
          if ( v20 )
          {
            if ( v20 == 1 )
            {
              v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_SHARE_LONGPRESS&source=GbEm";
            }
            else
            {
              if ( v20 != 2 )
                goto LABEL_53;
              v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_SHARE_DOUBLEPRESS&source=GbEm";
            }
          }
          else
          {
            v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_SHARE_SHORTPRESS&source=GbEm";
          }
          goto LABEL_43;
        }
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
          goto LABEL_12;
        *((_QWORD *)a1 + 4) = 0LL;
        v4 = *(_QWORD *)(v2 + 448);
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
            v9 = *((_DWORD *)a1 + 67);
            switch ( v9 )
            {
              case 0:
                if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl)
                  || !(unsigned int)IsGamingFullScreenExperienceActive()
                  || !NexusPolicyManager::IsLegacyNexusEnabled(*(NexusPolicyManager **)(v2 + 1032)) )
                {
                  v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_NEXUS_SHORTPRESS&source=GbEm";
                  break;
                }
LABEL_53:
                wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>((__int64 *)a1 + 2);
                goto LABEL_54;
              case 1:
                if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
                {
                  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59192315>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59192315>::GetImpl'::`2'::impl) )
                  {
                    *((_QWORD *)a1 + 6) = 0LL;
                    v16 = *(_QWORD *)(v2 + 448);
                    v17 = *(int (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v16 + 24LL);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 6);
                    if ( v17(v16, &SID_AllUpView, &GUID_e053969d_e07d_482d_ae3b_17d1f01bf1ad, a1 + 48) >= 0 )
                    {
                      v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 432) + 24LL))(*(_QWORD *)(v2 + 432));
                      if ( v18 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x16AD,
                          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                          (const char *)(unsigned int)v18);
                      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 6) + 24LL))(
                              *((_QWORD *)a1 + 6),
                              0LL,
                              0LL);
                      if ( v19 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x16AE,
                          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                          (const char *)(unsigned int)v19);
                    }
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 6);
                    wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>((__int64 *)a1 + 2);
                    goto LABEL_54;
                  }
                  if ( NexusPolicyManager::ShouldNexusLongPressOpenTaskSwitcher(v11) )
                  {
                    *((_QWORD *)a1 + 5) = 0LL;
                    v12 = *(_QWORD *)(v2 + 448);
                    v13 = *(int (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v12 + 24LL);
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 5);
                    if ( v13(v12, &SID_AllUpView, &GUID_e053969d_e07d_482d_ae3b_17d1f01bf1ad, a1 + 40) >= 0 )
                    {
                      v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 432) + 24LL))(*(_QWORD *)(v2 + 432));
                      if ( v14 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x169E,
                          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                          (const char *)(unsigned int)v14);
                      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)a1 + 5) + 24LL))(
                              *((_QWORD *)a1 + 5),
                              0LL,
                              0LL);
                      if ( v15 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x169F,
                          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                          (const char *)(unsigned int)v15);
                    }
                    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1 + 5);
                    wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>((__int64 *)a1 + 2);
LABEL_54:
                    if ( *((_WORD *)a1 + 5) )
                      operator delete(a1, (const struct std::nothrow_t *)0x110);
                    return;
                  }
                }
                v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_NEXUS_LONGPRESS&source=GbEm";
                break;
              case 2:
                v10 = L"ms-gamebar://hotkey?gamepadCommand=GPCMD_NEXUS_DOUBLEPRESS&source=GbEm";
                break;
              default:
                goto LABEL_53;
            }
LABEL_43:
            if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
            {
              memset_0(a1 + 64, 0, 0x82uLL);
              v22 = 0LL;
              v23 = *((_QWORD *)a1 + 32);
              do
              {
                v24 = *(_BYTE *)(v23 + v22) & 0xF;
                *(_WORD *)&a1[4 * v22 + 64] = (*(_BYTE *)(v23 + v22) >> 4)
                                            + ((unsigned __int8)(*(_BYTE *)(v23 + v22) >> 4) < 0xAu ? 48 : 55);
                *(_WORD *)&a1[4 * v22++ + 66] = v24 + (v24 < 0xAu ? 48 : 55);
              }
              while ( v22 < 0x20 );
              std::wstring::wstring((__int64)(a1 + 208), (__int64)v10);
              std::wstring::append((__int64)(a1 + 208), (__int64)L"&deviceId=");
              std::wstring::append((__int64)(a1 + 208), (__int64)(a1 + 64));
              v25 = (const WCHAR *)(a1 + 208);
              if ( *((_QWORD *)a1 + 29) > 7uLL )
                v25 = (const WCHAR *)*((_QWORD *)a1 + 26);
              v26 = GamingOverlayExperienceManager::LaunchGameBar((GamingOverlayExperienceManager *)v2, v25, 7u);
              if ( v26 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x16E4,
                  (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                  (const char *)(unsigned int)v26);
              std::wstring::_Tidy_deallocate((_QWORD *)a1 + 26);
            }
            else
            {
              v21 = GamingOverlayExperienceManager::LaunchGameBar((GamingOverlayExperienceManager *)v2, v10, 7u);
              if ( v21 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x16E8,
                  (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                  (const char *)(unsigned int)v21);
            }
            goto LABEL_53;
          }
          v8 = 5748LL;
        }
        else
        {
          v8 = 5746LL;
        }
        wil::details::in1diag3::_Log_Hr(
          v7,
          (void *)v8,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
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
