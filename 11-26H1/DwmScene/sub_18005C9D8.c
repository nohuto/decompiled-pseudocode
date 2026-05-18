/*
 * XREFs of sub_18005C9D8 @ 0x18005C9D8
 * Callers:
 *     sub_18004BCCC @ 0x18004BCCC (sub_18004BCCC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18002AE20 @ 0x18002AE20 (sub_18002AE20.c)
 *     sub_18004CED4 @ 0x18004CED4 (sub_18004CED4.c)
 *     sub_18005BED0 @ 0x18005BED0 (sub_18005BED0.c)
 *     sub_18005C6D4 @ 0x18005C6D4 (sub_18005C6D4.c)
 *     sub_1800D5364 @ 0x1800D5364 (sub_1800D5364.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_18005C9D8(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rcx
  char v10; // bl
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+38h] [rbp-80h] BYREF
  __int64 v15; // [rsp+40h] [rbp-78h]
  __int64 v16; // [rsp+48h] [rbp-70h]
  _QWORD *v17; // [rsp+50h] [rbp-68h]
  _QWORD *v18; // [rsp+58h] [rbp-60h]
  __int64 v19; // [rsp+60h] [rbp-58h] BYREF
  __int64 v20; // [rsp+68h] [rbp-50h]
  __int64 v21; // [rsp+70h] [rbp-48h]

  v16 = a1;
  v21 = a2;
  v17 = a3;
  v18 = a4;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_1800181BC((_QWORD *)(a1 + 16), a2);
  sub_18004CED4((__int64 *)(a1 + 48));
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  sub_18002AE20((__int64 *)(a1 + 80));
  memset((void *)(a1 + 96), 0, 0xA0uLL);
  sub_18000D81C(a1 + 96, 16LL, 10LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  memset((void *)(a1 + 256), 0, 0xA0uLL);
  sub_18000D81C(a1 + 256, 16LL, 10LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  v8 = sub_180011790(0x48uLL);
  *(_QWORD *)v8 = v8;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)(v8 + 16) = v8;
  *(_WORD *)(v8 + 24) = 257;
  *(_QWORD *)(a1 + 416) = v8;
  *(_DWORD *)(a1 + 432) = 0;
  sub_180012C40((_QWORD *)(a1 + 440), a3);
  if ( *a4 )
  {
    v9 = sub_180012C40(&v19, a4);
    v10 = 1;
  }
  else
  {
    v9 = sub_18005C6D4(&v14);
    v10 = 2;
  }
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 456) = *v9;
  *(_QWORD *)(a1 + 464) = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    if ( v15 )
      sub_180010EC8(v15);
  }
  if ( (v10 & 1) != 0 && v20 )
    sub_180010EC8(v20);
  sub_1800D5364(a1 + 472);
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 480) = sub_18005BED0();
  sub_1800143C0(a1 + 496);
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  sub_1800129D0(a2);
  v11 = a3[1];
  if ( v11 )
    sub_180010EC8(v11);
  v12 = a4[1];
  if ( v12 )
    sub_180010EC8(v12);
  return a1;
}
