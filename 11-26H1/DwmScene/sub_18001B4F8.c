/*
 * XREFs of sub_18001B4F8 @ 0x18001B4F8
 * Callers:
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_1800872F0 @ 0x1800872F0 (sub_1800872F0.c)
 * Callees:
 *     sub_18005A910 @ 0x18005A910 (sub_18005A910.c)
 */

__int64 __fastcall sub_18001B4F8(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 != *(_DWORD *)(a1 + 316) )
  {
    *(_DWORD *)(a1 + 316) = a2;
    return sub_18005A910(a1, 2LL);
  }
  return result;
}
