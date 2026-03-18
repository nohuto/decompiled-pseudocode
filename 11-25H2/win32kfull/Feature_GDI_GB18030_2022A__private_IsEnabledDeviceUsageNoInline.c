/*
 * XREFs of Feature_GDI_GB18030_2022A__private_IsEnabledDeviceUsageNoInline @ 0x14030E620
 * Callers:
 *     bAddAllFlEntry @ 0x1401475F8 (bAddAllFlEntry.c)
 *     ?IsCHSBaseFont@@YAHPEBGI@Z @ 0x1402621E4 (-IsCHSBaseFont@@YAHPEBGI@Z.c)
 * Callees:
 *     Feature_GDI_GB18030_2022A__private_IsEnabledFallback @ 0x14030E658 (Feature_GDI_GB18030_2022A__private_IsEnabledFallback.c)
 */

__int64 Feature_GDI_GB18030_2022A__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_GDI_GB18030_2022A__private_featureState & 0x10) != 0 )
    return Feature_GDI_GB18030_2022A__private_featureState & 1;
  else
    return Feature_GDI_GB18030_2022A__private_IsEnabledFallback(
             (unsigned int)Feature_GDI_GB18030_2022A__private_featureState,
             3LL);
}
