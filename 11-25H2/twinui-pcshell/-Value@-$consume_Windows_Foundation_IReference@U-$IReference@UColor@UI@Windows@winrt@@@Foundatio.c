/*
 * XREFs of ?Value@?$consume_Windows_Foundation_IReference@U?$IReference@UColor@UI@Windows@winrt@@@Foundation@Windows@winrt@@UColor@UI@34@@impl@winrt@@QEBA@XZ @ 0x18057796C
 * Callers:
 *     ??$unbox_value_type@UColor@UI@Windows@winrt@@AEBUIUnknown@Foundation@34@@impl@winrt@@YA?AUColor@UI@Windows@1@AEBUIUnknown@Foundation@41@@Z @ 0x180574AB8 (--$unbox_value_type@UColor@UI@Windows@winrt@@AEBUIUnknown@Foundation@34@@impl@winrt@@YA-AUColor@.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall winrt::impl::consume_Windows_Foundation_IReference<winrt::Windows::Foundation::IReference<winrt::Windows::UI::Color>,winrt::Windows::UI::Color>::Value(
        __int64 *a1,
        _DWORD *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  v6 = 0;
  *a2 = 0;
  v3 = *a1;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v3 + 48LL))(v3, a2);
  winrt::check_hresult(&v8, v4, (__int64)&v6);
  return a2;
}
