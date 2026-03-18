/*
 * XREFs of ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1401690E8
 * Callers:
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x140167F90 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140168780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140313DF0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1403149E0 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x140316108 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x140316884 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1403175F8 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x140317C94 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x140318B00 (vSpUnTearDownSprites.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENUMAREAS::bEnum(ENUMAREAS *this, struct SPRITE **a2, struct _RECTL *a3)
{
  __int64 i; // r9
  LONG v5; // ecx
  LONG v6; // eax
  LONG v7; // eax
  int v8; // ecx
  __int64 v9; // r9
  __int64 v11; // rdx
  int *v12; // rdx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  _DWORD *v18; // rcx
  int *v19; // r9
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  _DWORD *v24; // rcx

  i = *((_QWORD *)this + 7);
  *((_QWORD *)this + 8) = *((_QWORD *)this + 6);
  *((_QWORD *)this + 9) = i;
  v5 = *((_DWORD *)this + 1);
  *a2 = *(struct SPRITE **)(i + 8);
  v6 = *(_DWORD *)i;
  if ( *(_DWORD *)i <= v5 )
    v6 = v5;
  a3->left = v6;
  v7 = *(_DWORD *)(i + 4);
  if ( v7 >= *((_DWORD *)this + 3) )
    v7 = *((_DWORD *)this + 3);
  a3->right = v7;
  a3->top = *((_DWORD *)this + 9);
  a3->bottom = *((_DWORD *)this + 10);
  v8 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 1) != 0 )
  {
    if ( *(_DWORD *)i > *((_DWORD *)this + 1) )
    {
      do
      {
        v24 = (_DWORD *)i;
        i -= 16LL;
      }
      while ( *v24 == *(_DWORD *)i );
    }
    else
    {
      v11 = *((_QWORD *)this + 6);
      if ( v8 == 1 )
      {
        if ( *(_DWORD *)(v11 + 4) >= *((_DWORD *)this + 4) )
          return 0LL;
        v12 = (int *)(*(_QWORD *)(v11 + 8) + v11);
      }
      else
      {
        if ( *(_DWORD *)v11 <= *((_DWORD *)this + 2) )
          return 0LL;
        v12 = (int *)(v11 - *(_QWORD *)(v11 + 16));
      }
      v13 = *((_DWORD *)this + 2);
      *((_QWORD *)this + 6) = v12;
      v14 = *v12;
      if ( *v12 <= v13 )
        v14 = v13;
      v15 = *((_DWORD *)this + 4);
      *((_DWORD *)this + 9) = v14;
      v16 = v12[1];
      if ( v16 >= v15 )
        v16 = v15;
      v17 = *((_DWORD *)this + 3);
      *((_DWORD *)this + 10) = v16;
      for ( i = (__int64)v12 + *((_QWORD *)v12 + 1) - 16; *(_DWORD *)i >= v17; i -= 16LL )
        ;
    }
  }
  else if ( *(_DWORD *)(i + 4) < *((_DWORD *)this + 3) )
  {
    do
    {
      v18 = (_DWORD *)i;
      i += 16LL;
    }
    while ( *v18 == *(_DWORD *)i );
  }
  else
  {
    v9 = *((_QWORD *)this + 6);
    if ( v8 )
    {
      if ( *(_DWORD *)v9 <= *((_DWORD *)this + 2) )
        return 0LL;
      v19 = (int *)(v9 - *(_QWORD *)(v9 + 16));
    }
    else
    {
      if ( *(_DWORD *)(v9 + 4) >= *((_DWORD *)this + 4) )
        return 0LL;
      v19 = (int *)(*(_QWORD *)(v9 + 8) + v9);
    }
    v20 = *((_DWORD *)this + 2);
    *((_QWORD *)this + 6) = v19;
    v21 = *v19;
    if ( *v19 <= v20 )
      v21 = v20;
    v22 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 9) = v21;
    v23 = v19[1];
    if ( v23 >= v22 )
      v23 = v22;
    i = (__int64)(v19 + 6);
    *((_DWORD *)this + 10) = v23;
    while ( *(_DWORD *)(i + 4) <= *((_DWORD *)this + 1) )
      i += 16LL;
  }
  *((_QWORD *)this + 7) = i;
  return 1LL;
}
