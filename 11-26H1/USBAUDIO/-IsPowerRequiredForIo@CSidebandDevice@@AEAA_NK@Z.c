/*
 * XREFs of ?IsPowerRequiredForIo@CSidebandDevice@@AEAA_NK@Z @ 0x140012E78
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x14000952C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x14000D9D0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 */

bool __fastcall CSidebandDevice::IsPowerRequiredForIo(CSidebandDevice *this, int a2)
{
  char v2; // r8
  bool v3; // bl
  bool v4; // al
  void *v5; // rdx

  v2 = 1;
  v3 = a2 == 2228291;
  v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( v4 || v2 )
  {
    v5 = &WPP_5beda4ce5be130d4523b4ac6acb25968_Traceguids;
    LOBYTE(v5) = v4;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v5,
      v2,
      WPP_GLOBAL_Control->DeviceExtension);
  }
  return v3;
}
