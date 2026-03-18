/*
 * XREFs of xxxAddShadow @ 0x1400E0A5C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140022220 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14002C740 (PopAndFreeW32ThreadLock.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002F8B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140049CB8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z @ 0x14005F74C (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@W4CloakState@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     xxxInheritWindowMonitor @ 0x140064724 (xxxInheritWindowMonitor.c)
 *     IsSysShadow @ 0x1400E0E50 (IsSysShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1400E12C0 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400E1A4C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxAddShadow(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r15
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rcx
  int v12; // r12d
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v14; // rcx
  char v15; // r13
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 UserSessionState; // rax
  struct tagWND *Window; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 *v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct tagTHREADINFO *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  struct tagTHREADINFO *v39; // rax
  __int64 v40; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  struct tagTHREADINFO *v44; // rax
  struct tagTHREADINFO *BugCheckParameter4; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+98h] [rbp-19h] BYREF
  struct tagWND *v48; // [rsp+A0h] [rbp-11h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A8h] [rbp-9h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v51; // [rsp+C8h] [rbp+17h]
  __int64 v52[3]; // [rsp+D0h] [rbp+1Fh] BYREF

  if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 43264) )
    return 0LL;
  if ( *(_DWORD *)(W32GetUserSessionState(v4, v3) + 63416) )
    return 0LL;
  if ( (*(_DWORD *)(W32GetUserSessionState(v6, v5) + 66804) & 0x80040000) != 0x80040000 )
    return 0LL;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
    return 0LL;
  if ( (unsigned int)IsSysShadow(a1) )
    return 0LL;
  v9 = Win32AllocPoolZInit(24LL, 1685287765LL);
  if ( !v9 )
    return 0LL;
  v10 = PtiCurrent(v8, v7);
  BugCheckParameter2[0] = *((_QWORD *)v10 + 48);
  *((_QWORD *)v10 + 48) = BugCheckParameter2;
  v51 = (__int64)Win32FreePool;
  v11 = *((_QWORD *)a1 + 5);
  BugCheckParameter2[1] = v9;
  v12 = *(_BYTE *)(v11 + 24) & 8 | 0x800A0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v11);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_9;
  v46 = PsGetCurrentProcessWin32Process(v14);
  if ( v46 )
    v46 &= -(__int64)(*(_QWORD *)v46 != 0LL);
  v15 = 1;
  if ( !(unsigned int)IsImmersiveAppRestricted(v46) )
LABEL_9:
    v15 = 0;
  v16 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v52, 0LL);
  v19 = *(unsigned __int16 *)(W32GetUserSessionState(v18, v17) + 41326);
  UserSessionState = W32GetUserSessionState(v21, v20);
  Window = (struct tagWND *)xxxCreateWindowEx(
                              v12,
                              (wchar_t *)*(unsigned __int16 *)(UserSessionState + 41326),
                              v19,
                              0LL,
                              0x80000000,
                              0,
                              0,
                              0,
                              0,
                              0LL,
                              (__int64)v52,
                              hModuleWin,
                              0LL,
                              v16,
                              0xA00u,
                              v15,
                              0LL);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v52, v24);
  if ( !Window || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
  {
LABEL_22:
    if ( v51 != -1 )
      PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v25);
    return 0LL;
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)Window);
  xxxInheritWindowMonitor(Window, a1, 1);
  v28 = W32GetUserSessionState(v27, v26);
  ++*(_DWORD *)(v28 + 70600);
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 || FindShadow(a1) || !zzzApplyShadow(a1, Window) )
  {
    zzzEndDeferWinEventNotify();
    xxxDestroyWindow(Window);
    v44 = PtiCurrent(v43, v42);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v44, BugCheckParameter3);
    goto LABEL_22;
  }
  v31 = *(_QWORD *)(W32GetUserSessionState(v30, v29) + 63384);
  *(_QWORD *)(v9 + 16) = v31;
  v47 = v9;
  v48 = a1;
  *(_QWORD *)(W32GetUserSessionState(v31, v32) + 63384) = v9;
  HMAssignmentLock(&v47, 0LL);
  v33 = (__int64 *)(v9 + 8);
  v48 = Window;
  v47 = (__int64)v33;
  HMAssignmentLock(&v47, 0LL);
  if ( IsWindowCloaked(a1) )
    zzzSetWindowCompositionCloak(*v33, 1LL);
  v51 = (__int64)RemoveShadow;
  zzzEndDeferWinEventNotify();
  xxxSetWindowPos(Window, (__int64)a1, 0LL, 0LL, 0, 0, 83);
  if ( v51 == -1 )
  {
    BugCheckParameter4 = PtiCurrent(v35, v34);
    KeBugCheckEx(0x164u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, 0LL, (ULONG_PTR)BugCheckParameter4);
  }
  v36 = PtiCurrent(v35, v34);
  v37 = BugCheckParameter2[0];
  *((_QWORD *)v36 + 48) = BugCheckParameter2[0];
  v51 = -1LL;
  v39 = PtiCurrent(v37, v38);
  Win32HM_UnlockFromThread<1>((ULONG_PTR)v39, BugCheckParameter3);
  if ( v51 != -1 )
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v40);
  return 1LL;
}
