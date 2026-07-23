/*
 * XREFs of HalpGetAcpiStaticNumaTopology @ 0x1407877AC
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 */

__int64 HalpGetAcpiStaticNumaTopology()
{
  int v0; // eax
  __int64 v1; // r8
  int v2; // eax

  v0 = HalpInterruptModel() - 1;
  if ( v0 )
  {
    v2 = v0 - 1;
    if ( v2 )
    {
      if ( (unsigned int)(v2 - 1) > 1 )
        return 3221225800LL;
    }
  }
  if ( !HalpNumaConfig )
    return 3221225800LL;
  *(_WORD *)v1 = *(_WORD *)(HalpNumaConfig + 56);
  *(_QWORD *)(v1 + 8) = HalpNumaQueryProcessorNode;
  *(_QWORD *)(v1 + 24) = HalpNumaQueryProximityNode;
  *(_QWORD *)(v1 + 40) = HalpNumaQueryProximityId;
  *(_QWORD *)(v1 + 48) = HalpNumaQueryNodeCapacity;
  *(_QWORD *)(v1 + 56) = HalpNumaQueryNodeDistance;
  *(_QWORD *)(v1 + 32) = (unsigned __int64)HalpNumaAddRangeProximity & -(__int64)(HalpAcpiSrat != 0);
  return 0LL;
}
