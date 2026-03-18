/*
 * XREFs of ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x1800734A8
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x1800734A8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ?PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x1800737B0 (-PreComputePostSubgraph@CBspPreComputeHelper@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 * Callees:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x1800734A8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x1801C7590 (-BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GotoPostChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x1801CF244 (-GotoPostChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 *     ?GotoParent@?$CGraphWalker@VCBspNode@@@@QEAAXPEAPEAVCBspNode@@@Z @ 0x1801CF2F8 (-GotoParent@-$CGraphWalker@VCBspNode@@@@QEAAXPEAPEAVCBspNode@@@Z.c)
 *     ?GotoPreChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x1801DAB4C (-GotoPreChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 */

__int64 __fastcall CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  bool v4; // zf
  BOOL v6; // ebp
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0LL;
  v4 = *(_BYTE *)(a2 + 56) == 0;
  v16 = 0LL;
  v6 = v4;
  *(_DWORD *)(a1 + 28) = v4;
  v9 = CGraphWalker<CBspNode>::GotoPreChild(a1, &v17);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x47u, 0LL);
    return v10;
  }
  if ( v17 )
  {
    v14 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(a1, v17, a2, a4, 0);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x4Bu, 0LL);
      return v10;
    }
    CGraphWalker<CBspNode>::GotoParent(a1, &v17);
    *(_DWORD *)(a1 + 28) = v6;
  }
  v11 = CBspNode::BuildPolygonList(*(CBspNode **)(a4 + 8), *(struct CVisual **)(a4 + 56));
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x5Au, 0LL);
  }
  else
  {
    v12 = CGraphWalker<CBspNode>::GotoPostChild(a1, &v16);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x5Cu, 0LL);
    }
    else if ( v16 )
    {
      v15 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(a1, v16, a2, a4, 0);
      v10 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x60u, 0LL);
      else
        CGraphWalker<CBspNode>::GotoParent(a1, &v17);
    }
  }
  return v10;
}
