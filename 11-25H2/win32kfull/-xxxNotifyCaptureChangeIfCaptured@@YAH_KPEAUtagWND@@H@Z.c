/*
 * XREFs of ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x14014B4C8
 * Callers:
 *     xxxProcessDelegateCapturedPointers @ 0x14014B438 (xxxProcessDelegateCapturedPointers.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendPointerMessageWorker @ 0x140137290 (xxxSendPointerMessageWorker.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxNotifyCaptureChangeIfCaptured(unsigned __int64 a1, struct tagWND *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  struct tagINPUTDEST *v6; // rax
  unsigned int v7; // edi
  __int64 *v9; // rbx
  __int64 v10; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v12[112]; // [rsp+40h] [rbp-88h] BYREF

  memset_0(v12, 0, sizeof(v12));
  UserSessionState = W32GetUserSessionState(v4, v3);
  v6 = CTouchProcessor::NotifyCaptureChangedIfCaptured(
         *(CTouchProcessor **)(UserSessionState + 3256),
         a1,
         (struct tagINPUTDEST *)v12);
  v7 = 0;
  if ( !v6 )
    return 1LL;
  v9 = (__int64 *)*((_QWORD *)v6 + 10);
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v9);
  LOBYTE(v7) = xxxSendPointerMessageWorker((__int64)v9, 588LL, a1, *v9, 0LL, 183) != 0;
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v10);
  return v7;
}
