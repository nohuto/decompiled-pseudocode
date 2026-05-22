/*
 * XREFs of ?GetHaptics@BamoPenDevicePrincipal@@UEAAPEAVBamoSimpleHapticsControllerPrincipal@@XZ @ 0x18007C060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoSimpleHapticsControllerPrincipal *__fastcall BamoPenDevicePrincipal::GetHaptics(
        BamoPenDevicePrincipal *this)
{
  return (struct BamoSimpleHapticsControllerPrincipal *)*((_QWORD *)this + 8);
}
