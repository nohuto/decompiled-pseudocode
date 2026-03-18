/*
 * XREFs of NtUserRemoveClipboardFormatListener @ 0x140111700
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x140111628 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x14011364C (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserRemoveClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r8

  EnterCrit(0LL, 0LL);
  v2 = ValidateReceivingHwnd(a1, 1LL);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v3 = -*(_QWORD *)CurrentProcessWin32Process;
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 464LL) == v7 )
    {
      if ( CheckClipboardAccess() )
      {
        if ( (*(_DWORD *)(v5 + 380) & 0x800000) != 0 )
        {
          _RemoveClipboardFormatListener((struct tagWND *)v5);
          v4 = 1LL;
        }
        else
        {
          UserSetLastError(87);
        }
      }
    }
    else
    {
      v4 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
