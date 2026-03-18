/*
 * XREFs of CarLoadFromDV @ 0x14064C94C
 * Callers:
 *     CarInit @ 0x140649ADC (CarInit.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

unsigned __int64 __fastcall CarLoadFromDV(char a1)
{
  unsigned __int64 result; // rax

  stru_140F066E8.WaitBlock[0].Object = (PVOID)VfRuleClasses;
  result = (unsigned int)VfTriageContext;
  *(_DWORD *)&stru_140F066E8.WaitBlockFill11[24] = VfTriageContext;
  if ( !a1 )
  {
    *(_DWORD *)&stru_140F066E8.WaitBlockFill11[44] = VfFlightOptions;
    return (unsigned __int64)memmove(
                               &stru_140F066E8.WaitBlockFill11[56],
                               MmVerifyDriverBuffer,
                               (unsigned int)MmVerifyDriverBufferLength);
  }
  return result;
}
