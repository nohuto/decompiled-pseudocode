/*
 * XREFs of MiGetSlabAllocatorTypeByProtection @ 0x1404C386C
 * Callers:
 *     MiUseSlabAllocator @ 0x140375BA4 (MiUseSlabAllocator.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetSlabAllocatorTypeByProtection(__int64 a1, char a2, int a3)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( !a3 )
    return 5LL;
  if ( (a2 & 2) == 0 )
  {
    if ( (a2 & 1) != 0 )
      return ((unsigned __int64)MiFlags >> 17) & 1;
    else
      return 2LL;
  }
  return result;
}
