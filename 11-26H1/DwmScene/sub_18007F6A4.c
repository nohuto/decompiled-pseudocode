/*
 * XREFs of sub_18007F6A4 @ 0x18007F6A4
 * Callers:
 *     sub_18007E42C @ 0x18007E42C (sub_18007E42C.c)
 *     sub_180084D48 @ 0x180084D48 (sub_180084D48.c)
 *     sub_1800C5CB8 @ 0x1800C5CB8 (sub_1800C5CB8.c)
 *     sub_1800C8AA0 @ 0x1800C8AA0 (sub_1800C8AA0.c)
 * Callees:
 *     sub_1800425BC @ 0x1800425BC (sub_1800425BC.c)
 */

__int64 *__fastcall sub_18007F6A4(__int64 *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v4; // r8
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  sub_1800425BC(a1, &v8, a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *v4 < *(_DWORD *)(v9 + 32) )
    v6 = *a1;
  *v5 = v6;
  return v5;
}
