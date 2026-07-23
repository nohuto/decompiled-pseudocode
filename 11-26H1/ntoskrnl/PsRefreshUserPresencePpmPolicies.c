/*
 * XREFs of PsRefreshUserPresencePpmPolicies @ 0x140617DDC
 * Callers:
 *     PpmPerfUpdateDomainPolicy @ 0x140AD8DD8 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PsEnumProcesses @ 0x1409BBF0C (PsEnumProcesses.c)
 */

char __fastcall PsRefreshUserPresencePpmPolicies(char a1, char a2)
{
  char result; // al

  result = 0;
  if ( !PsAltSystemCallRegistrationLock.Timer.DueTime.HighPart )
  {
    if ( a1 || a2 )
      result = 1;
    if ( BYTE2(PsAltSystemCallRegistrationLock.Timer.DueTime.u.LowPart) != result )
    {
      BYTE2(PsAltSystemCallRegistrationLock.Timer.DueTime.u.LowPart) = result;
      return PsEnumProcesses(PspRefreshProcessUserPresencePpmPolicyCallback, 0LL);
    }
  }
  return result;
}
