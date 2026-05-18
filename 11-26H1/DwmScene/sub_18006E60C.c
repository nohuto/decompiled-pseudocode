/*
 * XREFs of sub_18006E60C @ 0x18006E60C
 * Callers:
 *     sub_18006EC64 @ 0x18006EC64 (sub_18006EC64.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800435A4 @ 0x1800435A4 (sub_1800435A4.c)
 *     sub_18004B290 @ 0x18004B290 (sub_18004B290.c)
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_18005A8BC @ 0x18005A8BC (sub_18005A8BC.c)
 *     sub_18007EDAC @ 0x18007EDAC (sub_18007EDAC.c)
 *     sub_18007EFAC @ 0x18007EFAC (sub_18007EFAC.c)
 *     sub_18008FA84 @ 0x18008FA84 (sub_18008FA84.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006E60C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rax
  void (__fastcall *v8)(__int64, _QWORD *); // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  int v11; // r10d
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdi
  void (__fastcall *v22)(__int64, __int64 *, _QWORD *, __int64, _QWORD *); // rbx
  __int64 v23; // rax
  unsigned int v24; // eax
  int v25; // r10d
  __int64 result; // rax
  __int128 v27; // [rsp+30h] [rbp-49h] BYREF
  __int64 v28; // [rsp+40h] [rbp-39h] BYREF
  __int64 v29; // [rsp+48h] [rbp-31h]
  __int128 v30; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v31[8]; // [rsp+60h] [rbp-19h] BYREF
  volatile signed __int32 *v32; // [rsp+68h] [rbp-11h]
  _QWORD v33[4]; // [rsp+70h] [rbp-9h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 376LL))(*a2, v31);
  sub_180012A94(v6, &v28);
  if ( v32 )
    sub_180010F00(v32);
  v7 = sub_180012C40(&v27, &v28);
  v8(v9, v7);
  v10 = (unsigned int)sub_180012C40(v33, a3);
  v27 = 0LL;
  sub_18008FA84(v11, (unsigned int)&v28, (unsigned int)&v27, v10, -1);
  v27 = 0LL;
  sub_18005A750(*(_QWORD *)(a1 + 272), (__int64 *)&v27);
  *(_BYTE *)(*(_QWORD *)(a1 + 272) + 465LL) &= 0xF8u;
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 32LL))(*a2, &v30);
  v27 = v30;
  v30 = 0LL;
  sub_18005A8BC(*(_QWORD *)(a1 + 272), (__int64 *)&v27);
  if ( (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2) != 1.0
    || (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2) != 1.0 )
  {
    v12 = (int)*(float *)(*a3 + 144LL);
    v13 = (int)*(float *)(*a3 + 148LL);
    v14 = *(_QWORD *)(a1 + 272);
    *(_QWORD *)(v14 + 372) = 0LL;
    *(_DWORD *)(v14 + 380) = v12;
    *(_DWORD *)(v14 + 384) = v13;
    *(_BYTE *)(v14 + 388) = 1;
  }
  v15 = sub_180012C40(v33, a3);
  sub_18007EDAC(v16, &unk_1801CCFB8, v15);
  v17 = sub_180012C40(v33, (_QWORD *)(a1 + 304));
  sub_18007EFAC(v18, &unk_1801CCFB8, v17);
  sub_1800435A4(*(_QWORD *)(a1 + 400), *(_DWORD *)(a1 + 448), 0, 2);
  v19 = sub_180012C40(v33, (_QWORD *)(a1 + 400));
  sub_18004B290(v20, v19);
  v21 = *(_QWORD *)(a1 + 272);
  v22 = *(void (__fastcall **)(__int64, __int64 *, _QWORD *, __int64, _QWORD *))(*(_QWORD *)v21 + 208LL);
  sub_180011CC4(v33, "Display");
  v22(v21, &v28, a2, a1 + 336, v33);
  sub_1800129D0((__int64)v33);
  v23 = *(_QWORD *)(a1 + 272);
  if ( *(_BYTE *)(v23 + 388) )
    *(_BYTE *)(v23 + 388) = 0;
  v27 = 0LL;
  sub_18007EDAC(*(_QWORD *)(a1 + 416), &unk_1801CCFB8, &v27);
  v27 = 0LL;
  sub_18007EFAC(*(_QWORD *)(a1 + 416), &unk_1801CCFB8, &v27);
  v24 = (unsigned int)sub_180012C40(v33, a3);
  v27 = 0LL;
  result = sub_18008FA84(v25, (unsigned int)&v28, (unsigned int)&v27, v24, -1);
  if ( *((_QWORD *)&v30 + 1) )
    result = sub_180010EC8(*((__int64 *)&v30 + 1));
  if ( v29 )
    return sub_180010EC8(v29);
  return result;
}
