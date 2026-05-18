/*
 * XREFs of sub_1800D4F08 @ 0x1800D4F08
 * Callers:
 *     sub_180036FAC @ 0x180036FAC (sub_180036FAC.c)
 * Callees:
 *     _o_floor @ 0x18000CE40 (_o_floor.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_180025EA0 @ 0x180025EA0 (sub_180025EA0.c)
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 *     sub_18006C90C @ 0x18006C90C (sub_18006C90C.c)
 *     sub_1800D4BF0 @ 0x1800D4BF0 (sub_1800D4BF0.c)
 *     sub_1800D4E1C @ 0x1800D4E1C (sub_1800D4E1C.c)
 *     sub_1800D4E78 @ 0x1800D4E78 (sub_1800D4E78.c)
 *     sub_1800D51D4 @ 0x1800D51D4 (sub_1800D51D4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int8 __fastcall sub_1800D4F08(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int8 result; // al
  _QWORD *v5; // rdi
  _QWORD *v6; // r13
  char v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdx
  double v10; // xmm6_8
  double v11; // xmm1_8
  double v12; // xmm7_8
  int v13; // r15d
  int v14; // r12d
  int v15; // ecx
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // r14
  __int64 *v19; // rbx
  __int64 **v20; // rax
  __int64 v21; // [rsp+30h] [rbp-39h] BYREF
  __int64 v22; // [rsp+38h] [rbp-31h]
  __int128 v23; // [rsp+40h] [rbp-29h] BYREF
  __int64 v24; // [rsp+50h] [rbp-19h]
  __int64 v25; // [rsp+D0h] [rbp+67h] BYREF
  double v26; // [rsp+D8h] [rbp+6Fh] BYREF
  double v27; // [rsp+E0h] [rbp+77h] BYREF
  double v28; // [rsp+E8h] [rbp+7Fh] BYREF

  v23 = 0LL;
  v24 = 0LL;
  (***(void (__fastcall ****)(_QWORD, __int64 *))(a1 + 136))(*(_QWORD *)(a1 + 136), &v25);
  *(_QWORD *)&v26 = a1 + 56;
  sub_180012AC4(a1 + 56);
  sub_1800D4E1C((__int64 *)a1, &v27, *(__int64 **)(a1 + 8), *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 != v2 )
  {
    sub_1800130CC(v3, v2);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 24);
  }
  result = Mtx_unlock((_Mtx_t)(a1 + 56));
  v5 = *(_QWORD **)a1;
  v6 = *(_QWORD **)(a1 + 8);
  while ( v5 != v6 )
  {
    sub_180012C40(&v21, v5);
    v7 = 1;
    v8 = v21;
    if ( !sub_180041DBC(v21 + 168) )
    {
      *(_QWORD *)&v26 = v25 - *(_QWORD *)(v8 + 8);
      sub_1800D4BF0((__int64)&v27, (__int64)&v26);
      sub_1800D4BF0((__int64)&v28, v8 + 16);
      v10 = v27 / v28;
      v11 = 0.0;
      v12 = 0.0;
      v13 = (int)(v27 / v28);
      v14 = *(_DWORD *)(v8 + 24);
      v15 = *(_DWORD *)(v8 + 28);
      if ( v15 )
      {
        if ( v15 == 1 )
        {
          if ( v13 < v14 )
          {
            o_floor();
            v11 = v10 - v10;
          }
          v12 = v11;
        }
      }
      else if ( v13 < v14 )
      {
        o_floor();
        v12 = v10 - v10;
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v8 + 32) + 8LL))(
             *(_QWORD *)(v8 + 32),
             v9,
             *(_QWORD *)v8);
      if ( v7 )
      {
        v16 = *(_QWORD *)(v8 + 96);
        if ( v16 )
        {
          v26 = ((double)v13 + v12) / (double)*(int *)(v8 + 24);
          (*(void (__fastcall **)(__int64, double *))(*(_QWORD *)v16 + 16LL))(v16, &v26);
        }
      }
      if ( v13 >= v14 )
        goto LABEL_19;
    }
    result = sub_180041DBC(v8 + 168);
    if ( result || !v7 )
    {
LABEL_19:
      if ( *(_QWORD *)(v8 + 160) && v7 )
        sub_180025EA0(v8 + 104);
      if ( *((_QWORD *)&v23 + 1) == v24 )
      {
        result = (unsigned __int8)sub_18006C90C((__int64 *)&v23, *((__int64 *)&v23 + 1), &v21);
      }
      else
      {
        result = (unsigned __int8)sub_180013084(*((_QWORD **)&v23 + 1), &v21);
        *((_QWORD *)&v23 + 1) += 16LL;
      }
    }
    if ( v22 )
      result = sub_180010EC8(v22);
    v5 += 2;
  }
  v18 = (_QWORD *)*((_QWORD *)&v23 + 1);
  v17 = (_QWORD *)v23;
  if ( (_QWORD)v23 != *((_QWORD *)&v23 + 1) )
  {
    do
    {
      v19 = *(__int64 **)(a1 + 8);
      v20 = sub_1800D4E78((__int64 **)&v26, *(__int64 **)a1, v19, v17);
      result = sub_1800D51D4(a1, &v27, *v20, v19);
      v17 += 2;
    }
    while ( v17 != v18 );
    v17 = (_QWORD *)v23;
  }
  if ( v17 )
  {
    sub_1800130CC((__int64)v17, *((__int64 *)&v23 + 1));
    return sub_18000E26C((void *)v23, (v24 - v23) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return result;
}
