/*
 * XREFs of xxxCsDdeInitialize @ 0x14017DC44
 * Callers:
 *     NtUserDdeInitialize @ 0x14017DB40 (NtUserDdeInitialize.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x140019B80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14001BAD0 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14003D91C (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140049CB8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x14017E0B8 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxChangeMonitorFlags @ 0x14017E61C (xxxChangeMonitorFlags.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxCsDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // r13
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v10; // rcx
  char v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 UserSessionState; // rax
  struct tagWND *Window; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rbx
  struct tagWND **v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct tagTHREADINFO *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct tagTHREADINFO *v40; // rax
  struct tagTHREADINFO *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v47[2]; // [rsp+A8h] [rbp-31h] BYREF
  ULONG_PTR v48[2]; // [rsp+B8h] [rbp-21h] BYREF
  _BYTE v49[16]; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v50[10]; // [rsp+D8h] [rbp-1h] BYREF

  v6 = 0LL;
  v8 = PtiCurrent((__int64)a1, (__int64)a2);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v8 + 132, 0, 0) & 1) != 0 )
    return 16399LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_4;
  v43 = PsGetCurrentProcessWin32Process(v10);
  if ( v43 )
    v43 &= -(__int64)(*(_QWORD *)v43 != 0LL);
  v11 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v43) )
LABEL_4:
    v11 = 0;
  v12 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v50, 0LL);
  v15 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19872);
  v16 = *(unsigned __int16 *)(v15 + 884);
  UserSessionState = W32GetUserSessionState(v15, v17);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              0,
                              (wchar_t *)*(unsigned __int16 *)(*(_QWORD *)(UserSessionState + 19872) + 884LL),
                              v16,
                              0LL,
                              0xC0000000,
                              0,
                              0,
                              0,
                              0,
                              0LL,
                              (__int64)v12,
                              hModuleWin,
                              0LL,
                              0,
                              0x30Au,
                              v11,
                              0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v50, v20);
  if ( !Window )
    return 16399LL;
  v23 = PtiCurrent(v22, v21);
  LOBYTE(v24) = 9;
  v25 = HMAllocObject(v23, 0LL, v24, 64LL);
  v26 = v25;
  if ( !v25 )
  {
    xxxDestroyWindow(Window);
    return 16399LL;
  }
  v27 = (struct tagWND **)(v25 + 48);
  v47[1] = Window;
  v47[0] = v25 + 48;
  HMAssignmentLock(v47, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v49);
  xxxSetWindowLongPtr(*v27, 0, *(_QWORD *)v26, 0, 0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v49);
  *(_QWORD *)(v26 + 56) = a5;
  *(_DWORD *)(v26 + 40) = 0;
  v30 = *(_QWORD *)(W32GetUserSessionState(v29, v28) + 66680);
  *(_QWORD *)(v26 + 24) = v30;
  *(_QWORD *)(W32GetUserSessionState(v30, v31) + 66680) = v26;
  *(_QWORD *)(v26 + 32) = *((_QWORD *)v8 + 83);
  *((_QWORD *)v8 + 83) = v26;
  Win32HM_LockIntoThread<0>((__int64)v8, v26, v48);
  Win32HM_LockIntoThread<0>((__int64)v8, (__int64)Window, BugCheckParameter3);
  xxxChangeMonitorFlags(v26, a4);
  if ( (*(_BYTE *)(_HMPheFromObject(v26) + 25) & 1) != 0 )
  {
    HMAssignmentUnlock(v27);
    v36 = PtiCurrent(v35, v34);
    v37 = Win32HM_UnlockFromThread<0>((ULONG_PTR)v36, BugCheckParameter3);
    BugCheckParameter3[0] = -1LL;
    BugCheckParameter3[1] = 0LL;
    if ( v37 )
    {
      xxxDestroyWindow(Window);
      if ( BugCheckParameter3[0] != -1LL )
      {
        v42 = PtiCurrent(v39, v38);
        Win32HM_UnlockFromThread<0>((ULONG_PTR)v42, BugCheckParameter3);
      }
    }
    v40 = PtiCurrent(v39, v38);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v40, v48);
    return 16399LL;
  }
  *a1 = *(_QWORD *)v26;
  if ( *v27 )
    v6 = *(_QWORD *)*v27;
  *a2 = v6;
  *a3 = *(_DWORD *)(W32GetUserSessionState(v33, v32) + 66688);
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v44);
  Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(v48, v45);
  return 0LL;
}
