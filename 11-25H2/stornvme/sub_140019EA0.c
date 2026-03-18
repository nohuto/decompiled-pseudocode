/*
 * XREFs of sub_140019EA0 @ 0x140019EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002EBF8 @ 0x14002EBF8 (sub_14002EBF8.c)
 */

__int64 __fastcall sub_140019EA0(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 24) & 0x8008) == 0 )
    return sub_14002EBF8();
  return result;
}
