/*
 * XREFs of sub_1400B2C4C @ 0x1400B2C4C
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003260 @ 0x140003260 (sub_140003260.c)
 */

__int64 __fastcall sub_1400B2C4C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 344) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 344) &= ~1u;
    return sub_140003260((__int64 *)(a2 + 144));
  }
  return result;
}
