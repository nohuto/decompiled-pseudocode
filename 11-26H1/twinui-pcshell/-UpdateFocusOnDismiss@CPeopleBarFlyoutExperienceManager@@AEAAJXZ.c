/*
 * XREFs of ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x1803829FC
 * Callers:
 *     ?OnViewDestroying@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180381A90 (-OnViewDestroying@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180381AD0 (-OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180074CE0 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _lambda_7bcbf056061a51ef99db996275205d7a_::operator() @ 0x18038067C (_lambda_7bcbf056061a51ef99db996275205d7a_--operator().c)
 *     ?BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x180380A04 (-BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x180380B6C (-Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::UpdateFocusOnDismiss(CPeopleBarFlyoutExperienceManager *this)
{
  __int64 *v2; // rbx
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v3; // rcx
  HWND ForegroundWindow; // rsi
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  HWND WindowW; // rax
  __int64 v14; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v15[3]; // [rsp+40h] [rbp-41h] BYREF
  WCHAR ClassName[56]; // [rsp+58h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v2 = (__int64 *)((char *)this + 680);
  *((_QWORD *)this + 85) = 0LL;
  v3 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)*((_QWORD *)this + 86);
  if ( v3 )
  {
    CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(v3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2 + 1);
  }
  ForegroundWindow = GetForegroundWindow();
  if ( GetClassNameW(ForegroundWindow, ClassName, 50)
    && (CompareStringOrdinal(ClassName, -1, L"Shell_TrayWnd", -1, 1) == 2
     || CompareStringOrdinal(ClassName, -1, L"Shell_SecondaryTrayWnd", -1, 1) == 2) )
  {
    CPeopleBarFlyoutExperienceManager::DebounceDetection::BlockImmediateReshow((CPeopleBarFlyoutExperienceManager::DebounceDetection *)v2);
    return 0LL;
  }
  if ( ForegroundWindow != (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
                                   *((ExperienceManagerUtils **)this + 17),
                                   v5) )
    return 0LL;
  LODWORD(v14) = 0;
  v7 = _lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
         v15,
         (__int64)this,
         (__int64)&v14);
  lambda_7bcbf056061a51ef99db996275205d7a_::operator()(v7);
  if ( (_DWORD)v14 )
  {
    v14 = 0LL;
    v8 = *((_QWORD *)this + 41);
    v9 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    v10 = v9(v8, &IID_IRealmActivationHistory, &GUID_67136e8b_6914_43f0_8f25_05619927d22e, &v14);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, 0xFFFFLL);
      v11 = v10;
      if ( v10 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
        return 0LL;
      }
      v12 = 807LL;
    }
    else
    {
      v12 = 806LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
  else
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    if ( SetForegroundWindow(WindowW) )
      return 0LL;
    v11 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x334,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)0x80004005LL);
  }
  return v11;
}
