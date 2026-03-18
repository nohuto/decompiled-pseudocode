/*
 * XREFs of ?GetTexture2D@CD2DBitmap@@UEAAPEAUID3D11Texture2D@@PEAI@Z @ 0x1801B3550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ID3D11Texture2D *__fastcall CD2DBitmap::GetTexture2D(CD2DBitmap *this, unsigned int *a2)
{
  if ( a2 )
    *a2 = *((_DWORD *)this + 40);
  return (struct ID3D11Texture2D *)*((_QWORD *)this + 4);
}
