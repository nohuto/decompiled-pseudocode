/*
 * XREFs of ?AnimateView@?$consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator@UIShellAnimationCoordinator@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@AEBUShellViewCoordinator@5673@_KAEBUGestureAnimationData@Input@673@AEBUPoint@Foundation@Windows@3@@Z @ 0x180675F5C
 * Callers:
 *     _lambda_00799cc444f9312ab8cc556666836ecb_::operator()_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner_const_&_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs_const_&_ @ 0x1806755C8 (_lambda_00799cc444f9312ab8cc556666836ecb_--operator()_winrt--Windows--UI--Composition--Internal-.c)
 *     ?AnimateViewHelper@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXUShellAnimationCoordinator@34567@AEBW4ShellView@4UI@WindowsUdk@7@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@AEBUPoint@Foundation@67@@Z @ 0x180675FD8 (-AnimateViewHelper@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Win.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_Internal_Shell_Animations_IShellAnimationCoordinator<winrt::Windows::Internal::Shell::Animations::IShellAnimationCoordinator>::AnimateView(
        __int64 **a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 a4,
        __int128 *a5,
        _QWORD *a6)
{
  __int64 *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64 *, __int64, __int64, __int64, __int128 *, _QWORD); // rax
  int v11; // eax
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+50h] [rbp-28h] BYREF
  __int128 v15; // [rsp+58h] [rbp-20h]

  v6 = *a1;
  v7 = *a3;
  v8 = *a2;
  v9 = *v6;
  v14 = 0;
  v15 = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64, __int128 *, _QWORD))(v9 + 56);
  v13 = *a5;
  v11 = v10(v6, v8, v7, a4, &v13, *a6);
  return winrt::check_hresult((int *)&a5, v11, (__int64)&v14);
}
