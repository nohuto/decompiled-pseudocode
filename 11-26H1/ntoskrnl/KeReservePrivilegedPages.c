/*
 * XREFs of KeReservePrivilegedPages @ 0x1404F64F4
 * Callers:
 *     MiUnlockDriverPages @ 0x140AC7404 (MiUnlockDriverPages.c)
 *     MiFreeInitializationCode @ 0x140AC9178 (MiFreeInitializationCode.c)
 *     MiReservePrivilegedPtes @ 0x140B2846C (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x140B5F080 (MiReleasePrivilegedPtes.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140B1C3CC (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
