/*
 * XREFs of _GetProcessDefaultLayout @ 0x140222590
 * Callers:
 *     NtUserGetProcessDefaultLayout @ 0x140222550 (NtUserGetProcessDefaultLayout.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 */

__int64 __fastcall GetProcessDefaultLayout(_DWORD *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v4; // rcx
  _DWORD *v5; // rdx
  __int64 CurrentProcessWin32Process; // rax

  v2 = 0;
  v3 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v4) == v3 )
  {
    UserSetLastError(12);
  }
  else
  {
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *v5;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(MmUserProbeAddress);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    *a1 = *(_DWORD *)(CurrentProcessWin32Process + 816);
    return 1;
  }
  return v2;
}
