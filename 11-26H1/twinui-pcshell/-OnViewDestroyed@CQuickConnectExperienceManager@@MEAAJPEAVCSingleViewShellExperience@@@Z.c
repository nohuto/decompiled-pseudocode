/*
 * XREFs of ?OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180392600
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001EE70 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1801FA7C8 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$ExperienceManager_OnViewDestroyed_Params@AEAU_GUID@@@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x18038F418 (--$ExperienceManager_OnViewDestroyed_Params@AEAU_GUID@@@ExperienceManager_OnViewDestroyed@QuickC.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803900EC (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1803900EC.c)
 *     ??1ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAA@XZ @ 0x1803905E8 (--1ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?ExperienceManager_OnViewDestroyed_ReleasedLifeTime@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x1803914EC (-ExperienceManager_OnViewDestroyed_ReleasedLifeTime@ExperienceManager_OnViewDestroyed@QuickConne.c)
 *     ?ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x18039153C (-ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation@ExperienceManage.c)
 *     ?ExperienceManager_OnViewDestroyed_UnregisteredLightDismiss@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x18039158C (-ExperienceManager_OnViewDestroyed_UnregisteredLightDismiss@ExperienceManager_OnViewDestroyed@Qu.c)
 *     ?StartActivity@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x180393910 (-StartActivity@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180393C80 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CQuickConnectExperienceManager::OnViewDestroyed(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v8[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v9[42]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v9,
    (__int64)"ExperienceManager_OnViewDestroyed");
  v9[0] = &QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::`vftable';
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::StartActivity((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v9);
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_Params<_GUID &>();
  SingleViewLightDismissHelper::UnregisterWithLightDismiss((CQuickConnectExperienceManager *)((char *)this + 232));
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_UnregisteredLightDismiss((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v9);
  *(_QWORD *)v8 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 3,
         (__int64 *)v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v8 + 88LL))(*(_QWORD *)v8, *((_QWORD *)this + 2));
    v5 = v4;
    if ( v4 >= 0 )
    {
      QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v9);
      *((_QWORD *)this + 2) = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
      QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_ReleasedLifeTime((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v9);
      wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v9);
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 650LL;
  }
  else
  {
    v6 = 649LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v8);
  QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::~ExperienceManager_OnViewDestroyed((QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *)v9);
  return v5;
}
