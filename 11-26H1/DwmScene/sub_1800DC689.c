/*
 * XREFs of sub_1800DC689 @ 0x1800DC689
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013488 @ 0x180013488 (sub_180013488.c)
 */

__int64 __fastcall sub_1800DC689(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return sub_180013488();
  }
  return result;
}
