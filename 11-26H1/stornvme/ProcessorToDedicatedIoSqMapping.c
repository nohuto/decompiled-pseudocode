/*
 * XREFs of ProcessorToDedicatedIoSqMapping @ 0x140019430
 * Callers:
 *     ScsiReadWriteRequest @ 0x140003DE0 (ScsiReadWriteRequest.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 *     ScsiSyncCacheRequest @ 0x140004E90 (ScsiSyncCacheRequest.c)
 *     AssignQueueId @ 0x14000F070 (AssignQueueId.c)
 *     NVMeInitializeProcessorIoQueueMapping @ 0x1400184FC (NVMeInitializeProcessorIoQueueMapping.c)
 * Callees:
 *     ProcessorToIoSqMappingBase @ 0x140004B70 (ProcessorToIoSqMappingBase.c)
 */

__int64 __fastcall ProcessorToDedicatedIoSqMapping(__int64 a1, unsigned int a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v7; // rcx

  v3 = a2;
  ProcessorToIoSqMappingBase(a1, a2, a3, 1);
  result = *(_QWORD *)(a1 + 264);
  if ( !*(_QWORD *)(result + 72 * v3 + 64) )
  {
    if ( !*(_QWORD *)(result + 72 * v3 + 56) )
      ProcessorToIoSqMappingBase(a1, v3, a3, 0);
    v7 = *(_QWORD *)(a1 + 264);
    result = *(_QWORD *)(v7 + 72 * v3 + 56);
    *(_QWORD *)(v7 + 72 * v3 + 64) = result;
  }
  return result;
}
