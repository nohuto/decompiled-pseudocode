/*
 * XREFs of ?IsProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180191200
 * Callers:
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802AA060 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsProtected(CDeviceTextureTarget *this)
{
  return *((_BYTE *)this + 148);
}
