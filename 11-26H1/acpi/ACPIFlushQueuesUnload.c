/*
 * XREFs of ACPIFlushQueuesUnload @ 0x140059ED8
 * Callers:
 *     ACPIFlushDeviceQueueCallback @ 0x140059E80 (ACPIFlushDeviceQueueCallback.c)
 *     ACPITableUnload @ 0x140069970 (ACPITableUnload.c)
 * Callees:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x14001C9F8 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1400283E0 (ACPIBuildSpecialSynchronizationRequest.c)
 */

__int64 __fastcall ACPIFlushQueuesUnload(_QWORD *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v4; // r8d

  result = 3221225473LL;
  v4 = a3 - 1;
  if ( !v4 )
    return ACPIBuildSpecialSynchronizationRequest((__int64)a1, (__int64)ACPIFlushDeviceQueueCallback, a2, 127, 1);
  if ( v4 == 1 )
    return ACPIDeviceInternalSynchronizeRequest(a1, (__int64)ACPIFlushPowerQueueCallback, a2);
  return result;
}
