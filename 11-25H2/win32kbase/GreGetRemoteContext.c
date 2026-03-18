/*
 * XREFs of GreGetRemoteContext @ 0x1401559C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetRemoteContext(__int64 a1)
{
  return *(_QWORD *)(W32GetSessionState(a1) + 88) + 2856LL;
}
