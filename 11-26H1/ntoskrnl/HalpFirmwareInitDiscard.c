/*
 * XREFs of HalpFirmwareInitDiscard @ 0x140CB55F4
 * Callers:
 *     HalpFirmwareInitSystem @ 0x140BF13D0 (HalpFirmwareInitSystem.c)
 * Callees:
 *     HalpEfiInitialization @ 0x140CB4F20 (HalpEfiInitialization.c)
 */

__int64 __fastcall HalpFirmwareInitDiscard(__int64 a1)
{
  off_140E00AA0[0] = (__int64 (__fastcall *)())HalpQueryCapsuleCapabilities;
  off_140E00AA8[0] = HalpUpdateCapsule;
  off_140E00BA0[0] = (__int64 (__fastcall *)())HalpIsEFIRuntimeActive;
  off_140E00BE0[0] = (__int64 (__fastcall *)())HalpEnumerateEnvironmentVariablesWithFilter;
  return HalpEfiInitialization(a1);
}
