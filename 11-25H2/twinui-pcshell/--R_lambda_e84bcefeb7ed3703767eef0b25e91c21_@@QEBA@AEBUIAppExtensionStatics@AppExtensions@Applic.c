/*
 * XREFs of ??R_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@QEBA@AEBUIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x1800F4AD8
 * Callers:
 *     ??$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@Z @ 0x180392D00 (--$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 *     ??$call@AEAV_lambda_ff98fc05277ac080bf005904487943da_@@@?$factory_cache_entry@UFocusManager@Input@Xaml@UI@Windows@winrt@@UIFocusManagerStatics4@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_ff98fc05277ac080bf005904487943da_@@@Z @ 0x1806949D8 (--$call@AEAV_lambda_ff98fc05277ac080bf005904487943da_@@@-$factory_cache_entry@UFocusManager@Inpu.c)
 *     ?FindLastFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456@@Z @ 0x1806962F0 (-FindLastFocusableElement@FocusManager@Input@Xaml@UI@Windows@winrt@@SA@AEBUDependencyObject@3456.c)
 * Callees:
 *     ?GetNamedArray@?$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800F4D44 (-GetNamedArray@-$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@im.c)
 */

__int64 __fastcall _lambda_e84bcefeb7ed3703767eef0b25e91c21_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_Data_Json_IJsonObject<winrt::Windows::Data::Json::IJsonObject>::GetNamedArray(
    a3,
    a2,
    *a1);
  return a2;
}
