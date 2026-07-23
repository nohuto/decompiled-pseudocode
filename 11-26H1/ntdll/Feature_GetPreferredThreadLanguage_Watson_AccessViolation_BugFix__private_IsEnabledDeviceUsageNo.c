/*
 * XREFs of Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledDeviceUsageNoInline @ 0x180141CC8
 * Callers:
 *     RtlpLangNameInMultiSzString_Size @ 0x180024F90 (RtlpLangNameInMultiSzString_Size.c)
 * Callees:
 *     <none>
 */

__int64 Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_featureState & 0x10) != 0 )
    return Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_featureState & 1;
  else
    return Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledFallback(
             (unsigned int)Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_featureState,
             3LL);
}
