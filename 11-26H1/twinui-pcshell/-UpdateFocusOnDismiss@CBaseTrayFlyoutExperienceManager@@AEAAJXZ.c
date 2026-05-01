/*
 * XREFs of ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803C6000
 * Callers:
 *     ?OnViewDestroying@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C40D0 (-OnViewDestroying@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C4110 (-OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C1C60 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1800F5784 (-IsUserOOBEOrCredentialReset@@YA_NXZ.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x1800F5B04 (-IsUserOOBE@@YA_NXZ.c)
 *     ?IsFullscreenCXHRunning@@YA_NXZ @ 0x180172D1C (-IsFullscreenCXHRunning@@YA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x180297034 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsCredentialReset@@YA_NXZ @ 0x1802A8FB4 (-IsCredentialReset@@YA_NXZ.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C1740 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x180380B6C (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ??$TrayFlyoutLaunchedByWindow@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@SingleViewExperienceTelemetry@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1803C0DB8 (--$TrayFlyoutLaunchedByWindow@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Interna.c)
 *     _lambda_69e22cee808f699981016b3fdf3a4c95_::operator() @ 0x1803C175C (_lambda_69e22cee808f699981016b3fdf3a4c95_--operator().c)
 *     ?BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ @ 0x1803C1BC4 (-BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?IsOobeContinuation@@YA_NXZ @ 0x1803C2EFC (-IsOobeContinuation@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging@@@details@wil@@QEAA_NXZ @ 0x1803C65C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging@@@detai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBaseTrayFlyoutExperienceManager::UpdateFocusOnDismiss(CBaseTrayFlyoutExperienceManager *this)
{
  __int64 *v2; // rbx
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v3; // rcx
  HWND ForegroundWindow; // r14
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, void *, GUID *, IUnknown **); // rbx
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, GUID *, GUID *, IUnknown **); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // r9d
  unsigned __int16 **v20; // r8
  TaskbarHelpers *v21; // rax
  HMONITOR v22; // rdx
  HWND TrayWindowForMonitor; // rax
  _OWORD *v24; // rcx
  bool v25; // al
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, struct HWND__ *, GUID *, IUnknown **); // rbx
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  __int64 v30; // rdx
  const char *v31; // r9
  IUnknown *pUnk; // [rsp+30h] [rbp-D0h] BYREF
  struct HWND__ v33[4]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h]
  tagINPUT pInputs; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+78h] [rbp-88h]
  __int16 v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+A0h] [rbp-60h]
  __int16 v39; // [rsp+A8h] [rbp-58h]
  int v40; // [rsp+ACh] [rbp-54h]
  int v41; // [rsp+C8h] [rbp-38h]
  __int16 v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+D4h] [rbp-2Ch]
  WCHAR ClassName[56]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v2 = (__int64 *)((char *)this + 448);
  *((_QWORD *)this + 56) = 0LL;
  v3 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)*((_QWORD *)this + 57);
  if ( v3 )
  {
    CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(v3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2 + 1);
  }
  ForegroundWindow = GetForegroundWindow();
  if ( !GetClassNameW(ForegroundWindow, ClassName, 50)
    || CompareStringOrdinal(ClassName, -1, L"Shell_TrayWnd", -1, 1) != 2
    && CompareStringOrdinal(ClassName, -1, L"Shell_SecondaryTrayWnd", -1, 1) != 2 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Scoobe_ShellHostDebugging>::GetImpl'::`2'::impl)
      && (IsUserOOBE() || IsFullscreenCXHRunning()) )
    {
      pUnk = 0LL;
      v6 = *((_QWORD *)this + 47);
      v7 = *(__int64 (__fastcall **)(__int64, void *, GUID *, IUnknown **))(*(_QWORD *)v6 + 24LL);
      Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&pUnk);
      v8 = v7(v6, &unk_1807A38B8, &GUID_1b69f343_1af8_43fb_bfe3_b27c09b74d0b, &pUnk);
      if ( v8 >= 0 )
      {
        if ( pUnk )
        {
          *(_QWORD *)&v33[0].unused = 0LL;
          ((void (__fastcall *)(IUnknown *, struct HWND__ *))pUnk->lpVtbl[2].QueryInterface)(pUnk, v33);
          if ( *(_QWORD *)&v33[0].unused )
          {
            v14 = ((__int64 (__fastcall *)(IUnknown *))pUnk->lpVtbl[2].AddRef)(pUnk);
            if ( v14 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x3AC,
                (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
                (const char *)(unsigned int)v14);
            Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&pUnk);
            return 0LL;
          }
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3A5,
          (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
          (const char *)(unsigned int)v8);
      }
      Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&pUnk);
    }
    if ( ForegroundWindow != (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
                                     *((ExperienceManagerUtils **)this + 12),
                                     v5) )
      goto LABEL_45;
    LODWORD(pUnk) = 0;
    *(_QWORD *)&v33[0].unused = this;
    *(_QWORD *)&v33[2].unused = &pUnk;
    lambda_69e22cee808f699981016b3fdf3a4c95_::operator()(v33);
    if ( (_DWORD)pUnk )
    {
      pUnk = 0LL;
      v9 = *((_QWORD *)this + 47);
      v10 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, IUnknown **))(*(_QWORD *)v9 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pUnk);
      v11 = v10(v9, &IID_IRealmActivationHistory, &GUID_67136e8b_6914_43f0_8f25_05619927d22e, &pUnk);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 957LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pUnk);
        return v12;
      }
      v11 = ((__int64 (__fastcall *)(IUnknown *, __int64))pUnk->lpVtbl[1].QueryInterface)(pUnk, 0xFFFFLL);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 958LL;
        goto LABEL_24;
      }
      goto LABEL_44;
    }
    if ( !IsUserOOBEOrCredentialReset() && !IsFullscreenCXHRunning() )
    {
      if ( IsWindow(*((HWND *)this + 59)) )
      {
        SetForegroundWindow(*((HWND *)this + 59));
        memset(v33, 0, sizeof(v33));
        v34 = 0LL;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v33);
        *(_QWORD *)&v33[2].unused = -1LL;
        v34 = -1LL;
        if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow(*((CallerIdentity **)this + 59), v33, v20) >= 0 )
          SingleViewExperienceTelemetry::TrayFlyoutLaunchedByWindow<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &>((const WCHAR **)v33);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v33);
      }
      else
      {
        v21 = (TaskbarHelpers *)MonitorFromRect((LPCRECT)((char *)this + 392), 1u);
        TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v21, v22);
        SetForegroundWindow(TrayWindowForMonitor);
      }
      goto LABEL_45;
    }
    if ( IsCredentialReset(v17, v16, v18, v19) )
    {
      v24 = &unk_1807A38C8;
    }
    else
    {
      v25 = IsOobeContinuation();
      v24 = &unk_1807A38D8;
      if ( !v25 )
        v24 = &unk_1807A38B8;
    }
    *(_OWORD *)&v33[0].unused = *v24;
    pUnk = 0LL;
    v26 = *((_QWORD *)this + 47);
    v27 = *(__int64 (__fastcall **)(__int64, struct HWND__ *, GUID *, IUnknown **))(*(_QWORD *)v26 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pUnk);
    v28 = v27(v26, v33, &GUID_8f352570_5bb7_4d72_921f_6fb3f2611c71, &pUnk);
    v29 = retaddr;
    if ( v28 >= 0 )
    {
      CoAllowSetForegroundWindow(pUnk, 0LL);
      v28 = ((__int64 (__fastcall *)(IUnknown *))pUnk->lpVtbl[1].Release)(pUnk);
      v29 = retaddr;
      if ( v28 >= 0 )
        goto LABEL_42;
      v30 = 972LL;
    }
    else
    {
      v30 = 969LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v29,
      (void *)v30,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v28);
LABEL_42:
    memset_0(&pInputs, 0, 0xA0uLL);
    pInputs.type = 1;
    pInputs.ki.wVk = 16;
    v36 = 1;
    v37 = 9;
    v38 = 1;
    v39 = 9;
    v40 = 2;
    v41 = 1;
    v42 = 16;
    v43 = 2;
    if ( !SendInput(4u, &pInputs, 40) )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x3DF,
        (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
        v31);
LABEL_44:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pUnk);
LABEL_45:
    *((_QWORD *)this + 59) = 0LL;
    return 0LL;
  }
  CBaseTrayFlyoutExperienceManager::DebounceDetection::BlockImmediateReshow((CBaseTrayFlyoutExperienceManager::DebounceDetection *)v2);
  return 0LL;
}
