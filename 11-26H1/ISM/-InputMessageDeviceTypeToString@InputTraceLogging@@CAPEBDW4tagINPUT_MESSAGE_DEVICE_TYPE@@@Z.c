/*
 * XREFs of ?InputMessageDeviceTypeToString@InputTraceLogging@@CAPEBDW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800C99F0
 * Callers:
 *     ?PlayWaveformOnController@SystemOriginated@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBGK@Z @ 0x1800CA080 (-PlayWaveformOnController@SystemOriginated@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVI.c)
 *     ?ProcessHapticNotificationMessage@Haptics@InputTraceLogging@@SAXW4_MIT_HAPTIC_NOTIFICATION_MESSAGE_ID@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1800CA214 (-ProcessHapticNotificationMessage@Haptics@InputTraceLogging@@SAXW4_MIT_HAPTIC_NOTIFICATION_MESSA.c)
 *     ?SendHapticFeedbackForDuration@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMI@Z @ 0x18018A848 (-SendHapticFeedbackForDuration@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMI.c)
 *     ?SendHapticFeedbackForPlayCount@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMII@Z @ 0x18018AA68 (-SendHapticFeedbackForPlayCount@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GM.c)
 *     ?HapticDeviceAdded@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBG@Z @ 0x18018EF90 (-HapticDeviceAdded@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBG@Z.c)
 *     ?HapticDeviceQueryRemoved@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBG@Z @ 0x18018F004 (-HapticDeviceQueryRemoved@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBG@Z.c)
 *     ?HapticDeviceRemoved@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBG@Z @ 0x18018F078 (-HapticDeviceRemoved@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::InputMessageDeviceTypeToString(enum tagINPUT_MESSAGE_DEVICE_TYPE a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 == IMDT_UNAVAILABLE )
    return "Unavailable";
  v1 = a1 - 1;
  if ( !v1 )
    return "Keyboard";
  v2 = v1 - 1;
  if ( !v2 )
    return "Mouse";
  v3 = v2 - 2;
  if ( !v3 )
    return "Touch";
  v4 = v3 - 4;
  if ( !v4 )
    return "Pen";
  v5 = v4 - 8;
  if ( !v5 )
    return "Touchpad";
  if ( v5 == 2 )
    return "Touchpad|Mouse";
  return "UNKNOWN";
}
