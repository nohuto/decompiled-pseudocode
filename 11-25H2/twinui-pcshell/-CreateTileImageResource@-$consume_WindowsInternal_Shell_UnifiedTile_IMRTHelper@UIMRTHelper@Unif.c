/*
 * XREFs of ?CreateTileImageResource@?$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelper@UIMRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@AEBUguid@3@_KAEBUhstring@param@3@_N@Z @ 0x1805C1328
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1805C74DC (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_IMRTHelper<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelper>::CreateTileImageResource(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 *v5; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64 *, __int128 *, _QWORD, __int64, char, _QWORD **); // rax
  int v10; // eax
  _QWORD *result; // rax
  char v12; // [rsp+20h] [rbp-78h]
  int v13[3]; // [rsp+44h] [rbp-54h] BYREF
  __int128 v14; // [rsp+50h] [rbp-48h] BYREF
  int v15; // [rsp+60h] [rbp-38h] BYREF
  __int128 v16; // [rsp+68h] [rbp-30h]
  _QWORD *v17; // [rsp+78h] [rbp-20h] BYREF

  v17 = a2;
  v5 = *a1;
  v17 = 0LL;
  v7 = *a5;
  v8 = *v5;
  v15 = 0;
  v16 = 0LL;
  v12 = 0;
  v9 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, __int64, char, _QWORD **))(v8 + 80);
  v14 = *a3;
  v10 = v9(v5, &v14, 0LL, v7, v12, &v17);
  winrt::check_hresult(v13, v10, (__int64)&v15);
  result = a2;
  *a2 = v17;
  return result;
}
