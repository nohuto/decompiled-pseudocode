/*
 * XREFs of ?EndPreCompute@CVisualTree@@QEAAXJ@Z @ 0x18008D260
 * Callers:
 *     ?EndWalk@CPreComputeSubTreeContext@@AEAAXJ@Z @ 0x18016F1F0 (-EndWalk@CPreComputeSubTreeContext@@AEAAXJ@Z.c)
 * Callees:
 *     ?Merge@CTreeDirty@@AEAAXII@Z @ 0x18005953C (-Merge@CTreeDirty@@AEAAXII@Z.c)
 *     ?GetUnoptimizedBounds@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18005B090 (-GetUnoptimizedBounds@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?EnsureWeights@?$CRectangleCollection@$07@@AEAAXXZ @ 0x18008D530 (-EnsureWeights@-$CRectangleCollection@$07@@AEAAXXZ.c)
 *     ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x18021CF30 (-SetFullDirty@CTreeDirty@@QEAAXXZ.c)
 *     ?SetRedrawRects@CTreeDirty@@AEAAXXZ @ 0x1802377C4 (-SetRedrawRects@CTreeDirty@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisualTree::EndPreCompute(CVisualTree *this, int a2)
{
  __int64 v4; // rax
  char *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  char *v8; // rsi
  __int64 v9; // r8
  unsigned int i; // edx
  const struct D2D_RECT_F *UnoptimizedBounds; // rax
  _BYTE v12[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (*(__int64 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 224LL))(this);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  v5 = (char *)this + 112;
  if ( a2 < 0 )
  {
    CTreeDirty::SetFullDirty((CVisualTree *)((char *)this + 112));
    if ( a2 == -2147467260 )
      return;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CVisualTree *))(*(_QWORD *)this + 192LL))(this) )
  {
    v7 = *((_QWORD *)this + 3);
    v8 = (char *)this + 112;
    if ( !*(_DWORD *)(v7 + 6368) )
      goto LABEL_13;
    if ( !*(_BYTE *)(v7 + 6461) )
    {
      UnoptimizedBounds = (const struct D2D_RECT_F *)CTreeDirty::GetUnoptimizedBounds((__int64)this + 112, (__int64)v12);
      if ( IsEmpty(UnoptimizedBounds) )
        goto LABEL_13;
      v7 = *((_QWORD *)this + 3);
      v8 = (char *)this + 112;
    }
    *((_BYTE *)this + 2439) = 1;
    *(_BYTE *)(v7 + 6461) = 0;
LABEL_13:
    v5 = v8;
    if ( *(_DWORD *)(*((_QWORD *)this + 3) + 6376LL) )
      *((_BYTE *)this + 2440) = 1;
  }
  v6 = 0LL;
  if ( !v5[2324] )
  {
    while ( 1 )
    {
      CRectangleCollection<8>::EnsureWeights(v5 + 16);
      v9 = 1LL;
LABEL_16:
      if ( (unsigned int)v9 >= *((_DWORD *)v5 + 4) )
        break;
      for ( i = 0; ; ++i )
      {
        if ( i >= (unsigned int)v9 )
        {
          v9 = (unsigned int)(v9 + 1);
          goto LABEL_16;
        }
        if ( *(float *)&v5[8 * i + 168 + 8 * ((unsigned int)(v9 * (v9 - 1)) >> 1)] < 0.5 )
          break;
      }
      CTreeDirty::Merge((CTreeDirty *)v5, i, v9);
    }
  }
  v5[2325] = 1;
  if ( v5[2327] )
  {
    CTreeDirty::SetRedrawRects((CTreeDirty *)v5);
    CTreeDirty::SetFullDirty((CTreeDirty *)v5);
    *(_WORD *)(v5 + 2327) = 0;
  }
  else if ( v5[2328] )
  {
    CTreeDirty::SetFullDirty((CTreeDirty *)v5);
    v5[2328] = 0;
  }
  if ( g_pComposition )
    v6 = *((_QWORD *)g_pComposition + 110);
  *((_QWORD *)v5 + 1) = v6;
}
