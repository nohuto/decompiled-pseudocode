/*
 * XREFs of ExpRegisterCounterSet @ 0x140841C2C
 * Callers:
 *     ExpPcwHostCallback @ 0x140841950 (ExpPcwHostCallback.c)
 *     EtwRegisterCounters @ 0x1408AB5A4 (EtwRegisterCounters.c)
 * Callees:
 *     PcwRegister @ 0x140A698A0 (PcwRegister.c)
 */

NTSTATUS __fastcall ExpRegisterCounterSet(PPCW_REGISTRATION *Registration, PPCW_REGISTRATION_INFORMATION Info)
{
  NTSTATUS result; // eax

  result = PcwRegister(Registration, Info);
  if ( result == -1073741584 )
  {
    Info->Version = 256;
    return PcwRegister(Registration, Info);
  }
  return result;
}
