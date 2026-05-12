/*
 * XREFs of sub_14000172C @ 0x14000172C
 * Callers:
 *     sub_140001010 @ 0x140001010 (sub_140001010.c)
 *     sub_1400013F0 @ 0x1400013F0 (sub_1400013F0.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14000172C(__int64 a1)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rcx
  _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+20h] [rbp-58h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp+8h] BYREF
  ULONG Length; // [rsp+88h] [rbp+10h] BYREF

  ProcNumber = 0;
  v2 = 0x80000000;
  memset_0(&Information, 0, sizeof(Information));
  v3 = *(_DWORD **)(a1 + 48);
  Length = 80;
  if ( (v3[242] > 1u || v3[243] != 1)
    && KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 284) * v3[244], &ProcNumber) >= 0
    && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) >= 0 )
  {
    return Information.NumaNode.NodeNumber;
  }
  return v2;
}
