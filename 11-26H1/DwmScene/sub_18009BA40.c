/*
 * XREFs of sub_18009BA40 @ 0x18009BA40
 * Callers:
 *     sub_18009BCD8 @ 0x18009BCD8 (sub_18009BCD8.c)
 * Callees:
 *     sub_18009B80C @ 0x18009B80C (sub_18009B80C.c)
 */

_QWORD *__fastcall sub_18009BA40(_QWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  __int64 v8; // r8
  char v9; // r9
  _QWORD *v10; // r10
  char v11; // cl
  char v12; // al
  char v13; // cl
  char v14; // r8
  char v15; // al
  _QWORD *v16; // r8
  _QWORD *v17; // r9
  char v18; // r10
  char v19; // cl
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rcx
  bool v23; // zf
  _QWORD *v24; // r10
  char v25; // cl
  char v26; // r11
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 *v36; // r10
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD *result; // rax

  v6 = (_QWORD *)(a2 + 16 * ((__int64)((__int64)a3 - a2) >> 5));
  sub_18009B80C(a2, (__int64)v6, (__int64)(a3 - 2));
  v7 = v6 + 2;
  if ( a2 < (unsigned __int64)v6 )
  {
    v8 = *v6;
    do
    {
      v9 = *(_BYTE *)(v8 + 88);
      v10 = v6 - 2;
      v8 = *(v6 - 2);
      v11 = *(_BYTE *)(v8 + 88);
      v12 = v11;
      if ( v11 == v9 )
        v12 = 0;
      if ( v12 || v9 != v11 && *(_BYTE *)(*v6 + 88LL) )
        break;
      v6 -= 2;
    }
    while ( a2 < (unsigned __int64)v10 );
  }
  if ( v7 < a3 )
  {
    v13 = *(_BYTE *)(*v6 + 88LL);
    do
    {
      v14 = *(_BYTE *)(*v7 + 88LL);
      v15 = v14;
      if ( v14 == v13 )
        v15 = 0;
      if ( v15 || v13 != v14 && v13 )
        break;
      v7 += 2;
    }
    while ( v7 < a3 );
  }
  v16 = v7;
  v17 = v6;
  while ( 2 )
  {
    while ( v16 < a3 )
    {
      v18 = *(_BYTE *)(*v6 + 88LL);
      v19 = *(_BYTE *)(*v16 + 88LL);
      v20 = v18;
      if ( v18 == v19 )
        v20 = 0;
      if ( !v20 )
      {
        if ( v19 != v18 && v19 )
          break;
        if ( v7 != v16 )
        {
          v21 = *v7;
          *v7 = *v16;
          *v16 = v21;
          v22 = v7[1];
          v7[1] = v16[1];
          v16[1] = v22;
        }
        v7 += 2;
      }
LABEL_26:
      v16 += 2;
    }
    v23 = v17 == (_QWORD *)a2;
    if ( (unsigned __int64)v17 <= a2 )
      goto LABEL_39;
    v24 = v17 - 2;
    do
    {
      v25 = *(_BYTE *)(*v6 + 88LL);
      v26 = *(_BYTE *)(*v24 + 88LL);
      v27 = v26;
      if ( v26 == v25 )
        v27 = 0;
      if ( v27 )
        goto LABEL_37;
      if ( v25 != v26 && v25 )
        break;
      v6 -= 2;
      if ( v6 != v24 )
      {
        v28 = *v6;
        *v6 = *v24;
        *v24 = v28;
        v29 = v6[1];
        v6[1] = v24[1];
        v24[1] = v29;
      }
LABEL_37:
      v17 -= 2;
      v24 -= 2;
    }
    while ( a2 < (unsigned __int64)v17 );
    v23 = v17 == (_QWORD *)a2;
LABEL_39:
    if ( !v23 )
    {
      v17 -= 2;
      if ( v16 != a3 )
      {
        v43 = *v16;
        *v16 = *v17;
        v44 = v17[1];
        *v17 = v43;
        v45 = v16[1];
        v16[1] = v44;
        v17[1] = v45;
        goto LABEL_26;
      }
      v6 -= 2;
      v36 = v6 + 1;
      if ( v17 != v6 )
      {
        v37 = *v17;
        *v17 = *v6;
        v38 = *v36;
        *v6 = v37;
        v39 = v17[1];
        v17[1] = v38;
        *v36 = v39;
      }
      v40 = *v6;
      v7 -= 2;
      *v6 = *v7;
      v41 = v7[1];
      *v7 = v40;
      v42 = *v36;
      *v36 = v41;
      v7[1] = v42;
      continue;
    }
    break;
  }
  if ( v16 != a3 )
  {
    if ( v7 != v16 )
    {
      v30 = *v6;
      *v6 = *v7;
      v31 = v7[1];
      *v7 = v30;
      v32 = v6[1];
      v6[1] = v31;
      v7[1] = v32;
    }
    v33 = *v6;
    v7 += 2;
    *v6 = *v16;
    v34 = v16[1];
    *v16 = v33;
    v35 = v6[1];
    v6[1] = v34;
    v6 += 2;
    v16[1] = v35;
    goto LABEL_26;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v7;
  return result;
}
