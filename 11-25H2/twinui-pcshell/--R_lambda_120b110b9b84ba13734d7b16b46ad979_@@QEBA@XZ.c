/*
 * XREFs of ??R_lambda_120b110b9b84ba13734d7b16b46ad979_@@QEBA@XZ @ 0x1800F49C4
 * Callers:
 *     ?IsSearchBoxExtensionAvailable@StartSearchSharedUtils@@YA_NXZ @ 0x18020CD48 (-IsSearchBoxExtensionAvailable@StartSearchSharedUtils@@YA_NXZ.c)
 * Callees:
 *     ?GetNamedArray@?$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800F4D44 (-GetNamedArray@-$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@im.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F5554 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     atexit @ 0x1802D2608 (atexit.c)
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 *     ??$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@Z @ 0x180392D00 (--$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall _lambda_120b110b9b84ba13734d7b16b46ad979_::operator()(_QWORD *a1)
{
  __int64 v1; // rcx
  char result; // al
  const char *v3; // r9
  _DWORD *v4; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF
  const wchar_t *v6; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+18h]

  v8 = a1;
  try
  {
    if ( __TSS0__2___R_lambda_120b110b9b84ba13734d7b16b46ad979___QEBA_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                                           + (unsigned int)tls_index)
                                                                                         + 16LL) )
    {
      Init_thread_header(&__TSS0__2___R_lambda_120b110b9b84ba13734d7b16b46ad979___QEBA_XZ_4HA);
      if ( __TSS0__2___R_lambda_120b110b9b84ba13734d7b16b46ad979___QEBA_XZ_4HA == -1 )
      {
        v5[0] = 1;
        v5[1] = 52;
        v6 = L"com.microsoft.windows.app.startmenu.searchboxinstart";
        v4 = v5;
        v8 = &v4;
        v10 = &qword_18089B708;
        _InterlockedIncrement64(&qword_18089B708);
        if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
        {
          winrt::impl::consume_Windows_Data_Json_IJsonObject<winrt::Windows::Data::Json::IJsonObject>::GetNamedArray(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
            &`_lambda_120b110b9b84ba13734d7b16b46ad979_::operator()'::`3'::searchBoxInStartExtension,
            &v4);
          _InterlockedDecrement64(&qword_18089B708);
        }
        else
        {
          _InterlockedDecrement64(&qword_18089B708);
          winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_e84bcefeb7ed3703767eef0b25e91c21_ &>(
            v1,
            &`_lambda_120b110b9b84ba13734d7b16b46ad979_::operator()'::`3'::searchBoxInStartExtension,
            &v8);
        }
        atexit(`_lambda_120b110b9b84ba13734d7b16b46ad979_::operator()'::`3'::`dynamic atexit destructor for 'searchBoxInStartExtension'');
        Init_thread_footer(&__TSS0__2___R_lambda_120b110b9b84ba13734d7b16b46ad979___QEBA_XZ_4HA);
      }
    }
    v9 = 0LL;
    result = winrt::Windows::Foundation::operator!=(
               &`_lambda_120b110b9b84ba13734d7b16b46ad979_::operator()'::`3'::searchBoxInStartExtension,
               &v9);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x24,
      (unsigned int)"shellcommon\\internal\\shell\\inc\\Private\\StartSearchSharedUtils.h",
      v3);
    return 0;
  }
  return result;
}
