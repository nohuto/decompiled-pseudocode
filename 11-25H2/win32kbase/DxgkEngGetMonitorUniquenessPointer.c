/*
 * XREFs of DxgkEngGetMonitorUniquenessPointer @ 0x14015D830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngGetMonitorUniquenessPointer(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1768LL) + 1573032LL;
}
