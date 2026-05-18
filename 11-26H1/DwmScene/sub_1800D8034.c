/*
 * XREFs of sub_1800D8034 @ 0x1800D8034
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800134D0 @ 0x1800134D0 (sub_1800134D0.c)
 */

__int64 __fastcall sub_1800D8034(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_1800134D0();
  }
  return result;
}
