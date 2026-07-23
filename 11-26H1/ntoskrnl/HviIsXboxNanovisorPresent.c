/*
 * XREFs of HviIsXboxNanovisorPresent @ 0x1406E0C74
 * Callers:
 *     HalpTscSynchronization @ 0x140586490 (HalpTscSynchronization.c)
 *     KeDeepSleepProcessor @ 0x1405F3464 (KeDeepSleepProcessor.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140CD1C54 (KiIntSteerDetermineSteeringEnabled.c)
 * Callees:
 *     <none>
 */

char HviIsXboxNanovisorPresent()
{
  char v0; // r8

  v0 = byte_140E0EDA8;
  if ( byte_140E0EDA8 == -1 )
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
    byte_140E0EDA8 = v0;
  }
  return v0;
}
