/*
 * XREFs of sub_140079E40 @ 0x140079E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052748 @ 0x140052748 (sub_140052748.c)
 *     sub_1400769B8 @ 0x1400769B8 (sub_1400769B8.c)
 */

__int64 __fastcall sub_140079E40(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 **v6; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  *a2 = 0LL;
  v6 = &v7;
  v2 = sub_140052748(v5, a1 - 16, (__int64)&v7);
  return sub_1400769B8((int *)(v3 + 48), *(_QWORD *)(v3 + 40), (__int64)v2, &v6);
}
