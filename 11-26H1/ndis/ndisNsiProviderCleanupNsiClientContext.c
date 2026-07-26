/*
 * XREFs of ndisNsiProviderCleanupNsiClientContext @ 0x1400D4560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 */

_UNKNOWN **__fastcall ndisNsiProviderCleanupNsiClientContext(char a1)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4,
                            22,
                            14,
                            (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
                            a1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4,
                            22,
                            15,
                            (struct _GUID *)&WPP_012aeb269b5b38b010d0502f73c9d515_Traceguids,
                            a1);
  }
  return result;
}
