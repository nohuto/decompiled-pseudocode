/*
 * XREFs of MiSelectSystemImageAddress @ 0x140B0C034
 * Callers:
 *     MiSelectImageBase @ 0x14099BC88 (MiSelectImageBase.c)
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiReserveDriverPtes @ 0x140B0C074 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MiSelectSystemImageAddress(__int64 a1)
{
  __int64 result; // rax

  result = MiReserveDriverPtes(a1, 0LL);
  if ( result )
    return result << 25 >> 16;
  return result;
}
