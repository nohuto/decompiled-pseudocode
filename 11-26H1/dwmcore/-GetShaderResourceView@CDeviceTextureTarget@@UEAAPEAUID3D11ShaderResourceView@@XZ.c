/*
 * XREFs of ?GetShaderResourceView@CDeviceTextureTarget@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x180130D10
 * Callers:
 *     ?GetShaderResourceView@CDeviceTextureTarget@@WKI@EAAPEAUID3D11ShaderResourceView@@XZ @ 0x1802A9F00 (-GetShaderResourceView@CDeviceTextureTarget@@WKI@EAAPEAUID3D11ShaderResourceView@@XZ.c)
 * Callees:
 *     ?EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ @ 0x180130D80 (-EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ.c)
 */

struct ID3D11ShaderResourceView *__fastcall CDeviceTextureTarget::GetShaderResourceView(CDeviceTextureTarget *this)
{
  CD2DBitmap *v2; // rcx

  v2 = (CDeviceTextureTarget *)((char *)this - 72);
  if ( !*((_BYTE *)v2 + 290) && !*((_BYTE *)this + 217) )
    return 0LL;
  CD2DBitmap::EnsureShaderResourceView(v2);
  return (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 5);
}
