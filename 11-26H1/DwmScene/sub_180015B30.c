/*
 * XREFs of sub_180015B30 @ 0x180015B30
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 */

__int64 __fastcall sub_180015B30(__int64 a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h]
  _BYTE v11[16]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v12[4]; // [rsp+40h] [rbp-48h] BYREF

  v4 = (_QWORD *)sub_18001367C(*(_QWORD *)(a1 + 32), &v9);
  sub_180029C50(*v4 + 16LL, v11);
  if ( v10 )
    sub_180010EC8(v10);
  sub_18003BCCC(*(_QWORD *)(a1 + 32), v12);
  v5 = v12[1];
  v6 = v12[2];
  v7 = v12[3];
  *a2 = v12[0];
  a2[1] = v5;
  a2[2] = v6;
  a2[3] = v7;
  sub_180011E54((__int64)v11);
  return 0LL;
}
