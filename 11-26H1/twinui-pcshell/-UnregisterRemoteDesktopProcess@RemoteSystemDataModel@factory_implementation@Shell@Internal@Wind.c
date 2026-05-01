/*
 * XREFs of ?UnregisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXI@Z @ 0x1806521FC
 * Callers:
 *     ?UnregisterRemoteDesktopProcess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QEBAXI@Z @ 0x180642364 (-UnregisterRemoteDesktopProcess@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?value@?$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ @ 0x1802B2A6C (-value@-$optional@Uhstring@winrt@@@std@@QEGAAAEAUhstring@winrt@@XZ.c)
 *     ??1?$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ @ 0x1802BFF74 (--1-$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ.c)
 *     ??9winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1802C6710 (--9winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$?RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStateChangedEventArgs@2345@@?$event@U?$EventHandler@URemoteDesktopStateChangedEventArgs@Shell@Internal@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEBURemoteSessionWindowManager@implementation@Shell@Internal@Windows@1@AEBURemoteDesktopStateChangedEventArgs@4561@@Z @ 0x180644014 (--$-RURemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@URemoteDesktopStat.c)
 *     ??$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@AEAI_N@winrt@@YA?A_PAEAUhstring@0@AEAI$$QEA_N@Z @ 0x180646814 (--$make@UProcessInfoChangedEventArgs@implementation@Shell@Internal@Windows@winrt@@AEAUhstring@6@.c)
 *     ?ClearCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@@Z @ 0x18064ABB8 (-ClearCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@A.c)
 *     ?GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBU76@@Z @ 0x18064C408 (-GetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x180650D00 (-SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows.c)
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@IUhstring@winrt@@@Collections@Foundation@Windows@winrt@@IUhstring@5@@impl@winrt@@QEBA@AEBI@Z @ 0x1806515F4 (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@IUhstring@winrt@@@Collections@F.c)
 *     ?DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x18066307C (-DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UnregisterRemoteDesktopProcess(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        unsigned int a2)
{
  const struct winrt::hstring *v3; // rax
  unsigned int v4; // r8d
  __int64 v5; // r8
  winrt::hstring *CorrelationId; // rax
  bool v7; // bl
  __int64 v8; // rcx
  int v9; // eax
  RTL_SRWLOCK *v10; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[16]; // [rsp+28h] [rbp-30h] BYREF
  int v12; // [rsp+38h] [rbp-20h] BYREF
  __int128 v13; // [rsp+40h] [rbp-18h]
  volatile signed __int32 *v14; // [rsp+80h] [rbp+28h] BYREF
  unsigned int v15; // [rsp+88h] [rbp+30h] BYREF
  volatile signed __int32 *v16; // [rsp+90h] [rbp+38h] BYREF
  __int64 v17; // [rsp+98h] [rbp+40h] BYREF

  v15 = a2;
  wil::AcquireSRWLockExclusive(&v10, (RTL_SRWLOCK *)this + 16);
  winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned int,winrt::hstring>,unsigned int,winrt::hstring>::TryLookup(
    (__int64 *)this + 32,
    (__int64)v11,
    &v15);
  if ( v11[8] )
  {
    v3 = (const struct winrt::hstring *)std::optional<winrt::hstring>::value((__int64)v11);
    winrt::hstring::hstring((winrt::hstring *)&v16, v3, v4);
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetIsImmersiveRemoteSession(
      this,
      0,
      v5);
    CorrelationId = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetCorrelationId(
                      (RTL_SRWLOCK *)this,
                      (winrt::hstring *)&v14,
                      (__int64 *)&v16);
    v7 = winrt::operator!=((__int64)CorrelationId);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v14);
    if ( v7 )
      winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::ClearCorrelationId(
        (RTL_SRWLOCK *)this,
        (const struct winrt::hstring *)&v16);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteProcessId(
      *((winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **)this + 4),
      v15,
      (const struct winrt::hstring *)&v16);
    if ( !*((_DWORD *)this + 12) )
    {
      LOBYTE(v14) = 0;
      winrt::make<winrt::Windows::Internal::Shell::implementation::ProcessInfoChangedEventArgs,winrt::hstring &,unsigned int &,bool>(
        &v17,
        (const struct winrt::hstring *)&v16,
        &v15,
        (const bool *)&v14);
      winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>>::operator()<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager,winrt::Windows::Internal::Shell::RemoteDesktopStateChangedEventArgs>(
        (RTL_SRWLOCK *)this + 34,
        (__int64)this,
        (__int64)&v17);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
    }
    v8 = *((_QWORD *)this + 32);
    v12 = 0;
    v13 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, v15);
    winrt::check_hresult((int *)&v14, v9, (__int64)&v12);
    *((_DWORD *)this + 12) = 0;
    *((_DWORD *)this + 66) = 0;
    *((_WORD *)this + 134) = 0;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
  }
  std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>((__int64)v11);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
}
