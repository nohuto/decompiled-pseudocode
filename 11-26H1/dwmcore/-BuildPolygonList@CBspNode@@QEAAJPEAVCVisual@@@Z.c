/*
 * XREFs of ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x1801C7590
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x1800734A8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x1801C7630 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 *     std::_Sort_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___ @ 0x18026599C (std--_Sort_unchecked_CPolygon______CBspNode--BuildPolygonList_--_5_--_lambda_1___.c)
 */

__int64 __fastcall CBspNode::BuildPolygonList(CBspNode *this, struct CVisual *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  unsigned __int64 v8; // r8
  struct CPolygon **i; // rbx
  int v10; // eax
  char v12; // [rsp+40h] [rbp+8h]

  v6 = *((_QWORD *)this + 4);
  v7 = 0;
  v8 = (*((_QWORD *)this + 5) - v6) >> 3;
  if ( v8 > 1 )
  {
    LOBYTE(a4) = v12;
    std::_Sort_unchecked_CPolygon______CBspNode::BuildPolygonList_::_5_::_lambda_1___(v6, *((_QWORD *)this + 5), v8, a4);
  }
  for ( i = (struct CPolygon **)*((_QWORD *)this + 4); i != *((struct CPolygon ***)this + 5); ++i )
  {
    v10 = CVisual::AddToBspPolygonList(a2, *i);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xCFu, 0LL);
      return v7;
    }
  }
  return v7;
}
