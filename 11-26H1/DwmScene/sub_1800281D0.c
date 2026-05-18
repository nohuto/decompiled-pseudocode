/*
 * XREFs of sub_1800281D0 @ 0x1800281D0
 * Callers:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_180027EC8 @ 0x180027EC8 (sub_180027EC8.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001155C @ 0x18001155C (sub_18001155C.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800277FC @ 0x1800277FC (sub_1800277FC.c)
 *     sub_1800284A0 @ 0x1800284A0 (sub_1800284A0.c)
 *     sub_1800284F0 @ 0x1800284F0 (sub_1800284F0.c)
 *     sub_180028540 @ 0x180028540 (sub_180028540.c)
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 *     sub_180029070 @ 0x180029070 (sub_180029070.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_1800534C8 @ 0x1800534C8 (sub_1800534C8.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800281D0(__int64 *a1, __int64 a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  _QWORD *v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h]
  _BYTE v23[32]; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v24; // [rsp+98h] [rbp+18h] BYREF

  v4 = *(_DWORD *)(a2 + 244);
  if ( v4 )
  {
    v5 = sub_180012BF8(a2 + 8, &v21);
    sub_180029070(a1, v5);
    if ( v22 )
      sub_180010EC8(v22);
    sub_18001155C(a2, (__int64 *)&v19);
    v6 = v19;
    v7 = sub_18002912C(a1, &v21);
    sub_1800292C4(v6, v7);
    v8 = sub_1800284A0(a1);
    v11 = sub_1800284F0(a1, v9, v10, v8);
    v13 = sub_180028540(a1, v12, v11);
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v19 + 40LL))(v19, v13);
    v24 = v4;
    v14 = sub_1800277FC(a1 + 15, (__int64)&v21, &v24);
    sub_180013540((__int64 *)(*(_QWORD *)v14 + 40LL), &v19);
    if ( a1[17] )
    {
      sub_180012C40(&v21, v19 + 12);
      sub_1800534C8(v15, &v21);
      sub_180012C40(&v21, v19 + 12);
      v16 = sub_18002912C(a1[17], v23);
      sub_1800292C4(v21, v16);
      if ( v22 )
        sub_180010EC8(v22);
    }
    if ( a1[19] )
    {
      sub_180012C40(&v21, v19 + 14);
      sub_1800534C8(v17, &v21);
      sub_180012C40(&v21, v19 + 14);
      v18 = sub_18002912C(a1[19], v23);
      sub_1800292C4(v21, v18);
      if ( v22 )
        sub_180010EC8(v22);
    }
    v24 = v4;
    *(_BYTE *)(*(_QWORD *)sub_180028BD0(a1 + 10, &v21, &v24) + 32LL) = 1;
    if ( v20 )
      sub_180010EC8(v20);
  }
}
