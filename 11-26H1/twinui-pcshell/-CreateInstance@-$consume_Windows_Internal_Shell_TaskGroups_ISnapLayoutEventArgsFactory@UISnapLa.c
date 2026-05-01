/*
 * XREFs of ?CreateInstance@?$consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory@UISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4SnapLayoutOperation@TaskGroups@Shell@Internal@Windows@3@U?$array_view@$$CBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@3@@Z @ 0x1802978FC
 * Callers:
 *     ??$call@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@?$factory_cache_entry@USnapLayoutEventArgs@TaskGroups@Shell@Internal@Windows@winrt@@UISnapLayoutEventArgsFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@Z @ 0x18029775C (--$call@AEAV_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@@-$factory_cache_entry@USnapLayoutEventAr.c)
 *     ??R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x1802978C0 (--R_lambda_06ad3909e536a51ee0f1eb0ad05e39fd_@@QEBA@AEBUISnapLayoutEventArgsFactory@TaskGroups@Sh.c)
 * Callees:
 *     ??$get_abi@$$CBI@winrt@@YA?A_PU?$array_view@$$CBI@0@@Z @ 0x180226BD8 (--$get_abi@$$CBI@winrt@@YA-A_PU-$array_view@$$CBI@0@@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ISnapLayoutEventArgsFactory<winrt::Windows::Internal::Shell::TaskGroups::ISnapLayoutEventArgsFactory>::CreateInstance(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        __int128 *a4)
{
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // r10
  unsigned int v9; // eax
  __int128 v11; // [rsp+40h] [rbp-38h] BYREF
  int v12; // [rsp+50h] [rbp-28h] BYREF
  __int128 v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v15; // [rsp+88h] [rbp+10h] BYREF

  v15 = a2;
  v14 = 0LL;
  v13 = 0LL;
  v11 = *a4;
  v12 = 0;
  v6 = winrt::get_abi<unsigned int const>(&v11);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64 *))(*(_QWORD *)v8 + 48LL))(
         v8,
         *a3,
         *(unsigned int *)(v7 + 8),
         v6,
         &v14);
  winrt::check_hresult(&v15, v9, &v12);
  *a2 = v14;
  return a2;
}
