/*
 * XREFs of ?ReportUsageForAllVelocityKeys@@YAXXZ @ 0x1401D6CB4
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400BCE24 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_GetCachedFeatureEnabledState @ 0x1401C4560 (wil_details_FeatureStateCache_GetCachedFeatureEnabledState.c)
 */

void ReportUsageForAllVelocityKeys(void)
{
  char CachedFeatureEnabledState; // al
  char v1; // al
  char v2; // al
  char v3; // al
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al

  CachedFeatureEnabledState = wil_details_FeatureStateCache_GetCachedFeatureEnabledState((unsigned int *)&Feature_GE_EssentialsBundle_G__private_featureState);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_GE_EssentialsBundle_G__private_descriptor,
    CachedFeatureEnabledState,
    1u,
    1LL);
  v1 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState((unsigned int *)&Feature_GE_EssentialsBundle_H__private_featureState);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_GE_EssentialsBundle_H__private_descriptor,
    v1,
    1u,
    1LL);
  v2 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState((unsigned int *)&Feature_GE_EssentialsBundle_I__private_featureState);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_GE_EssentialsBundle_I__private_descriptor,
    v2,
    1u,
    1LL);
  v3 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState((unsigned int *)&Feature_GE_EssentialsBundle_J__private_featureState);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_GE_EssentialsBundle_J__private_descriptor,
    v3,
    1u,
    1LL);
  v4 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState((unsigned int *)&Feature_GE_EssentialsBundle_K__private_featureState);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_GE_EssentialsBundle_K__private_descriptor,
    v4,
    1u,
    1LL);
  v5 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState((unsigned int *)&Feature_GE_EssentialsBundle_L__private_featureState);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_GE_EssentialsBundle_L__private_descriptor,
    v5,
    1u,
    1LL);
  v6 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState((unsigned int *)&Feature_GE_EssentialsBundle_M__private_featureState);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_GE_EssentialsBundle_M__private_descriptor,
    v6,
    1u,
    1LL);
  v7 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState((unsigned int *)&Feature_GE_EssentialsBundle_N__private_featureState);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_GE_EssentialsBundle_N__private_descriptor,
    v7,
    1u,
    1LL);
  v8 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState((unsigned int *)&Feature_GE_EssentialsBundle_O__private_featureState);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_GE_EssentialsBundle_O__private_descriptor,
    v8,
    1u,
    1LL);
  v9 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState((unsigned int *)&Feature_GE_EssentialsBundle_P__private_featureState);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_GE_EssentialsBundle_P__private_descriptor,
    v9,
    1u,
    1LL);
  v10 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState((unsigned int *)&Feature_ReAddPTPSettingsText__private_featureState);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_ReAddPTPSettingsText__private_descriptor,
    v10,
    1u,
    1LL);
  v11 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState((unsigned int *)&Feature_VelTest_KM_ControlledByProxy_DBD_2__private_featureState);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_VelTest_KM_ControlledByProxy_DBD_2__private_descriptor,
    v11,
    1u,
    1LL);
  v12 = wil_details_FeatureStateCache_GetCachedFeatureEnabledState((unsigned int *)&Feature_ApplyWindowActionConvergence__private_featureState);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_ApplyWindowActionConvergence__private_descriptor,
    v12,
    1u,
    1LL);
}
