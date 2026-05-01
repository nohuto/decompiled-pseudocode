/*
 * XREFs of ?TryAddTag@?$consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics@UICompositionAnimationStatics@Composition@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUICompositionAnimationBase@Composition@UI@Windows@3@AEBUguid@3@@Z @ 0x1802AD480
 * Callers:
 *     ?CreateAnimation@VirtualDesktopSwitcherHost@@AEAA?AV?$tuple@UScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@UCompositor@2345@@std@@AEBM0AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@AEBU_GUID@@AEBUfloat2@Numerics@Foundation@Windows@winrt@@3@Z @ 0x18022771C (-CreateAnimation@VirtualDesktopSwitcherHost@@AEAA-AV-$tuple@UScalarKeyFrameAnimation@Composition.c)
 *     ??$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@?$factory_cache_entry@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c893b0be85f95fa79319d83703904477_@@@Z @ 0x180683C44 (--$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@-$factory_cache_entry@UCompositionAnimat.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::consume_WindowsUdk_UI_Composition_ICompositionAnimationStatics<winrt::WindowsUdk::UI::Composition::ICompositionAnimationStatics>::TryAddTag(
        __int64 **a1,
        __int64 *a2,
        __int128 *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, __int64, __int128 *, char *); // rax
  unsigned int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+40h] [rbp-28h] BYREF
  __int128 v11; // [rsp+48h] [rbp-20h]
  char v12; // [rsp+70h] [rbp+8h] BYREF
  char v13; // [rsp+78h] [rbp+10h] BYREF

  v3 = *a1;
  v4 = *a2;
  v10 = 0;
  v12 = 0;
  v5 = *v3;
  v11 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, char *))(v5 + 48);
  v9 = *a3;
  v7 = v6(v3, v4, &v9, &v12);
  winrt::check_hresult(&v13, v7, &v10);
  return v12;
}
