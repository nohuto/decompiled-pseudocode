/*
 * XREFs of _lambda_3e03a3c31af621875be24bd5f43287a8_::operator() @ 0x1805CA320
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::Foundation::IInspectable___lambda_3e03a3c31af621875be24bd5f43287a8___::Invoke @ 0x1805CBFA0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Notifica.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetMicrosoftResourceManager@?$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics@UISystemResourceManagerStatics@Internal@Core@Resources@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180065988 (-GetMicrosoftResourceManager@-$consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemR.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800A589C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1801CCBE4 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ??$as@UToastActivatedEventArgs@Notifications@UI@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@5@$0A@@impl@winrt@@YA?AUToastActivatedEventArgs@Notifications@UI@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1805C9B3C (--$as@UToastActivatedEventArgs@Notifications@UI@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_3e03a3c31af621875be24bd5f43287a8_::operator()(
        __int64 a1,
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *a2,
        __int64 *a3)
{
  __int64 *MicrosoftResourceManager; // rax
  char v7; // bl
  void *v8; // rdx
  __int64 *v9; // rax
  char v10; // bl
  wil::details *v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v13; // [rsp+58h] [rbp+10h]
  __int64 *v14; // [rsp+60h] [rbp+18h]
  volatile signed __int32 *v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = a3;
  v13 = a2;
  winrt::impl::as<winrt::Windows::UI::Notifications::ToastActivatedEventArgs,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v12,
    (__int64 (__fastcall ***)(_QWORD, void *, _QWORD **))*a3);
  MicrosoftResourceManager = winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
                               &v12,
                               &v15);
  v7 = winrt::operator==(MicrosoftResourceManager, (char *)L"allow");
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
  if ( v7 )
  {
    LOWORD(v14) = 257;
  }
  else
  {
    v9 = winrt::impl::consume_Windows_ApplicationModel_Resources_Core_Internal_ISystemResourceManagerStatics<winrt::Windows::ApplicationModel::Resources::Core::Internal::ISystemResourceManagerStatics>::GetMicrosoftResourceManager(
           &v12,
           &v15);
    v10 = winrt::operator==(v9, (char *)L"deny");
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v15);
    if ( !v10 )
      goto LABEL_6;
    LOWORD(v14) = 256;
  }
  **(_WORD **)a1 = (_WORD)v14;
LABEL_6:
  v11 = *(wil::details **)(a1 + 16);
  if ( v11 )
    v11 = *(wil::details **)v11;
  wil::details::SetEvent(v11, v8);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(a2);
  if ( *a3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a3);
}
