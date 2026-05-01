/*
 * XREFs of ?OnDeviceRemoved@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUDeviceWatcher@Enumeration@Devices@56@AEBUDeviceInformationUpdate@8956@@Z @ 0x18061C000
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::OnDeviceRemoved(
        winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager *this,
        const struct winrt::Windows::Devices::Enumeration::DeviceWatcher *a2,
        const struct winrt::Windows::Devices::Enumeration::DeviceInformationUpdate *a3)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  volatile signed __int32 *v10; // [rsp+30h] [rbp-20h] BYREF
  int v11; // [rsp+38h] [rbp-18h] BYREF
  __int128 v12; // [rsp+40h] [rbp-10h]
  int v13; // [rsp+60h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+20h] BYREF
  volatile signed __int32 *v15; // [rsp+78h] [rbp+28h] BYREF

  v15 = 0LL;
  v4 = *(_QWORD *)a3;
  v11 = 0;
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)v4 + 48LL))(v4, &v15);
  winrt::check_hresult(&v13, v5, (__int64)&v11);
  v10 = v15;
  v14 = 0;
  LOBYTE(v13) = 0;
  v6 = *((_QWORD *)this + 49);
  v11 = 0;
  v12 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 *, unsigned int *, int *))(*(_QWORD *)v6 + 72LL))(
         v6,
         v15,
         &v14,
         &v13);
  winrt::check_hresult((int *)&v15, v7, (__int64)&v11);
  if ( (_BYTE)v13 )
  {
    v8 = *((_QWORD *)this + 49);
    v11 = 0;
    v12 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 96LL))(v8, v14);
    winrt::check_hresult(&v13, v9, (__int64)&v11);
  }
  --*((_DWORD *)this + 96);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
}
