/*
 * XREFs of ?PushSuperSampleLayer@CDrawingContext@@QEAAJAEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180236CE0
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800C86B0 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ??_ECSuperSampleLayer@@UEAAPEAXI@Z @ 0x180234900 (--_ECSuperSampleLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CSuperSampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18025069C (-Create@CSuperSampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@AEBV-$TMilRect_@MUD2D_R.c)
 */

__int64 __fastcall CDrawingContext::PushSuperSampleLayer(CDrawingContext *this, __int128 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int128 v5; // xmm0
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // eax
  bool v9; // cc
  int v10; // ebx
  unsigned int v11; // eax
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF
  CSuperSampleLayer *v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 4);
  v5 = *a2;
  v6 = *((_QWORD *)this + 3);
  v14 = 0LL;
  v7 = *(_DWORD *)(v3 + 968);
  v8 = v7;
  v9 = v7 < *((_DWORD *)a2 + 2);
  v13 = v5;
  if ( !v9 )
    v8 = *((_DWORD *)a2 + 2);
  v9 = v7 < *((_DWORD *)a2 + 3);
  DWORD2(v13) = v8;
  if ( !v9 )
    v7 = *((_DWORD *)a2 + 3);
  HIDWORD(v13) = v7;
  v10 = CSuperSampleLayer::Create(v6, &v13, a3, &v14);
  if ( v10 < 0 )
  {
    v11 = 3833;
  }
  else
  {
    v10 = CDrawingContext::PushLayer(this, 0LL, v14, 1, 0);
    if ( v10 >= 0 )
      return (unsigned int)v10;
    v11 = 3839;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v11, 0LL);
  if ( v14 )
    CSuperSampleLayer::`vector deleting destructor'(v14, 1);
  return (unsigned int)v10;
}
