/*
 * XREFs of sub_180024B24 @ 0x180024B24
 * Callers:
 *     sub_1800262D4 @ 0x1800262D4 (sub_1800262D4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_1800119CC @ 0x1800119CC (sub_1800119CC.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_1800180D0 @ 0x1800180D0 (sub_1800180D0.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_180024B24(__int64 a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+30h] [rbp-20h]
  _QWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF

  sub_1800180D0(a2);
  sub_180029C50(a1 + 808, v16);
  sub_1800162D0(&v14, a2);
  v7 = v6[1];
  if ( v7 == v6[2] )
    sub_1800119CC(v6, v7, &v14);
  else
    sub_1800119A4((__int64)v6, &v14);
  if ( v15 )
    sub_180010F00(v15);
  sub_180011E54((__int64)v16);
  v8 = sub_180012C40(v16, a3);
  v9 = *a2;
  *(_QWORD *)(v9 + 72) = a1;
  if ( (*(_BYTE *)(v9 + 40) & 1) != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 16LL))(v9, v8);
    if ( !*(_DWORD *)(a1 + 552) )
    {
      LOBYTE(v10) = 1;
      sub_180029310(v9, 8LL, v10);
    }
  }
  v11 = v8[1];
  if ( v11 )
    sub_180010EC8(v11);
  v12 = a3[1];
  if ( v12 )
    sub_180010EC8(v12);
  return a2;
}
