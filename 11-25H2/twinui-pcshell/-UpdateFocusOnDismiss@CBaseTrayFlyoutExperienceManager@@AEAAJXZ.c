/*
 * XREFs of ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1803BCF74
 * Callers:
 *     ?OnViewDestroying@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803BAE40 (-OnViewDestroying@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803BAE80 (-OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002EB20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800B6C10 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1800EB774 (-IsUserOOBEOrCredentialReset@@YA_NXZ.c)
 *     ?IsFullscreenCXHRunning@@YA_NXZ @ 0x18017FD48 (-IsFullscreenCXHRunning@@YA_NXZ.c)
 *     ?IsCredentialReset@@YA_NXZ @ 0x1802B0E20 (-IsCredentialReset@@YA_NXZ.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802C9FB8 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x180378CB8 (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ??$TrayFlyoutLaunchedByWindow@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@SingleViewExperienceTelemetry@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x1803B74A4 (--$TrayFlyoutLaunchedByWindow@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Interna.c)
 *     _lambda_69e22cee808f699981016b3fdf3a4c95_::operator() @ 0x1803B7E34 (_lambda_69e22cee808f699981016b3fdf3a4c95_--operator().c)
 *     ?BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ @ 0x1803B8294 (-BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?IsOobeContinuation@@YA_NXZ @ 0x1803B9C5C (-IsOobeContinuation@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_OOBEFlyoutFocusFix@@@details@wil@@QEAA_NXZ @ 0x1803BD45C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_OOBEFlyoutFocusFix@@@details@wil@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBaseTrayFlyoutExperienceManager::UpdateFocusOnDismiss(CBaseTrayFlyoutExperienceManager *this)
{
  __int64 *v2; // rbx
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v3; // rcx
  HWND ForegroundWindow; // rdi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, GUID *, IUnknown **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // r9d
  unsigned __int16 **v16; // r8
  TaskbarHelpers *v17; // rax
  HMONITOR v18; // rdx
  HWND TrayWindowForMonitor; // rax
  _OWORD *v20; // rcx
  bool v21; // al
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, struct HWND__ *, GUID *, IUnknown **); // rbx
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rdx
  const char *v27; // r9
  IUnknown *pUnk; // [rsp+30h] [rbp-D0h] BYREF
  struct HWND__ v29[4]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h]
  tagINPUT pInputs; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+78h] [rbp-88h]
  __int16 v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+A0h] [rbp-60h]
  __int16 v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+ACh] [rbp-54h]
  int v37; // [rsp+C8h] [rbp-38h]
  __int16 v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D4h] [rbp-2Ch]
  WCHAR ClassName[56]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

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
    if ( ForegroundWindow != (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
                                     *((ExperienceManagerUtils **)this + 12),
                                     v5) )
    {
LABEL_35:
      *((_QWORD *)this + 59) = 0LL;
      return 0LL;
    }
    LODWORD(pUnk) = 0;
    *(_QWORD *)&v29[0].unused = this;
    *(_QWORD *)&v29[2].unused = &pUnk;
    lambda_69e22cee808f699981016b3fdf3a4c95_::operator()(v29);
    if ( (_DWORD)pUnk )
    {
      pUnk = 0LL;
      v6 = *((_QWORD *)this + 47);
      v7 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, IUnknown **))(*(_QWORD *)v6 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pUnk);
      v8 = v7(v6, &IID_IRealmActivationHistory, &GUID_67136e8b_6914_43f0_8f25_05619927d22e, &pUnk);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 937LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
          (const char *)(unsigned int)v8);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pUnk);
        return v9;
      }
      v8 = ((__int64 (__fastcall *)(IUnknown *, __int64))pUnk->lpVtbl[1].QueryInterface)(pUnk, 0xFFFFLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 938LL;
        goto LABEL_13;
      }
      goto LABEL_34;
    }
    if ( !IsUserOOBEOrCredentialReset() && !IsFullscreenCXHRunning() )
    {
      if ( IsWindow(*((HWND *)this + 59)) )
      {
        SetForegroundWindow(*((HWND *)this + 59));
        memset(v29, 0, sizeof(v29));
        v30 = 0LL;
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v29);
        *(_QWORD *)&v29[2].unused = -1LL;
        v30 = -1LL;
        if ( (int)CallerIdentity::GetImmersiveAppIdFromWindow(*((CallerIdentity **)this + 59), v29, v16) >= 0 )
          SingleViewExperienceTelemetry::TrayFlyoutLaunchedByWindow<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &>((const WCHAR **)v29);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v29);
      }
      else
      {
        v17 = (TaskbarHelpers *)MonitorFromRect((LPCRECT)((char *)this + 392), 1u);
        TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v17, v18);
        SetForegroundWindow(TrayWindowForMonitor);
      }
      goto LABEL_35;
    }
    if ( IsCredentialReset(v13, v12, v14, v15) )
    {
      v20 = &unk_1807784C8;
    }
    else
    {
      v21 = IsOobeContinuation();
      v20 = &unk_1807784B8;
      if ( !v21 )
        v20 = &unk_1807784A8;
    }
    *(_OWORD *)&v29[0].unused = *v20;
    pUnk = 0LL;
    v22 = *((_QWORD *)this + 47);
    v23 = *(__int64 (__fastcall **)(__int64, struct HWND__ *, GUID *, IUnknown **))(*(_QWORD *)v22 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pUnk);
    v24 = v23(v22, v29, &GUID_8f352570_5bb7_4d72_921f_6fb3f2611c71, &pUnk);
    v25 = retaddr;
    if ( v24 >= 0 )
    {
      CoAllowSetForegroundWindow(pUnk, 0LL);
      v24 = ((__int64 (__fastcall *)(IUnknown *))pUnk->lpVtbl[1].Release)(pUnk);
      v25 = retaddr;
      if ( v24 >= 0 )
      {
LABEL_31:
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_OOBEFlyoutFocusFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_OOBEFlyoutFocusFix>::GetImpl'::`2'::impl) )
        {
          memset_0(&pInputs, 0, 0xA0uLL);
          pInputs.type = 1;
          pInputs.ki.wVk = 16;
          v32 = 1;
          v33 = 9;
          v34 = 1;
          v35 = 9;
          v36 = 2;
          v37 = 1;
          v38 = 16;
          v39 = 2;
          if ( !SendInput(4u, &pInputs, 40) )
            wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x3CD,
              (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
              v27);
        }
LABEL_34:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&pUnk);
        goto LABEL_35;
      }
      v26 = 952LL;
    }
    else
    {
      v26 = 949LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v25,
      (void *)v26,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_31;
  }
  CBaseTrayFlyoutExperienceManager::DebounceDetection::BlockImmediateReshow((CBaseTrayFlyoutExperienceManager::DebounceDetection *)v2);
  return 0LL;
}
