/*
 * XREFs of ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@_WU?$char_traits@_W@std@@@std@@@Z @ 0x1802C3488
 * Callers:
 *     ??$call@P6A?AUDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUIActivationFactory@Foundation@67@@Z@?$factory_cache_entry@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?A_P$$QEAP6A?AUDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@2@AEBUIActivationFactory@Foundation@82@@Z@Z @ 0x1806A511C (--$call@P6A-AUDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@AEBUIAct.c)
 *     ??$call@AEAV_lambda_811875b78a717298a9deed537a9b1783_@@@?$factory_cache_entry@UElementCompositionPreview@Hosting@Xaml@UI@Windows@winrt@@UIElementCompositionPreviewStatics2@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_811875b78a717298a9deed537a9b1783_@@@Z @ 0x1806AAF38 (--$call@AEAV_lambda_811875b78a717298a9deed537a9b1783_@@@-$factory_cache_entry@UElementCompositio.c)
 *     ??$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@?$factory_cache_entry@UCompositionAnimation@Composition@UI@WindowsUdk@winrt@@UICompositionAnimationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_c893b0be85f95fa79319d83703904477_@@@Z @ 0x1806AB060 (--$call@AEAV_lambda_c893b0be85f95fa79319d83703904477_@@@-$factory_cache_entry@UCompositionAnimat.c)
 *     ??$call@AEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@?$factory_cache_entry@UFocusManager@Input@Xaml@UI@Windows@winrt@@UIFocusManagerStatics4@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@Z @ 0x1806BBD7C (--$call@AEAV_lambda_49e62eb3f931e46ad527edc5ebe4a7b3_@@@-$factory_cache_entry@UFocusManager@Inpu.c)
 *     ??$call@AEAV_lambda_ff98fc05277ac080bf005904487943da_@@@?$factory_cache_entry@UFocusManager@Input@Xaml@UI@Windows@winrt@@UIFocusManagerStatics4@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_ff98fc05277ac080bf005904487943da_@@@Z @ 0x1806BBEB0 (--$call@AEAV_lambda_ff98fc05277ac080bf005904487943da_@@@-$factory_cache_entry@UFocusManager@Inpu.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEB_W_K@Z @ 0x1801B5690 (-create_string_reference@hstring@param@winrt@@AEAAXQEB_W_K@Z.c)
 */

winrt::param::hstring *__fastcall winrt::param::hstring::hstring(winrt::param::hstring *a1, __int64 a2)
{
  winrt::param::hstring::create_string_reference(a1, *(const wchar_t *const *)a2, *(_QWORD *)(a2 + 8));
  return a1;
}
