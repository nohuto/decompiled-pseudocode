/*
 * XREFs of sub_14001B6D0 @ 0x14001B6D0
 * Callers:
 *     sub_1400279C4 @ 0x1400279C4 (sub_1400279C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14001B6D0(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 result; // rax

  *(_BYTE *)a1 = 9;
  *(_BYTE *)(a1 + 40) = 6;
  if ( a3 )
    *(_DWORD *)(a1 + 40) |= 0x80000000;
  result = *(unsigned int *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = result ^ ((unsigned __int8)result ^ a2) & 1;
  return result;
}
