/*
 * XREFs of ?Create@CResampleLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@MMW4Enum@CompositionResampleMode@@PEAPEAV1@@Z @ 0x1800F94F4
 * Callers:
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_POINTANDSIZE_L@@MM@Z @ 0x1800F9400 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUD2D_PO.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800F3BB4 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUD2D_POINTANDSIZE_L@@AEBUPixelFormatInfo@@.c)
 *     ??0CResampleLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTargetBitmap@@2@Z @ 0x1800F88F4 (--0CResampleLayer@@AEAA@AEBUD2D_POINTANDSIZE_L@@0MMW4Enum@CompositionResampleMode@@PEAVIRenderTa.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResampleLayer::Create(_QWORD *a1, __int64 a2, float a3, float a4, int a5, __int64 *a6)
{
  __int64 v7; // rbx
  int v9; // eax
  float v10; // xmm0_4
  int v11; // edi
  int v12; // eax
  struct RenderTargetInfo *v13; // rax
  int Bitmap; // eax
  struct IRenderTargetBitmap *v15; // rdi
  unsigned int v16; // esi
  unsigned int v17; // r8d
  struct RenderTargetInfo *v18; // rax
  int v19; // eax
  void *v20; // rax
  __int64 v21; // rax
  __int64 v23; // [rsp+48h] [rbp-79h] BYREF
  UINT32 v24[4]; // [rsp+50h] [rbp-71h] BYREF
  struct IRenderTargetBitmap *v25; // [rsp+60h] [rbp-61h] BYREF
  const char *v26; // [rsp+68h] [rbp-59h] BYREF
  int v27; // [rsp+70h] [rbp-51h]
  _BYTE v28[24]; // [rsp+78h] [rbp-49h] BYREF
  _DWORD v29[4]; // [rsp+90h] [rbp-31h] BYREF

  v7 = 0LL;
  v23 = 0LL;
  *a6 = 0LL;
  (*(void (__fastcall **)(_QWORD *, _DWORD *))(a1[1] + 24LL))(a1 + 1, v29);
  v9 = v29[0];
  v10 = (float)*(int *)(a2 + 8);
  if ( CCommonRegistryData::m_fResampleInLinearSpace )
    v9 = 91;
  v29[1] = 1;
  v29[0] = v9;
  v24[0] = *(_DWORD *)a2;
  v24[1] = *(_DWORD *)(a2 + 4);
  v11 = (int)floorf_0((float)(v10 / a3) + 0.5);
  v12 = (int)floorf_0((float)((float)*(int *)(a2 + 12) / a4) + 0.5);
  v25 = 0LL;
  if ( v11 < 1 )
    v11 = 1;
  v24[2] = v11;
  if ( v12 < 1 )
    v12 = 1;
  v24[3] = v12;
  v13 = (struct RenderTargetInfo *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 120LL))(a1, v28);
  v27 = 40;
  v26 = "DWM Scratch Rendertarget (ResampleLayer)";
  Bitmap = CExternalLayer::CreateBitmap(
             (struct CResourceTag *)&v26,
             v24,
             (struct PixelFormatInfo *)v29,
             v13,
             2,
             (__int64 *)&v25);
  v15 = v25;
  v16 = Bitmap;
  if ( Bitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Bitmap, 0xBAu, 0LL);
  }
  else
  {
    v17 = a5;
    if ( CCommonRegistryData::m_dwResampleModeOverride )
      v17 = CCommonRegistryData::m_dwResampleModeOverride;
    if ( v17 == 2 )
    {
      v18 = (struct RenderTargetInfo *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a1 + 120LL))(a1, v28);
      v27 = 47;
      v26 = "DWM Scratch Rendertarget (ResampleLayer pass 2)";
      v19 = CExternalLayer::CreateBitmap((struct CResourceTag *)&v26, v24, (struct PixelFormatInfo *)v29, v18, 2, &v23);
      v16 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xCAu, 0LL);
        v7 = v23;
        goto LABEL_15;
      }
      v7 = v23;
    }
    v20 = MIDL_user_allocate(0xA0uLL);
    if ( v20 )
    {
      v21 = CResampleLayer::CResampleLayer(
              (__int64)v20,
              (__int128 *)a2,
              (const struct D2D_POINTANDSIZE_L *)v24,
              a3,
              a4,
              a5,
              v15,
              v7);
      *a6 = v21;
      if ( v21 )
        goto LABEL_15;
    }
    else
    {
      *a6 = 0LL;
    }
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0xD4u, 0LL);
  }
LABEL_15:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v15 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v15 + 16LL))(v15);
  return v16;
}
