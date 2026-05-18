/*
 * XREFs of sub_1800D8DA2 @ 0x1800D8DA2
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011E30 @ 0x180011E30 (sub_180011E30.c)
 */

__int64 __fastcall sub_1800D8DA2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return sub_180011E30();
  }
  return result;
}
