/*
 * XREFs of NVMeInitializeProcessorIoQueueMapping @ 0x1400184FC
 * Callers:
 *     NVMeHwAdapterControl @ 0x140007FB0 (NVMeHwAdapterControl.c)
 *     NVMeControllerReinitialize @ 0x140024B08 (NVMeControllerReinitialize.c)
 * Callees:
 *     ProcessorToIoSqMappingBase @ 0x140004B70 (ProcessorToIoSqMappingBase.c)
 *     ProcessorToDedicatedIoSqMapping @ 0x140019430 (ProcessorToDedicatedIoSqMapping.c)
 */

__int64 __fastcall NVMeInitializeProcessorIoQueueMapping(__int64 a1)
{
  unsigned int i; // esi
  __int64 v4; // r8
  int v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_WORD *)(a1 + 272) )
    return 1LL;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 234); ++i )
  {
    v4 = *(_QWORD *)(a1 + 264);
    v5 = 0;
    if ( !(unsigned int)StorPortExtendedFunction(116LL, a1, *(unsigned int *)(v4 + 72LL * i), &v5)
      && (*(_WORD *)(a1 + 272) == 1 || v5) )
    {
      ProcessorToIoSqMappingBase(a1, *(_DWORD *)(*(_QWORD *)(a1 + 264) + 72LL * i), v5, 0);
      ProcessorToDedicatedIoSqMapping(a1, *(unsigned int *)(*(_QWORD *)(a1 + 264) + 72LL * i), (unsigned __int16)v5);
    }
  }
  return 0LL;
}
