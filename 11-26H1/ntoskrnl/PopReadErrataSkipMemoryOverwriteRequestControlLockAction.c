/*
 * XREFs of PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140CDC380
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     EmClientRuleEvaluate @ 0x140C09C90 (EmClientRuleEvaluate.c)
 */

__int64 PopReadErrataSkipMemoryOverwriteRequestControlLockAction()
{
  __int64 result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v3; // [rsp+48h] [rbp+10h] BYREF

  v1[1] = 16LL;
  v1[0] = &GUID_EM_RULE_SKIP_MEMORY_OVERWRITE_REQUEST_CONTROL_LOCK_ACTION;
  v2 = 1;
  v3 = v1;
  PopErrataSkipMemoryOverwriteRequestControlLockAction = 0;
  result = EmClientRuleEvaluate(
             &GUID_EM_RULE_SKIP_MEMORY_OVERWRITE_REQUEST_CONTROL_LOCK_ACTION_QUERY,
             (__int64)&v3,
             1,
             &v2);
  if ( v2 == 2 )
    PopErrataSkipMemoryOverwriteRequestControlLockAction = 1;
  return result;
}
