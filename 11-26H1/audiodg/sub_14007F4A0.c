/*
 * XREFs of sub_14007F4A0 @ 0x14007F4A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052748 @ 0x140052748 (sub_140052748.c)
 *     sub_140076BD8 @ 0x140076BD8 (sub_140076BD8.c)
 */

__int64 __fastcall sub_14007F4A0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD **v6; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  *a2 = 0LL;
  v6 = &v7;
  v2 = sub_140052748(v5, a1, (__int64)&v7);
  return sub_140076BD8((unsigned int *)(v3 + 48), *(_QWORD *)(v3 + 32), (__int64)v2, &v6);
}
