/*
 * XREFs of ?CanTextureFromCrossAdapter@CD3DDevice@@QEBA_NXZ @ 0x1802B164C
 * Callers:
 *     ?Create@CTextureCollection@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z @ 0x1802B167C (-Create@CTextureCollection@@SAJPEAVIDeviceTexture@@PEAPEAV1@@Z.c)
 *     ?InitSecondary@CCachedTexture@@IEAAJPEAVICrossAdapterTexture@@@Z @ 0x1802B1BF8 (-InitSecondary@CCachedTexture@@IEAAJPEAVICrossAdapterTexture@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CD3DDevice::CanTextureFromCrossAdapter(CD3DDevice *this)
{
  char result; // al

  if ( *((int *)this + 157) < 2000 )
    return 0;
  result = 0;
  if ( *((_BYTE *)this + 1488) || *((_QWORD *)this + 70) )
    return 1;
  return result;
}
