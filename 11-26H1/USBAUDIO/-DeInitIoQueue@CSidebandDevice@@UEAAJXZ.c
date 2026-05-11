/*
 * XREFs of ?DeInitIoQueue@CSidebandDevice@@UEAAJXZ @ 0x1400100F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005B28 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14000B42C (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x140013B0C (-StopIoQueueThread@CSidebandDevice@@AEAAJXZ.c)
 */

__int64 __fastcall CSidebandDevice::DeInitIoQueue(CSidebandDevice *this)
{
  char v2; // bl
  bool v3; // dl
  bool v4; // r8
  int v5; // edx
  unsigned int v6; // edi
  int v7; // r8d

  v2 = 1;
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  v4 = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( v3 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(WPP_GLOBAL_Control->AttachedDevice, v3, v4, WPP_GLOBAL_Control->DeviceExtension);
  v6 = CSidebandDevice::StopIoQueueThread(this);
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v2 = 0;
  if ( (_BYTE)v5 || v2 )
  {
    LOBYTE(v7) = v2;
    WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v5, v7, WPP_GLOBAL_Control->DeviceExtension);
  }
  return v6;
}
