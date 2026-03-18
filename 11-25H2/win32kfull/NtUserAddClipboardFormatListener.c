/*
 * XREFs of NtUserAddClipboardFormatListener @ 0x140207B50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x14011364C (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserAddClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct tagWINDOWSTATION *v9; // rdx
  char *v10; // rsi
  int v12; // ecx
  char *v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  v2 = ValidateReceivingHwnd(a1, 1LL);
  v4 = 0LL;
  v5 = v2;
  if ( !v2 )
    goto LABEL_11;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  v8 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v3 = -*(_QWORD *)CurrentProcessWin32Process;
    v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v8 = v7 & CurrentProcessWin32Process;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 464LL) != v8 )
  {
    v4 = 5LL;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v5 + 380) & 0x800000) != 0 )
  {
    v12 = 87;
LABEL_13:
    UserSetLastError(v12);
    goto LABEL_11;
  }
  v9 = CheckClipboardAccess(v3, v7);
  if ( !v9 )
    goto LABEL_11;
  if ( *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 464LL) + 648LL) != v9 )
  {
    UserSetLastError(87);
    v12 = 0;
    goto LABEL_13;
  }
  v10 = (char *)v9 + 152;
  if ( *((_QWORD *)v9 + 19) )
  {
    v14 = *((_QWORD *)v9 + 19);
    v13 = (char *)(v5 + 240);
    HMAssignmentLock(&v13, 0LL);
  }
  v13 = v10;
  v14 = v5;
  HMAssignmentLock(&v13, 0LL);
  *(_DWORD *)(v5 + 380) |= 0x800000u;
  v4 = 1LL;
LABEL_11:
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
