/*
 * XREFs of ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x180263EC0
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18019805C (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800B6780 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5338 (-InternalRelease@-$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x1800D5FB4 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ.c)
 *     ??$_Try_emplace@PEBVCVisualTree@@$$V@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@std@@_N@1@$$QEAPEBVCVisualTree@@@Z @ 0x18019D0DC (--$_Try_emplace@PEBVCVisualTree@@$$V@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadow.c)
 *     ?Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@$$QEAVCShapePtr@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1802B2ED0 (-Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 */

__int64 __fastcall CProjectedShadowCaster::UpdateMaskIntermediate(
        CProjectedShadowCaster *this,
        struct CDrawingContext *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  volatile signed __int32 **v6; // r15
  __int64 v7; // rax
  CGeometry *v8; // rcx
  __int64 v9; // rsi
  int ShapeData; // eax
  int v11; // eax
  struct CBrush *EffectiveMaskBrush; // rax
  unsigned int v14; // [rsp+20h] [rbp-50h]
  CShape *v15; // [rsp+40h] [rbp-30h] BYREF
  char v16; // [rsp+48h] [rbp-28h]
  const char *v17; // [rsp+50h] [rbp-20h] BYREF
  int v18; // [rsp+58h] [rbp-18h]
  _BYTE v19[16]; // [rsp+60h] [rbp-10h] BYREF
  struct CShape *v20; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v21; // [rsp+A8h] [rbp+38h] BYREF

  v21 = *((_QWORD *)a2 + 993);
  v4 = 0;
  v5 = *(_QWORD *)std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::_Try_emplace<CVisualTree const *,>(
                    (__int64 *)this + 11,
                    (__int64)v19,
                    &v21);
  v6 = (volatile signed __int32 **)(v5 + 80);
  if ( !*(_QWORD *)(v5 + 80) )
  {
    v7 = *((_QWORD *)this + 9);
    v15 = 0LL;
    v16 = 0;
    v8 = *(CGeometry **)(v7 + 240);
    v9 = v7 + 140;
    if ( v8 )
    {
      ShapeData = CGeometry::GetShapeData(v8, (const struct D2D_SIZE_F *)(v7 + 140), (struct CShapePtr *)&v15);
      v4 = ShapeData;
      if ( ShapeData < 0 )
      {
        v14 = 371;
        goto LABEL_9;
      }
      if ( !v16 )
      {
        v20 = 0LL;
        v11 = CShape::CopyShape(v15, 0LL, &v20);
        v4 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x162u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x174u, 0LL);
          goto LABEL_10;
        }
        CShapePtr::~CShapePtr((CShapePtr *)&v15);
        v15 = v20;
        v16 = 1;
      }
    }
    Microsoft::WRL::ComPtr<CShadowMaskProducer>::InternalRelease(v6);
    EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(this);
    v17 = "DWM ProjectedShadow Caster Mask";
    v18 = 31;
    ShapeData = ((__int64 (__fastcall *)(const char **, struct CDrawingContext *, __int64, struct CBrush *, CShape **, _BYTE, __int64, volatile signed __int32 **))CShadowMaskProducer::Create)(
                  &v17,
                  a2,
                  v9,
                  EffectiveMaskBrush,
                  &v15,
                  *(_BYTE *)(v5 + 76),
                  v5 + 60,
                  v6);
    v4 = ShapeData;
    if ( ShapeData >= 0 )
    {
LABEL_10:
      CShapePtr::~CShapePtr((CShapePtr *)&v15);
      return v4;
    }
    v14 = 384;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, v14, 0LL);
    goto LABEL_10;
  }
  return v4;
}
