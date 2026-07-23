/*
 * XREFs of ExFreeAsid @ 0x1406D5168
 * Callers:
 *     IommuPasidDeviceCreate @ 0x140789BA0 (IommuPasidDeviceCreate.c)
 * Callees:
 *     ExpFreeAsid @ 0x1406D5704 (ExpFreeAsid.c)
 */

__int64 __fastcall ExFreeAsid(int a1)
{
  return ExpFreeAsid((unsigned int)(a1 - 1), 0LL);
}
