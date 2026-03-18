/*
 * XREFs of GreGetRemoteContext @ 0x140192C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetRemoteContext(__int64 a1)
{
  return *(_QWORD *)(W32GetSessionState(a1) + 88) + 2936LL;
}
