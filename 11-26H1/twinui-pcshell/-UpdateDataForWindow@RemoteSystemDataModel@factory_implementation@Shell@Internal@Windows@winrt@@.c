/*
 * XREFs of ?UpdateDataForWindow@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x180652394
 * Callers:
 *     ?UpdateDataForWindow@?$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@UIRemoteSystemDataModelStatics@3456@@impl@winrt@@UEAAHUstruct_Windows_UI_WindowId@23@@Z @ 0x180652360 (-UpdateDataForWindow@-$produce@URemoteSystemDataModel@factory_implementation@Shell@Internal@Wind.c)
 *     ?UpdateDataForWindow@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUWindowId@UI@56@@Z @ 0x180652488 (-UpdateDataForWindow@RemoteSystemDataModel@implementation@Shell@Internal@Windows@winrt@@SAXAEBUW.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@U?$IMap@_KUhstring@winrt@@@Collections@Foundation@Windows@winrt@@_KUhstring@5@@impl@winrt@@QEBA@AEB_KAEBUhstring@param@3@@Z @ 0x180338B74 (-Insert@-$consume_Windows_Foundation_Collections_IMap@U-$IMap@_KUhstring@winrt@@@Collections@Fou.c)
 *     ?GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AURemoteSystem@RemoteSystemData@@AEBUWindowId@UI@56@@Z @ 0x18064C728 (-GetDataFromFileMappings@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@win.c)
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x1806524C8 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 *     ?SaveWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@AEBUhstring@6@@Z @ 0x1806640B8 (-SaveWindow@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXAEB.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UpdateDataForWindow(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this,
        const struct winrt::Windows::UI::WindowId *a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rcx
  int v6; // eax
  volatile signed __int32 *v7; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+28h] [rbp-40h]
  volatile signed __int32 *v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]
  char v11; // [rsp+90h] [rbp+28h] BYREF
  int v12; // [rsp+98h] [rbp+30h] BYREF
  volatile signed __int32 *v13; // [rsp+A0h] [rbp+38h] BYREF
  RTL_SRWLOCK *v14; // [rsp+A8h] [rbp+40h] BYREF

  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::GetDataFromFileMappings(
    (__int64)this,
    (__int64)&v9,
    (__int64 *)a2);
  winrt::hstring::hstring((winrt::hstring *)&v13, (const struct winrt::hstring *)&v9, v4);
  wil::AcquireSRWLockExclusive(&v14, (RTL_SRWLOCK *)this + 16);
  v11 = 0;
  v5 = *((_QWORD *)this + 19);
  LODWORD(v7) = 0;
  v8 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v5 + 64LL))(v5, *(_QWORD *)a2, &v11);
  winrt::check_hresult(&v12, v6, (__int64)&v7);
  if ( !v11 )
  {
    v10 = 100;
    v7 = v13;
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IMap<unsigned __int64,winrt::hstring>,unsigned __int64,winrt::hstring>::Insert(
      (__int64 **)this + 19,
      (__int64 *)a2,
      (__int64 *)&v7);
    winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveWindow(
      *((winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **)this + 4),
      a2,
      (const struct winrt::hstring *)&v13);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v14);
  winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::UpdateModifiedPropertiesAndNotify(
    this,
    a2,
    (const struct RemoteSystemData::RemoteSystem *)&v9,
    0);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v9);
}
