/*
 * XREFs of ?GetShaderResourceView@CD2DBitmap@@UEAAPEAUID3D11ShaderResourceView@@XZ @ 0x180130D50
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ @ 0x180130D80 (-EnsureShaderResourceView@CD2DBitmap@@IEAAJXZ.c)
 */

struct ID3D11ShaderResourceView *__fastcall CD2DBitmap::GetShaderResourceView(CD2DBitmap *this)
{
  CD2DBitmap::EnsureShaderResourceView((CD2DBitmap *)((char *)this - 72));
  return (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 5);
}
