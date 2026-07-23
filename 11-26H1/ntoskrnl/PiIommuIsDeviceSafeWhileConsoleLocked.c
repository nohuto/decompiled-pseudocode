/*
 * XREFs of PiIommuIsDeviceSafeWhileConsoleLocked @ 0x14096EBB8
 * Callers:
 *     PiDmaGuardProcessUpdateConsoleLockStateAction @ 0x1407B3F44 (PiDmaGuardProcessUpdateConsoleLockStateAction.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096EA80 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x14096EC44 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall PiIommuIsDeviceSafeWhileConsoleLocked(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 16);
  return (v1 & 1) != 0 || (v1 & 8) != 0 || (v1 & 0x24) == 0;
}
