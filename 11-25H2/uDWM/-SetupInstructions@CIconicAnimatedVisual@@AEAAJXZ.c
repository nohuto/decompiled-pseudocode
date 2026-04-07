/*
 * XREFs of ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B735C
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B7790 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x1800152DC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180040ADC (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180040BC8 (-SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040BDC (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800B89BC (-GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::SetupInstructions(CIconicAnimatedVisual *this)
{
  int *v1; // rbx
  CBaseObject *v3; // rdi
  float v4; // xmm1_4
  __m128i v5; // xmm0
  float v6; // xmm1_4
  int v7; // eax
  unsigned int v8; // ebx
  struct _D3DCOLORVALUE *v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int128 v15; // [rsp+30h] [rbp-20h] BYREF
  struct _D3DCOLORVALUE v16; // [rsp+40h] [rbp-10h] BYREF
  CBaseObject *v17; // [rsp+70h] [rbp+20h] BYREF
  CBaseObject *v18; // [rsp+78h] [rbp+28h] BYREF

  v17 = 0LL;
  v1 = (int *)((char *)this + 328);
  v3 = 0LL;
  v18 = 0LL;
  if ( IsRectEmpty((const RECT *)((char *)this + 328)) )
    goto LABEL_9;
  *(struct _D3DCOLORVALUE *)&v16.r = 0LL;
  CImmersiveState::GetPillarBoxColor(&v16);
  v4 = (float)*((int *)this + 84);
  *(float *)&v15 = (float)*v1;
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 83));
  *((float *)&v15 + 2) = v4;
  v6 = (float)*((int *)this + 85);
  DWORD1(v15) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *((float *)&v15 + 3) = v6;
  v7 = CSolidRectangleInstruction::Create(&v18);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xBEu, 0LL);
    v3 = v18;
    goto LABEL_15;
  }
  v3 = v18;
  CSolidRectangleInstruction::SetRect((__int64)v18, &v15);
  v10 = CSolidRectangleInstruction::SetSolidFill(v9, &v16);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xC0u, 0LL);
    goto LABEL_15;
  }
  v11 = CRenderDataVisual::AddInstruction(this, v3);
  v8 = v11;
  if ( v11 >= 0 )
  {
LABEL_9:
    v12 = CDrawGeometryInstruction::Create(
            *((struct CBaseLegacyMilBrushProxy **)this + 33),
            *((struct CBaseGeometryProxy **)this + 38),
            &v17);
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xC7u, 0LL);
    }
    else
    {
      v13 = CRenderDataVisual::AddInstruction(this, v17);
      v8 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xC8u, 0LL);
    }
    if ( v17 )
      CBaseObject::Release(v17);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xC1u, 0LL);
  }
LABEL_15:
  if ( v3 )
    CBaseObject::Release(v3);
  return v8;
}
