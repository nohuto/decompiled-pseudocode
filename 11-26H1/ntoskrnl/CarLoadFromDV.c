/*
 * XREFs of CarLoadFromDV @ 0x14065052C
 * Callers:
 *     CarInit @ 0x14064D6BC (CarInit.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

unsigned __int64 __fastcall CarLoadFromDV(char a1)
{
  unsigned __int64 result; // rax

  CarRuleClasses = VfRuleClasses;
  result = (unsigned int)VfTriageContext;
  *(_DWORD *)&stru_140F06A28.WaitBlockFill11[24] = VfTriageContext;
  if ( !a1 )
  {
    CarXdvOptions = VfFlightOptions;
    return (unsigned __int64)memmove(
                               &stru_140F06A28.WaitBlockFill11[56],
                               MmVerifyDriverBuffer,
                               (unsigned int)MmVerifyDriverBufferLength);
  }
  return result;
}
