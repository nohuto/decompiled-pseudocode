/*
 * XREFs of NtUserSetImeInfoEx @ 0x14029F2D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     _GetProcessWindowStation @ 0x140111060 (_GetProcessWindowStation.c)
 *     ?SetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@@Z @ 0x140223CC8 (-SetImeInfoEx@@YAHPEAUtagWINDOWSTATION@@PEAUtagIMEINFOEX@@@Z.c)
 */

__int64 __fastcall NtUserSetImeInfoEx(_OWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // ebx
  _OWORD *v5; // rax
  _OWORD *v6; // rcx
  __int64 v7; // rdx
  struct tagWINDOWSTATION *ProcessWindowStation; // rax
  _BYTE v10[360]; // [rsp+30h] [rbp-168h] BYREF

  EnterCrit(0LL, 0LL);
  if ( (**(_DWORD **)(W32GetUserSessionState(v2, v1) + 19872) & 4) != 0 )
  {
    v5 = a1;
    v6 = v10;
    v7 = 2LL;
    do
    {
      *v6 = *v5;
      v6[1] = v5[1];
      v6[2] = v5[2];
      v6[3] = v5[3];
      v6[4] = v5[4];
      v6[5] = v5[5];
      v6[6] = v5[6];
      v6 += 8;
      *(v6 - 1) = v5[7];
      v5 += 8;
      --v7;
    }
    while ( v7 );
    *v6 = *v5;
    v6[1] = v5[1];
    v6[2] = v5[2];
    v6[3] = v5[3];
    v6[4] = v5[4];
    v6[5] = v5[5];
    ProcessWindowStation = (struct tagWINDOWSTATION *)GetProcessWindowStation(0LL);
    v4 = SetImeInfoEx(ProcessWindowStation, (struct tagIMEINFOEX *)v10);
  }
  else
  {
    UserSetLastError(120);
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
