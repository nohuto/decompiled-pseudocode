/*
 * XREFs of HviIsXboxNanovisorPresent @ 0x1406DC9D4
 * Callers:
 *     HalpTscSynchronization @ 0x140583F70 (HalpTscSynchronization.c)
 *     KeDeepSleepProcessor @ 0x1405F0AF4 (KeDeepSleepProcessor.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140CCBAF4 (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     <none>
 */

char HviIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140E0ED30;
  if ( byte_140E0ED30 == -1 )
  {
    _RAX = 1LL;
    v0 = 0;
    __asm { cpuid }
    if ( (int)_RCX < 0 )
    {
      _RAX = 1073741825LL;
      __asm { cpuid }
      v0 = (_DWORD)_RAX == 1986945624;
    }
    byte_140E0ED30 = v0;
  }
  return v0;
}
