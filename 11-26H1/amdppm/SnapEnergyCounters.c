/*
 * XREFs of SnapEnergyCounters @ 0x1400010E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_LIST_ENTRY *__fastcall SnapEnergyCounters(unsigned int a1, char a2, char a3)
{
  _LIST_ENTRY *result; // rax
  __int64 v4; // r10

  result = WPP_MAIN_CB.Queue.ListEntry.Blink;
  v4 = *(_QWORD *)(*((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + a1) + 368LL);
  if ( !a2 )
  {
    result = (_LIST_ENTRY *)__readmsr(0xC001029A);
    *(_QWORD *)(v4 + 16) = result;
  }
  if ( a3 )
  {
    result = *(_LIST_ENTRY **)(v4 + 16);
    *(_QWORD *)(v4 + 32) = result;
  }
  return result;
}
