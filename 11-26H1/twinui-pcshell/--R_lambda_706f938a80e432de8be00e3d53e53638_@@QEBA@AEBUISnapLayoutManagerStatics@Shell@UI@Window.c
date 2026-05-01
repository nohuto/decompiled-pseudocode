/*
 * XREFs of ??R_lambda_706f938a80e432de8be00e3d53e53638_@@QEBA@AEBUISnapLayoutManagerStatics@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1801239AC
 * Callers:
 *     ??$call@AEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@?$factory_cache_entry@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UITileCollectionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@Z @ 0x1801E9130 (--$call@AEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@-$factory_cache_entry@UTileCollection@St.c)
 *     ??$call@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@?$factory_cache_entry@USnapLayoutManager@Shell@UI@WindowsUdk@winrt@@UISnapLayoutManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@Z @ 0x1801EE5D8 (--$call@AEAV_lambda_706f938a80e432de8be00e3d53e53638_@@@-$factory_cache_entry@USnapLayoutManager.c)
 *     ?CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1802B5794 (-CreateToastNotifier@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@AEBUhstring@par.c)
 *     ?GetFromAppUserModelId@AppInfo@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1802B58B0 (-GetFromAppUserModelId@AppInfo@ApplicationModel@Windows@winrt@@SA@AEBUhstring@param@4@@Z.c)
 *     ??$call_factory@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UITileCollectionStatics@2345@V_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@impl@winrt@@YA?A_P$$QEAV_lambda_16971566875aad41a6f0fa0e27bb06ca_@@@Z @ 0x1802BAC3C (--$call_factory@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UITileCollectionStatics@2345@V_.c)
 *     ??$call@AEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@?$factory_cache_entry@UAppInfo@ApplicationModel@Windows@winrt@@UIAppInfoStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@Z @ 0x18030FD6C (--$call@AEAV_lambda_93cf3dd1a637ea07f09c92a2c241488e_@@@-$factory_cache_entry@UAppInfo@Applicati.c)
 *     ??$call@AEAV_lambda_8c93f79d967566fb00a2a4bc6e814545_@@@?$factory_cache_entry@UTileId@StartScreen@UI@WindowsUdk@winrt@@UITileIdStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_8c93f79d967566fb00a2a4bc6e814545_@@@Z @ 0x180536AE4 (--$call@AEAV_lambda_8c93f79d967566fb00a2a4bc6e814545_@@@-$factory_cache_entry@UTileId@StartScree.c)
 *     ?TryGetTileIdForApplicationView@JointResize@@AEAA?AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAUIApplicationView@@@Z @ 0x18053AB48 (-TryGetTileIdForApplicationView@JointResize@@AEAA-AUTileId@StartScreen@UI@WindowsUdk@winrt@@PEAU.c)
 *     ??$call@AEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@Z @ 0x180585AA4 (--$call@AEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@-$factory_cache_entry@UToastNotification.c)
 *     ??$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@?$factory_cache_entry@UPackageManager@Deployment@Management@WindowsUdk@winrt@@UIPackageManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@Z @ 0x180605338 (--$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@-$factory_cache_entry@UPackageManager@De.c)
 * Callees:
 *     ?ReportImpressionAsync@?$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProvider@Iris@Services@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUIrisCreative@Iris@Services@WindowsUdk@3@@Z @ 0x180124100 (-ReportImpressionAsync@-$consume_WindowsUdk_Services_Iris_IIrisServiceProvider@UIIrisServiceProv.c)
 */

__int64 __fastcall _lambda_706f938a80e432de8be00e3d53e53638_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_WindowsUdk_Services_Iris_IIrisServiceProvider<winrt::WindowsUdk::Services::Iris::IIrisServiceProvider>::ReportImpressionAsync(
    a3,
    a2,
    *a1);
  return a2;
}
