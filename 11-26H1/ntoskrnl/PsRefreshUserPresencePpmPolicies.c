/*
 * XREFs of PsRefreshUserPresencePpmPolicies @ 0x140614F24
 * Callers:
 *     PpmPerfUpdateDomainPolicy @ 0x140A9D254 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PsEnumProcesses @ 0x14096E8BC (PsEnumProcesses.c)
 */

char __fastcall PsRefreshUserPresencePpmPolicies(char a1, char a2)
{
  char result; // al

  result = 0;
  if ( !HIDWORD(PsAltSystemCallRegistrationLock.TrapFrame) )
  {
    if ( a1 || a2 )
      result = 1;
    if ( BYTE2(PsAltSystemCallRegistrationLock.TrapFrame) != result )
    {
      BYTE2(PsAltSystemCallRegistrationLock.TrapFrame) = result;
      return PsEnumProcesses(PspRefreshProcessUserPresencePpmPolicyCallback, 0LL);
    }
  }
  return result;
}
