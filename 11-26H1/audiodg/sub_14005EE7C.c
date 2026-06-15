/*
 * XREFs of sub_14005EE7C @ 0x14005EE7C
 * Callers:
 *     sub_14005F054 @ 0x14005F054 (sub_14005F054.c)
 * Callees:
 *     sub_140020994 @ 0x140020994 (sub_140020994.c)
 *     sub_140026BBC @ 0x140026BBC (sub_140026BBC.c)
 *     sub_14002A54C @ 0x14002A54C (sub_14002A54C.c)
 *     sub_14005DFD0 @ 0x14005DFD0 (sub_14005DFD0.c)
 */

__int64 __fastcall sub_14005EE7C(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // rcx
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 *v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // r13
  _QWORD *v20; // r8
  _QWORD *v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __int64 v28; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(v28) = 0;
  v2 = a1;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = v2[1];
  LODWORD(v28) = 0;
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = v2 + 3;
  v7 = 1LL << ((unsigned __int8)v5 + 1);
  sub_14002A54C(v2 + 3, 2 * v7, v4);
  v2[7] = v7;
  v2[6] = v7 - 1;
  v9 = *(_QWORD **)v2[1];
  v10 = v9;
  while ( v9 != (_QWORD *)v4 )
  {
    v10 = (_QWORD *)*v10;
    v11 = (__int64)(v9 + 2);
    if ( v9[5] > 7uLL )
      v11 = v9[2];
    v12 = sub_140026BBC((__int64)v8, v11, 2LL * v9[4]);
    v13 = *v6;
    v14 = 2 * (v2[6] & v12);
    if ( *(_QWORD *)(v13 + 16 * (v2[6] & v12)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (v2[6] & v12)) = v9;
      *(_QWORD *)(v13 + 8 * v14 + 8) = v9;
    }
    else
    {
      v15 = *(_QWORD **)(v13 + 16 * (v2[6] & v12) + 8);
      if ( sub_140020994((__int64)v8, v9 + 2, v15 + 2) )
      {
        v19 = v15;
        while ( 1 )
        {
          v20 = v15 + 1;
          if ( *(_QWORD **)(v13 + 8 * v14) == v19 )
            break;
          v15 = (_QWORD *)*v20;
          v19 = (_QWORD *)*v20;
          if ( !sub_140020994((__int64)v8, v9 + 2, (_QWORD *)(*v20 + 16LL)) )
          {
            v21 = (_QWORD *)*v15;
            v22 = (_QWORD *)v9[1];
            *v22 = v10;
            v8 = (_QWORD *)v10[1];
            *v8 = v21;
            v23 = (_QWORD *)v21[1];
            *v23 = v9;
            v21[1] = v8;
            v10[1] = v22;
            v9[1] = v23;
            goto LABEL_18;
          }
        }
        v24 = (_QWORD *)v9[1];
        *v24 = v10;
        v25 = (_QWORD *)v10[1];
        *v25 = v15;
        v8 = (_QWORD *)*v20;
        *v8 = v9;
        *v20 = v25;
        v10[1] = v24;
        v9[1] = v8;
        *(_QWORD *)(v13 + 8 * v14) = v9;
      }
      else
      {
        v16 = *v15;
        if ( (_QWORD *)*v15 != v9 )
        {
          v17 = (_QWORD *)v9[1];
          *v17 = v10;
          v8 = (_QWORD *)v10[1];
          *v8 = v16;
          v18 = *(_QWORD **)(v16 + 8);
          *v18 = v9;
          *(_QWORD *)(v16 + 8) = v8;
          v10[1] = v17;
          v9[1] = v18;
        }
        *(_QWORD *)(v13 + 8 * v14 + 8) = v9;
      }
LABEL_18:
      v2 = a1;
    }
    v9 = v10;
    v6 = v2 + 3;
  }
  v28 = 0LL;
  return sub_14005DFD0(&v28);
}
