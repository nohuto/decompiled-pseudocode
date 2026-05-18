/*
 * XREFs of sub_1800853D8 @ 0x1800853D8
 * Callers:
 *     sub_180085CB0 @ 0x180085CB0 (sub_180085CB0.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012970 @ 0x180012970 (sub_180012970.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_18007D810 @ 0x18007D810 (sub_18007D810.c)
 *     sub_18007DBD4 @ 0x18007DBD4 (sub_18007DBD4.c)
 *     sub_18007F298 @ 0x18007F298 (sub_18007F298.c)
 *     sub_18007F2E0 @ 0x18007F2E0 (sub_18007F2E0.c)
 */

char *__fastcall sub_1800853D8(void **a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r15
  unsigned __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // r10
  char *v12; // rax
  __int64 v13; // xmm0_8
  __int64 v14; // rbx
  char *v15; // r8
  char *v16; // r15
  __int64 v17; // rdx
  void *v18; // rcx
  _QWORD v20[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-40h]
  char *v22; // [rsp+40h] [rbp-38h]

  v6 = (a2 - (__int64)*a1) / 12;
  v7 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( v7 == 0x1555555555555555LL )
    sub_180012A30();
  v8 = v7 + 1;
  v9 = sub_18007F298(a1, v7 + 1);
  v10 = v9;
  if ( v9 > v11 )
    sub_180012970();
  v12 = (char *)sub_180011790(12 * v9);
  v13 = *a3;
  v14 = (__int64)v12;
  v20[0] = a1;
  v20[2] = v10;
  v15 = v12;
  v16 = &v12[12 * v6];
  *(_QWORD *)v16 = v13;
  *((_DWORD *)v16 + 2) = *((_DWORD *)a3 + 2);
  v17 = (__int64)a1[1];
  v18 = *a1;
  v22 = v16 + 12;
  v21 = (__int64)v16;
  if ( a2 != v17 )
  {
    sub_18007D810(v18, a2, v12);
    v17 = (__int64)a1[1];
    v15 = v16 + 12;
    v18 = (void *)a2;
    v21 = v14;
  }
  sub_18007D810(v18, v17, v15);
  v20[1] = 0LL;
  sub_18007F2E0((__int64)a1, v14, v8, v10);
  sub_18007DBD4((__int64)v20);
  return v16;
}
