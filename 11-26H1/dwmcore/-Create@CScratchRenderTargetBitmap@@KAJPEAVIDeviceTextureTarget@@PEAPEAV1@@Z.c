/*
 * XREFs of ?Create@CScratchRenderTargetBitmap@@KAJPEAVIDeviceTextureTarget@@PEAPEAV1@@Z @ 0x1800F6434
 * Callers:
 *     ?CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800F588C (-CreateScratchRenderTargetBitmap@CD3DDevice@@IEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRende.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CScratchRenderTargetBitmap@@IEAA@XZ @ 0x1800F64D0 (--0CScratchRenderTargetBitmap@@IEAA@XZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z @ 0x1800F652C (-Initialize@CRenderTargetBitmap@@IEAAXPEAVIDeviceTextureTarget@@@Z.c)
 */

__int64 __fastcall CScratchRenderTargetBitmap::Create(
        struct IDeviceTextureTarget *a1,
        struct CScratchRenderTargetBitmap **a2)
{
  unsigned int v3; // ebx
  CScratchRenderTargetBitmap *v5; // rax
  CScratchRenderTargetBitmap *v6; // rax
  CRenderTargetBitmap *v7; // rdi

  v3 = 0;
  *a2 = 0LL;
  v5 = (CScratchRenderTargetBitmap *)MIDL_user_allocate(0x98uLL);
  if ( v5 && (v6 = CScratchRenderTargetBitmap::CScratchRenderTargetBitmap(v5), (v7 = v6) != 0LL) )
  {
    CMILRefCountImpl::AddReference((CScratchRenderTargetBitmap *)((char *)v6 + 8));
    CRenderTargetBitmap::Initialize(v7, a1);
    *a2 = v7;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x14u, 0LL);
  }
  return v3;
}
