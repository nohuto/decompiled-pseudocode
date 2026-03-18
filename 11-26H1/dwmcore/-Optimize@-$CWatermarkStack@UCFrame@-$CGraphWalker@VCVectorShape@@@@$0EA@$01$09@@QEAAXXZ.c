/*
 * XREFs of ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAXXZ @ 0x1801825D4
 * Callers:
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180040BC0 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ??$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingContext@@@Z @ 0x180181DD8 (--$Walk@VCShapeBoundingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeBoundingCo.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Optimize(__int64 a1)
{
  int v1; // edi
  int v3; // edi
  __int64 v4; // rbp
  void *v5; // rsi
  int v6; // r9d

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 == 10 )
  {
    v4 = 64LL;
    if ( *(_DWORD *)(a1 + 20) > 0x40u )
      v4 = *(unsigned int *)(a1 + 20);
    v3 = 0;
    if ( (unsigned __int64)(3 * v4) <= 0xFFFFFFFF )
    {
      if ( (unsigned int)(3 * v4) <= *(_DWORD *)(a1 + 12) )
      {
        if ( (_DWORD)v4 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v4 > 0x10 )
        {
          v5 = MIDL_user_allocate(16LL * (unsigned int)v4);
          if ( v5 )
          {
            operator delete(*(void **)a1);
            *(_QWORD *)a1 = v5;
            *(_DWORD *)(a1 + 12) = v4;
            goto LABEL_8;
          }
          v6 = -2147024882;
        }
        else
        {
          v6 = -2147024809;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x11Eu, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x10Eu, 0LL);
    }
LABEL_8:
    *(_DWORD *)(a1 + 20) = 0;
    goto LABEL_3;
  }
  v3 = v1 + 1;
LABEL_3:
  *(_DWORD *)(a1 + 16) = v3;
}
