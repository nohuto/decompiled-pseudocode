/*
 * XREFs of ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18048DC98
 * Callers:
 *     _lambda_19713afaab0e793c65926cb0aea68e27_::operator() @ 0x18048BF9C (_lambda_19713afaab0e793c65926cb0aea68e27_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A7308 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x18027EED0 (-complete@-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@d.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x18028B464 (--B-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_24ba1d0144fdbdb30bf1c64e70acfff3___ @ 0x18048AC34 (Windows--Internal--ComTaskPool--QueueTask__lambda_24ba1d0144fdbdb30bf1c64e70acfff3___.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18048BC60 (--1-$test_data_control@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18048BC98 (--1-$test_watcher@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@1@XZ @ 0x18048BE78 (--C-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA-AV-.c)
 *     _lambda_f117f3ffe7121185524fa0618ecb49dc_::operator() @ 0x18048C3E8 (_lambda_f117f3ffe7121185524fa0618ecb49dc_--operator().c)
 *     ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x18048C904 (-ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ.c)
 *     ?SetNoActivate@AccessibilityExperienceManager@@UEAAJH@Z @ 0x18048D7C0 (-SetNoActivate@AccessibilityExperienceManager@@UEAAJH@Z.c)
 *     ?_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x18048DC18 (-_ChangeExperiencePropertiesForView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewIn.c)
 *     ?_GetMonitorScaleForWindow@AccessibilityExperienceManager@@CAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x18048E0E4 (-_GetMonitorScaleForWindow@AccessibilityExperienceManager@@CAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACT.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18048F0B4 (-start@-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@2@XZ @ 0x18048F110 (-watch_errors@-$tip_test@V-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@@tip.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall AccessibilityExperienceManager::_CreateModalExperienceAsync(AccessibilityExperienceManager *this)
{
  __int64 *v2; // rdi
  char v3; // bl
  HWND v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // ebx
  int MonitorScaleForWindow; // eax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64 *); // rdi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rdi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  const unsigned __int16 *v22; // r8
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  wil::details::in1diag3 *v28; // rcx
  int v29; // eax
  __int64 v31; // [rsp+20h] [rbp-49h] BYREF
  __int64 v32; // [rsp+28h] [rbp-41h] BYREF
  AccessibilityExperienceManager *v33; // [rsp+30h] [rbp-39h] BYREF
  char v34; // [rsp+38h] [rbp-31h]
  _BYTE v35[128]; // [rsp+40h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v37; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v38; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v39; // [rsp+E0h] [rbp+77h] BYREF
  void *v40; // [rsp+E8h] [rbp+7Fh] BYREF

  v2 = (__int64 *)((char *)this + 416);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool((__int64 *)this + 52) )
    tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::complete(v2);
  tip2::tip_test<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::start(
    v2,
    &v33);
  tip2::tip_test<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::watch_errors(
    v2,
    v35);
  v3 = *((_BYTE *)this + 464);
  *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::operator->(
                (__int64)v2,
                (__int64 *)&v40)
           + 272) = v3;
  tip2::test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::~test_data_control<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>(&v40);
  v5 = *((_QWORD *)this + 50);
  v32 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v38 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  if ( *((_QWORD *)this + 51) )
  {
    MonitorScaleForWindow = AccessibilityExperienceManager::_GetMonitorScaleForWindow(
                              v4,
                              (enum DEVICE_SCALE_FACTOR *)this + 99);
    if ( MonitorScaleForWindow < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2F8,
        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)MonitorScaleForWindow);
    v33 = this;
    v34 = 1;
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
    if ( v5 )
    {
      v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
      v11 = v10(v5, &v38);
      v6 = v11;
      if ( v11 >= 0 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 47, &v38);
        v12 = v38;
        v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 32LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
        v14 = v13(v12, &v37);
        v6 = v14;
        if ( v14 >= 0 )
        {
          v31 = 0LL;
          v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 24LL))(v37, &v31);
          v6 = v15;
          if ( v15 >= 0 )
          {
            AccessibilityExperienceManager::ExcludeWindowFromCapture(this);
            AccessibilityExperienceManager::SetNoActivate(
              (AccessibilityExperienceManager *)((char *)this + 144),
              *((_DWORD *)this + 117) == 0x8000000);
            v16 = v37;
            v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 144LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
            v18 = v17(v16, &v39);
            v6 = v18;
            if ( v18 >= 0 )
            {
              v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v39 + 88LL))(v39, 1023LL, 0LL);
              if ( v19 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x315,
                  (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                  (const char *)(unsigned int)v19);
              v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v39 + 48LL))(v39, 1LL, 1LL);
              if ( v20 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x316,
                  (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                  (const char *)(unsigned int)v20);
              v21 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v37 + 112LL))(v37, 255LL, 16LL);
              v6 = v21;
              if ( v21 >= 0 )
              {
                v23 = AccessibilityExperienceManager::_ChangeExperiencePropertiesForView(
                        this,
                        (struct IApplicationFrameWrapper **)this + 46,
                        v22);
                v6 = v23;
                if ( v23 >= 0 )
                {
                  v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 32LL))(v39, 0LL);
                  if ( v24 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x31E,
                      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                      (const char *)(unsigned int)v24);
                  v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v37 + 72LL))(
                          v37,
                          qword_1808DCE08,
                          0LL);
                  if ( v25 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0x321,
                      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                      (const char *)(unsigned int)v25);
                  v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 48LL))(v38, 2LL);
                  v6 = v26;
                  if ( v26 >= 0 )
                  {
                    v27 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 128LL))(v38, 1LL);
                    v28 = retaddr;
                    if ( v27 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x326,
                        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
                        (const char *)(unsigned int)v27);
                    v40 = this;
                    v29 = Windows::Internal::ComTaskPool::QueueTask__lambda_24ba1d0144fdbdb30bf1c64e70acfff3___(
                            (__int64)v28,
                            &v40);
                    v6 = v29;
                    if ( v29 >= 0 )
                    {
                      v6 = 0;
                      goto LABEL_39;
                    }
                    v8 = (unsigned int)v29;
                    v9 = 829LL;
                  }
                  else
                  {
                    v8 = (unsigned int)v26;
                    v9 = 804LL;
                  }
                }
                else
                {
                  v8 = (unsigned int)v23;
                  v9 = 796LL;
                }
              }
              else
              {
                v8 = (unsigned int)v21;
                v9 = 792LL;
              }
            }
            else
            {
              v8 = (unsigned int)v18;
              v9 = 787LL;
            }
          }
          else
          {
            v8 = (unsigned int)v15;
            v9 = 780LL;
          }
        }
        else
        {
          v8 = (unsigned int)v14;
          v9 = 777LL;
        }
      }
      else
      {
        v8 = (unsigned int)v11;
        v9 = 774LL;
      }
    }
    else
    {
      v6 = -2144927145;
      v8 = 2150040151LL;
      v9 = 773LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v8);
    v34 = 0;
    lambda_f117f3ffe7121185524fa0618ecb49dc_::operator()((__int64)&v33);
  }
  else
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F6,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)0x8007000ELL);
  }
LABEL_39:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v39);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v37);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  tip2::test_watcher<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>::~test_watcher<tip2::details::merged_data<_tip_EyeControllerAppLaunchTest,_tip_EyeControllerAppLaunchTest>>((__int64)v35);
  return v6;
}
