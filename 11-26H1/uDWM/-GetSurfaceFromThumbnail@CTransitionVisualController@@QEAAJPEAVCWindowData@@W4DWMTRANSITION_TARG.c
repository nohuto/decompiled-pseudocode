/*
 * XREFs of ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@_NPEAVCVisualBrush@@PEAUD2D_POINT_3F@@@Z @ 0x1800CF984
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ??1CVisualBrush@@QEAA@XZ @ 0x180082324 (--1CVisualBrush@@QEAA@XZ.c)
 *     ?FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z @ 0x18009B51C (-FreezeImpl@CVisualBrush@@AEAAJW4VisualSurfaceFreezeBehavior@Internal@Composition@UI@Windows@@@Z.c)
 *     ??4CVisualBrush@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800AD5DC (--4CVisualBrush@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetVisualBrush@CThumbnailVisual@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAUD2D_POINT_3F@@@Z @ 0x1800C9C54 (-GetVisualBrush@CThumbnailVisual@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAUD2D_POINT_3F@@@Z.c)
 *     ?GetVisualBrush@CWindowSnapshot@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAM@Z @ 0x1800E5148 (-GetVisualBrush@CWindowSnapshot@@QEAAJAEBUtagRECT@@PEAVCVisualBrush@@PEAM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTransitionVisualController::GetSurfaceFromThumbnail(
        __int64 a1,
        __int64 a2,
        int a3,
        const struct tagRECT *a4,
        char a5,
        __int64 *a6,
        float *a7)
{
  float *v10; // rbx
  int VisualBrush; // edi
  CWindowSnapshot *v12; // rcx
  float v13; // xmm0_4
  __int64 i; // rsi
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  int v17; // [rsp+28h] [rbp-28h]
  __int64 v18[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v19 = a1;
  v10 = a7;
  *a7 = 1.0;
  v10[1] = 1.0;
  v10[2] = 1.0;
  *(_OWORD *)v18 = 0LL;
  VisualBrush = -2147467259;
  if ( a2 )
  {
    v12 = *(CWindowSnapshot **)(a2 + 480);
    if ( v12 )
    {
      LODWORD(v19) = 0;
      VisualBrush = CWindowSnapshot::GetVisualBrush(v12, a4, (struct CVisualBrush *)v18, (float *)&v19);
      v13 = 1.0 / *(float *)&v19;
      v10[1] = 1.0 / *(float *)&v19;
      *v10 = v13;
      if ( VisualBrush >= 0 )
      {
LABEL_13:
        if ( (a3 & 0x4000000) != 0 )
          CVisualBrush::FreezeImpl((__int64)v18, 2u);
        CVisualBrush::operator=(a6, v18);
      }
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 592); i = (unsigned int)(i + 1) )
      {
        v16 = 0x3F8000003F800000LL;
        v17 = 1065353216;
        if ( (int)CThumbnailVisual::GetVisualBrush(
                    *(CThumbnailVisual **)(*(_QWORD *)(*(_QWORD *)(a2 + 568) + 8 * i) + 88LL),
                    a4,
                    (struct CVisualBrush *)v18,
                    (struct D2D_POINT_3F *)&v16) >= 0
          && (!a5
           || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v16 - 1.0) & _xmm) <= 0.0000011920929
           && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v16 + 1) - 1.0) & _xmm) <= 0.0000011920929) )
        {
          *(_QWORD *)v10 = v16;
          *((_DWORD *)v10 + 2) = v17;
          VisualBrush = 0;
          goto LABEL_13;
        }
      }
    }
  }
  CVisualBrush::~CVisualBrush((CVisualBrush *)v18);
  return (unsigned int)VisualBrush;
}
