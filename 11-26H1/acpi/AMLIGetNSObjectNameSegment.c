/*
 * XREFs of AMLIGetNSObjectNameSegment @ 0x14003D704
 * Callers:
 *     AcpiArblibAllocateArbiterInstance @ 0x1400ACFC4 (AcpiArblibAllocateArbiterInstance.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1400B843C (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIGetPnpLocationString @ 0x1400C6B70 (ACPIGetPnpLocationString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectNameSegment(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)a1 + 40LL);
}
