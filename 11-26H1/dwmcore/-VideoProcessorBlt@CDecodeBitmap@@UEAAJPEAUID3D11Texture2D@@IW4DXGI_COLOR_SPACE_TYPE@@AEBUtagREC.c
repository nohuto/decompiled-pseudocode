/*
 * XREFs of ?VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x180014C00
 * Callers:
 *     <none>
 * Callees:
 *     ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x180014CA0 (-VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBU.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x1800F50E4 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 */

__int64 __fastcall CDecodeBitmap::VideoProcessorBlt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  int v11; // eax

  v8 = 0;
  if ( !*(_BYTE *)(a1 + 56) )
  {
    v11 = CRenderTargetBitmap::VideoProcessorBlt(a1, a2, a3, a4, a5, a6, a7, a8);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x31u, 0LL);
    }
    else
    {
      *(_BYTE *)(a1 + 56) = 1;
      CD2DBitmapCache::MarkFullInvalid((CD2DBitmapCache *)(a1 - 80));
    }
  }
  return v8;
}
