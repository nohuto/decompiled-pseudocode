/*
 * XREFs of ACPIProcessorContainerStartDevice @ 0x1400B6140
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInitStartDevice @ 0x1400420EC (ACPIInitStartDevice.c)
 */

__int64 __fastcall ACPIProcessorContainerStartDevice(ULONG_PTR a1, __int64 a2)
{
  _QWORD *DeviceExtension; // rax
  _QWORD *v5; // r8
  __int64 result; // rax

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v5 = DeviceExtension + 25;
  DeviceExtension += 27;
  v5[1] = v5;
  *v5 = v5;
  DeviceExtension[1] = DeviceExtension;
  *DeviceExtension = DeviceExtension;
  result = ACPIInitStartDevice(
             a1,
             0LL,
             (void (__fastcall *)(__int64, __int64, _QWORD))ACPIProcessorContainerStartDeviceCompletion,
             a2,
             a2);
  if ( (int)result >= 0 )
    return 259LL;
  return result;
}
