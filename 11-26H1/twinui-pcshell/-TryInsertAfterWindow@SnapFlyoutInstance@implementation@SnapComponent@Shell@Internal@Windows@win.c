/*
 * XREFs of ?TryInsertAfterWindow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x1802317D4
 * Callers:
 *     ?TryInsertAfterWindow@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@34567@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x1802317A0 (-TryInsertAfterWindow@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryInsertAfterWindow(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  if ( *((_BYTE *)this + 340) )
    return 0;
  v4 = *((_QWORD *)this + 37);
  if ( v4 )
  {
    v12 = 0LL;
    v8 = 0;
    v9 = 0LL;
    v5 = (**(__int64 (__fastcall ***)(__int64, __int64 *, __int64 *))v4)(
           v4,
           &winrt::impl::guid_v<IXamlExplorerHostWindowLocal>,
           &v12);
    winrt::check_hresult(&v11, v5, &v8);
    v4 = v12;
    v11 = v12;
  }
  else
  {
    v11 = 0LL;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a2);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xEA,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
      (const char *)(unsigned int)v6);
  winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
  return v7 >= 0;
}
