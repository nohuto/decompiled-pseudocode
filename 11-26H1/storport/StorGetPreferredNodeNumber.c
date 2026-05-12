/*
 * XREFs of StorGetPreferredNodeNumber @ 0x1400257D0
 * Callers:
 *     RaInitializeRaidResources @ 0x1400251C0 (RaInitializeRaidResources.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x14004C760 (RaAttemptHighWaterMarkIncrease.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall StorGetPreferredNodeNumber(__int64 a1)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rcx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+20h] [rbp-58h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp+8h] BYREF
  ULONG Length; // [rsp+88h] [rbp+10h] BYREF

  ProcNumber = 0;
  v2 = 0x80000000;
  memset_0(&Information, 0, sizeof(Information));
  v3 = *(_DWORD **)(a1 + 48);
  Length = 80;
  if ( (v3[258] > 1u || v3[259] != 1)
    && KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 284) * v3[260], &ProcNumber) >= 0
    && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) >= 0 )
  {
    return Information.NumaNode.NodeNumber;
  }
  return v2;
}
