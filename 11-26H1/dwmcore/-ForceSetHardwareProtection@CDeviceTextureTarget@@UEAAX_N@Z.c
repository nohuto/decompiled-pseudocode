/*
 * XREFs of ?ForceSetHardwareProtection@CDeviceTextureTarget@@UEAAX_N@Z @ 0x1801E33D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureTarget::ForceSetHardwareProtection(CDeviceTextureTarget *this, char a2)
{
  *((_BYTE *)this + 48) = a2;
}
