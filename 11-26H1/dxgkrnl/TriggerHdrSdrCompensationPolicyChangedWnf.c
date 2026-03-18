/*
 * XREFs of TriggerHdrSdrCompensationPolicyChangedWnf @ 0x1401CFA40
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 TriggerHdrSdrCompensationPolicyChangedWnf()
{
  int updated; // eax
  __int64 v1; // rdi

  PsGetCurrentProcessSessionId();
  updated = ZwUpdateWnfStateData(&WNF_DX_HDR_BRIGHTNESS_POLICY_CHANGED, 0LL, 0LL);
  v1 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5074;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to trigger WNF_DX_HDR_BRIGHTNESS_POLICY_CHANGED, Status = 0x%I64x",
      v1,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v1;
}
