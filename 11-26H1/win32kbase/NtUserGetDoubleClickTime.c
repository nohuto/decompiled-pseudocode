/*
 * XREFs of NtUserGetDoubleClickTime @ 0x1401E41B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDoubleClickTime(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD *v8; // rdi
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  EnterSharedCrit(0LL, 1LL, a3, a4);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v7 = 0;
  v8 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v6 = -*(_QWORD *)CurrentProcessWin32Process;
    v8 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  }
  v10 = *(_QWORD *)(W32GetUserGdiSessionState(v6) + 40);
  if ( *v8 == v10 )
    goto LABEL_8;
  v12 = PsGetCurrentProcessWin32Process(v10);
  v13 = v12;
  if ( v12 )
    v13 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)v12 >> 64) & v12;
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(v13 + 672), 2u) )
LABEL_8:
    v7 = *(_DWORD *)(W32GetUserSessionState(v10, v9, v11) + 14712);
  else
    UserSetLastError(5);
  UserSessionSwitchLeaveCritWithNonPaged(v15, v14, v16, v17);
  return v7;
}
