/*
 * XREFs of sub_1400B29A3 @ 0x1400B29A3
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003260 @ 0x140003260 (sub_140003260.c)
 */

__int64 __fastcall sub_1400B29A3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 72) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 72) &= ~4u;
    return sub_140003260((__int64 *)(a2 + 184));
  }
  return result;
}
