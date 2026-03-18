/*
 * XREFs of PiIommuIsDeviceSafeWhileConsoleLocked @ 0x140B131EC
 * Callers:
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x1407B0EE4 (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140B130B4 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140B13278 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIommuIsDeviceSafeWhileConsoleLocked(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 16);
  return (v1 & 1) != 0 || (v1 & 8) != 0 || (v1 & 0x24) == 0;
}
