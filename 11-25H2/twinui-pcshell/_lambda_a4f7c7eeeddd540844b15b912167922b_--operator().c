/*
 * XREFs of _lambda_a4f7c7eeeddd540844b15b912167922b_::operator() @ 0x180569618
 * Callers:
 *     ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x180569D84 (-ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@XZ @ 0x180192E88 (--DIterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ??0PropertyStoreHelper@wil@@QEAA@PEAUIPropertyStore@@@Z @ 0x1802C7AF4 (--0PropertyStoreHelper@wil@@QEAA@PEAUIPropertyStore@@@Z.c)
 *     ??$DoesFullScreenWindowDisableTouch@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z @ 0x1802CC248 (--$DoesFullScreenWindowDisableTouch@AEA_N@TouchEdgeGestureTelemetry@@SAXAEA_N@Z.c)
 *     ??$GetAsBoolean@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEA_N@Z @ 0x180566D6C (--$GetAsBoolean@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpr.c)
 *     ?DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z @ 0x180567614 (-DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@wil@@QEAA_NXZ @ 0x180568164 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SuppressTouchGestures@@@details@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall lambda_a4f7c7eeeddd540844b15b912167922b_::operator()(_QWORD *a1)
{
  bool DoesMonitorSuppressGestures; // di
  IUnknown *v2; // rbx
  int v3; // eax
  int v4; // eax
  HWND hwnd; // [rsp+20h] [rbp-40h] BYREF
  IUnknown *punk; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8[2]; // [rsp+30h] [rbp-30h] BYREF
  PROPERTYKEY v9; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  bool v11; // [rsp+80h] [rbp+20h] BYREF
  int v12; // [rsp+88h] [rbp+28h] BYREF
  void *ppvOut; // [rsp+90h] [rbp+30h] BYREF
  void *ppv; // [rsp+98h] [rbp+38h] BYREF

  DoesMonitorSuppressGestures = 0;
  v11 = 0;
  details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::operator*(
    *a1 + 96LL,
    (__int64 *)&punk);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SuppressTouchGestures>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SuppressTouchGestures>::GetImpl'::`2'::impl) )
  {
    v2 = punk;
    DoesMonitorSuppressGestures = TouchGestureHelper::DoesMonitorSuppressGestures(punk);
    v11 = DoesMonitorSuppressGestures;
  }
  else
  {
    ppvOut = 0LL;
    v2 = punk;
    if ( IUnknown_QueryService(punk, &IID_IRudeWindowManager, &GUID_d29c946b_4f1c_425a_bb5b_d4e2e6e2993c, &ppvOut) >= 0 )
    {
      v12 = 0;
      v3 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 40LL))(ppvOut, &v12);
      if ( v3 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x12D,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
          (const char *)(unsigned int)v3,
          (int)hwnd);
      if ( v12 )
      {
        hwnd = 0LL;
        v4 = (*(__int64 (__fastcall **)(void *, HWND *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, &hwnd);
        if ( v4 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x131,
            (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
            (const char *)(unsigned int)v4,
            (int)hwnd);
        if ( !(unsigned int)IsShellManagedWindow(hwnd) )
        {
          ppv = 0LL;
          if ( SHGetPropertyStoreForWindow(hwnd, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, &ppv) >= 0 )
          {
            wil::PropertyStoreHelper::PropertyStoreHelper((wil::PropertyStoreHelper *)v8, (struct IPropertyStore *)ppv);
            v9 = PKEY_EdgeGesture_DisableTouchWhenFullscreen;
            wil::PropertyStoreHelperBase<IPropertyStore>::GetAsBoolean<_tagpropertykey>(v8, (__int128 *)&v9, &v11);
            Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(v8);
            DoesMonitorSuppressGestures = v11;
          }
          if ( ppv )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&ppv);
        }
      }
    }
    if ( ppvOut )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&ppvOut);
  }
  TouchEdgeGestureTelemetry::DoesFullScreenWindowDisableTouch<bool &>((char *)&v11);
  if ( v2 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&punk);
  return DoesMonitorSuppressGestures;
}
