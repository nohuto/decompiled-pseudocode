/*
 * XREFs of sub_140079F60 @ 0x140079F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140076618 @ 0x140076618 (sub_140076618.c)
 *     sub_140077348 @ 0x140077348 (sub_140077348.c)
 */

__int64 __fastcall sub_140079F60(__int64 a1, int a2, _QWORD *a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD **v7; // [rsp+50h] [rbp+8h] BYREF
  int v8; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = a3;
  v8 = a2;
  *a3 = 0LL;
  v7 = &v9;
  v3 = sub_140077348(v6, a1, (__int64)&v8, (__int64)&v9);
  return sub_140076618((unsigned int *)(v4 + 48), *(_QWORD *)(v4 + 40), (__int64)v3, &v7);
}
