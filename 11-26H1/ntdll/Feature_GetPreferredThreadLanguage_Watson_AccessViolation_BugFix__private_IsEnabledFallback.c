/*
 * XREFs of Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledFallback @ 0x180141DFC
 * Callers:
 *     Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledDeviceUsageNoInline @ 0x180141DC8 (Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledDeviceUsageNo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           &Feature_GetPreferredThreadLanguage_Watson_AccessViolation_BugFix__private_descriptor);
}
