/*
 * XREFs of NtUserRaiseLowerShellWindow @ 0x14029BDD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 */

__int64 __fastcall NtUserRaiseLowerShellWindow(__int64 a1, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  struct tagWND *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v12; // ecx
  __int64 v13; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0;
  v8 = (struct tagWND *)v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( (((*(_WORD *)(v6 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
      v10 = *(_QWORD *)(v4 + 504);
      if ( !*(_QWORD *)(v10 + 176) )
        goto LABEL_14;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      if ( CurrentProcessWin32Process )
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      if ( *(_QWORD *)(v10 + 176) == CurrentProcessWin32Process )
      {
        if ( *(struct tagWND **)(v10 + 168) == v8 )
        {
          if ( a2 )
          {
            SetOrClrWF(0, v8, 0x420u, 1);
            if ( !xxxSetForegroundWindowWithOptions((__int64)v8, 31LL, 4, 0) )
              goto LABEL_16;
          }
          else
          {
            SetOrClrWF(1, v8, 0x420u, 1);
          }
          v7 = xxxSetWindowPos(v8, a2 == 0, 0LL, 0LL, 0, 0, 19);
LABEL_16:
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v13);
          goto LABEL_17;
        }
        v12 = 87;
      }
      else
      {
LABEL_14:
        v12 = 5;
      }
      UserSetLastError(v12);
      goto LABEL_16;
    }
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
