/*
 * XREFs of ?SendHapticFeedbackForDuration@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z @ 0x18018C340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall PenHapticDevice::SendHapticFeedbackForDuration(
        PenHapticDevice *this,
        struct BamoSimpleHapticsControllerStub *a2,
        unsigned __int16 a3,
        float a4,
        unsigned int a5)
{
  return PenHapticDevice::SendHapticFeedbackForDurationImpl(this, a3, a4, a5);
}
