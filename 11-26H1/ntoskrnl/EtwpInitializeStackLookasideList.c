/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x14082A3C4
 * Callers:
 *     EtwpInitialize @ 0x140CE08F4 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 */

_SINGLE_LIST_ENTRY *EtwpInitializeStackLookasideList()
{
  _SINGLE_LIST_ENTRY *result; // rax

  result = &stru_140E28440.IoSelfBoostsEntry;
  if ( ((unsigned __int8)&stru_140E28440.IoSelfBoostsEntry & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *(_QWORD *)&stru_140E28440.PriorityFloorCounts[8] = 0LL;
  *(_OWORD *)&stru_140E28440.IoSelfBoostsEntry.Next = 0LL;
  return result;
}
