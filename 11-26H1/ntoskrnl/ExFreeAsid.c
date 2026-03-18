/*
 * XREFs of ExFreeAsid @ 0x1406D1138
 * Callers:
 *     IommuPasidDeviceCreate @ 0x140787070 (IommuPasidDeviceCreate.c)
 * Callees:
 *     ExpFreeAsid @ 0x1406D16D4 (ExpFreeAsid.c)
 */

__int64 __fastcall ExFreeAsid(int a1)
{
  return ExpFreeAsid((unsigned int)(a1 - 1), 0LL);
}
