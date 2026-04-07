/*
 * XREFs of ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800B9014
 * Callers:
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800951FC (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x1800B8C50 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180006760 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18000723C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180040ADC (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180040BC8 (-SetSolidFill@CSolidRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040BDC (-SetRect@CSolidRectangleInstruction@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 */

__int64 __fastcall CImmersiveWindowIconic::_UpdateSolidFill(CImmersiveWindowIconic *this)
{
  unsigned __int8 *v1; // rdx
  CBaseObject *v3; // rdi
  __int64 v4; // rax
  float v5; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm0_4
  __int64 v8; // rax
  __m128i v9; // xmm1
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  struct _D3DCOLORVALUE *v13; // rcx
  int v14; // eax
  int v15; // eax
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  struct _D3DCOLORVALUE v18; // [rsp+40h] [rbp-10h] BYREF
  CBaseObject *v19; // [rsp+60h] [rbp+10h] BYREF

  v1 = (unsigned __int8 *)*((_QWORD *)this + 30);
  v18.a = 1.0;
  v3 = 0LL;
  v4 = v1[200];
  *(_QWORD *)&v17 = 0LL;
  v19 = 0LL;
  v5 = flt_1800F9280[v4];
  v6 = v1[201];
  v18.r = v5 / 255.0;
  v7 = flt_1800F9280[v6];
  v8 = v1[202];
  v18.g = v7 / 255.0;
  v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 19));
  v18.b = flt_1800F9280[v8] / 255.0;
  *((float *)&v17 + 2) = (float)*((int *)this + 18) + 0.0;
  *((float *)&v17 + 3) = _mm_cvtepi32_ps(v9).m128_f32[0] + 0.0;
  v10 = CRenderDataVisual::ClearInstructions(this);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x7Fu, 0LL);
  }
  else
  {
    v12 = CSolidRectangleInstruction::Create(&v19);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x81u, 0LL);
      v3 = v19;
    }
    else
    {
      v3 = v19;
      CSolidRectangleInstruction::SetRect((__int64)v19, &v17);
      v14 = CSolidRectangleInstruction::SetSolidFill(v13, &v18);
      v11 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x84u, 0LL);
      }
      else
      {
        v15 = CRenderDataVisual::AddInstruction(this, v3);
        v11 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x85u, 0LL);
      }
    }
  }
  if ( v3 )
    CBaseObject::Release(v3);
  return v11;
}
