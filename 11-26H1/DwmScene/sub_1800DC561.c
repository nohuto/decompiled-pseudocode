/*
 * XREFs of sub_1800DC561 @ 0x1800DC561
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013488 @ 0x180013488 (sub_180013488.c)
 */

__int64 __fastcall sub_1800DC561(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180013488();
  }
  return result;
}
