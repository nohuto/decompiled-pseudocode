/*
 * XREFs of MiReservePrivilegedPtes @ 0x140B2846C
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140AC6DF4 (MiGetSystemAddressForImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1404F64F4 (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x10000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
