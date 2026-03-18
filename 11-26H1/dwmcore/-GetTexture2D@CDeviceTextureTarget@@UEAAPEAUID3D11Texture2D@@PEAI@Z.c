/*
 * XREFs of ?GetTexture2D@CDeviceTextureTarget@@UEAAPEAUID3D11Texture2D@@PEAI@Z @ 0x1801ADE90
 * Callers:
 *     ?GetTexture2D@CDeviceTextureTarget@@WKI@EAAPEAUID3D11Texture2D@@PEAI@Z @ 0x1802A9F60 (-GetTexture2D@CDeviceTextureTarget@@WKI@EAAPEAUID3D11Texture2D@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

struct ID3D11Texture2D *__fastcall CDeviceTextureTarget::GetTexture2D(CDeviceTextureTarget *this, unsigned int *a2)
{
  if ( !*((_BYTE *)this + 218) && !*((_BYTE *)this + 217) )
    return 0LL;
  if ( a2 )
    *a2 = *((_DWORD *)this + 40);
  return (struct ID3D11Texture2D *)*((_QWORD *)this + 4);
}
