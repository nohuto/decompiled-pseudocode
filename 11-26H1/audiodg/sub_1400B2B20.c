/*
 * XREFs of sub_1400B2B20 @ 0x1400B2B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003260 @ 0x140003260 (sub_140003260.c)
 */

__int64 __fastcall sub_1400B2B20(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~4u;
    return sub_140003260((__int64 *)(a2 + 136));
  }
  return result;
}
