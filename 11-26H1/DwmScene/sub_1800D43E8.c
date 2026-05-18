/*
 * XREFs of sub_1800D43E8 @ 0x1800D43E8
 * Callers:
 *     sub_1800D4380 @ 0x1800D4380 (sub_1800D4380.c)
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001F898 @ 0x18001F898 (sub_18001F898.c)
 *     sub_18005FE28 @ 0x18005FE28 (sub_18005FE28.c)
 */

_QWORD *__fastcall sub_1800D43E8(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_1800141BC(a3);
  v8 = sub_18001F898(v6, v5, v7);
  v10 = sub_18005FE28(a1, v12, v9, v8)[1];
  if ( !v10 )
    v10 = a1[1];
  *a2 = v10;
  return a2;
}
