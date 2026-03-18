/*
 * XREFs of _GetWinStationInfo @ 0x1402B8B80
 * Callers:
 *     NtUserGetWinStationInfo @ 0x140298D40 (NtUserGetWinStationInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWinStationInfo(ULONG64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  _BYTE *v6; // r8

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = -PsGetCurrentProcessWow64Process(v4, v3);
  v6 = (_BYTE *)a1;
  if ( ((v5 != 0 ? 0 : 3) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 >= MmUserProbeAddress )
    v6 = (_BYTE *)MmUserProbeAddress;
  *v6 = *v6;
  v6[39] = v6[39];
  *(_OWORD *)a1 = *(_OWORD *)(UserSessionState + 63560);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(UserSessionState + 63576);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(UserSessionState + 63592);
  return 1LL;
}
