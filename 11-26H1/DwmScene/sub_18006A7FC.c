/*
 * XREFs of sub_18006A7FC @ 0x18006A7FC
 * Callers:
 *     sub_180065618 @ 0x180065618 (sub_180065618.c)
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001F898 @ 0x18001F898 (sub_18001F898.c)
 *     sub_18005FE28 @ 0x18005FE28 (sub_18005FE28.c)
 */

_BOOL8 __fastcall sub_18006A7FC(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r11
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = sub_1800141BC(a2);
  v6 = sub_18001F898(v5, v3, 2LL * *(_QWORD *)(v4 + 16));
  return sub_18005FE28(a1, v9, v7, v6)[1] != 0LL;
}
