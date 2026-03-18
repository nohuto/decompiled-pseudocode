/*
 * XREFs of ?GotoPreChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x1801DAB4C
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x1800734A8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCBspNode@@@@@Z @ 0x18018C39C (-Push@-$CWatermarkStack@UCFrame@-$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAJAEBUCFrame@-$CGrap.c)
 */

__int64 __fastcall CGraphWalker<CBspNode>::GotoPreChild(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  bool v3; // cf
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 28) != 0;
  *a2 = 0LL;
  v6 = *(_QWORD *)((-(__int64)v3 & 0xFFFFFFFFFFFFFFF8uLL) + *(_QWORD *)(a1 + 8) + 24);
  if ( v6 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v10 + 1) = *(unsigned int *)(a1 + 24);
    v7 = CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Push(a1 + 32, &v10);
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x13Cu, 0LL);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v8;
      *(_QWORD *)(a1 + 8) = v6;
      *a2 = v6;
    }
  }
  return v2;
}
