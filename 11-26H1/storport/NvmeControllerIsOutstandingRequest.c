/*
 * XREFs of NvmeControllerIsOutstandingRequest @ 0x1400E1624
 * Callers:
 *     NvmeAdapterIsOutstandingRequest @ 0x1400D9360 (NvmeAdapterIsOutstandingRequest.c)
 *     NvmeControllerWaitForOutstandingIoComplete @ 0x1400FB8F0 (NvmeControllerWaitForOutstandingIoComplete.c)
 * Callees:
 *     IsOutstandingRequestInNvmeControllerQueue @ 0x1400D1B5C (IsOutstandingRequestInNvmeControllerQueue.c)
 */

bool __fastcall NvmeControllerIsOutstandingRequest(__int64 a1)
{
  __int64 i; // rbx

  for ( i = 0LL; (unsigned int)i < *(unsigned __int16 *)(a1 + 22); i = (unsigned int)(i + 1) )
  {
    if ( IsOutstandingRequestInNvmeControllerQueue(a1, *(_QWORD *)(a1 + 728) + 192 * i) )
      return 1;
  }
  return IsOutstandingRequestInNvmeControllerQueue(a1, *(_QWORD *)(a1 + 712));
}
