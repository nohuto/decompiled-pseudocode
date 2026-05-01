/*
 * XREFs of ?CreateInstance@?$consume_Windows_Internal_UI_Shell_IActiveTabChangedEventArgsFactory@UIActiveTabChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUguid@3@0@Z @ 0x18026CCE0
 * Callers:
 *     ??0ActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@QEAA@AEBUguid@5@0@Z @ 0x1802A35E8 (--0ActiveTabChangedEventArgs@Shell@UI@Internal@Windows@winrt@@QEAA@AEBUguid@5@0@Z.c)
 *     ??R_lambda_0f5d06b182220372552e751da5d9ab64_@@QEBA@AEBUIActiveTabChangedEventArgsFactory@Shell@UI@Internal@Windows@winrt@@@Z @ 0x1802C9E78 (--R_lambda_0f5d06b182220372552e751da5d9ab64_@@QEBA@AEBUIActiveTabChangedEventArgsFactory@Shell@U.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_UI_Shell_IActiveTabChangedEventArgsFactory<winrt::Windows::Internal::UI::Shell::IActiveTabChangedEventArgsFactory>::CreateInstance(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3,
        __int128 *a4)
{
  __int128 v4; // xmm1
  __int64 *v5; // rcx
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 (__fastcall *v9)(__int64 *, __int128 *, __int128 *, __int64 *); // rax
  unsigned int v10; // eax
  __int128 v12; // [rsp+40h] [rbp-48h] BYREF
  __int128 v13; // [rsp+50h] [rbp-38h] BYREF
  int v14; // [rsp+60h] [rbp-28h] BYREF
  __int128 v15; // [rsp+68h] [rbp-20h]
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+98h] [rbp+10h] BYREF

  v17 = a2;
  v4 = *a3;
  v5 = *a1;
  v16 = 0LL;
  v14 = 0;
  v7 = *v5;
  v15 = 0LL;
  v8 = *a4;
  v9 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int128 *, __int64 *))(v7 + 48);
  v13 = v4;
  v12 = v8;
  v10 = v9(v5, &v13, &v12, &v16);
  winrt::check_hresult(&v17, v10, &v14);
  *a2 = v16;
  return a2;
}
