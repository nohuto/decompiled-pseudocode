/*
 * XREFs of ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x1800E44B0
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800E4690 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 * Callees:
 *     ?IsNoAlphaFormOf@@YAHW4DXGI_FORMAT@@0@Z @ 0x1800E2890 (-IsNoAlphaFormOf@@YAHW4DXGI_FORMAT@@0@Z.c)
 */

bool __fastcall IsEqualPixelFormatInfo(enum DXGI_FORMAT *a1, const struct PixelFormatInfo *a2)
{
  enum DXGI_FORMAT v2; // ebx
  const struct PixelFormatInfo *v3; // r11
  const struct PixelFormatInfo *v4; // r10
  int v5; // r8d
  char v6; // r9

  v2 = *a1;
  v3 = a2;
  v4 = (const struct PixelFormatInfo *)a1;
  v5 = 1;
  if ( *a1 == *(_DWORD *)a2
    || IsNoAlphaFormOf(v2, (enum DXGI_FORMAT)*(_DWORD *)a2) && *((_DWORD *)v3 + 1) == 3
    || IsNoAlphaFormOf((enum DXGI_FORMAT)*(_DWORD *)v3, v2) && *((_DWORD *)v4 + 1) == 3 )
  {
    v6 = v5;
  }
  if ( !v6 || (*((_DWORD *)v3 + 1) == v5) != (*((_DWORD *)v4 + 1) == v5) )
    LOBYTE(v5) = 0;
  return v5;
}
