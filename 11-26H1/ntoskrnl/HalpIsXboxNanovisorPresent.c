/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x14058526C
 * Callers:
 *     HalpHvIsFrequencyAvailable @ 0x1405850F8 (HalpHvIsFrequencyAvailable.c)
 *     HalpHvVpStartEnabled @ 0x140585F74 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x1405913A8 (HalpApicSetupRegisterAccess.c)
 *     HalpHvStartProcessor @ 0x140592C34 (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x1407854C0 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140CAF604 (HalpMiscGetParameters.c)
 * Callees:
 *     <none>
 */

char HalpIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140E0A845;
  if ( byte_140E0A845 == -1 )
  {
    v0 = 0;
    _RAX = 1LL;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140E0A845 = v0;
  }
  return v0;
}
