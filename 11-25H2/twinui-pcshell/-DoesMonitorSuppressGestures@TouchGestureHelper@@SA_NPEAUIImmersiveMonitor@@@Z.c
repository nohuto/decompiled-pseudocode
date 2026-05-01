/*
 * XREFs of ?DoesMonitorSuppressGestures@TouchGestureHelper@@SA_NPEAUIImmersiveMonitor@@@Z @ 0x180567614
 * Callers:
 *     ?GetSuppressedDisplayRects@TouchGestureComponent@@AEAA?AV?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@XZ @ 0x180567B9C (-GetSuppressedDisplayRects@TouchGestureComponent@@AEAA-AV-$vector@URect@Foundation@Windows@winrt.c)
 *     _lambda_a4f7c7eeeddd540844b15b912167922b_::operator() @ 0x180569618 (_lambda_a4f7c7eeeddd540844b15b912167922b_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008A7E0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0PropertyStoreHelper@wil@@QEAA@PEAUIPropertyStore@@@Z @ 0x1802C7AF4 (--0PropertyStoreHelper@wil@@QEAA@PEAUIPropertyStore@@@Z.c)
 *     ??$GetAsBoolean@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEA_N@Z @ 0x180566D6C (--$GetAsBoolean@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall TouchGestureHelper::DoesMonitorSuppressGestures(IUnknown *a1)
{
  bool v1; // bl
  void *ppv; // [rsp+20h] [rbp-40h] BYREF
  HWND hwnd; // [rsp+28h] [rbp-38h] BYREF
  __int64 v5[2]; // [rsp+30h] [rbp-30h] BYREF
  PROPERTYKEY v6; // [rsp+40h] [rbp-20h] BYREF
  bool v7; // [rsp+78h] [rbp+18h] BYREF
  int v8; // [rsp+80h] [rbp+20h] BYREF
  void *ppvOut; // [rsp+88h] [rbp+28h] BYREF

  v1 = 0;
  v7 = 0;
  ppvOut = 0LL;
  if ( IUnknown_QueryService(a1, &IID_IRudeWindowManager, &GUID_d29c946b_4f1c_425a_bb5b_d4e2e6e2993c, &ppvOut) >= 0 )
  {
    v8 = 0;
    if ( (*(int (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 40LL))(ppvOut, &v8) >= 0 )
    {
      if ( v8 )
      {
        hwnd = 0LL;
        if ( (*(int (__fastcall **)(void *, HWND *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, &hwnd) >= 0
          && !(unsigned int)IsShellManagedWindow(hwnd) )
        {
          ppv = 0LL;
          if ( SHGetPropertyStoreForWindow(hwnd, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, &ppv) >= 0 )
          {
            wil::PropertyStoreHelper::PropertyStoreHelper((wil::PropertyStoreHelper *)v5, (struct IPropertyStore *)ppv);
            v6 = PKEY_EdgeGesture_DisableTouchWhenFullscreen;
            wil::PropertyStoreHelperBase<IPropertyStore>::GetAsBoolean<_tagpropertykey>(v5, (__int128 *)&v6, &v7);
            Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(v5);
            v1 = v7;
          }
          if ( ppv )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&ppv);
        }
      }
    }
  }
  if ( ppvOut )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&ppvOut);
  return v1;
}
