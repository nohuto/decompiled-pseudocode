/*
 * XREFs of PopCheckDisabledReason @ 0x140943504
 * Callers:
 *     PopEnableHiberFile @ 0x14094353C (PopEnableHiberFile.c)
 * Callees:
 *     PopGetReasonListByReasonCode @ 0x1409450F4 (PopGetReasonListByReasonCode.c)
 */

char PopCheckDisabledReason()
{
  __int64 ReasonListByReasonCode; // rcx
  char v1; // r10
  char v2; // al

  ReasonListByReasonCode = PopGetReasonListByReasonCode();
  if ( ReasonListByReasonCode )
  {
    v2 = v1;
    if ( *(_BYTE *)(ReasonListByReasonCode + 19) != v1 )
      return v1 + 1;
    return v2;
  }
  return v1;
}
