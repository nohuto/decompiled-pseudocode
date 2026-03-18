/*
 * XREFs of ?SetProtected@CDeviceTextureTarget@@UEAAX_N@Z @ 0x1801B3190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetProtected(CDeviceTextureTarget *this, char a2)
{
  *((_BYTE *)this - 4) = a2;
}
