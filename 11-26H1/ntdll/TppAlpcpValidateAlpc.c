/*
 * XREFs of TppAlpcpValidateAlpc @ 0x1800C712C
 * Callers:
 *     TpAlpcUnregisterCompletionList @ 0x1800C6EF0 (TpAlpcUnregisterCompletionList.c)
 *     TpWaitForAlpcCompletion @ 0x1800C6F30 (TpWaitForAlpcCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x1800C70C0 (TpReleaseAlpcCompletion.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     TppValidateCleanupGroupMember @ 0x1800C71A0 (TppValidateCleanupGroupMember.c)
 */

__int64 __fastcall TppAlpcpValidateAlpc(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r10d
  __int64 v4; // r9

  v3 = a3;
  if ( a1
    && (unsigned int)TppValidateCleanupGroupMember(a1 + 72, a2, a3, a1)
    && *(__int64 (__fastcall ***)())(v4 + 80) == TppAlpcpCleanupGroupMemberVFuncs
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    return 1LL;
  }
  if ( v3 || !NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return 0LL;
}
