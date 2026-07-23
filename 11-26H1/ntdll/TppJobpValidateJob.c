/*
 * XREFs of TppJobpValidateJob @ 0x1800C704C
 * Callers:
 *     TpReleaseJobNotification @ 0x1800C6FA0 (TpReleaseJobNotification.c)
 *     TpWaitForJobNotification @ 0x1800C7010 (TpWaitForJobNotification.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     TppValidateCleanupGroupMember @ 0x1800C71A0 (TppValidateCleanupGroupMember.c)
 */

__int64 __fastcall TppJobpValidateJob(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  if ( a1
    && (unsigned int)TppValidateCleanupGroupMember(a1 + 72, a2, a3, a1)
    && *(__int64 (__fastcall ***)())(v3 + 80) == TppJobpCleanupGroupMemberVFuncs
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    return 1LL;
  }
  if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  return 0LL;
}
