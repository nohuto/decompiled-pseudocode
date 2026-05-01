/*
 * XREFs of ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x1804E8130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18020E70C (-SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Founda.c)
 *     ?IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802A9B30 (-IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ??$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@AEAV?$optional@H@9@AEA_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VDelayedTileActivationCallSite@@@12@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAUHWND__@@AEAW4IAM_DESKTOP_SWITCH_OPTION@@AEAV?$optional@_N@std@@AEAV?$optional@H@std@@AEA_N@Z @ 0x1804E7C74 (--$Make@VDelayedTileActivationCallSite@@PEAUIPropertySet@Collections@Foundation@Windows@@AEAPEAU.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@UIAppActivationUIInfo@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1804E8BC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueS.c)
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x1806804B0 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDelayedTileActivation::ActivateApp(
        CDelayedTileActivation *this,
        struct IImmersiveMonitor *a2,
        struct ISplashScreen *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int Instance; // eax
  struct Windows::Foundation::Collections::IPropertySet *v8; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r9
  IUnknown *v12; // rbx
  HRESULT v13; // eax
  HRESULT v14; // esi
  __int64 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  IUnknown *v18; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v20; // [rsp+88h] [rbp+28h] BYREF
  IUnknown *punk; // [rsp+98h] [rbp+38h] BYREF

  v16 = 0LL;
  if ( !a2
    || (v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v16),
        v6 = v5,
        v5 >= 0) )
  {
    punk = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
    Instance = CoCreateInstance(
                 &CLSID_ApplicationActivationManager,
                 0LL,
                 1u,
                 &GUID_54e4c428_d1d4_47d4_ade6_46c829114a7d,
                 (LPVOID *)&punk);
    v6 = Instance;
    if ( Instance < 0 )
    {
      v10 = 184LL;
LABEL_11:
      v11 = (unsigned int)Instance;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)v11);
LABEL_21:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
      return v6;
    }
    if ( *((_QWORD *)this + 17)
      || !ViewSizePreferenceHelpers::IsPropertySetEmpty(
            *((__int64 (__fastcall ****)(ViewSizePreferenceHelpers *, GUID *, __int64 *))this + 16),
            v8)
      || *((_BYTE *)this + 149) )
    {
      Instance = ViewSizePreferenceHelpers::SetViewValueSet(
                   (__int64 (__fastcall ***)(ViewSizePreferenceHelpers *, GUID *, __int64 *))punk,
                   *((struct IUnknown **)this + 16),
                   v9);
      v6 = Instance;
      if ( Instance < 0 )
      {
        v10 = 189LL;
        goto LABEL_11;
      }
      v17 = *((_QWORD *)this + 16);
      Microsoft::WRL::Details::Make<DelayedTileActivationCallSite,Windows::Foundation::Collections::IPropertySet *,HWND__ * &,enum IAM_DESKTOP_SWITCH_OPTION &,std::optional<bool> &,std::optional<int> &,bool &>(
        (__int64 *)&v18,
        &v17,
        (_QWORD *)this + 17,
        (unsigned int *)this + 36,
        (__int16 *)this + 74,
        (_QWORD *)this + 19,
        (char *)this + 160);
      v12 = v18;
      if ( !v18 )
      {
        v6 = -2147024882;
        v11 = 2147942414LL;
        v10 = 193LL;
        goto LABEL_12;
      }
      v13 = IUnknown_SetSite(punk, v18 + 1);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC2,
          (int)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>::Release(v12);
        v6 = v14;
        goto LABEL_21;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CopyToViewValueSetBase,IOleWindow,IShouldSwitchToDesktop,IAppActivationUIInfo>::Release(v12);
    }
    v20 = 0;
    Instance = ActivateApplicationForLaunchWithManager(
                 punk,
                 *((_QWORD *)this + 7),
                 *((_QWORD *)this + 10),
                 *((_QWORD *)this + 13),
                 *((_DWORD *)this + 12),
                 a3,
                 v16,
                 &v20);
    v6 = Instance;
    if ( Instance >= 0 )
    {
      v6 = 0;
      goto LABEL_21;
    }
    v10 = 199LL;
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB4,
    (int)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
