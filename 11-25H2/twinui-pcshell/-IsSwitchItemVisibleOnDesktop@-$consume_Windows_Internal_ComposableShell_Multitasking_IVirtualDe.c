/*
 * XREFs of ?IsSwitchItemVisibleOnDesktop@?$consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopController@UIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBUIVirtualDesktop@56783@@Z @ 0x1802858BC
 * Callers:
 *     _lambda_d61b288df26b99e0330e99e4b6525b65_::operator() @ 0x18028E66C (_lambda_d61b288df26b99e0330e99e4b6525b65_--operator().c)
 *     _lambda_76d1f2626ede3eea74247fb28465c209_::operator() @ 0x18067EF14 (_lambda_76d1f2626ede3eea74247fb28465c209_--operator().c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IVirtualDesktopController<winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController>::IsSwitchItemVisibleOnDesktop(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int v7; // eax
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+38h] [rbp-20h]
  char v11; // [rsp+60h] [rbp+8h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1;
  v4 = *a3;
  v5 = *a2;
  v9 = 0;
  v11 = 0;
  v6 = *v3;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, char *))(v6 + 80))(v3, v5, v4, &v11);
  winrt::check_hresult(&v12, v7, &v9);
  return v11;
}
