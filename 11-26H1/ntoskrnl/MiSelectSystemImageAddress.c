/*
 * XREFs of MiSelectSystemImageAddress @ 0x140B0A274
 * Callers:
 *     MiSelectImageBase @ 0x1409CACA8 (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140AC6DF4 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x140B0A2B4 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(__int64 a1)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a1, 0LL);
  if ( result )
    return result << 25 >> 16;
  return result;
}
