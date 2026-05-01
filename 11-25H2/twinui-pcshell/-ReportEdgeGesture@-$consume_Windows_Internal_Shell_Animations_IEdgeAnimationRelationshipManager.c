/*
 * XREFs of ?ReportEdgeGesture@?$consume_Windows_Internal_Shell_Animations_IEdgeAnimationRelationshipManager@UIEdgeAnimationRelationshipManager@Animations@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBW4EdgeLocation@Animations@Shell@Internal@Windows@3@AEBUGestureAnimationData@Input@UI@WindowsUdk@3@AEBUPoint@Foundation@83@@Z @ 0x180571300
 * Callers:
 *     _lambda_e144cef1f387178a308841941c02025f_::operator()_enum_winrt::Windows::Foundation::AsyncStatus_const_&_ @ 0x180570438 (_lambda_e144cef1f387178a308841941c02025f_--operator()_enum_winrt--Windows--Foundation--AsyncStat.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int *__fastcall winrt::impl::consume_Windows_Internal_Shell_Animations_IEdgeAnimationRelationshipManager<winrt::Windows::Internal::Shell::Animations::IEdgeAnimationRelationshipManager>::ReportEdgeGesture(
        __int64 **a1,
        unsigned int *a2,
        __int128 *a3,
        __int64 *a4)
{
  __int64 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(__int64 *, __int64, __int128 *, __int64); // rax
  int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+40h] [rbp-28h] BYREF
  __int128 v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+70h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *a4;
  v6 = *a2;
  v12 = 0;
  v7 = *v4;
  v13 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, __int64, __int128 *, __int64))(v7 + 48);
  v11 = *a3;
  v9 = v8(v4, v6, &v11, v5);
  return winrt::check_hresult(&v14, v9, (__int64)&v12);
}
