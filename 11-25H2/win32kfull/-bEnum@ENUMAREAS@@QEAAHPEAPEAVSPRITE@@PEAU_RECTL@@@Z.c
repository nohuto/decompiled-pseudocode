/*
 * XREFs of ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x140008B28
 * Callers:
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1400078A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x140007E90 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14032B210 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x14032BE1C (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x14032D53C (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x14032DCD4 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x14032EA5C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x14032F13C (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x140330570 (vSpUnTearDownSprites.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ENUMAREAS::bEnum(ENUMAREAS *this, struct SPRITE **a2, struct _RECTL *a3)
{
  __int64 i; // r9
  LONG v5; // ecx
  LONG v6; // ecx
  int v7; // ecx
  __int64 v8; // r9
  __int64 v10; // rdx
  int *v11; // rdx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  _DWORD *v16; // rcx
  int *v17; // r9
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  _DWORD *v23; // rcx

  i = *((_QWORD *)this + 7);
  *((_QWORD *)this + 8) = *((_QWORD *)this + 6);
  *((_QWORD *)this + 9) = i;
  v5 = *(_DWORD *)i;
  *a2 = *(struct SPRITE **)(i + 8);
  if ( v5 <= *((_DWORD *)this + 1) )
    v5 = *((_DWORD *)this + 1);
  a3->left = v5;
  v6 = *(_DWORD *)(i + 4);
  if ( v6 >= *((_DWORD *)this + 3) )
    v6 = *((_DWORD *)this + 3);
  a3->right = v6;
  a3->top = *((_DWORD *)this + 9);
  a3->bottom = *((_DWORD *)this + 10);
  v7 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 1) != 0 )
  {
    if ( *(_DWORD *)i > *((_DWORD *)this + 1) )
    {
      do
      {
        v23 = (_DWORD *)i;
        i -= 16LL;
      }
      while ( *v23 == *(_DWORD *)i );
    }
    else
    {
      v10 = *((_QWORD *)this + 6);
      if ( v7 == 1 )
      {
        if ( *(_DWORD *)(v10 + 4) >= *((_DWORD *)this + 4) )
          return 0LL;
        v11 = (int *)(*(_QWORD *)(v10 + 8) + v10);
      }
      else
      {
        if ( *(_DWORD *)v10 <= *((_DWORD *)this + 2) )
          return 0LL;
        v11 = (int *)(v10 - *(_QWORD *)(v10 + 16));
      }
      v12 = *((_DWORD *)this + 2);
      *((_QWORD *)this + 6) = v11;
      v13 = *v11;
      if ( *v11 <= v12 )
        v13 = v12;
      v14 = *((_DWORD *)this + 4);
      *((_DWORD *)this + 9) = v13;
      v15 = v11[1];
      if ( v15 >= v14 )
        v15 = v14;
      *((_DWORD *)this + 10) = v15;
      for ( i = (__int64)v11 + *((_QWORD *)v11 + 1) - 16; *(_DWORD *)i >= *((_DWORD *)this + 3); i -= 16LL )
        ;
    }
  }
  else if ( *(_DWORD *)(i + 4) < *((_DWORD *)this + 3) )
  {
    do
    {
      v16 = (_DWORD *)i;
      i += 16LL;
    }
    while ( *v16 == *(_DWORD *)i );
  }
  else
  {
    v8 = *((_QWORD *)this + 6);
    if ( v7 )
    {
      if ( *(_DWORD *)v8 <= *((_DWORD *)this + 2) )
        return 0LL;
      v17 = (int *)(v8 - *(_QWORD *)(v8 + 16));
    }
    else
    {
      if ( *(_DWORD *)(v8 + 4) >= *((_DWORD *)this + 4) )
        return 0LL;
      v17 = (int *)(*(_QWORD *)(v8 + 8) + v8);
    }
    v18 = *((_DWORD *)this + 2);
    *((_QWORD *)this + 6) = v17;
    v19 = *v17;
    if ( *v17 <= v18 )
      v19 = v18;
    v20 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 9) = v19;
    v21 = v17[1];
    if ( v21 >= v20 )
      v21 = v20;
    v22 = *((_DWORD *)this + 1);
    *((_DWORD *)this + 10) = v21;
    for ( i = (__int64)(v17 + 6); *(_DWORD *)(i + 4) <= v22; i += 16LL )
      ;
  }
  *((_QWORD *)this + 7) = i;
  return 1LL;
}
