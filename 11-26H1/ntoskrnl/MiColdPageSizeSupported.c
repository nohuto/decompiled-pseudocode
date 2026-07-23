/*
 * XREFs of MiColdPageSizeSupported @ 0x14048B510
 * Callers:
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 *     MiBackgroundZeroNodePages @ 0x140491210 (MiBackgroundZeroNodePages.c)
 *     MiLockPageToZero @ 0x1405215D8 (MiLockPageToZero.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiColdPageSizeSupported(unsigned int a1, __int64 a2)
{
  if ( (stru_140E366D8.WaitRegister.Flags & 2) == 0 || a1 > 1 && (stru_140E366D8.WaitRegister.Flags & 4) != 0 )
    return 0LL;
  if ( a2 )
    return (*(_DWORD *)(a2 + 14096) & 2) == 0;
  return 1LL;
}
