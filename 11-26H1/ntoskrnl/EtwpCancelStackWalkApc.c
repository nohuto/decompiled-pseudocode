/*
 * XREFs of EtwpCancelStackWalkApc @ 0x140480D80
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingStackwalkApc @ 0x140480D9C (EtwpFinalizePendingStackwalkApc.c)
 */

__int64 __fastcall EtwpCancelStackWalkApc(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  LOBYTE(a3) = *a3;
  return EtwpFinalizePendingStackwalkApc(*a1, a2, a3);
}
