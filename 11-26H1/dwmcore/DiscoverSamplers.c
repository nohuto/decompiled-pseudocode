/*
 * XREFs of DiscoverSamplers @ 0x180146CEC
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180145FB0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x180146DA8 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 */

__int64 __fastcall DiscoverSamplers(_QWORD *a1, __int64 a2)
{
  _WORD *v2; // rbx
  unsigned int v3; // esi
  _WORD *i; // rbp
  __int16 v6; // di
  unsigned int v7; // r15d

  v2 = (_WORD *)a1[1];
  v3 = 0;
  for ( i = &v2[*a1]; v2 != i; ++v2 )
  {
    v6 = *v2 & 0xFF00;
    if ( v6 == 512 || v6 == 256 )
    {
      v7 = (unsigned __int8)*v2;
      if ( v3 <= v7 + 1 )
        v3 = v7 + 1;
      *(_BYTE *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, (unsigned __int8)*v2) = 1;
      if ( v6 == 512 )
        *(_BYTE *)(gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v7) + 1) = 1;
    }
  }
  return v3;
}
