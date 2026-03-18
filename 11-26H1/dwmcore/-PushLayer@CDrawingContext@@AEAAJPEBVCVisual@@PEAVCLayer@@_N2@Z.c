/*
 * XREFs of ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800C86B0
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800C6AD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800C8918 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800F898C (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@MM@Z @ 0x1800F9400 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_PO.c)
 *     ?PushColorTransformLayer@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUMilColorTransform@@@Z @ 0x1801E4148 (-PushColorTransformLayer@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180236B20 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z @ 0x180236C1C (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@@Z.c)
 *     ?PushSuperSampleLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180236CE0 (-PushSuperSampleLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_@MUD2D_RECT_F.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800C90E8 (-Grow@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushLayer(
        CDrawingContext *this,
        const struct CVisual *a2,
        struct CLayer *a3,
        char a4,
        bool a5)
{
  char v5; // r15
  char *v9; // rbx
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  int v14; // ebx
  __int64 result; // rax
  unsigned int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // r15d
  __int128 v22; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0;
  if ( a5 )
  {
    v9 = (char *)this + 256;
    *(_QWORD *)&v22 = 6LL;
    v10 = *((_DWORD *)this + 67);
    *((_QWORD *)&v22 + 1) = a2;
    if ( *((_DWORD *)this + 66) == v10 )
    {
      v20 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Grow((char *)this + 256);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v20);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xFE6u, 0LL);
        return v21;
      }
    }
    v5 = 1;
    *(_OWORD *)(*(_QWORD *)v9 + 16LL * *((unsigned int *)v9 + 2)) = v22;
    v11 = *((_DWORD *)v9 + 5);
    if ( v11 <= ++*((_DWORD *)v9 + 2) )
      v11 = *((_DWORD *)v9 + 2);
    *((_DWORD *)v9 + 5) = v11;
  }
  v12 = *((_DWORD *)this + 94);
  *(_QWORD *)&v22 = a3;
  v13 = v12 + 1;
  if ( v12 + 1 < v12 )
  {
    v14 = -2147024362;
    v16 = 183;
LABEL_13:
    v17 = v14;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v16, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0xFEBu, 0LL);
    goto LABEL_16;
  }
  v14 = 0;
  if ( v13 <= *((_DWORD *)this + 93) )
  {
    *(_QWORD *)(*((_QWORD *)this + 44) + 8LL * v12) = a3;
    *((_DWORD *)this + 94) = v13;
    goto LABEL_9;
  }
  v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 352, 8, 1, &v22);
  if ( v14 < 0 )
  {
    v16 = 194;
    goto LABEL_13;
  }
LABEL_9:
  if ( !a4
    || (v18 = (*(__int64 (__fastcall **)(struct CLayer *, CDrawingContext *))(*(_QWORD *)a3 + 24LL))(a3, this),
        v14 = v18,
        v18 >= 0) )
  {
    ++dword_1803DE368;
    result = (unsigned int)v14;
    ++dword_1803DE418;
    return result;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xFF0u, 0LL);
  --*((_DWORD *)this + 94);
  v17 = v14;
LABEL_16:
  result = v17;
  if ( v5 )
  {
    v19 = *((_DWORD *)this + 66);
    if ( v19 )
      *((_DWORD *)this + 66) = v19 - 1;
  }
  return result;
}
