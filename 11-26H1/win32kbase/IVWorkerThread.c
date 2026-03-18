/*
 * XREFs of IVWorkerThread @ 0x14021F9FC
 * Callers:
 *     xxxCreateSystemThreads @ 0x1401C2200 (xxxCreateSystemThreads.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     SetThreadBasePriority @ 0x140189260 (SetThreadBasePriority.c)
 *     ??0CIVChannel@@QEAA@PEAXKP6AXPEBXUCONTAINER_ID@@@ZP6A_N1KK00@ZP6APEAX1@Z@Z @ 0x140190E9C (--0CIVChannel@@QEAA@PEAXKP6AXPEBXUCONTAINER_ID@@@ZP6A_N1KK00@ZP6APEAX1@Z@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x140222284 (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1402225A0 (-Uninitialize@CIVChannel@@QEAAXXZ.c)
 */

void __fastcall IVWorkerThread(__int64 a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 CurrentProcessWin32Process; // rax
  int v9; // r8d
  struct tagTHREADINFO *v10; // rax
  struct _KEVENT *v11; // rsi
  void *v12; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // edx
  int v27; // r8d
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _BYTE v44[48]; // [rsp+30h] [rbp-38h] BYREF
  char v45; // [rsp+70h] [rbp+8h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  v7 = v5;
  if ( v5 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 520), 0, 0) & 0x1000000) != 0
      && *(char *)(v5 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
      if ( CurrentProcessWin32Process )
      {
        if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1200) == 1 )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v9);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
          DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
        }
      }
    }
  }
  v10 = PtiCurrent(v6, v7);
  *((_QWORD *)v10 + 170) |= 0x800000000uLL;
  v11 = *(struct _KEVENT **)a1;
  v12 = *(void **)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(W32GetUserSessionState(0, v14, v15) + 19400) = CurrentThread;
  v19 = W32GetUserSessionState(v17, v16, v18);
  SetThreadBasePriority(*(PETHREAD *)(v19 + 19400), 16);
  *(_QWORD *)(W32GetUserSessionState(v21, v20, v22) + 19408) = v12;
  KeSetEvent(v11, 1, 0);
  CIVChannel::CIVChannel(
    (CIVChannel *)v44,
    0LL,
    3,
    (void (__high *)(const void *, struct CONTAINER_ID))ivOnChildPartitionConnected,
    (bool (*)(const void *, unsigned int, unsigned int, void *, void *))ivOnNonInputPacketReceived,
    0LL);
  CIVChannel::Initialize((CIVChannel *)v44);
  while ( 1 )
  {
    LOBYTE(v23) = 1;
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v45, v23, v24, v25);
    if ( !KeWaitForSingleObject(v12, Executive, 0, 0, 0LL) )
      break;
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v45, v26, v27);
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v45, v26, v27);
  CIVChannel::Uninitialize((CIVChannel *)v44);
  *(_QWORD *)(W32GetUserSessionState(v29, v28, v30) + 19408) = 0LL;
  *(_QWORD *)(W32GetUserSessionState(v32, v31, v33) + 19400) = 0LL;
  GreDeleteFastMutex((char *)v11, v34, v35, v36);
  GreDeleteFastMutex((char *)v12, v37, v38, v39);
  UserSessionSwitchLeaveCritWithNonPaged(v41, v40, v42, v43);
}
