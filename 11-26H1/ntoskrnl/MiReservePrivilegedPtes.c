/*
 * XREFs of MiReservePrivilegedPtes @ 0x140B2A940
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1404EFB04 (KeReservePrivilegedPages.c)
 */

__int64 MiReservePrivilegedPtes()
{
  if ( (MiFlags & 0x10000) != 0 )
    return KeReservePrivilegedPages();
  else
    return 0LL;
}
