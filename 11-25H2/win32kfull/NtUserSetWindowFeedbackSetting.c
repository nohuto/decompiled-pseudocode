/*
 * XREFs of NtUserSetWindowFeedbackSetting @ 0x14005DD90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     FeedbackSetWindowSetting @ 0x14005DEF8 (FeedbackSetWindowSetting.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     FeedbackClearWindowSetting @ 0x140266414 (FeedbackClearWindowSetting.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserSetWindowFeedbackSetting(__int64 a1, int a2, int a3, int a4, _DWORD *Address)
{
  int v8; // edi
  unsigned int v9; // r13d
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rdx
  int v15; // eax
  int v17; // ecx

  v8 = 0;
  v9 = 0;
  EnterCrit(0LL, 0LL);
  v10 = 1;
  v12 = ValidateReceivingHwnd(a1, 1LL);
  if ( !v12 )
    goto LABEL_16;
  if ( !a2 || a2 > 13 || a4 && !Address || a3 || (a4 & 0xFFFFFFFB) != 0 )
  {
    v17 = 87;
    goto LABEL_19;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  v14 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v14 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( v14 != *(_QWORD *)(*(_QWORD *)(v12 + 16) + 464LL) )
  {
    UserSetLastError(5);
    v17 = 0;
LABEL_19:
    UserSetLastError(v17);
    goto LABEL_16;
  }
  if ( Address )
  {
    v10 = 0;
    ProbeForRead(Address, 4uLL, 4u);
    v9 = *Address;
  }
  if ( v10 )
    v15 = FeedbackClearWindowSetting(v12, (unsigned int)a2);
  else
    v15 = FeedbackSetWindowSetting(v12, (unsigned int)a2, v9);
  v8 = v15;
LABEL_16:
  UserSessionSwitchLeaveCrit(v11);
  return v8;
}
