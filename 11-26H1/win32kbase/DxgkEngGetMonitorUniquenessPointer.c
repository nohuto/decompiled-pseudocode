/*
 * XREFs of DxgkEngGetMonitorUniquenessPointer @ 0x1401A0170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngGetMonitorUniquenessPointer(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 1856LL) + 1573032LL;
}
