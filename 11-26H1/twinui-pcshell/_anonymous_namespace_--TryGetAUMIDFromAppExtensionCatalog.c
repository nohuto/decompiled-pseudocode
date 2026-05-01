/*
 * XREFs of _anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog @ 0x1800CD5DC
 * Callers:
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x1802BC1B4 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?attach@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z @ 0x18002D1A0 (-attach@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXPEAUhstring_header@impl@2@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?BackupDeveloperModeAsync@?$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7@UIAppListBackupExtensionStatics7@UserProfile@System@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800CC128 (-BackupDeveloperModeAsync@-$consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?GetNamedArray@?$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800CD988 (-GetNamedArray@-$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@im.c)
 *     ??$try_get_activation_factory@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIActivationFactory@Foundation@Windows@5@@winrt@@YA?A_PXZ @ 0x1802BACA8 (--$try_get_activation_factory@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIA.c)
 *     ??$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@Z @ 0x18039A2B4 (--$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall anonymous_namespace_::TryGetAUMIDFromAppExtensionCatalog(__int64 *a1, volatile signed __int32 **a2)
{
  void (__fastcall ****v4)(_QWORD, __int64 *, __int64 *); // rax
  __int64 v5; // rcx
  bool v6; // bl
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v14; // [rsp+90h] [rbp+38h] BYREF
  void (__fastcall ***v15)(_QWORD, __int64 *, __int64 *); // [rsp+98h] [rbp+40h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  v4 = (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))winrt::try_get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::Windows::Foundation::IActivationFactory>(&v14);
  v6 = winrt::Windows::Foundation::operator!=(v4, &v15);
  if ( v14 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v14);
  if ( v6 )
  {
    v7 = SingleViewExperienceLogging::Provider(v5);
    if ( *(_DWORD *)v7 > 5u )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (__int64)v7,
        byte_1807F954B,
        0LL);
    v13[0] = *a2;
    v15 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))v13;
    _InterlockedIncrement64(&qword_1808DBE08);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
    {
      winrt::impl::consume_Windows_Data_Json_IJsonObject<winrt::Windows::Data::Json::IJsonObject>::GetNamedArray(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
        &v14,
        v13);
      _InterlockedDecrement64(&qword_1808DBE08);
    }
    else
    {
      _InterlockedDecrement64(&qword_1808DBE08);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_e84bcefeb7ed3703767eef0b25e91c21_ &>(
        v8,
        &v14,
        &v15);
    }
    v9 = v14;
    if ( v14 )
    {
      v10 = winrt::impl::consume_WindowsUdk_System_UserProfile_IAppListBackupExtensionStatics7<winrt::WindowsUdk::System::UserProfile::IAppListBackupExtensionStatics7>::BackupDeveloperModeAsync(
              &v14,
              &v15);
      if ( a1 != v10 )
      {
        v11 = *v10;
        *v10 = 0LL;
        winrt::handle_type<winrt::impl::hstring_traits>::attach(a1, v11);
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v15);
    }
    if ( v9 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v14);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(a2);
  return a1;
}
