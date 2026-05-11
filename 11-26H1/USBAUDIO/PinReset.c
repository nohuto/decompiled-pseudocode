/*
 * XREFs of PinReset @ 0x14003FFB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 */

ULONG *PinReset()
{
  char v0; // r8
  bool v1; // dl
  ULONG *result; // rax

  v0 = 1;
  v1 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v0 = 0;
  if ( v1 || v0 )
    return (ULONG *)WPP_RECORDER_AND_TRACE_SF_(
                      WPP_GLOBAL_Control->AttachedDevice,
                      v1,
                      v0,
                      WPP_GLOBAL_Control->DeviceExtension);
  return result;
}
