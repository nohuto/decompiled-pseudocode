/*
 * XREFs of sub_1800490A8 @ 0x1800490A8
 * Callers:
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18002A9D8 @ 0x18002A9D8 (sub_18002A9D8.c)
 *     sub_180049070 @ 0x180049070 (sub_180049070.c)
 *     sub_180049298 @ 0x180049298 (sub_180049298.c)
 *     sub_1800497A4 @ 0x1800497A4 (sub_1800497A4.c)
 *     sub_18004B590 @ 0x18004B590 (sub_18004B590.c)
 *     sub_18004B5D8 @ 0x18004B5D8 (sub_18004B5D8.c)
 */

__int64 __fastcall sub_1800490A8(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  _QWORD v15[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]

  if ( a2 > 0x2E8BA2E8BA2E8BALL )
    sub_180012A30();
  v4 = 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 3);
  v5 = sub_18004B590();
  v6 = sub_18002A9D8(v5);
  v7 = sub_180011790(v6);
  v15[0] = a1;
  v15[2] = v5;
  v16 = v7 + 88 * v4;
  v8 = v7;
  v9 = sub_180049298(v16, a2 - v4);
  v10 = a1[1];
  v11 = v8;
  v12 = *a1;
  v17 = v9;
  while ( v12 != v10 )
  {
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)v11 = *(_QWORD *)v12;
    *(_QWORD *)(v11 + 8) = *(_QWORD *)(v12 + 8);
    *(_QWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_BYTE *)(v11 + 16) = *(_BYTE *)(v12 + 16);
    v13 = *(_DWORD *)(v12 + 20);
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_DWORD *)(v11 + 20) = v13;
    *(_QWORD *)(v11 + 24) = *(_QWORD *)(v12 + 24);
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(v12 + 32);
    *(_QWORD *)(v12 + 24) = 0LL;
    *(_QWORD *)(v12 + 32) = 0LL;
    *(_QWORD *)(v11 + 40) = 0LL;
    *(_QWORD *)(v11 + 48) = 0LL;
    *(_QWORD *)(v11 + 40) = *(_QWORD *)(v12 + 40);
    *(_QWORD *)(v11 + 48) = *(_QWORD *)(v12 + 48);
    *(_QWORD *)(v12 + 40) = 0LL;
    *(_QWORD *)(v12 + 48) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    *(_QWORD *)(v11 + 64) = 0LL;
    *(_QWORD *)(v11 + 56) = *(_QWORD *)(v12 + 56);
    *(_QWORD *)(v11 + 64) = *(_QWORD *)(v12 + 64);
    *(_QWORD *)(v12 + 56) = 0LL;
    *(_QWORD *)(v12 + 64) = 0LL;
    *(_QWORD *)(v11 + 72) = 0LL;
    *(_QWORD *)(v11 + 80) = 0LL;
    *(_QWORD *)(v11 + 72) = *(_QWORD *)(v12 + 72);
    *(_QWORD *)(v11 + 80) = *(_QWORD *)(v12 + 80);
    v11 += 88LL;
    *(_QWORD *)(v12 + 72) = 0LL;
    *(_QWORD *)(v12 + 80) = 0LL;
    v12 += 88LL;
  }
  sub_180049070(v11, v11);
  v15[1] = 0LL;
  sub_18004B5D8(a1, v8, a2, v5);
  return sub_1800497A4(v15);
}
