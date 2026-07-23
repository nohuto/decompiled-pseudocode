/*
 * XREFs of ExpRegisterCounterSet @ 0x140847E6C
 * Callers:
 *     ExpPcwHostCallback @ 0x140847B90 (ExpPcwHostCallback.c)
 *     EtwRegisterCounters @ 0x1408B19E8 (EtwRegisterCounters.c)
 * Callees:
 *     PcwRegister @ 0x140A76870 (PcwRegister.c)
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
