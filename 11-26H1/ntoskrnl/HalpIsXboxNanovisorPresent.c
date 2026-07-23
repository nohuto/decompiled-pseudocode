/*
 * XREFs of HalpIsXboxNanovisorPresent @ 0x14058778C
 * Callers:
 *     HalpHvIsFrequencyAvailable @ 0x140587618 (HalpHvIsFrequencyAvailable.c)
 *     HalpHvVpStartEnabled @ 0x140588494 (HalpHvVpStartEnabled.c)
 *     HalpApicSetupRegisterAccess @ 0x140593B28 (HalpApicSetupRegisterAccess.c)
 *     HalpHvStartProcessor @ 0x1405953B4 (HalpHvStartProcessor.c)
 *     HaliAcpiMachineStateInit @ 0x140787FF0 (HaliAcpiMachineStateInit.c)
 *     HalpMiscGetParameters @ 0x140CB5644 (HalpMiscGetParameters.c)
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
