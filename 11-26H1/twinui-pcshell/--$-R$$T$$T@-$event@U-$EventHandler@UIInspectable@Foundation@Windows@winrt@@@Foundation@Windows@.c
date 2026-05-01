/*
 * XREFs of ??$?R$$T$$T@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXAEB$$T0@Z @ 0x180333888
 * Callers:
 *     wistd::__function::__func__lambda_c5bc958e6ad9267954e741ca8adf6e4b__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x1803354C0 (wistd--__function--__func__lambda_c5bc958e6ad9267954e741ca8adf6e4b__void___cdecl(enum_wil--Regis.c)
 *     ?ReportReactivationComplete@?$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@UISearchAppHost2@3456@@impl@winrt@@UEAAHXZ @ 0x1803B73B0 (-ReportReactivationComplete@-$produce@USearchAppHost@implementation@Shell@UI@WindowsUdk@winrt@@U.c)
 *     ?OnNetworkStatusChanged@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUIInspectable@Foundation@56@@Z @ 0x180670840 (-OnNetworkStatusChanged@NetworkConnectionUtils@implementation@Shell@Internal@Windows@winrt@@QEAA.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$event_array@U?$TypedEventHandler@USearchAppHost@Shell@UI@WindowsUdk@winrt@@Uhstring@5@@Foundation@Windows@winrt@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002668C (-unconditional_release_ref@-$com_ptr@U-$event_array@U-$TypedEventHandler@USearchAppHost@Shell@UI.c)
 *     ?remove@?$event@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@winrt@@QEAAXUevent_token@2@@Z @ 0x1800DD06C (-remove@-$event@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winr.c)
 *     ?get_token@?$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@AEBA?AUevent_token@2@AEBUSnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@2@@Z @ 0x1802121A0 (-get_token@-$event@USnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@@winrt.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802CA3C7 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802CA3DF (__Platform_AcquireSRWLockExclusive.c)
 *     ??$invoke@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$$T$$T@impl@winrt@@YA_NAEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@1@AEB$$T1@Z @ 0x180334EA8 (--$invoke@U-$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$$T.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::operator()<std::nullptr_t,std::nullptr_t>(
        RTL_SRWLOCK *a1,
        void *a2)
{
  PVOID v3; // rbx
  unsigned int *Ptr; // rax
  unsigned int *v5; // rsi
  PVOID *v6; // rbp
  PVOID *i; // rdi
  __int64 v8; // rcx
  PVOID *token; // rax
  PVOID v10; // [rsp+48h] [rbp+10h] BYREF
  unsigned int *v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = a2;
  v3 = 0LL;
  v11 = 0LL;
  _Platform_AcquireSRWLockExclusive(a1 + 1);
  Ptr = (unsigned int *)a1->Ptr;
  v5 = 0LL;
  if ( a1->Ptr )
  {
    v3 = a1->Ptr;
    v11 = (unsigned int *)a1->Ptr;
    _InterlockedIncrement((volatile signed __int32 *)Ptr);
    v5 = Ptr;
  }
  ReleaseSRWLockExclusive_0(a1 + 1);
  if ( v5 )
  {
    v6 = (PVOID *)&v5[2 * v5[1] + 2];
    for ( i = (PVOID *)(v5 + 2); i != v6; ++i )
    {
      if ( !(unsigned __int8)winrt::impl::invoke<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>,std::nullptr_t,std::nullptr_t>(i) )
      {
        token = winrt::event<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler>::get_token(
                  v8,
                  &v10,
                  i);
        winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable>>::remove(
          (__int64)a1,
          *token);
      }
    }
  }
  if ( v3 )
    winrt::com_ptr<winrt::impl::event_array<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::Shell::SearchAppHost,winrt::hstring>>>::unconditional_release_ref(&v11);
}
