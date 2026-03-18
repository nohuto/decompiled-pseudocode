/*
 * XREFs of MiSkipWalkLock @ 0x14045A6C0
 * Callers:
 *     MiYieldPageTableWalk @ 0x140362E50 (MiYieldPageTableWalk.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiSkipWalkLock(_DWORD *a1, __int64 a2)
{
  return (*a1 & 0x800) != 0 && a2 == 0xFFFFF6FB7DBEDF68uLL;
}
