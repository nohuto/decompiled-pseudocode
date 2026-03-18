/*
 * XREFs of NtUserUpdateInstance @ 0x1402A3180
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x14006739C (HMValidateHandleNoRip.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     xxxChangeMonitorFlags @ 0x14017E61C (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall NtUserUpdateInstance(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  int v6; // edi
  _DWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v5 = 0;
  v6 = 0;
  EnterCrit(0LL, 0LL);
  v7 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v7 = (_DWORD *)MmUserProbeAddress;
  *v7 = *v7;
  LOBYTE(v7) = 9;
  v8 = HMValidateHandleNoRip(a1, (__int64)v7);
  if ( v8 )
  {
    xxxChangeMonitorFlags(v8, a3);
    v6 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 66688);
  }
  else
  {
    v5 = 16390;
  }
  *a2 = v6;
  UserSessionSwitchLeaveCrit(v9);
  return v5;
}
