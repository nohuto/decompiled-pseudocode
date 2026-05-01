/*
 * XREFs of ?Added@?$consume_Windows_Devices_Enumeration_IDeviceWatcher@UIDeviceWatcher@Enumeration@Devices@Windows@winrt@@@impl@winrt@@QEBA@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UDeviceWatcher@Enumeration@Devices@Windows@winrt@@UDeviceInformation@2345@@Foundation@Windows@3@@Z @ 0x180345808
 * Callers:
 *     _lambda_aa297103944b40500ac49b04ee807ad8_::operator() @ 0x18061A160 (_lambda_aa297103944b40500ac49b04ee807ad8_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$?0AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@?$weak_ref@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEAA@AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@1@@Z @ 0x18033A994 (--$-0AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@-$weak_ref@UI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Devices_Enumeration_IDeviceWatcher<winrt::Windows::Devices::Enumeration::IDeviceWatcher>::Added(
        __int64 **a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 *v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // eax
  _QWORD *v9; // rbx
  _QWORD *result; // rax
  _QWORD *v11; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+2Ch] [rbp-3Ch] BYREF
  int v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-30h]

  v11 = a2;
  v4 = *a1;
  v6 = *a4;
  v11 = 0LL;
  v13 = 0;
  v7 = *v4;
  v14 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD **))(v7 + 48))(v4, v6, &v11);
  winrt::check_hresult(&v12, v8, (__int64)&v13);
  v9 = v11;
  winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>::weak_ref<winrt::WindowsUdk::UI::StartScreen::Implementation::IDockedStartController2>(a2);
  result = a2;
  a2[1] = v9;
  return result;
}
