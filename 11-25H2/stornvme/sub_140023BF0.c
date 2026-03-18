/*
 * XREFs of sub_140023BF0 @ 0x140023BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140031208 @ 0x140031208 (sub_140031208.c)
 */

__int64 __fastcall sub_140023BF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9

  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 56) & 0xFFFFFFDF | ((unsigned int)sub_140031208() != 0 ? 0x20 : 0);
  return StorPortExtendedFunction(31LL, a1, a3, v5);
}
