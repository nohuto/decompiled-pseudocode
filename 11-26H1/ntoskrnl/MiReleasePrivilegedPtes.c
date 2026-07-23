/*
 * XREFs of MiReleasePrivilegedPtes @ 0x140B62200
 * Callers:
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 * Callees:
 *     KeReservePrivilegedPages @ 0x1404EFB04 (KeReservePrivilegedPages.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
