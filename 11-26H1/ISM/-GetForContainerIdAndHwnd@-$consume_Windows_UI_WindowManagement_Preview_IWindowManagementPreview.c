/*
 * XREFs of ?GetForContainerIdAndHwnd@?$consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUguid@3@_K@Z @ 0x1800FE714
 * Callers:
 *     ?GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800FECF4 (-GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1800A68BC (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics2<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>::GetForContainerIdAndHwnd(
        __int64 **a1,
        _QWORD *a2,
        __int128 *a3,
        __int64 a4)
{
  __int64 *v4; // rcx
  __int128 v6; // xmm0
  __int64 v7; // rax
  int v8; // eax
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-28h] BYREF
  __int128 v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+70h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = *a1;
  v12 = 0LL;
  v6 = *a3;
  v7 = *v4;
  v11 = 0;
  v10 = v6;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, _QWORD *))(v7 + 48))(v4, &v10, a4, a2);
  winrt::check_hresult(&v13, v8, (__int64)&v11);
  return a2;
}
