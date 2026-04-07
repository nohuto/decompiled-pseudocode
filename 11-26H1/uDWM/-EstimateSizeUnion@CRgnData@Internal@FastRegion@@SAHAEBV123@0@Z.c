/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180054D4C
 * Callers:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180054A84 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeUnion(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r10
  __int64 v4; // rcx
  char *v5; // r9
  int v6; // ebp
  _DWORD *v7; // r11
  char *v8; // rbx
  _DWORD *v9; // rsi
  unsigned int v10; // r8d
  char *v11; // rdi
  char *v12; // rdx
  char *v13; // r9
  int v14; // ecx
  _DWORD *v15; // r10
  int v16; // ecx
  int v17; // ecx
  _DWORD *v18; // rdx
  char *v19; // rax
  int v21; // eax
  int j; // eax
  _DWORD *v23; // rdx
  char *v24; // r11
  int v25; // edx
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // ebp
  int i; // eax
  char *v31; // rdx
  int v32; // edx
  int v33; // edx
  char *v34; // rbx
  int v35; // eax
  int v36; // eax
  int v37; // eax

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = *((_DWORD *)a2 + 3);
  v7 = v3;
  v8 = (char *)a2 + 12;
  v9 = &v3[2 * v2];
  v10 = 8 * (v4 + v2) + 12;
  v11 = (char *)a2 + 8 * v4 + 12;
  if ( *v3 >= v6 )
  {
    v12 = (char *)a2 + 20;
    v13 = v5 + 8;
    if ( *v3 <= v6 )
    {
      v14 = v3[3];
      v15 = v3 + 2;
      v16 = (_DWORD)v12 + *((_DWORD *)v12 + 1) + v14 - *(v15 - 1) + 8 - (_DWORD)v8 - *((_DWORD *)v8 + 1);
      goto LABEL_4;
    }
    v29 = *v3;
    for ( i = (_DWORD)v12 + *((_DWORD *)v12 + 1) - (_DWORD)v8 - *((_DWORD *)v8 + 1);
          ;
          i = *((_DWORD *)v31 + 3) - *((_DWORD *)v31 + 1) + 8 )
    {
      v10 += i;
      v31 = v13;
      if ( v29 < *(_DWORD *)v13 )
      {
        v32 = v3[3] - *((_DWORD *)v13 - 1);
        v15 = v3 + 2;
        v33 = *((_DWORD *)v13 + 1) + v32 - *(v15 - 1) + 16;
        goto LABEL_24;
      }
      v34 = v13 + 8;
      if ( v29 <= *(_DWORD *)v13 )
        break;
      v13 += 8;
      if ( v13 == v11 )
      {
        v35 = v3[3];
        v15 = v3 + 2;
        v36 = v35 - v7[1] - (_DWORD)v7;
        goto LABEL_39;
      }
    }
    v15 = v3 + 2;
    v13 += 8;
    if ( v34 != v11 )
    {
      v25 = (_DWORD)v7 + 8;
      v26 = *((_DWORD *)v34 + 1) + v7[3] - *((_DWORD *)v34 - 1) - (_DWORD)v7 - v7[1] + 8;
LABEL_15:
      v16 = v25 + v26;
LABEL_4:
      v10 += v16;
      goto LABEL_5;
    }
    v36 = v15[1] - (_DWORD)v7 - v7[1];
LABEL_39:
    v37 = (_DWORD)v15 + v36;
    goto LABEL_46;
  }
  v21 = v3[3];
  v15 = v3 + 2;
  for ( j = (_DWORD)v15 + v21 - v7[1] - (_DWORD)v7; ; j = v23[3] - v23[1] + 8 )
  {
    v10 += j;
    v23 = v15;
    if ( *v15 >= v6 )
      break;
    v15 += 2;
    if ( v15 == v9 )
    {
      v28 = *((_DWORD *)v5 + 3);
      v13 = v5 + 8;
      v27 = (_DWORD)v13 + v28 - *((_DWORD *)v8 + 1) - (_DWORD)v8;
      goto LABEL_20;
    }
  }
  v24 = v5 + 8;
  v13 = v5 + 8;
  if ( *v15 <= v6 )
  {
    v25 = *((_DWORD *)v24 + 1);
    v15 += 2;
    if ( v15 != v9 )
    {
      v26 = (_DWORD)v24 + v15[1] - *(v15 - 1) + 8 - (_DWORD)v8 - *((_DWORD *)v8 + 1);
      goto LABEL_15;
    }
    v10 += v25 + (_DWORD)v24 - (_DWORD)v8 - *((_DWORD *)v8 + 1);
    goto LABEL_29;
  }
  v33 = *((_DWORD *)v24 + 1) + (_DWORD)v24 + v15[1] - *(v15 - 1) + 8 - (_DWORD)v8 - *((_DWORD *)v8 + 1);
LABEL_24:
  v10 += v33;
LABEL_5:
  while ( 1 )
  {
    v17 = *(_DWORD *)v13;
    v18 = v15;
    if ( *v15 >= *(_DWORD *)v13 )
      break;
    v15 += 2;
    v27 = *((_DWORD *)v13 + 1) - *((_DWORD *)v13 - 1);
    if ( v15 == v9 )
      goto LABEL_17;
    v10 += v15[1] + v27 - *(v15 - 1) + 16;
  }
  v19 = v13 + 8;
  v13 += 8;
  if ( *v15 > v17 )
  {
    if ( v13 == v11 )
      goto LABEL_45;
    v16 = (_DWORD)v13 + v15[1] + *((_DWORD *)v13 + 1) - *((_DWORD *)v19 - 1) - ((_DWORD)v19 - 8) - *(v15 - 1) + 8;
    goto LABEL_4;
  }
  v15 += 2;
  if ( v15 == v9 )
  {
    if ( v19 == v11 )
      return v10;
    v27 = *((_DWORD *)v19 + 1) - *((_DWORD *)v13 - 1);
LABEL_17:
    v10 += 8;
LABEL_20:
    v10 += v27;
LABEL_29:
    while ( 1 )
    {
      v13 += 8;
      if ( v13 == v11 )
        break;
      v10 += *((_DWORD *)v13 + 1) - *((_DWORD *)v13 - 1) + 8;
    }
    return v10;
  }
  if ( v13 != v11 )
  {
    v16 = (_DWORD)v13 + v18[3] + *((_DWORD *)v13 + 1) - *((_DWORD *)v19 - 1) - ((_DWORD)v19 - 8) - v18[1] + 8;
    goto LABEL_4;
  }
  v37 = v18[3] - v18[1] + 8;
LABEL_46:
  while ( 1 )
  {
    v10 += v37;
    v15 += 2;
    if ( v15 == v9 )
      break;
LABEL_45:
    v37 = v15[1] - *(v15 - 1);
    v10 += 8;
  }
  return v10;
}
