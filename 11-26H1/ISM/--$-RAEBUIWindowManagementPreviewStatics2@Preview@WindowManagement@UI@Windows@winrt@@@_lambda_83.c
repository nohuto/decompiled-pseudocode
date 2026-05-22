/*
 * XREFs of ??$?RAEBUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@QEBA?A_PAEBUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@Z @ 0x1800FDD78
 * Callers:
 *     ??$call@AEAV_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@@?$factory_cache_entry@UWindowManagementPreview@Preview@WindowManagement@UI@Windows@winrt@@UIWindowManagementPreviewStatics2@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@@Z @ 0x1800FDF6C (--$call@AEAV_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@@-$factory_cache_entry@UWindowManagementP.c)
 *     ?GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800FECF4 (-GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall _lambda_83cc9fc9ac8bc00941158b6f437a3d67_::operator()<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2 const &>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>;
  *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
