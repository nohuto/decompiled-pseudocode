/*
 * XREFs of PopGetReasonListByReasonCode @ 0x1409C0A64
 * Callers:
 *     PopCheckDisabledReason @ 0x1409BEE7C (PopCheckDisabledReason.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1409C0A18 (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x1409C11F0 (PopLogSleepDisabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetReasonListByReasonCode(int a1)
{
  unsigned int *v1; // rax
  unsigned int *v2; // r8
  char v3; // dl

  v1 = *(unsigned int **)&PpmIdlePolicyLock.SystemCallNumber;
  v2 = 0LL;
  v3 = 0;
  while ( v1 != &PpmIdlePolicyLock.SystemCallNumber )
  {
    v2 = v1;
    if ( v1[6] == a1 )
    {
      v3 = 1;
      return (unsigned __int64)v2 & -(__int64)(v3 != 0);
    }
    v1 = *(unsigned int **)v1;
  }
  return (unsigned __int64)v2 & -(__int64)(v3 != 0);
}
