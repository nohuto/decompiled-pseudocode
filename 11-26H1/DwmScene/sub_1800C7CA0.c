/*
 * XREFs of sub_1800C7CA0 @ 0x1800C7CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001818C @ 0x18001818C (sub_18001818C.c)
 *     sub_180054068 @ 0x180054068 (sub_180054068.c)
 *     sub_1800BF2BC @ 0x1800BF2BC (sub_1800BF2BC.c)
 *     sub_1800C403C @ 0x1800C403C (sub_1800C403C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800C7CA0(__int64 a1, int a2, __int64 *a3, unsigned int a4)
{
  __int64 v6; // r14
  __int64 *v7; // rax
  char v8; // di
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 *v11; // rax
  __int64 *v12; // rax
  char v13; // bl
  char v14; // bl
  __int64 v15; // r12
  __int64 *v16; // rdx
  char v17; // di
  char v18; // di
  int v19; // esi
  int v20; // esi
  __int64 result; // rax
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h]
  _QWORD v26[4]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+70h] [rbp-10h] BYREF
  __int64 v28; // [rsp+78h] [rbp-8h]
  __int64 v29; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+D8h] [rbp+58h]

  v30 = a4;
  v6 = 0LL;
  if ( *a3 )
  {
    v7 = sub_180054068(*a3, &v22, *(_DWORD *)(a1 + 88));
    v8 = 1;
    v9 = *v7;
  }
  else
  {
    v25 = 0LL;
    v7 = &v24;
    v8 = 2;
    v9 = 0LL;
  }
  v26[0] = v9;
  v10 = v7[1];
  v26[1] = v10;
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v25 )
      sub_180010EC8(v25);
  }
  if ( (v8 & 1) != 0 )
  {
    v8 &= ~1u;
    if ( v23 )
      sub_180010EC8(v23);
  }
  if ( v9 )
  {
    v11 = sub_180012C40(&v22, v26);
    v12 = sub_18001818C(&v27, v11);
    v13 = 4;
    v6 = *v12;
  }
  else
  {
    v25 = 0LL;
    v12 = &v24;
    v13 = 8;
  }
  v14 = v8 | v13;
  v26[2] = v6;
  v15 = v12[1];
  v26[3] = v15;
  *v12 = 0LL;
  v12[1] = 0LL;
  if ( (v14 & 8) != 0 )
  {
    v14 &= ~8u;
    if ( v25 )
      sub_180010EC8(v25);
  }
  if ( (v14 & 4) != 0 )
  {
    v14 &= ~4u;
    if ( v28 )
      sub_180010EC8(v28);
  }
  if ( v6 )
  {
    sub_1800C403C((_QWORD *)v6);
    v22 = *(_QWORD *)(v6 + 160);
    sub_180012440(&v22);
    v16 = &v22;
    v17 = 80;
  }
  else
  {
    v24 = 0LL;
    v16 = &v24;
    v17 = 32;
  }
  v18 = v14 | v17;
  sub_1800BF2BC(&v29, v16);
  if ( (v18 & 0x20) != 0 )
  {
    v18 &= ~0x20u;
    sub_18000F938(&v24);
  }
  if ( (v18 & 0x10) != 0 )
    sub_18000F938(&v22);
  if ( v6 && *(_BYTE *)(v6 + 208) )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 432LL))(*(_QWORD *)(a1 + 144), v29);
    *(_BYTE *)(v6 + 208) = 0;
  }
  v19 = a2 - 1;
  if ( v19 )
  {
    v20 = v19 - 3;
    if ( v20 )
    {
      if ( v20 == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 64LL))(
          *(_QWORD *)(a1 + 144),
          v30,
          1LL,
          &v29);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 248LL))(
        *(_QWORD *)(a1 + 144),
        v30,
        1LL,
        &v29);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 144) + 200LL))(
      *(_QWORD *)(a1 + 144),
      v30,
      1LL,
      &v29);
  }
  if ( v29 )
    _InterlockedIncrement64(qword_1801C8CB0);
  result = sub_18000F938(&v29);
  if ( v15 )
    result = sub_180010EC8(v15);
  if ( v10 )
    return sub_180010EC8(v10);
  return result;
}
