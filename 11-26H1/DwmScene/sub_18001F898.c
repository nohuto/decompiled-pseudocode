/*
 * XREFs of sub_18001F898 @ 0x18001F898
 * Callers:
 *     sub_18003F558 @ 0x18003F558 (sub_18003F558.c)
 *     sub_180041D60 @ 0x180041D60 (sub_180041D60.c)
 *     sub_180061424 @ 0x180061424 (sub_180061424.c)
 *     sub_18006A7FC @ 0x18006A7FC (sub_18006A7FC.c)
 *     sub_18006F430 @ 0x18006F430 (sub_18006F430.c)
 *     sub_1800D43E8 @ 0x1800D43E8 (sub_1800D43E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F898(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 i; // rcx
  __int64 v5; // rax

  v3 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v3 < a3; i = 0x100000001B3LL * (v5 ^ i) )
    v5 = *(unsigned __int8 *)(a2 + v3++);
  return i;
}
