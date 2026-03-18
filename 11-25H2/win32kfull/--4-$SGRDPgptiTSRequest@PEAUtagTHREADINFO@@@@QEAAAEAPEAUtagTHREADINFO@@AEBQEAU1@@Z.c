/*
 * XREFs of ??4?$SGRDPgptiTSRequest@PEAUtagTHREADINFO@@@@QEAAAEAPEAUtagTHREADINFO@@AEBQEAU1@@Z @ 0x14026EAF4
 * Callers:
 *     NtUserRemoteConnect @ 0x1401FB800 (NtUserRemoteConnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGRDPgptiTSRequest<tagTHREADINFO *>::operator=(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v2 = *a2;
  *(_QWORD *)(W32GetUserSessionState(a1, a2) + 68456) = v2;
  return W32GetUserSessionState(v4, v3) + 68456;
}
