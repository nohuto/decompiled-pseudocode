/*
 * XREFs of ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x18006D540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabledPreCheck@?$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18006D750 (-__private_IsEnabledPreCheck@-$FeatureImpl@U__WilFeatureTraits_Feature_UseNewSearchAndCortanaApp.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@UIImmersiveLauncherInternal@@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@UIImmersiveLauncherInternal@@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18006E2C4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithS.c)
 *     ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1801BAEF0 (-GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlLauncher::PearlRectMayHaveChanged(XamlLauncher *this, HMONITOR a2)
{
  __int64 v4; // rcx
  HRESULT v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  void *v8; // rcx
  IUnknown *v10; // rcx
  void *v11; // rcx
  int CortanaVisibleMonitor; // edi
  __int64 v13; // rdx
  void *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  void *ppvOut; // [rsp+30h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 43);
  if ( !v4 )
    return 2147943568LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 120LL))(v4) )
  {
    ppvOut = 0LL;
    CortanaVisibleMonitor = XamlLauncher::GetCortanaVisibleMonitor(
                              (XamlLauncher *)((char *)this + 32),
                              (HMONITOR *)&ppvOut);
    if ( CortanaVisibleMonitor < 0 )
    {
      v13 = 545LL;
    }
    else
    {
      if ( a2 != ppvOut )
        goto LABEL_3;
      CortanaVisibleMonitor = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 152LL))(*((_QWORD *)this + 18));
      if ( CortanaVisibleMonitor >= 0 )
        goto LABEL_3;
      v13 = 548LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)CortanaVisibleMonitor);
    return (unsigned int)CortanaVisibleMonitor;
  }
LABEL_3:
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::__private_IsEnabledPreCheck(&`wil::Feature<__WilFeatureTraits_Feature_UseNewSearchAndCortanaApps>::GetImpl'::`2'::impl);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  ppvOut = 0LL;
  if ( !memcmp_0(&GUID_749f2714_937d_445e_9d22_666f49e7ff32, &SID_ImmersiveLauncher, 0x10uLL) )
  {
    v5 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer,IImmersiveLauncherInternal>>>(
           (char *)this - 32,
           &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
           &ppvOut);
  }
  else
  {
    v10 = (IUnknown *)*((_QWORD *)this - 2);
    if ( !v10 )
    {
      v6 = -2147467262;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22B,
        (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)v6);
      v11 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return v6;
    }
    v5 = IUnknown_QueryService(
           v10,
           &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
           &GUID_749f2714_937d_445e_9d22_666f49e7ff32,
           &ppvOut);
  }
  v6 = v5;
  if ( v5 < 0 )
    goto LABEL_12;
  v7 = (*(__int64 (__fastcall **)(void *, HMONITOR))(*(_QWORD *)ppvOut + 40LL))(ppvOut, a2);
  v6 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22C,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v7);
    v14 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return v6;
  }
  v8 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 0LL;
}
