/*
 * XREFs of ShimExceptionHandler @ 0x180097528
 * Callers:
 *     SdbReleaseDatabase @ 0x18008DDFC (SdbReleaseDatabase.c)
 *     SdbInitDatabaseEx @ 0x18008FBFC (SdbInitDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 */

_BOOL8 __fastcall ShimExceptionHandler(const void **a1)
{
  AslLogCallPrintf(
    1LL,
    "ShimExceptionHandler",
    245LL,
    "Shim Exception %#x in module \"%hs\", line %d, at address %Ix. flags:%#x. !exr %#p !cxr %#p",
    *(_DWORD *)*a1,
    (const char *)word_1800BD990,
    0,
    *((_QWORD *)a1[1] + 31),
    *((_DWORD *)*a1 + 1),
    *a1,
    a1[1]);
  return *(_DWORD *)*a1 != -1073741571;
}
