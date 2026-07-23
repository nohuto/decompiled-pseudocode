/*
 * XREFs of Feature_TestLoc02__private_IsEnabledFallback @ 0x1406E78C8
 * Callers:
 *     Feature_TestLoc02__private_IsEnabledNoReportingNoInline @ 0x1406E78E8 (Feature_TestLoc02__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_TestLoc02__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_TestLoc02__private_descriptor, 0);
}
