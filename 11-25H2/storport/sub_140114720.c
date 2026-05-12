/*
 * XREFs of sub_140114720 @ 0x140114720
 * Callers:
 *     sub_140114E3C @ 0x140114E3C (sub_140114E3C.c)
 *     sub_14011EBD0 @ 0x14011EBD0 (sub_14011EBD0.c)
 * Callees:
 *     sub_14008ADD0 @ 0x14008ADD0 (sub_14008ADD0.c)
 */

__int64 __fastcall sub_140114720(__int64 a1, ULONG a2)
{
  ULONG NodeNumber; // ebx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+30h] [rbp-58h] BYREF
  struct _PROCESSOR_NUMBER ProcessorNumber; // [rsp+90h] [rbp+8h] BYREF
  ULONG Length; // [rsp+A0h] [rbp+18h] BYREF

  ProcessorNumber = 0;
  Length = 80;
  NodeNumber = 0x80000000;
  memset(&Information, 0, sizeof(Information));
  if ( KeGetProcessorNumberFromIndex(a2, &ProcessorNumber) >= 0
    && KeQueryLogicalProcessorRelationship(&ProcessorNumber, RelationNumaNode, &Information, &Length) >= 0 )
  {
    NodeNumber = Information.NumaNode.NodeNumber;
  }
  return sub_14008ADD0(72LL, 128LL, 1380147538LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL), NodeNumber);
}
