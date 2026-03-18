/*
 * XREFs of ?IsBlackedOutForReadback@CDeviceTextureTarget@@UEBA_NXZ @ 0x18018FF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsBlackedOutForReadback(CDeviceTextureTarget *this)
{
  return *((_BYTE *)this + 51);
}
