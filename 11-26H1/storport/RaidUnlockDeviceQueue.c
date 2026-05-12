/*
 * XREFs of RaidUnlockDeviceQueue @ 0x140059A24
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1401BB140 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidUnlockDeviceQueue(__int64 a1)
{
  *(_BYTE *)(a1 + 37) = 0;
}
