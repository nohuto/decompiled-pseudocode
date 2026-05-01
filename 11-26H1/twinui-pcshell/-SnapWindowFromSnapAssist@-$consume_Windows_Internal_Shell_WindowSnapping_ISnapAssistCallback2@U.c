/*
 * XREFs of ?SnapWindowFromSnapAssist@?$consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_K0AEBURect@Foundation@Windows@3@AEBW4SnapArrangementOptions@WindowSnapping@Shell@Internal@63@@Z @ 0x1806BF464
 * Callers:
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::operator() @ 0x1801B0124 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_ISnapAssistCallback2<winrt::Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2>::SnapWindowFromSnapAssist(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        int *a5)
{
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, __int64, __int64, __int128 *, int); // rax
  int v7; // eax
  int v9; // [rsp+20h] [rbp-48h]
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-28h] BYREF
  __int128 v12; // [rsp+48h] [rbp-20h]

  v5 = *a1;
  v11 = 0;
  v12 = 0LL;
  v9 = *a5;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int128 *, int))(*(_QWORD *)v5 + 48LL);
  v10 = *a4;
  v7 = v6(v5, a2, a3, &v10, v9);
  return winrt::check_hresult((int *)&a5, v7, (__int64)&v11);
}
