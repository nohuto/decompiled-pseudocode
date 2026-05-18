/*
 * XREFs of sub_1800887D8 @ 0x1800887D8
 * Callers:
 *     sub_180063990 @ 0x180063990 (sub_180063990.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 *     sub_18004F4C4 @ 0x18004F4C4 (sub_18004F4C4.c)
 *     sub_18004FA2C @ 0x18004FA2C (sub_18004FA2C.c)
 *     sub_180077FD8 @ 0x180077FD8 (sub_180077FD8.c)
 *     sub_18008819C @ 0x18008819C (sub_18008819C.c)
 *     sub_1800889A0 @ 0x1800889A0 (sub_1800889A0.c)
 *     sub_180088BE0 @ 0x180088BE0 (sub_180088BE0.c)
 *     sub_180088E28 @ 0x180088E28 (sub_180088E28.c)
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 *     sub_18008966C @ 0x18008966C (sub_18008966C.c)
 *     sub_1800896FC @ 0x1800896FC (sub_1800896FC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800887D8(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  const void *v6; // rax
  const void *v7; // r10
  __int64 v8; // rcx
  const void *v9; // rax
  const void *v10; // r10
  __int64 v11; // rcx
  const void *v12; // rax
  const void *v13; // r10
  __int64 v14; // rcx
  const void *v15; // rax
  const void *v16; // r10
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v20; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h]
  int v22; // [rsp+40h] [rbp-C0h]
  _QWORD v23[30]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v24[4]; // [rsp+140h] [rbp+40h] BYREF

  sub_1800276A8(v24, a2, &a2[a3]);
  sub_18004F4C4(v23, (__int64)v24);
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  sub_1800148EC(a4);
  v6 = (const void *)sub_1800148EC((__int64)&unk_1801CD8F8);
  if ( sub_18001CFB0(v7, *(_QWORD *)(a4 + 16), v6, qword_1801CD908) )
    sub_180088BE0(v8, v24, &v19);
  sub_1800148EC(a4);
  v9 = (const void *)sub_1800148EC((__int64)&unk_1801CD898);
  if ( sub_18001CFB0(v10, *(_QWORD *)(a4 + 16), v9, qword_1801CD8A8) )
    sub_1800889A0(v11, v23, &v19);
  sub_1800148EC(a4);
  v12 = (const void *)sub_1800148EC((__int64)&unk_1801CD8B8);
  if ( sub_18001CFB0(v13, *(_QWORD *)(a4 + 16), v12, qword_1801CD8C8) )
    sub_180088E28(v14, v23, &v19);
  sub_1800148EC(a4);
  v15 = (const void *)sub_1800148EC((__int64)&unk_1801CD8D8);
  if ( sub_18001CFB0(v16, *(_QWORD *)(a4 + 16), v15, qword_1801CD8E8) )
    sub_180089204(v17, v23, &v19);
  sub_1800896FC(a1, v19, &v20);
  sub_18008966C(a1);
  sub_18008819C(a1);
  sub_180077FD8((__int64)&v20);
  sub_18004FA2C((__int64)v23);
  return sub_1800129D0((__int64)v24);
}
