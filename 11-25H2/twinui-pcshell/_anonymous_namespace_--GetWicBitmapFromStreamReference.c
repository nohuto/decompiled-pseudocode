/*
 * XREFs of _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x1805CBD7C
 * Callers:
 *     _anonymous_namespace_::GetLogoFileFromContent @ 0x1805CB8A0 (_anonymous_namespace_--GetLogoFileFromContent.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z @ 0x18005CD48 (-check_status_canceled@impl@winrt@@YAXW4AsyncStatus@Foundation@Windows@2@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180062824 (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamReference@Streams@Storage@34@@impl@winrt@@QEBA@XZ @ 0x18026DDA0 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UIRandomAccessStream.c)
 *     ??$as@UIUnknown@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802CBC74 (--$as@UIUnknown@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805C5B2C (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UIRandomAccessStreamWithConte.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1805C9FBC (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Win.c)
 *     ?WicBitmapCreatedFromStream@PinManagerTelemetry@@SAXXZ @ 0x1805CCD58 (-WicBitmapCreatedFromStream@PinManagerTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 *__fastcall anonymous_namespace_::GetWicBitmapFromStreamReference(__int64 *a1, __int64 **a2)
{
  HRESULT v4; // eax
  _QWORD *InstanceAsync; // rbx
  unsigned int v6; // eax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int ppv; // [rsp+20h] [rbp-60h]
  __int64 v17[3]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h] BYREF
  int v19[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v20; // [rsp+58h] [rbp-28h] BYREF
  LPVOID v21; // [rsp+60h] [rbp-20h] BYREF
  __int64 *v22; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v22 = a1;
  v17[2] = (__int64)a2;
  v21 = 0LL;
  v4 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &v21);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x68,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v4,
      ppv);
  InstanceAsync = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
                    a2,
                    v17);
  v6 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>::Status((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))InstanceAsync);
  if ( !v6 )
    v6 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>(InstanceAsync);
  winrt::impl::check_status_canceled((winrt::impl *)v6, v7);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Storage::Streams::IRandomAccessStreamReference>::GetResults(
    InstanceAsync,
    (winrt *)&v22);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v17);
  v20 = 0LL;
  v8 = winrt::Windows::Foundation::IUnknown::as<IUnknown>(
         (__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))&v22,
         v17);
  v9 = CreateStreamOverRandomAccessStream(*v8, &GUID_0000000c_0000_0000_c000_000000000046, &v20);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x6C,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v9,
      ppv);
  if ( v17[0] )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(v17);
  *(_QWORD *)v19 = 0LL;
  v10 = *(_QWORD *)v21;
  *(_QWORD *)v19 = 0LL;
  v11 = (*(__int64 (__fastcall **)(LPVOID, __int64, GUID *, _QWORD))(v10 + 32))(
          v21,
          v20,
          &GUID_VendorMicrosoftBuiltIn,
          0LL);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x70,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v11,
      (int)v19);
  v18 = 0LL;
  v12 = **(_QWORD **)v19;
  v18 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(v12 + 104))(*(_QWORD *)v19, 0LL, &v18);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x72,
      (int)"pcshell\\twinui\\PinManager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v13,
      (int)v19);
  PinManagerTelemetry::WicBitmapCreatedFromStream();
  v14 = v18;
  v18 = 0LL;
  *a1 = v14;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v19);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)a2);
  return a1;
}
