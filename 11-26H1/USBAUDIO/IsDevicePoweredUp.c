/*
 * XREFs of IsDevicePoweredUp @ 0x140041454
 * Callers:
 *     PinAddPinToList @ 0x1400086F8 (PinAddPinToList.c)
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000952C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsDevicePoweredUp(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(a1 + 16) + 536LL) == 1;
}
