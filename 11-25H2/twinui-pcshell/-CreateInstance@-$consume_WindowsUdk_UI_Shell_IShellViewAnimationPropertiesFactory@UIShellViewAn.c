/*
 * XREFs of ?CreateInstance@?$consume_WindowsUdk_UI_Shell_IShellViewAnimationPropertiesFactory@UIShellViewAnimationPropertiesFactory@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_KAEBUGestureAnimationData@Input@UI@WindowsUdk@3@@Z @ 0x1802A43DC
 * Callers:
 *     ??0ShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@QEAA@_KAEBUGestureAnimationData@Input@234@@Z @ 0x1802A4328 (--0ShellViewAnimationProperties@Shell@UI@WindowsUdk@winrt@@QEAA@_KAEBUGestureAnimationData@Input.c)
 *     ??R_lambda_048acaf127f395b888e969740535bc64_@@QEBA@AEBUIShellViewAnimationPropertiesFactory@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802A43AC (--R_lambda_048acaf127f395b888e969740535bc64_@@QEBA@AEBUIShellViewAnimationPropertiesFactory@Shel.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewAnimationPropertiesFactory<winrt::WindowsUdk::UI::Shell::IShellViewAnimationPropertiesFactory>::CreateInstance(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int128 *a4)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v6)(__int64, __int64, __int128 *, __int64 *); // rax
  unsigned int v7; // eax
  __int128 v9; // [rsp+40h] [rbp-38h] BYREF
  int v10; // [rsp+50h] [rbp-28h] BYREF
  __int128 v11; // [rsp+58h] [rbp-20h]
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+88h] [rbp+10h] BYREF

  v13 = a2;
  v4 = *a1;
  v12 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64 *))(*(_QWORD *)v4 + 48LL);
  v9 = *a4;
  v7 = v6(v4, a3, &v9, &v12);
  winrt::check_hresult(&v13, v7, &v10);
  *a2 = v12;
  return a2;
}
