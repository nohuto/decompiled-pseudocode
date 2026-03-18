/*
 * XREFs of ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x18012EC2C
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18012DBA4 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall FastRegion::CRegion::Contains(int **this, const struct CRegion *a2)
{
  int *v2; // rsi
  _DWORD *v3; // r8
  __int64 v4; // rcx
  int *v5; // rdx
  int v6; // edi
  int v7; // r11d
  _DWORD *v8; // rbp
  __int64 v9; // r14
  int v10; // r8d
  unsigned __int64 v11; // rbp
  int *v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rax
  int *v15; // r10
  int v16; // r13d
  int v17; // ebx
  int v18; // r15d
  __int64 i; // r11
  int *v20; // rdi
  int *v21; // rax
  int *v22; // rcx
  int *v23; // rdi
  int v24; // eax
  __int64 v25; // rax

  v2 = *this;
  if ( !**this )
    return 0;
  v3 = *(_DWORD **)a2;
  v4 = **(int **)a2;
  if ( (_DWORD)v4 )
  {
    v5 = v3 + 3;
    v6 = v2[2];
    v7 = v2[2 * *v2 + 1];
    if ( v2[1] <= v3[1] && v2[3] <= *v5 && v6 >= v3[2] && v7 >= v3[2 * v4 + 1] )
    {
      v8 = v3 + 3;
      v9 = (__int64)v3 + v3[4] + 12;
      v10 = 0;
      v11 = (unsigned __int64)&v8[2 * (int)v4 - 2];
      v12 = v5 + 2;
      v13 = (v5[3] - (__int64)v5[1] + 8) >> 3;
      if ( (int)v13 <= 0 )
      {
        v10 = 1;
        while ( 1 )
        {
          v5 = v12;
          v14 = v12[3];
          v9 = (__int64)v12 + v12[1];
          v12 += 2;
          LODWORD(v13) = ((__int64)v12 + v14 - v9) >> 3;
          if ( (_DWORD)v13 )
            break;
          if ( (unsigned __int64)v5 >= v11 )
            goto LABEL_11;
        }
        v10 = 0;
      }
LABEL_11:
      v15 = v5 + 2;
LABEL_12:
      while ( (unsigned __int64)v5 < v11 )
      {
        v16 = *v5;
        v17 = *(_DWORD *)(v9 + 8LL * v10);
        v18 = *(_DWORD *)(v9 + 8LL * v10 + 4);
        if ( *v15 > v7 || v18 > v6 || v17 < v2[1] || v16 < v2[3] )
          return 0;
        for ( i = 0LL; ; i += 2LL )
        {
          v20 = &v2[i + 3];
          if ( *v15 <= *v20 )
            break;
          v21 = &v2[i + 5];
          if ( v16 < *v21 )
          {
            v22 = (int *)((char *)v20 + v20[1]);
            v23 = (int *)((char *)v21 + v21[1]);
            while ( v22 < v23 && *v22 <= v17 )
            {
              v24 = v22[1];
              v22 += 2;
              if ( v24 <= v17 )
                v24 = v17;
              v17 = v24;
            }
            if ( v17 < v18 )
              return 0;
            v17 = *(_DWORD *)(v9 + 8LL * v10);
          }
        }
        v7 = v2[2 * *v2 + 1];
        ++v10;
        v6 = v2[2];
        if ( v10 >= (int)v13 )
        {
          while ( 1 )
          {
            v5 = v15;
            v25 = v15[3];
            v9 = (__int64)v15 + v15[1];
            v15 += 2;
            LODWORD(v13) = ((__int64)v15 + v25 - v9) >> 3;
            if ( (_DWORD)v13 )
              break;
            if ( (unsigned __int64)v5 >= v11 )
              goto LABEL_12;
          }
          v10 = 0;
        }
      }
      return 1;
    }
    return 0;
  }
  return 1;
}
