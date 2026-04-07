/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180064C00
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18000AA50 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeUnion(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  char *v5; // r10
  _DWORD *v6; // r11
  char *v7; // rbx
  _DWORD *v8; // rsi
  int v9; // eax
  char *v10; // rdi
  int v11; // ecx
  unsigned int v12; // edx
  _DWORD *v13; // r9
  char *v14; // r10
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // r11d
  int v19; // ebx
  _DWORD *v20; // rbp
  _DWORD *v21; // r14
  char *v22; // r8
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  char *v27; // rax
  char *i; // r10
  int j; // eax
  int v30; // eax
  char *v31; // rcx
  int v32; // ecx
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  _DWORD *v37; // rcx
  _DWORD *k; // r9
  int v39; // eax

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = v3;
  v7 = (char *)a2 + 12;
  v8 = &v3[2 * v2];
  v9 = v4 + v2;
  v10 = (char *)a2 + 8 * v4 + 12;
  v11 = *((_DWORD *)a2 + 3);
  v12 = 8 * v9 + 12;
  if ( *v3 < v11 )
  {
    v13 = v3 + 2;
    while ( 1 )
    {
      v12 += (_DWORD)v13 + v13[1] - v6[1] - (_DWORD)v6;
      v6 = v13;
      if ( *v13 >= v11 )
        break;
      v13 += 2;
      if ( v13 == v8 )
      {
        v25 = *((_DWORD *)v5 + 3);
        v14 = v5 + 8;
        v15 = v25 - *((_DWORD *)v7 + 1);
        goto LABEL_22;
      }
    }
    v14 = v5 + 8;
    if ( *v13 <= v11 )
    {
      v13 += 2;
      v15 = *((_DWORD *)v14 + 1) - *((_DWORD *)v7 + 1);
      if ( v13 == v8 )
      {
LABEL_22:
        v26 = (_DWORD)v14 + v15 - (_DWORD)v7;
LABEL_23:
        v12 += v26;
LABEL_24:
        v27 = v14;
        for ( i = v14 + 8; i != v10; i += 8 )
        {
          v35 = (_DWORD)i + *((_DWORD *)v27 + 3) - *((_DWORD *)v27 + 1) - (_DWORD)v27;
          v12 += v35;
          v27 += 8;
        }
        return v12;
      }
      goto LABEL_9;
    }
    v33 = (_DWORD)v14 + v13[1] + *((_DWORD *)v14 + 1) - *((_DWORD *)v7 + 1) - *(v13 - 1) - (_DWORD)v7 + 8;
LABEL_28:
    v12 += v33;
LABEL_11:
    v18 = *(_DWORD *)v14;
LABEL_12:
    v19 = *v13;
    while ( 1 )
    {
      v20 = v13;
      v21 = v13;
      v22 = v14;
      if ( v19 < v18 )
      {
        v24 = *((_DWORD *)v14 + 1);
        v13 += 2;
        if ( v13 == v8 )
        {
          v12 += v24 - *((_DWORD *)v14 - 1) + 8;
          goto LABEL_24;
        }
        v12 += (_DWORD)v13 + v24 + v13[1] - *((_DWORD *)v14 - 1) - v21[1] + 8 - (_DWORD)v21;
        goto LABEL_12;
      }
      v14 += 8;
      if ( v19 > v18 )
      {
        v6 = v13 - 2;
        if ( v14 == v10 )
          goto LABEL_41;
        v34 = v13[1] + (_DWORD)v14 + *((_DWORD *)v14 + 1) - *((_DWORD *)v22 + 1) - v6[1] - (_DWORD)v6 - (_DWORD)v22;
      }
      else
      {
        v13 += 2;
        if ( v13 == v8 )
        {
          if ( v14 == v10 )
            return v12;
          v26 = (_DWORD)v14 + *((_DWORD *)v14 + 1) - *((_DWORD *)v22 + 1) - (_DWORD)v22;
          goto LABEL_23;
        }
        if ( v14 == v10 )
        {
          v36 = v13[1] - v20[1] - (_DWORD)v20;
          goto LABEL_47;
        }
        v19 = *v13;
        v34 = (_DWORD)v14 + v13[1] + *((_DWORD *)v14 + 1) - *((_DWORD *)v22 + 1) - v20[1] - (_DWORD)v22 - (_DWORD)v20;
      }
      v18 = *(_DWORD *)v14;
      v12 += (_DWORD)v13 + v34;
    }
  }
  v16 = *((_DWORD *)v5 + 3);
  v14 = v5 + 8;
  if ( *v3 <= v11 )
  {
    v13 = v3 + 2;
    v15 = v16 - *((_DWORD *)v7 + 1);
LABEL_9:
    v17 = v13[1] + v15 - v6[1] - (_DWORD)v7;
LABEL_10:
    v12 += (_DWORD)v13 + (_DWORD)v14 + v17 - (_DWORD)v6;
    goto LABEL_11;
  }
  for ( j = v16 - *((_DWORD *)v7 + 1) - (_DWORD)v7; ; j = *((_DWORD *)v14 + 1) - *((_DWORD *)v31 + 1) - (_DWORD)v31 )
  {
    v12 += (_DWORD)v14 + j;
    v30 = *(_DWORD *)v14;
    v31 = v14;
    if ( *v3 < *(_DWORD *)v14 )
    {
      v32 = v3[3] - *((_DWORD *)v14 - 1);
      v13 = v3 + 2;
      v33 = (_DWORD)v13 + *((_DWORD *)v14 + 1) + v32 - v6[1] + 8 - (_DWORD)v6;
      goto LABEL_28;
    }
    v14 += 8;
    if ( *v3 <= v30 )
    {
      v13 = v3 + 2;
      if ( v14 == v10 )
        goto LABEL_41;
      v17 = v13[1] + *((_DWORD *)v14 + 1) - *((_DWORD *)v31 + 1) - v6[1] - (_DWORD)v31;
      goto LABEL_10;
    }
    if ( v14 == v10 )
      break;
  }
  v13 = v3 + 2;
LABEL_41:
  v36 = v13[1] - v6[1] - (_DWORD)v6;
LABEL_47:
  v37 = v13;
  v12 += (_DWORD)v13 + v36;
  for ( k = v13 + 2; k != v8; k += 2 )
  {
    v39 = (_DWORD)k + v37[3] - v37[1] - (_DWORD)v37;
    v12 += v39;
    v37 += 2;
  }
  return v12;
}
