/*
 * XREFs of ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18016B850
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1804EE32C (-_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@.c)
 *     ?_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1804EE5B0 (-_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804EE670 (-_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804EEC3C (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  SurfaceHubPositioner *v4; // rsi
  int v5; // r8d
  int v6; // r8d
  int IsViewManaged; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(struct IApplicationView *, struct IUnknown **); // rbx
  int MonitorForLaunch; // eax
  struct IUnknown *v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct IUnknown *v15; // [rsp+40h] [rbp+10h] BYREF

  v4 = (SurfaceHubPositioner *)(a1 - 128);
  if ( !*(_BYTE *)(a1 - 128 + 576) )
    return 0LL;
  v5 = a3 - 7;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 7 )
        return 0LL;
      LOBYTE(v15) = 0;
      IsViewManaged = SurfaceHubPositioner::_IsViewManaged((SurfaceHubPositioner *)(a1 - 128), a2, (bool *)&v15);
      if ( IsViewManaged >= 0 )
      {
        if ( (_BYTE)v15 )
          SurfaceHubPositioner::_OnSizeConstraintsChanged(v4, a2);
        return 0LL;
      }
      v9 = 419LL;
      goto LABEL_12;
    }
  }
  LOBYTE(v15) = 0;
  IsViewManaged = SurfaceHubPositioner::_IsViewManaged((SurfaceHubPositioner *)(a1 - 128), a2, (bool *)&v15);
  if ( IsViewManaged < 0 )
  {
    v9 = 398LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)IsViewManaged);
    return (unsigned int)IsViewManaged;
  }
  if ( !(_BYTE)v15 )
    return 0LL;
  v13[0] = 0LL;
  v15 = 0LL;
  v11 = *(__int64 (__fastcall **)(struct IApplicationView *, struct IUnknown **))(*(_QWORD *)a2 + 80LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v13);
  MonitorForLaunch = v11(a2, v13);
  IsViewManaged = MonitorForLaunch;
  if ( MonitorForLaunch >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    MonitorForLaunch = SurfaceHubPositioner::_GetMonitorForLaunch(v4, a2, (struct IImmersiveMonitor **)&v15);
    IsViewManaged = MonitorForLaunch;
    if ( MonitorForLaunch >= 0 )
    {
      if ( !SHIsSameObject(v13[0], v15) )
        SurfaceHubPositioner::_SetDefaultLayout(v4, a2, 0);
      (*(void (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v13);
      return 0LL;
    }
    v10 = 404LL;
  }
  else
  {
    v10 = 403LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)MonitorForLaunch);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v13);
  return (unsigned int)IsViewManaged;
}
