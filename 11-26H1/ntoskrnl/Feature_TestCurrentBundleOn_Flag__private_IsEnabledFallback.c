/*
 * XREFs of Feature_TestCurrentBundleOn_Flag__private_IsEnabledFallback @ 0x1406E7870
 * Callers:
 *     Feature_TestCurrentBundleOn_Flag__private_IsEnabledNoReportingNoInline @ 0x1406E7890 (Feature_TestCurrentBundleOn_Flag__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TestCurrentBundleOn_Flag__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_TestCurrentBundleOn_Flag__private_descriptor,
           0);
}
