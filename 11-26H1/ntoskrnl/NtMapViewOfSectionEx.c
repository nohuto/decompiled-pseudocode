/*
 * XREFs of NtMapViewOfSectionEx @ 0x1409F12C0
 * Callers:
 *     DifNtMapViewOfSectionExWrapper @ 0x14067B990 (DifNtMapViewOfSectionExWrapper.c)
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x1409F1570 (MiMapViewOfSectionExCommon.c)
 */

__int64 __fastcall NtMapViewOfSectionEx(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        volatile void *a8,
        int a9)
{
  return MiMapViewOfSectionExCommon(a1, a2, a4, a5, a6, a7, a8, a9, 0, 0LL, KeGetCurrentThread()->PreviousMode, 0);
}
