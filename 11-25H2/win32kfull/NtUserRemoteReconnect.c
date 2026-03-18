/*
 * XREFs of NtUserRemoteReconnect @ 0x14029D3C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteReconnect @ 0x1402573C0 (xxxRemoteReconnect.c)
 */

__int64 __fastcall NtUserRemoteReconnect(_DWORD *Src)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  LODWORD(Src) = xxxRemoteReconnect(Src);
  UserSessionSwitchLeaveCrit(v2);
  return (unsigned int)Src;
}
