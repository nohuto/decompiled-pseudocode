/*
 * XREFs of NtFlushKey @ 0x140AFFC30
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140973C50 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpDoFlushAll @ 0x1404A2354 (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtFlushKey(int a1, __int64 a2, __int64 a3)
{
  char v3; // r15
  char v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  char v11; // r12
  char PreviousMode; // si
  int v13; // eax
  ULONG_PTR *v14; // rdi
  int v15; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v17; // rcx
  struct _EX_RUNDOWN_REF *v18; // rbx
  struct _EX_RUNDOWN_REF *v19; // rsi
  __int64 v20; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD v25[2]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v28[3]; // [rsp+68h] [rbp-A0h] BYREF
  int v29; // [rsp+80h] [rbp-88h]
  int v30; // [rsp+84h] [rbp-84h]
  __int128 v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+98h] [rbp-70h]
  __int128 v33; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-58h]
  _OWORD v35[2]; // [rsp+B8h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v37[2]; // [rsp+108h] [rbp+0h] BYREF

  v34 = 0LL;
  v27 = 0LL;
  v3 = 0;
  v33 = 0LL;
  memset(v35, 0, sizeof(v35));
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v37, 0, sizeof(v37));
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v37, 0x20000uLL, a3);
    v3 = 1;
  }
  Object = 0LL;
  v25[1] = v25;
  v5 = 0;
  v25[0] = v25;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v33);
  v11 = CmpAcquireShutdownRundown(v7, v6);
  if ( !v11 )
  {
    v15 = -1073741431;
    goto LABEL_21;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v10) = PreviousMode;
  v13 = CmObReferenceObjectByHandle(a1, 0, v9, v10, (__int64)&Object, (__int64)&v27);
  v14 = (ULONG_PTR *)Object;
  v15 = v13;
  if ( v13 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( (*(_DWORD *)(*(_QWORD *)(v14[1] + 32) + 160LL) & 2) != 0 && PreviousMode && (~HIDWORD(v27) & 0x20006) != 0 )
    {
      v15 = -1073741790;
LABEL_18:
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
    if ( WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v35[0] = v14;
      v22 = CmpCallCallBacksEx(0x1Eu, (__int64)v35, 0LL, 1, 0x1Fu, (__int64)v14, (__int64)v25);
      if ( v22 < 0 )
      {
        v15 = 0;
        if ( v22 != -1073740541 )
          v15 = v22;
        goto LABEL_18;
      }
      v5 = 1;
    }
    CmpLockRegistryFreezeAware(0);
    CmpLockKcbShared(v14[1]);
    v15 = CmpPerformKeyBodyDeletionCheck(v14, 0LL);
    if ( v15 >= 0 )
    {
      v17 = v14[1];
      v18 = *(struct _EX_RUNDOWN_REF **)(v17 + 32);
      if ( v18 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
      {
        CmpUnlockKcb(v17);
        CmpUnlockRegistry(v23);
        CmpAttachToRegistryProcess(&ApcState);
        CmpDoFlushAll(0);
        CmpDetachFromRegistryProcess(&ApcState);
        v15 = 0;
LABEL_13:
        if ( v5 && WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v25[0] != v25 )
        {
          v32 = 0LL;
          v30 = 0;
          v28[2] = v35;
          v28[0] = v14;
          v31 = 0LL;
          v28[1] = (unsigned int)v15;
          v29 = v15;
          CmpCallCallBacksEx(0x1Fu, (__int64)v28, 0LL, 0, 0x1Fu, (__int64)v14, (__int64)v25);
          v15 = v29;
        }
        goto LABEL_18;
      }
      v19 = v18 + 205;
      if ( ExAcquireRundownProtection_0(v18 + 205) )
      {
        CmpUnlockKcb(v14[1]);
        CmpUnlockRegistry(v20);
        CmpAttachToRegistryProcess(&ApcState);
        v15 = CmpFlushHive((ULONG_PTR)v18, 0);
        if ( v15 < 0 )
          v15 = -1073741491;
        CmpDetachFromRegistryProcess(&ApcState);
        ExReleaseRundownProtection_0(v19);
        goto LABEL_13;
      }
      v15 = -1073740763;
    }
    CmpUnlockKcb(v14[1]);
    CmpUnlockRegistry(v24);
    goto LABEL_13;
  }
LABEL_19:
  if ( v14 )
    ObfDereferenceObject(v14);
LABEL_21:
  if ( v3 && CmpTraceRoutine )
  {
    LOBYTE(v8) = 21;
    guard_dispatch_icall_no_overrides(v8, (__int64)v37);
  }
  if ( v11 )
    CmpReleaseShutdownRundown(v8);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v33);
  return (unsigned int)v15;
}
