/*
 * XREFs of ??$call@AEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@?$factory_cache_entry@UFileIO@Storage@Windows@winrt@@UIFileIOStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@Z @ 0x18013C86C
 * Callers:
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x18013AFC8 (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x1800B736C (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800B74D4 (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ??$get_activation_factory@UIFileIOStatics@Storage@Windows@winrt@@@winrt@@YA?AUIFileIOStatics@Storage@Windows@0@AEBUhstring@param@0@@Z @ 0x18013C9C0 (--$get_activation_factory@UIFileIOStatics@Storage@Windows@winrt@@@winrt@@YA-AUIFileIOStatics@Sto.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802D41BD (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>::call<_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_ &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 **a3)
{
  __int64 *v5; // rbx
  __int64 *v6; // rax
  char v7; // si
  _DWORD *v9; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-10h]
  __int64 *v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 *v13; // [rsp+98h] [rbp+48h] BYREF

  v12 = a1;
  if ( aWindowsStorage_2[22] )
    abort();
  v10[0] = 1;
  v10[1] = 22;
  v11 = L"Windows.Storage.FileIO";
  v9 = v10;
  winrt::get_activation_factory<winrt::Windows::Storage::IFileIOStatics>(&v12, &v9);
  v5 = v12;
  v13 = 0LL;
  if ( !v12 )
  {
    v6 = 0LL;
    goto LABEL_6;
  }
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64 **))*v12)(
    v12,
    &winrt::impl::guid_v<winrt::impl::IAgileObject>,
    &v13);
  v6 = v13;
  v7 = 1;
  if ( !v13 )
  {
LABEL_6:
    v7 = 0;
    if ( !v6 )
      goto LABEL_8;
  }
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
LABEL_8:
  if ( v7 )
  {
    v13 = &qword_1808DB228;
    _InterlockedIncrement64(&qword_1808DB228);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>,
            (signed __int64)v5,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808DB230);
    }
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      a3,
      (__int64)a2,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>);
    _InterlockedDecrement64(&qword_1808DB228);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  else
  {
    winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
      &v12,
      a2,
      *a3);
    if ( v5 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v12);
  }
  return a2;
}
