/*
 * XREFs of ?SetBlackedOutForReadback@CDeviceTextureTarget@@UEAAX_N@Z @ 0x1801B3170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::SetBlackedOutForReadback(CDeviceTextureTarget *this, char a2)
{
  *((_BYTE *)this + 51) = a2;
}
