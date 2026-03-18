/*
 * XREFs of NtUserShowWindow @ 0x140170070
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1401701A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall NtUserShowWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO **CurrentThreadNonPaged; // rax
  struct tagTHREADINFO *v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v5;
  if ( v5 && (v6 = *(_QWORD *)(v5 + 40), (((*(_WORD *)(v6 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    BugCheckParameter3[0] = *(_QWORD *)(v4 + 456);
    *(_QWORD *)(v4 + 456) = BugCheckParameter3;
    BugCheckParameter3[1] = v5;
    HMLockObject(v5);
    if ( a2 > 0xB || *(char *)(*(_QWORD *)(v8 + 40) + 20LL) < 0 )
    {
      UserSetLastError(87);
      v12 = 0;
      v16 = PtiCurrent(v19, v18);
    }
    else
    {
      UserSessionState = W32GetUserSessionState(v10, v9);
      v12 = xxxShowWindowEx(
              v8,
              a2 | *(_DWORD *)(UserSessionState + 66800) & 0x10000,
              a2 & 0x10000 | *(_DWORD *)(UserSessionState + 66800) & 0x10000);
      CurrentThreadNonPaged = (struct tagTHREADINFO **)W32GetCurrentThreadNonPaged(v14, v13);
      if ( CurrentThreadNonPaged )
        v7 = *CurrentThreadNonPaged;
      v16 = v7;
    }
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v16, BugCheckParameter3);
  }
  else
  {
    v12 = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v12;
}
