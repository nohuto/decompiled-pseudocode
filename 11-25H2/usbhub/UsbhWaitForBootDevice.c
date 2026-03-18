/*
 * XREFs of UsbhWaitForBootDevice @ 0x14002D150
 * Callers:
 *     UsbhFdoColdStartPdo @ 0x14002CA60 (UsbhFdoColdStartPdo.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     WPP_RECORDER_SF_q @ 0x14003EDC0 (WPP_RECORDER_SF_q.c)
 */

NTSTATUS __fastcall UsbhWaitForBootDevice(char a1, __int64 a2, int a3, int a4)
{
  int v7; // edx
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  NTSTATUS result; // eax
  int v11; // edx

  v8 = PdoExt(a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      3,
      82,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
      a1);
  v9 = *((_QWORD *)v8 + 344);
  v8[687] = a3;
  v8[686] = a4;
  result = ExNotifyBootDeviceRemoval(v9);
  if ( (_BYTE)result )
    result = KeWaitForSingleObject(v8 + 690, Executive, 0, 0, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_q(
               WPP_GLOBAL_Control->DeviceExtension,
               v11,
               3,
               83,
               (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
               a1);
  }
  return result;
}
