/*
 * XREFs of Feature_1691578680__private_IsEnabledDeviceUsageNoInline @ 0x1400706D4
 * Callers:
 *     ?OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1403ED4A8 (-OpmTranslateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1403F90DC (-OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 *     ?OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x14040A434 (-OpmCreateHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     Feature_1691578680__private_IsEnabledFallback @ 0x140070710 (Feature_1691578680__private_IsEnabledFallback.c)
 */

__int64 Feature_1691578680__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_1691578680__private_featureState & 0x10) != 0 )
    return Feature_1691578680__private_featureState & 1;
  else
    return Feature_1691578680__private_IsEnabledFallback((unsigned int)Feature_1691578680__private_featureState, 3LL);
}
