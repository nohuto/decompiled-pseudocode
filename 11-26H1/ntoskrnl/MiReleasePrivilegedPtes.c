/*
 * XREFs of MiReleasePrivilegedPtes @ 0x140B5F080
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140AC6DF4 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1404F64F4 (KeReservePrivilegedPages.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __fastcall MiReleasePrivilegedPtes(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  int v4; // eax

  if ( (MiFlags & 0x10000) != 0 )
  {
    v4 = KeReservePrivilegedPages();
    if ( v4 < 0 )
      KeBugCheckEx(0x1Au, 0x51516uLL, BugCheckParameter2, BugCheckParameter3, v4);
  }
}
