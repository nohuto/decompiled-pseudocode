/*
 * XREFs of ?CreateForPackageFullName@?$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics@UIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@AEBUUser@System@Windows@3@AEBUhstring@param@3@@Z @ 0x1805C10FC
 * Callers:
 *     ??R_lambda_6f34e705270e868253aa28e6dfc0cbd7_@@QEBA@AEBUIMRTHelperStatics@UnifiedTile@Shell@WindowsInternal@winrt@@@Z @ 0x1805BFD80 (--R_lambda_6f34e705270e868253aa28e6dfc0cbd7_@@QEBA@AEBUIMRTHelperStatics@UnifiedTile@Shell@Windo.c)
 *     _anonymous_namespace_::TryLoadLogoImageStream @ 0x1805C8188 (_anonymous_namespace_--TryLoadLogoImageStream.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_IMRTHelperStatics<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelperStatics>::CreateForPackageFullName(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  _QWORD *result; // rax
  int v12; // [rsp+34h] [rbp-34h] BYREF
  int v13; // [rsp+38h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h]
  _QWORD *v15; // [rsp+50h] [rbp-18h] BYREF

  v15 = a2;
  v4 = *a1;
  v15 = 0LL;
  v13 = 0;
  v7 = *v4;
  v8 = *a4;
  v9 = *a3;
  v14 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD **))(v7 + 48))(v4, v9, v8, &v15);
  winrt::check_hresult(&v12, v10, (__int64)&v13);
  result = a2;
  *a2 = v15;
  return result;
}
