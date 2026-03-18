/*
 * XREFs of ?RenderLayer@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801D16E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x18005CB40 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x1800AF4BC (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x1801D1910 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFilterEffectLayer::RenderLayer(CFilterEffectLayer *this, struct CDrawingContext *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  int v7; // ebx
  CFilterEffect *v8; // rcx
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  FLOAT v12; // xmm3_4
  float v13; // xmm0_4
  FLOAT v14; // xmm1_4
  float v15; // xmm0_4
  __int32 v16; // xmm1_4
  __int64 v18; // rax
  unsigned int v19; // [rsp+20h] [rbp-50h]
  struct ID2D1Effect *v20; // [rsp+30h] [rbp-40h] BYREF
  struct ID2D1Bitmap1 *v21; // [rsp+38h] [rbp-38h] BYREF
  __m128 v22; // [rsp+40h] [rbp-30h] BYREF
  struct D2D_RECT_F v23; // [rsp+50h] [rbp-20h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 1);
  v5 = *v4;
  v21 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, struct ID2D1Bitmap1 **, _QWORD))(v5 + 152))(v4, &v21, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v19 = 96;
    goto LABEL_13;
  }
  if ( g_LockAndReadLayer )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v18 + 112LL))(
      v18,
      ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL));
  }
  v8 = (CFilterEffect *)*((_QWORD *)this + 15);
  v20 = 0LL;
  CFilterEffect::GetD2DEffectNoRef(v8, a2, v21, &v20);
  if ( v20 )
  {
    v9 = *((float *)this + 33);
    v10 = *((float *)this + 34);
    v11 = (float)*((int *)this + 4);
    v22.m128_i32[0] = *((_DWORD *)this + 32);
    v12 = v22.m128_f32[0] - v11;
    v22.m128_f32[1] = v9;
    v13 = (float)*((int *)this + 5);
    v23.left = v12;
    v14 = v9 - v13;
    v15 = *((float *)this + 35);
    v23.right = v12 + v10;
    v23.top = v14;
    v22.m128_f32[2] = v10 + v22.m128_f32[0];
    v23.bottom = v14 + v15;
    v22.m128_f32[3] = v15 + v9;
    v6 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v22, 1, 0);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v16 = *((_DWORD *)this + 33);
      v22.m128_i32[0] = *((_DWORD *)this + 32);
      v22.m128_i32[1] = v16;
      v7 = CDrawingContext::FillEffect((const void **)a2, v20, &v23, (struct D2D_POINT_2F *)&v22, 1);
      CBaseClipStack::Pop((struct CDrawingContext *)((char *)a2 + 3104));
      --*(_QWORD *)(*((_QWORD *)a2 + 93) - 184LL);
      *((_BYTE *)a2 + 8065) = 1;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x90u, 0LL);
      goto LABEL_8;
    }
    v19 = 130;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v19, 0LL);
  }
LABEL_8:
  if ( v21 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v21 + 16LL))(v21);
  return (unsigned int)v7;
}
