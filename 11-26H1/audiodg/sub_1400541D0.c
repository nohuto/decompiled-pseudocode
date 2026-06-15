/*
 * XREFs of sub_1400541D0 @ 0x1400541D0
 * Callers:
 *     sub_140052178 @ 0x140052178 (sub_140052178.c)
 *     sub_140052318 @ 0x140052318 (sub_140052318.c)
 * Callees:
 *     sub_140020994 @ 0x140020994 (sub_140020994.c)
 *     sub_14002A6F8 @ 0x14002A6F8 (sub_14002A6F8.c)
 *     sub_140052E0C @ 0x140052E0C (sub_140052E0C.c)
 *     sub_140052F18 @ 0x140052F18 (sub_140052F18.c)
 */

unsigned __int64 __fastcall sub_1400541D0(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 *v6; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // r12
  _QWORD *v21; // r8
  __int64 v22; // r8
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  __int64 v31; // [rsp+68h] [rbp+10h] BYREF

  LODWORD(v31) = 0;
  v2 = a1;
  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = v2[1];
  LODWORD(v31) = 0;
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = (__int64 *)(v2 + 3);
  v7 = 1LL << ((unsigned __int8)v5 + 1);
  sub_14002A6F8((unsigned __int64 **)v2 + 3, 2 * v7, v4);
  v2[7] = v7;
  v2[6] = v7 - 1;
  v8 = *(_QWORD **)v2[1];
  v9 = v8;
  while ( v8 != (_QWORD *)v4 )
  {
    v9 = (_QWORD *)*v9;
    v10 = sub_140052F18(v8 + 2);
    v12 = *v6;
    v13 = 2 * (v2[6] & v10);
    if ( *(_QWORD *)(v12 + 16 * (v2[6] & v10)) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (v2[6] & v10)) = v8;
      *(_QWORD *)(v12 + 8 * v13 + 8) = v8;
    }
    else
    {
      v14 = *(_QWORD **)(v12 + 16 * (v2[6] & v10) + 8);
      if ( sub_140020994(v11, v8 + 2, v14 + 2) )
      {
        v20 = v14;
        while ( 1 )
        {
          v21 = v14 + 1;
          if ( *(_QWORD **)(v12 + 8 * v13) == v20 )
            break;
          v14 = (_QWORD *)*v21;
          v20 = (_QWORD *)*v21;
          if ( !sub_140020994(v15, v8 + 2, (_QWORD *)(*v21 + 16LL)) )
          {
            v22 = *v14;
            v23 = (_QWORD *)v8[1];
            *v23 = v9;
            v24 = (_QWORD *)v9[1];
            *v24 = v22;
            v25 = *(_QWORD **)(v22 + 8);
            *v25 = v8;
            *(_QWORD *)(v22 + 8) = v24;
            v9[1] = v23;
            v8[1] = v25;
            goto LABEL_16;
          }
        }
        v26 = (_QWORD *)v8[1];
        *v26 = v9;
        v27 = (_QWORD *)v9[1];
        *v27 = v14;
        v28 = (_QWORD *)*v21;
        *v28 = v8;
        *v21 = v27;
        v9[1] = v26;
        v8[1] = v28;
        *(_QWORD *)(v12 + 8 * v13) = v8;
      }
      else
      {
        v16 = *v14;
        if ( (_QWORD *)*v14 != v8 )
        {
          v17 = (_QWORD *)v8[1];
          *v17 = v9;
          v18 = (_QWORD *)v9[1];
          *v18 = v16;
          v19 = *(_QWORD **)(v16 + 8);
          *v19 = v8;
          *(_QWORD *)(v16 + 8) = v18;
          v9[1] = v17;
          v8[1] = v19;
        }
        *(_QWORD *)(v12 + 8 * v13 + 8) = v8;
      }
LABEL_16:
      v2 = a1;
    }
    v8 = v9;
    v6 = (__int64 *)(v2 + 3);
  }
  v31 = 0LL;
  return sub_140052E0C(&v31);
}
