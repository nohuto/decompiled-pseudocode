/*
 * XREFs of TppAlpcpValidateAlpc @ 0x1800C99AC
 * Callers:
 *     TpAlpcUnregisterCompletionList @ 0x1800C9770 (TpAlpcUnregisterCompletionList.c)
 *     TpWaitForAlpcCompletion @ 0x1800C97B0 (TpWaitForAlpcCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x1800C9940 (TpReleaseAlpcCompletion.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     TppValidateCleanupGroupMember @ 0x1800C9A20 (TppValidateCleanupGroupMember.c)
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
