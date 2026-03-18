/*
 * XREFs of NtUserSendEventMessage @ 0x14015C0A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14012A960 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IAMThreadAccessGranted @ 0x14015C7E0 (IAMThreadAccessGranted.c)
 */

__int64 __fastcall NtUserSendEventMessage(__int64 a1, DWORD a2, LARGE_INTEGER a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  __int64 v17; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-28h] BYREF

  v8 = EnterCrit(0LL, 0LL);
  v9 = ValidateHwnd(a1);
  v11 = 0;
  v12 = v9;
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 40);
    if ( (((*(_WORD *)(v10 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      Win32HM_LockIntoThread<0>(v8, v9, BugCheckParameter3);
      if ( (unsigned int)IAMThreadAccessGranted(v8) )
      {
        v11 = PostEventMessageEx(
                *(struct tagTHREADINFO **)(v12 + 16),
                *(struct tagQ **)(*(_QWORD *)(v12 + 16) + 472LL),
                9u,
                (LARGE_INTEGER *)v12,
                a2,
                a3,
                a4,
                0LL);
        v15 = PtiCurrent(v14, v13);
        Win32HM_UnlockFromThread<0>((ULONG_PTR)v15, BugCheckParameter3);
      }
      else
      {
        UserSetLastError(5);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v17);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
