/*
 * XREFs of ACPIFlushDeviceQueueCallback @ 0x140059E80
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x14004A10C (AMLIRestartContext.c)
 *     ACPIFlushQueuesUnload @ 0x140059ED8 (ACPIFlushQueuesUnload.c)
 */

__int64 __fastcall ACPIFlushDeviceQueueCallback(__int64 a1, _QWORD *a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
    return AMLIRestartContext(a2);
  result = ACPIFlushQueuesUnload(a1, a2, 2LL);
  if ( (_DWORD)result != 259 )
    return AMLIRestartContext(a2);
  return result;
}
