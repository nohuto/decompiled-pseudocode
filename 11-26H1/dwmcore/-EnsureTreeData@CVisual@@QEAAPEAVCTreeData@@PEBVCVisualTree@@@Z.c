/*
 * XREFs of ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D47B0
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18002A8C0 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800925E0 (-UpdateBVIForVisual@CPreComputeContext@@AEBAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800D2EB0 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x1800D4488 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x1800D4500 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180171000 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1801E4FF0 (-CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x1801E5470 (-DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180260224 (--0CTreeData@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void ***__fastcall CVisual::EnsureTreeData(CVisual *this, const struct CVisualTree *a2)
{
  unsigned int v4; // ebp
  void ***result; // rax
  unsigned int **v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  _BYTE *v9; // r8
  __int64 v10; // rcx
  __int64 ****v11; // r8
  __int64 ***v12; // r8
  __int64 **i; // rdx
  unsigned int *v14; // rdx
  unsigned int v15; // r9d
  HANDLE ProcessHeap; // rax
  CTreeData *v17; // rax
  void ***v18; // rbx
  void **v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // r8
  _BYTE *v22; // rax
  __int64 v23; // rcx
  void ****v24; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
  {
    v7 = *((_QWORD *)this + 28);
    if ( *(int *)v7 >= 0 )
    {
      v6 = (unsigned int **)((char *)this + 224);
      goto LABEL_12;
    }
    v8 = *(unsigned int *)(v7 + 4);
    v9 = (_BYTE *)(v7 + 8);
    v10 = 0LL;
    if ( (_DWORD)v8 )
    {
      while ( *v9 != 1 )
      {
        v10 = (unsigned int)(v10 + 1);
        ++v9;
        if ( (unsigned int)v10 >= (unsigned int)v8 )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      if ( (unsigned int)v10 >= (unsigned int)v8 )
      {
        v11 = 0LL;
LABEL_9:
        v12 = *v11;
        v6 = (unsigned int **)((char *)this + 224);
        if ( v12 )
        {
          for ( i = *v12; ; i = (__int64 **)*i )
          {
            v6 = (unsigned int **)((char *)this + 224);
            if ( i == (__int64 **)v12 )
              break;
            result = (void ***)(i - 44);
            if ( i[4] == (__int64 *)a2 )
              goto LABEL_3;
          }
        }
LABEL_12:
        v14 = *v6;
        v15 = **v6;
        if ( (v15 & 0x10000000) == 0 )
          goto LABEL_13;
        v21 = v14[1];
        v22 = v14 + 2;
        v23 = 0LL;
        if ( (_DWORD)v21 )
        {
          while ( *v22 != 4 )
          {
            v23 = (unsigned int)(v23 + 1);
            ++v22;
            if ( (unsigned int)v23 >= (unsigned int)v21 )
              goto LABEL_31;
          }
        }
        else
        {
LABEL_31:
          if ( (unsigned int)v23 >= (unsigned int)v21 )
          {
            v24 = 0LL;
LABEL_24:
            v18 = *v24;
            if ( v18 )
            {
              *v14 = v15 & 0xEFFFFFFF;
              if ( (_DWORD)v21 )
              {
                while ( *((_BYTE *)v14 + v4 + 8) != 4 )
                {
                  if ( ++v4 >= (unsigned int)v21 )
                    goto LABEL_28;
                }
                *((_BYTE *)v14 + v4 + 8) = 0;
              }
LABEL_28:
              v19 = *v18;
              goto LABEL_29;
            }
LABEL_13:
            ProcessHeap = GetProcessHeap();
            v17 = (CTreeData *)HeapAlloc(ProcessHeap, 0, 0x188uLL);
            v18 = (void ***)v17;
            if ( !v17 )
              ModuleFailFastForHRESULT(-2147024882, retaddr);
            CTreeData::CTreeData(v17);
            v19 = &CVisualTreeData::`vftable';
            v20[48] = 0LL;
            *v20 = &CVisualTreeData::`vftable';
LABEL_29:
            ((void (__fastcall *)(void ***, const struct CVisualTree *, CVisual *))v19[1])(v18, a2, this);
            return v18;
          }
        }
        v24 = (void ****)((char *)&v14[2 * v23] + ((v21 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
        goto LABEL_24;
      }
    }
    v11 = (__int64 ****)(v7 + ((v8 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v10);
    goto LABEL_9;
  }
  result = (void ***)((char *)this + 320);
LABEL_3:
  v6 = (unsigned int **)((char *)this + 224);
  if ( !result )
    goto LABEL_12;
  return result;
}
