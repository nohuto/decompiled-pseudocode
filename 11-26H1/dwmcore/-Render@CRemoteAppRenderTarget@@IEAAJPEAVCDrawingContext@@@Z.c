/*
 * XREFs of ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802560AC
 * Callers:
 *     ?RenderAndPresent@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x180249C30 (-RenderAndPresent@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x180057518 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180057560 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900 (-SetFullDirty@-$CTargetDirtyBase@$07@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1802311E0 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIVailRenderTarget@@AEBV-$TMilRec.c)
 *     ?CalcVailAlphaMode@CRemoteAppRenderTarget@@IEBAXPEAW4DXGI_ALPHA_MODE@@PEAU_D3DCOLORVALUE@@@Z @ 0x1802559B0 (-CalcVailAlphaMode@CRemoteAppRenderTarget@@IEBAXPEAW4DXGI_ALPHA_MODE@@PEAU_D3DCOLORVALUE@@@Z.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255E28 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x1802563F0 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMat.c)
 *     ?SetAlphaMode@CCompSwapChain@@QEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802A31AC (-SetAlphaMode@CCompSwapChain@@QEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z @ 0x1802A4050 (-SetSize@CCompSwapChain@@QEAAJAEBUD2D_SIZE_U@@I@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::Render(CRemoteAppRenderTarget *this, struct CDrawingContext *a2, double a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edi
  char v7; // r14
  __int64 v8; // r11
  CSuperWetInkManager *v9; // r15
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // xmm1_8
  __m128i v16; // xmm6
  struct ISwapChain *v17; // r8
  int v18; // eax
  DXGI_ALPHA_MODE v19; // eax
  unsigned int v20; // r8d
  int v21; // eax
  int v22; // eax
  int v23; // eax
  float v24; // xmm0_4
  float v25; // xmm1_4
  int v26; // eax
  char v28[4]; // [rsp+30h] [rbp-40h] BYREF
  DXGI_ALPHA_MODE v29; // [rsp+34h] [rbp-3Ch] BYREF
  struct _D3DCOLORVALUE v30; // [rsp+38h] [rbp-38h] BYREF
  __m128i v31; // [rsp+48h] [rbp-28h] BYREF

  v5 = *((_QWORD *)this + 3);
  v6 = 0;
  v7 = 0;
  v8 = *((_QWORD *)this + 14);
  v9 = *(CSuperWetInkManager **)(v5 + 656);
  if ( v8 )
  {
    v10 = *(_DWORD *)(v5 + 6256);
    if ( v10 >= 5 )
    {
      v11 = v10 - 5;
      if ( v11 && (v12 = v11 - 1) != 0 )
      {
        if ( v12 == 1 && *((_QWORD *)this + 22) )
        {
          v29 = DXGI_ALPHA_MODE_UNSPECIFIED;
          *(struct _D3DCOLORVALUE *)&v30.r = 0LL;
          CRemoteAppRenderTarget::CalcVailAlphaMode(this, &v29, &v30);
          v15 = *(_QWORD *)(v13 + 108);
          v31.m128i_i32[2] = *(_DWORD *)(v13 + 116);
          v31.m128i_i64[0] = v15;
          if ( v29 == HIDWORD(v15) )
          {
            CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((__int64)this + 280, v14 + 112);
          }
          else
          {
            CCompSwapChain::SetAlphaMode((CCompSwapChain *)v13, v29);
            CTargetDirtyBase<8>::SetFullDirty((__int64)this + 280);
          }
          v16 = _mm_loadu_si128((const __m128i *)((char *)this + 140));
          v29 = DXGI_ALPHA_MODE_UNSPECIFIED;
          *(struct _D3DCOLORVALUE *)((char *)this + 140) = *(struct _D3DCOLORVALUE *)&v30.r;
          *((_QWORD *)v9 + 10) = ((unsigned __int64)this + 168) & -(__int64)(this != 0LL);
          v17 = (struct ISwapChain *)*((_QWORD *)this + 22);
          v31 = v16;
          v7 = 1;
          v18 = CRemoteAppRenderTarget::RenderDirtyRegion(
                  this,
                  a2,
                  v17,
                  (CRemoteAppRenderTarget *)((char *)this + 192),
                  (enum CRemoteAppRenderTarget::ProtectionMode *)&v29);
          v6 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0xA4u, 0LL);
            goto LABEL_18;
          }
          v19 = v29;
          if ( v29 && v29 != *((_DWORD *)this + 546) )
          {
            v20 = 32;
            *((_DWORD *)this + 546) = v29;
            if ( v19 != DXGI_ALPHA_MODE_STRAIGHT )
              v20 = 0;
            v21 = CCompSwapChain::SetSize(*((CCompSwapChain **)this + 22), (const struct D2D_SIZE_U *)this + 15, v20);
            v6 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xAFu, 0LL);
              goto LABEL_18;
            }
            CTargetDirtyBase<8>::SetFullDirty((__int64)this + 280);
            v22 = CRemoteAppRenderTarget::RenderDirtyRegion(
                    this,
                    a2,
                    *((struct ISwapChain **)this + 22),
                    (CRemoteAppRenderTarget *)((char *)this + 192),
                    (enum CRemoteAppRenderTarget::ProtectionMode *)&v29);
            v6 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0xB5u, 0LL);
LABEL_18:
              *(__m128i *)((char *)this + 140) = v16;
LABEL_31:
              *((_QWORD *)v9 + 10) = 0LL;
              return v6;
            }
          }
          *((_BYTE *)this + 2191) = 1;
          *(__m128i *)((char *)this + 140) = v16;
        }
      }
      else
      {
        CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion((__int64)this + 280, v8 + 112);
        v23 = CRemoteAppRenderTarget::RailMultimonRenderAndPresent(this, a2, a3);
        v6 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x78u, 0LL);
          return v6;
        }
      }
      CMergedRectBase<8>::Reset((__int64)this + 296);
      *((_WORD *)this + 1076) = 0;
    }
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 3) + 6256LL) == 7 && *((_QWORD *)this + 14) )
  {
    v24 = *((float *)this + 67) - *((float *)this + 65);
    v25 = *((float *)this + 68) - *((float *)this + 66);
    v31.m128i_i64[0] = 0LL;
    v28[0] = 0;
    v31.m128i_i32[2] = (int)v24;
    v31.m128i_i32[3] = (int)v25;
    v26 = CSuperWetInkManager::ScheduleScribblesForRenderTarget(
            v9,
            ((unsigned __int64)this + 168) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
            &v31,
            v28);
    v6 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0xD4u, 0LL);
    else
      *((_BYTE *)this + 2191) |= v28[0];
  }
  if ( v7 )
    goto LABEL_31;
  return v6;
}
