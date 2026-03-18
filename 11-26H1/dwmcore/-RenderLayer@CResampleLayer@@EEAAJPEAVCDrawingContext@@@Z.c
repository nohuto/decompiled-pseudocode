/*
 * XREFs of ?RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180102210
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x180101734 (-RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x180102580 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x180251040 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1802513A4 (-RenderLanczos@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResampleLayer::RenderLayer(CResampleLayer *this, struct CDrawingContext *a2)
{
  __int64 v2; // rdi
  struct CSurfaceShaderComposer *v5; // r14
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // r9d
  struct ID3D11RenderTargetView *v11; // rbx
  unsigned int v12; // edx
  unsigned int v13; // edx
  char v14; // al
  bool v15; // r9
  unsigned int v16; // [rsp+20h] [rbp-48h]
  D3D11_VIEWPORT v17; // [rsp+30h] [rbp-38h] BYREF

  v2 = *((_QWORD *)a2 + 3);
  v5 = *(struct CSurfaceShaderComposer **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2) + 1528);
  v6 = 0LL;
  memset(&v17, 0, sizeof(v17));
  if ( !v5 )
  {
    v8 = -2005270524;
    v16 = 230;
    goto LABEL_18;
  }
  do
  {
    *(&v17.TopLeftX + v6) = (float)*((int *)this + v6 + 36);
    ++v6;
  }
  while ( v6 < 4 );
  v17.MaxDepth = 1.0;
  v7 = CDrawingContext::FlushD2D(a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v16 = 241;
LABEL_5:
    v9 = v7;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v16, 0LL);
    return v8;
  }
  if ( g_LockAndReadLayer )
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 112LL))(
      v2,
      ((unsigned __int64)a2 + 16) & -(__int64)(a2 != 0LL));
  v11 = (struct ID3D11RenderTargetView *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 176LL))(v2);
  v12 = *((_DWORD *)this + 30);
  if ( CCommonRegistryData::m_dwResampleModeOverride )
    v12 = CCommonRegistryData::m_dwResampleModeOverride;
  v13 = v12 - 1;
  if ( !v13 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    v7 = CResampleLayer::RenderLanczos(this, v5, v11, v15, &v17);
    v8 = v7;
    if ( v7 < 0 )
    {
      v16 = 263;
      goto LABEL_5;
    }
    goto LABEL_15;
  }
  if ( v13 != 1 )
  {
    v8 = -2147024809;
    v16 = 274;
LABEL_18:
    v9 = v8;
    goto LABEL_6;
  }
  v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  v7 = CResampleLayer::RenderXBR(this, v5, v11, v14, &v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    v16 = 270;
    goto LABEL_5;
  }
LABEL_15:
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
  return v8;
}
