/*
 * XREFs of ?SendHapticFeedbackForPlayCount@MouseHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@Z @ 0x18018CD00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseHapticDevice::SendHapticFeedbackForPlayCount(
        MouseHapticDevice *this,
        struct BamoSimpleHapticsControllerStub *a2,
        unsigned __int16 a3,
        float a4,
        unsigned int a5,
        unsigned int a6)
{
  return MouseHapticDevice::SendHapticFeedbackForPlayCountImpl(this, a3, a4, a5, a6);
}
