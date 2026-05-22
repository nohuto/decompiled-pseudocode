/*
 * XREFs of ?SendHapticFeedbackForDuration@MouseHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z @ 0x18018CCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendHapticFeedbackForDuration@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMI@Z @ 0x18018A848 (-SendHapticFeedbackForDuration@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMI.c)
 */

__int64 __fastcall MouseHapticDevice::SendHapticFeedbackForDuration(
        MouseHapticDevice *this,
        struct BamoSimpleHapticsControllerStub *a2,
        __int16 a3,
        float a4,
        unsigned int a5)
{
  InputTraceLogging::Haptics::SendHapticFeedbackForDuration(IMDT_MOUSE, a3, a4, a5);
  return 0LL;
}
