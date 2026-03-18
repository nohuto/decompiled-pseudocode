/*
 * XREFs of ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18012E180
 * Callers:
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18012DEDC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeIntersect(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  int *v3; // r11
  __int64 v4; // rdx
  int *v5; // rax
  char *v6; // rdi
  unsigned int v7; // r10d
  int v8; // ecx
  int *v9; // rsi
  int v10; // edx
  int *v11; // r9
  char *v12; // rax
  int v13; // r8d
  char *v14; // r8
  int v15; // ecx
  int *v17; // r11
  int v18; // r8d
  int *v19; // r11

  v2 = *(int *)a1;
  v3 = (int *)((char *)a2 + 12);
  v4 = *(int *)a2;
  v5 = (int *)((char *)a1 + 12);
  v6 = (char *)a1 + 8 * v2 + 12;
  v7 = 8 * (v4 + v2) + 12;
  v8 = *v3;
  v9 = &v3[2 * v4];
  v10 = *v5;
  if ( *v5 < *v3 )
  {
    v12 = (char *)(v5 + 2);
    while ( *(_DWORD *)v12 < v8 )
    {
      v12 += 8;
      if ( v12 == v6 )
        return v7;
    }
    v11 = v3 + 2;
    if ( *(_DWORD *)v12 > v8 )
    {
      v13 = *((_DWORD *)v12 + 1) + v3[3] - v3[1] - *((_DWORD *)v12 - 1) + 16;
    }
    else
    {
      v12 += 8;
      if ( v12 == v6 )
        return v7;
      v13 = *((_DWORD *)v12 + 1) + v3[3] - v3[1] - *((_DWORD *)v12 - 1) + 16;
    }
    goto LABEL_4;
  }
  v11 = v3 + 2;
  if ( v10 <= v8 )
  {
    v12 = (char *)(v5 + 2);
    v13 = *((_DWORD *)v12 + 1) + v3[3] - v3[1] - *((_DWORD *)v12 - 1) + 16;
    goto LABEL_4;
  }
  while ( 1 )
  {
    if ( v10 < *v11 )
    {
      v18 = v5[3] - *(v11 - 1);
      v12 = (char *)(v5 + 2);
      v13 = v11[1] + v18 - *((_DWORD *)v12 - 1) + 16;
      goto LABEL_4;
    }
    v19 = v11 + 2;
    if ( v10 <= *v11 )
      break;
    v11 += 2;
    if ( v11 == v9 )
      return v7;
  }
  v12 = (char *)(v5 + 2);
  v11 += 2;
  if ( v19 != v9 )
  {
    v13 = *((_DWORD *)v12 + 1) + v19[1] - *(v19 - 1) - *((_DWORD *)v12 - 1) + 16;
LABEL_4:
    v7 += v13;
    v14 = v12 - 8;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = *v11;
          if ( *(_DWORD *)v12 >= *v11 )
            break;
          v12 += 8;
          v14 += 8;
          if ( v12 == v6 )
            return v7;
          v7 += *((_DWORD *)v12 + 1) + v11[1] - *(v11 - 1) - *((_DWORD *)v12 - 1) + 8 + 8;
        }
        v17 = v11 + 2;
        v11 += 2;
        if ( *(_DWORD *)v12 <= v15 )
          break;
        if ( v17 == v9 )
          return v7;
        v7 += (_DWORD)v12 + *((_DWORD *)v12 + 1) + v17[1] - *((_DWORD *)v14 + 1) - *(v17 - 1) + 8 - (_DWORD)v14;
      }
      v12 += 8;
      v14 += 8;
      if ( v12 == v6 || v17 == v9 )
        break;
      v7 += *((_DWORD *)v12 + 1) + v17[1] - *(v17 - 1) - *((_DWORD *)v12 - 1) + 16;
    }
  }
  return v7;
}
