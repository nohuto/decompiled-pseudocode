/*
 * XREFs of ?_RegisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ @ 0x1803A558C
 * Callers:
 *     ?_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ @ 0x1803A4E18 (-_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z@Z @ 0x18028DC38 (--0_lambda_2a327ee47ed75e02b1e43d19de60d1c4_@@QEAA@AEBQEAVJointResize@@AEBQ81@EAAJPEBUIWindowMan.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@V_lambda_7fc57b13763db53279fad6e8afb57678_@@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@01@$$QEAV_lambda_7fc57b13763db53279fad6e8afb57678_@@@Z @ 0x18036FB5C (--$Callback@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ??$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@SearchAppExperienceManager@@AEAAJAEAV?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1803A2894 (--$_GetViewWrapperAs@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@SearchAppEx.c)
 *     ?_UnregisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ @ 0x1803A58E8 (-_UnregisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppExperienceManager::_RegisterViewPresentationChanged(SearchAppExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v8[32]; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  SearchAppExperienceManager *v10; // [rsp+68h] [rbp+18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF

  v2 = SearchAppExperienceManager::_UnregisterViewPresentationChanged(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v11 = 0LL;
    v4 = SearchAppExperienceManager::_GetViewWrapperAs<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64)this,
           &v11);
    v3 = v4;
    if ( v4 >= 0 )
    {
      *(_QWORD *)&v7 = SearchAppExperienceManager::_OnClientWindowReadyForPresentationChangedHandler;
      DWORD2(v7) = 0;
      v10 = this;
      _lambda_2a327ee47ed75e02b1e43d19de60d1c4_::_lambda_2a327ee47ed75e02b1e43d19de60d1c4_((__int64)v8, &v10, &v7);
      Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_7fc57b13763db53279fad6e8afb57678_>(&v10);
      v5 = (*(__int64 (__fastcall **)(__int64, SearchAppExperienceManager *, char *))(*(_QWORD *)v11 + 80LL))(
             v11,
             v10,
             (char *)this + 448);
      v3 = v5;
      if ( v5 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
        v3 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C1,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BF,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4BC,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  return v3;
}
