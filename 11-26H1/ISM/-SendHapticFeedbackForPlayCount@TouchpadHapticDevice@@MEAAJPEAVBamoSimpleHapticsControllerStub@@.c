/*
 * XREFs of ?SendHapticFeedbackForPlayCount@TouchpadHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@Z @ 0x18018AB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchpadHapticDevice::SendHapticFeedbackForPlayCount(
        TouchpadHapticDevice *this,
        struct BamoSimpleHapticsControllerStub *a2,
        unsigned __int16 a3,
        float a4,
        unsigned int a5,
        unsigned int a6)
{
  return TouchpadHapticDevice::SendHapticFeedbackForPlayCountImpl(this, a3, a4, a5, a6);
}
