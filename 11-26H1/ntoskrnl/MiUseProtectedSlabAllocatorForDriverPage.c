/*
 * XREFs of MiUseProtectedSlabAllocatorForDriverPage @ 0x1404D6C20
 * Callers:
 *     MiAllocateDriverPage @ 0x140AEAC6C (MiAllocateDriverPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUseProtectedSlabAllocatorForDriverPage(__int64 a1, char a2, _DWORD *a3)
{
  if ( (MiFlags & 0x20000) != 0 && (*(_DWORD *)(a1 + 4) & 8) != 0 && (a2 & 2) != 0 )
  {
    *a3 = 0;
    return 1LL;
  }
  else
  {
    *a3 = 9;
    return 0LL;
  }
}
