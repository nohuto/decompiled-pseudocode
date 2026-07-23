/*
 * XREFs of KiIsKernelStackSwappable @ 0x14042EA10
 * Callers:
 *     KeTryToFreezeThreadStack @ 0x1405EE9D0 (KeTryToFreezeThreadStack.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiIsKernelStackSwappable(__int64 a1)
{
  return *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x40) != 0 && *(char *)(a1 + 195) < 25;
}
