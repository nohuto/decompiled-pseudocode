/*
 * XREFs of OpenDesktopCompletion @ 0x14019D648
 * Callers:
 *     xxxCreateDesktopEx @ 0x140166938 (xxxCreateDesktopEx.c)
 *     EditionOpenInputDesktopEntryPoint @ 0x14019D3D0 (EditionOpenInputDesktopEntryPoint.c)
 *     _OpenDesktop @ 0x1401D6EE8 (_OpenDesktop.c)
 *     _OpenThreadDesktop @ 0x14020B984 (_OpenThreadDesktop.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 */

__int64 __fastcall OpenDesktopCompletion(__int64 a1, __int64 a2, char a3)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  PEPROCESS *v9; // rdi
  __int64 v10; // rsi
  HANDLE v12; // rbx
  int ProcessLuid; // ebx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v9 = (PEPROCESS *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v9 = (PEPROCESS *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v10 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v10 + 64) & 2) == 0 )
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  v12 = *(HANDLE *)(W32GetUserSessionState(v8, v7) + 63544);
  if ( PsGetProcessId(*v9) == v12 )
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  v14 = 0LL;
  ProcessLuid = GetProcessLuid(0LL, &v14);
  if ( ProcessLuid >= 0 )
  {
    if ( v14 == *(_QWORD *)(v10 + 176) )
    {
      ProcessLuid = -1073741205;
      goto LABEL_9;
    }
    return (unsigned int)SetHandleFlag(a2, 0LL, a3 & 1) != 0 ? 0x40000000 : -1073741801;
  }
LABEL_9:
  UserSetLastError(170);
  return (unsigned int)ProcessLuid;
}
