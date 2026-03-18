/*
 * XREFs of ACPIDockIntfReference @ 0x1400AB340
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 */

char __fastcall ACPIDockIntfReference(PVOID Object)
{
  __int64 DeviceExtension; // rdi
  char result; // al

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object);
  ObfReferenceObject(Object);
  result = ACPIInitReferenceDeviceExtension(DeviceExtension);
  if ( *(char *)(DeviceExtension + 8) >= 0 )
    _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 196));
  return result;
}
