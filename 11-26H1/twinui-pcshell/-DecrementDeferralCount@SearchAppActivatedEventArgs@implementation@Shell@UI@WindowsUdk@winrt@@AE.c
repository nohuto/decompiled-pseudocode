/*
 * XREFs of ?DecrementDeferralCount@SearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@AEAAXXZ @ 0x180220D24
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::DeferralCompletedHandler__lambda_e6a671098150e4fafb7216c3a0d06112___::Invoke @ 0x180220D00 (winrt--impl--delegate_winrt--Windows--Foundation--DeferralCompletedHandler__lambda_e6a671098150e.c)
 * Callees:
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::DecrementDeferralCount(
        winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx
  unsigned int v3; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // [rsp+50h] [rbp+8h] BYREF

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 28, 0xFFFFFFFF) == 1 )
  {
    v1 = (__int64 *)((char *)this + 104);
    v6 = 0LL;
    if ( winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 13, &v6) )
    {
      v2 = *v1;
      v4 = 0;
      v5 = 0LL;
      v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
      winrt::check_hresult(&v6, v3, &v4);
    }
  }
}
