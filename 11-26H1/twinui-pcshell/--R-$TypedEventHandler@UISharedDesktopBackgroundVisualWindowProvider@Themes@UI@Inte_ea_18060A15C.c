/*
 * XREFs of ??R?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@QEBA@AEBUISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@23@AEB_N@Z @ 0x18060A15C
 * Callers:
 *     ??$invoke@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@USharedDesktopBackgroundVisualHost@@_N@impl@winrt@@YA_NAEBU?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@1@AEBUSharedDesktopBackgroundVisualHost@@AEB_N@Z @ 0x180608FB8 (--$invoke@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes_ea_180608FB8.c)
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@V_lambda_21b8f538ea640528a040a422d8eba358_@@@impl@winrt@@UEAAHPEAX_N@Z @ 0x18060B090 (-Invoke@-$delegate@U-$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvid_ea_18060B090.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>::operator()(
        __int64 **a1,
        __int64 *a2,
        _BYTE *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a1;
  LOBYTE(a3) = *a3;
  v4 = *a2;
  v8 = 0;
  v5 = *v3;
  v9 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, _BYTE *))(v5 + 24))(v3, v4, a3);
  return winrt::check_hresult(&v10, v6, (__int64)&v8);
}
