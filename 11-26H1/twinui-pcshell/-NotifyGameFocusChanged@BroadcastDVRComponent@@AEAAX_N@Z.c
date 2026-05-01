/*
 * XREFs of ?NotifyGameFocusChanged@BroadcastDVRComponent@@AEAAX_N@Z @ 0x1801FD880
 * Callers:
 *     ?OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x180035E18 (-OnApplicationViewChangedTask@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@W4APPLICATION_VI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180086860 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ea9241ebdeba2d86efd1d019ab7a7d43___ @ 0x1801FD958 (Windows--Internal--ComTaskPool--QueueTask__lambda_ea9241ebdeba2d86efd1d019ab7a7d43___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BroadcastDVRComponent::NotifyGameFocusChanged(RTL_SRWLOCK *this, char a2)
{
  int CallbackArray; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  struct IObjectArray *v8; // rcx
  int v9[2]; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IObjectArray *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  CallbackArray = CGITRegistrationList::GetCallbackArray(this + 64, &v12);
  if ( CallbackArray >= 0 )
  {
    *(_QWORD *)v9 = v12;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v9);
    v10 = a2;
    v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_ea9241ebdeba2d86efd1d019ab7a7d43___(
           v6,
           v5,
           LODWORD(this[30].Ptr),
           v9);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC19,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v9);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC10,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    ((void (__fastcall *)(struct IObjectArray *))v8->lpVtbl->Release)(v8);
  }
}
