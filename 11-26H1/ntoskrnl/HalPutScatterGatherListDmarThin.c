/*
 * XREFs of HalPutScatterGatherListDmarThin @ 0x14049BD20
 * Callers:
 *     <none>
 * Callees:
 *     HalpPutScatterGatherListDmarThin @ 0x14049BD84 (HalpPutScatterGatherListDmarThin.c)
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x14057B58C (HalpDmaReturnEmergencyLogicalAddressResources.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListDmarThin(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  char v6; // bp

  v3 = a2[1];
  v6 = HalpPutScatterGatherListDmarThin(a1, a2, a3);
  if ( *(_BYTE *)(v3 + 97) )
    ExFreePoolWithTag(a2, 0);
  if ( v6 )
    HalpDmaReturnEmergencyLogicalAddressResources(a1);
}
