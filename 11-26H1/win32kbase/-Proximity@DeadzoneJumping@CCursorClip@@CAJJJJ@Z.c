/*
 * XREFs of ?Proximity@DeadzoneJumping@CCursorClip@@CAJJJJ@Z @ 0x1401C514C
 * Callers:
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x140148AC0 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorClip::DeadzoneJumping::Proximity(int a1, int a2, int a3)
{
  __int64 result; // rax
  unsigned int v5; // ecx

  if ( a1 < a2 )
    return (unsigned int)(a2 - a1);
  v5 = a1 - a3;
  result = 0LL;
  if ( a1 > a3 )
    return v5;
  return result;
}
