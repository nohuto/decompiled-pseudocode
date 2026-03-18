/*
 * XREFs of ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x14011ACCC
 * Callers:
 *     ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x14011A830 (-bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1401822B0 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vBoundBox(struct _POINTFIX *a1, __int64 a2)
{
  FIX x; // r10d
  struct _POINTFIX *v3; // rbx
  FIX v4; // eax
  struct _POINTFIX *v5; // r11
  FIX v6; // r8d
  FIX v7; // r9d
  struct _POINTFIX *v8; // r8
  FIX v9; // r9d
  __int64 v10; // rax
  __int64 v11; // r8
  FIX y; // r10d
  FIX v13; // eax
  FIX v14; // r8d
  FIX v15; // r9d
  __int64 v16; // r9
  FIX v17; // eax
  bool v18; // cc
  __int64 v19; // r8
  __int64 v20; // rax
  FIX v21; // r8d
  FIX v22; // eax
  FIX v23; // eax

  x = a1->x;
  v3 = a1 + 3;
  v4 = a1[1].x;
  v5 = a1 + 2;
  v6 = a1[2].x;
  v7 = a1[3].x;
  if ( a1->x < v4 )
  {
    if ( v6 > v7 )
    {
      if ( x >= v7 )
        x = a1[3].x;
      *(_DWORD *)a2 = x;
      v23 = v5->x;
    }
    else
    {
      if ( x >= v6 )
        x = a1[2].x;
      *(_DWORD *)a2 = x;
      v23 = v3->x;
    }
    v9 = a1[1].x;
    v11 = a2;
    if ( v9 <= v23 )
      v9 = v23;
    v10 = 8LL;
  }
  else
  {
    if ( v6 < v7 )
    {
      if ( v4 >= v6 )
        v4 = a1[2].x;
      v8 = a1;
      *(_DWORD *)a2 = v4;
      if ( a1->x <= v3->x )
        v8 = a1 + 3;
    }
    else
    {
      v8 = a1;
      if ( v4 >= v7 )
        v4 = a1[3].x;
      *(_DWORD *)a2 = v4;
      if ( a1->x <= v5->x )
        v8 = a1 + 2;
    }
    v9 = v8->x;
    v10 = a2;
    v11 = 8LL;
  }
  *(_DWORD *)(v10 + v11) = v9;
  y = a1->y;
  v13 = a1[1].y;
  v14 = a1[2].y;
  v15 = a1[3].y;
  if ( y < v13 )
  {
    if ( v14 > v15 )
    {
      if ( y < v15 )
        v15 = a1->y;
      *(_DWORD *)(a2 + 4) = v15;
      v22 = a1[2].y;
    }
    else
    {
      if ( y < v14 )
        v14 = a1->y;
      *(_DWORD *)(a2 + 4) = v14;
      v22 = a1[3].y;
    }
    v21 = a1[1].y;
    if ( v21 <= v22 )
      v21 = v22;
    v20 = a2;
    a2 = 12LL;
  }
  else
  {
    if ( v14 < v15 )
    {
      v16 = 28LL;
      if ( v13 >= v14 )
        v13 = a1[2].y;
      *(_DWORD *)(a2 + 4) = v13;
      v17 = a1[3].y;
    }
    else
    {
      if ( v13 >= v15 )
        v13 = a1[3].y;
      v16 = 20LL;
      *(_DWORD *)(a2 + 4) = v13;
      v17 = a1[2].y;
    }
    v18 = a1->y <= v17;
    v19 = 4LL;
    v20 = 12LL;
    if ( v18 )
      v19 = v16;
    v21 = *(FIX *)((char *)&a1->x + v19);
  }
  *(_DWORD *)(a2 + v20) = v21;
}
