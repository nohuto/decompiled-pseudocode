/*
 * XREFs of DpiIsFeatureEnabled2 @ 0x140085590
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1403C72C0 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     DpiIsFeatureEnabled @ 0x1403EC964 (DpiIsFeatureEnabled.c)
 */

__int64 __fastcall DpiIsFeatureEnabled2(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  if ( !a2[1] )
    return DpiIsFeatureEnabled(a1, *a2, 0LL, a2 + 2);
  WdLogSingleEntry1(3LL);
  result = 3221225485LL;
  WdLogGlobalForLineNumber = 3331;
  return result;
}
