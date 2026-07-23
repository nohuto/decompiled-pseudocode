/*
 * XREFs of PipAddDevicesToBootDriverWorker @ 0x140CC73C4
 * Callers:
 *     PipApplyFunctionToServiceInstances @ 0x1407A6AB8 (PipApplyFunctionToServiceInstances.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PiProcessAddBootDevices @ 0x1407A7B1C (PiProcessAddBootDevices.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 */

__int64 __fastcall PipAddDevicesToBootDriverWorker(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  void *v4; // rbx

  v2 = PnpDeviceObjectFromDeviceInstanceWithTag(a2, 0x746C6644u);
  v4 = v2;
  if ( v2 )
  {
    PiProcessAddBootDevices((__int64)v2, v3);
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  }
  return 1LL;
}
