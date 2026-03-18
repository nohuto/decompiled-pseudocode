/*
 * XREFs of ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x1800701A0
 * Callers:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?SetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18006EFE0 (-SetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180070EC0 (-CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA-AV-$com_ptr_t@VCDrawListEntryBatch@@.c)
 * Callees:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x1800702C0 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x1800706D0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180071958 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 */

void __fastcall CBatchOptimizer::Flush(CBatchOptimizer *this)
{
  int v2; // eax
  int *v3; // r9
  __int64 v4; // rdx
  int v5; // eax
  int v6; // r11d
  _DWORD *v7; // r8

  while ( *((_BYTE *)this + 4240) )
  {
    if ( *((_DWORD *)this + 8) <= 1u )
      break;
    CBatchOptimizer::TryMergeOneLayer(this);
  }
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
  {
    while ( !*((_DWORD *)this + 130 * *((int *)this + v2 + 11) + 25) )
    {
      CBatchOptimizer::DiscardEmptyLayers(this, v2 - 1, 1u);
      v2 = *((_DWORD *)this + 8);
      if ( !v2 )
        goto LABEL_14;
    }
    do
    {
      CBatchOptimizer::FlushBottomLayer(this);
      v3 = (int *)((char *)this + 48);
      v4 = 0LL;
      v5 = *((_DWORD *)this + 8) - 1;
      if ( *((_DWORD *)this + 8) != 1 )
      {
        v6 = *v3;
        v7 = (_DWORD *)((char *)this + 48);
        do
        {
          ++v4;
          *v7 = v7[1];
          ++v7;
        }
        while ( v4 != v5 );
        *((_DWORD *)this + v5 + 12) = v6;
      }
    }
    while ( (*((_DWORD *)this + 8))-- != 1 );
  }
  else
  {
LABEL_14:
    v3 = (int *)((char *)this + 48);
  }
  *((_BYTE *)this + 4240) = 0;
  *((_OWORD *)this + 1) = SharedStateLayer::StateBlock::kBlank;
  *v3 = 0;
  *((_DWORD *)this + 13) = 1;
  *((_DWORD *)this + 14) = 2;
  *((_DWORD *)this + 15) = 3;
  *((_DWORD *)this + 16) = 4;
  *((_DWORD *)this + 17) = 5;
  *((_DWORD *)this + 18) = 6;
  *((_DWORD *)this + 19) = 7;
}
