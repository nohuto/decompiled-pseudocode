/*
 * XREFs of ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180019A30
 * Callers:
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18001AAD4 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?InvalidateDrawListCachesForBackdropInputsIfRequired@CVisual@@AEBAJPEBVCDrawingContext@@@Z @ 0x18002BE10 (-InvalidateDrawListCachesForBackdropInputsIfRequired@CVisual@@AEBAJPEBVCDrawingContext@@@Z.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEBUD2D_SIZE_F@@PEAU3@@Z @ 0x180038EE8 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088B00 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1801ADF20 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CBackdropVisualImage *__fastcall CVisual::GetBackdropVisualImage(
        CVisual *this,
        const struct CVisualTreePath *a2)
{
  __int64 v4; // rsi
  char v5; // al
  __int64 v6; // r11
  _QWORD *v7; // rdi
  __int64 j; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // r8
  __int64 v15; // rcx
  _QWORD **v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *i; // rax

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 1) - 8LL);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 192LL))(v4);
  v6 = 0LL;
  if ( !v5 )
  {
    v12 = *((_QWORD *)this + 28);
    if ( *(int *)v12 >= 0 )
      return 0LL;
    v13 = *(unsigned int *)(v12 + 4);
    v14 = (_BYTE *)(v12 + 8);
    v15 = 0LL;
    if ( (_DWORD)v13 )
    {
      while ( *v14 != 1 )
      {
        v15 = (unsigned int)(v15 + 1);
        ++v14;
        if ( (unsigned int)v15 >= (unsigned int)v13 )
          goto LABEL_26;
      }
    }
    else
    {
LABEL_26:
      if ( (unsigned int)v15 >= (unsigned int)v13 )
      {
        v16 = 0LL;
LABEL_20:
        v17 = *v16;
        if ( v17 )
        {
          for ( i = (_QWORD *)*v17; i != v17; i = (_QWORD *)*i )
          {
            v7 = i - 44;
            if ( i[4] == v4 )
              goto LABEL_3;
          }
        }
        return 0LL;
      }
    }
    v16 = (_QWORD **)(v12 + ((v13 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v15);
    goto LABEL_20;
  }
  v7 = (_QWORD *)((char *)this + 320);
LABEL_3:
  if ( !v7 )
    return 0LL;
  for ( j = v7[18]; j != v7[19]; j += 8LL )
  {
    v9 = *(_QWORD **)(*(_QWORD *)j + 1616LL);
    if ( *(_QWORD *)(*(_QWORD *)j + 1624LL) - (_QWORD)v9 == *((_QWORD *)a2 + 1) - *(_QWORD *)a2 )
    {
      v10 = *(_QWORD *)a2 - (_QWORD)v9;
      while ( v9 != *(_QWORD **)(*(_QWORD *)j + 1624LL) )
      {
        if ( *v9 != *(_QWORD *)((char *)v9 + v10) || v9[1] != *(_QWORD *)((char *)v9 + v10 + 8) )
          goto LABEL_16;
        v9 += 2;
      }
      *(_QWORD *)(*(_QWORD *)j + 1776LL) = *(_QWORD *)(*(_QWORD *)(v7[31] + 24LL) + 880LL);
      return *(struct CBackdropVisualImage **)j;
    }
LABEL_16:
    ;
  }
  return (struct CBackdropVisualImage *)v6;
}
