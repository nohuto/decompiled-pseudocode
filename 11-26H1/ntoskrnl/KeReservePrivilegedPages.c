/*
 * XREFs of KeReservePrivilegedPages @ 0x1404EFB04
 * Callers:
 *     MiUnlockDriverPages @ 0x140AC8FF4 (MiUnlockDriverPages.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     MiReservePrivilegedPtes @ 0x140B2A940 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x140B62200 (MiReleasePrivilegedPtes.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140B1E5DC (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
