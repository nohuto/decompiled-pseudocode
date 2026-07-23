/*
 * XREFs of HvlQueryProcessorTopologyEx @ 0x1405BBF20
 * Callers:
 *     HalpMcStagingHypervisor @ 0x1405961E0 (HalpMcStagingHypervisor.c)
 *     HvlQueryProcessorTopology @ 0x1405BBF00 (HvlQueryProcessorTopology.c)
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x1402F3138 (HvlpGetLpcbByLpIndex.c)
 */

__int64 __fastcall HvlQueryProcessorTopologyEx(unsigned int a1, _WORD *a2, _DWORD *a3, __int64 a4, int *a5)
{
  _LIST_ENTRY *LpcbByLpIndex; // rax
  _DWORD *v9; // r11
  _LIST_ENTRY *v10; // r10
  int Flink_high; // ecx
  int v12; // eax

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  if ( a1 >= HvlpLogicalProcessorRegionsCount )
    return 3221225485LL;
  LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1);
  v10 = LpcbByLpIndex;
  if ( !LpcbByLpIndex )
    return 3221225485LL;
  if ( a2 )
    *a2 = LpcbByLpIndex[6].Flink;
  if ( a3 )
    *a3 = HIDWORD(LpcbByLpIndex->Blink);
  if ( v9 )
    *v9 = LpcbByLpIndex[1].Flink;
  if ( a5 )
  {
    Flink_high = HIDWORD(LpcbByLpIndex[1].Flink);
    v12 = -1;
    if ( Flink_high != -1 )
      v12 = HIDWORD(v10[1].Flink);
    *a5 = v12;
  }
  return 0LL;
}
