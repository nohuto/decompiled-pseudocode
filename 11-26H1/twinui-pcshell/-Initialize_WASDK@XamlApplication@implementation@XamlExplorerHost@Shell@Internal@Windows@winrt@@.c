/*
 * XREFs of ?Initialize_WASDK@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@SA?AUIInspectable@Foundation@67@XZ @ 0x18044B5EC
 * Callers:
 *     ?Initialize_WASDK@?$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlApplicationStatics@34567@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18044B5B0 (-Initialize_WASDK@-$produce@UXamlApplication@factory_implementation@XamlExplorerHost@Shell@Inter.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x180333540 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ??$as@UIInspectable@Foundation@Windows@winrt@@UWASDKInitializationWrapper@@$0A@@impl@winrt@@YA?AUIInspectable@Foundation@Windows@1@PEAUWASDKInitializationWrapper@@@Z @ 0x18044A4F8 (--$as@UIInspectable@Foundation@Windows@winrt@@UWASDKInitializationWrapper@@$0A@@impl@winrt@@YA-A.c)
 *     ??0?$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@QEAA@XZ @ 0x18044AB54 (--0-$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
struct IInspectable __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::Initialize_WASDK(
        __int64 *a1)
{
  _OWORD *v2; // rax
  _QWORD *v3; // rdi
  _OWORD *v5; // [rsp+48h] [rbp+10h] BYREF
  _QWORD *v6; // [rsp+50h] [rbp+18h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x28uLL);
  v5 = v2;
  *v2 = 0LL;
  v2[1] = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  v3 = winrt::impl::heap_implements<WASDKInitializationWrapper>::heap_implements<WASDKInitializationWrapper>(v2);
  v6 = v3;
  winrt::impl::as<winrt::Windows::Foundation::IInspectable,WASDKInitializationWrapper,0>(&v5, v3);
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a1, (__int64 *)&v5);
  if ( v5 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v5);
  if ( v3 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v6);
  return (struct IInspectable)a1;
}
