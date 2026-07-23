/*
 * XREFs of NtFlushKey @ 0x140B018C0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140935C60 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpDoFlushAll @ 0x14049BE84 (CmpDoFlushAll.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1408BA574 (CmpLockRegistryFreezeAware.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtFlushKey(HANDLE KeyHandle)
{
  __int64 v1; // r8
  char v2; // r15
  int v3; // ebx
  char v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  char v10; // r12
  char PreviousMode; // si
  int v12; // eax
  ULONG_PTR *v13; // rdi
  NTSTATUS v14; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v16; // rcx
  struct _EX_RUNDOWN_REF *v17; // rbx
  struct _EX_RUNDOWN_REF *v18; // rsi
  __int64 v19; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD v24[2]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v27[3]; // [rsp+68h] [rbp-A0h] BYREF
  NTSTATUS v28; // [rsp+80h] [rbp-88h]
  int v29; // [rsp+84h] [rbp-84h]
  __int128 v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+98h] [rbp-70h]
  __int128 v32; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-58h]
  _OWORD v34[2]; // [rsp+B8h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v36[2]; // [rsp+108h] [rbp+0h] BYREF

  v33 = 0LL;
  v26 = 0LL;
  v2 = 0;
  v3 = (int)KeyHandle;
  v32 = 0LL;
  memset(v34, 0, sizeof(v34));
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v36, 0, sizeof(v36));
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)v36, 0x20000uLL, v1);
    v2 = 1;
  }
  Object = 0LL;
  v24[1] = v24;
  v4 = 0;
  v24[0] = v24;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v32);
  v10 = CmpAcquireShutdownRundown(v6, v5);
  if ( !v10 )
  {
    v14 = -1073741431;
    goto LABEL_21;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v9) = PreviousMode;
  v12 = CmObReferenceObjectByHandle(v3, 0, v8, v9, (__int64)&Object, (__int64)&v26);
  v13 = (ULONG_PTR *)Object;
  v14 = v12;
  if ( v12 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( (*(_DWORD *)(*(_QWORD *)(v13[1] + 32) + 160LL) & 2) != 0 && PreviousMode && (~HIDWORD(v26) & 0x20006) != 0 )
    {
      v14 = -1073741790;
LABEL_18:
      KeLeaveCriticalRegion();
      goto LABEL_19;
    }
    if ( HIDWORD(WheapPfaLock.StateSaveArea) && !(unsigned int)CmpIsRegistryLockAcquired() )
    {
      *(_QWORD *)&v34[0] = v13;
      v21 = CmpCallCallBacksEx(0x1Eu, (__int64)v34, 0LL, 1, 0x1Fu, (__int64)v13, (__int64)v24);
      if ( v21 < 0 )
      {
        v14 = 0;
        if ( v21 != -1073740541 )
          v14 = v21;
        goto LABEL_18;
      }
      v4 = 1;
    }
    CmpLockRegistryFreezeAware(0);
    CmpLockKcbShared(v13[1]);
    v14 = CmpPerformKeyBodyDeletionCheck(v13, 0LL);
    if ( v14 >= 0 )
    {
      v16 = v13[1];
      v17 = *(struct _EX_RUNDOWN_REF **)(v16 + 32);
      if ( v17 == (struct _EX_RUNDOWN_REF *)CmpMasterHive )
      {
        CmpUnlockKcb(v16);
        CmpUnlockRegistry(v22);
        CmpAttachToRegistryProcess(&ApcState);
        CmpDoFlushAll(0);
        CmpDetachFromRegistryProcess(&ApcState);
        v14 = 0;
LABEL_13:
        if ( v4
          && HIDWORD(WheapPfaLock.StateSaveArea)
          && !(unsigned int)CmpIsRegistryLockAcquired()
          && (_QWORD *)v24[0] != v24 )
        {
          v31 = 0LL;
          v29 = 0;
          v27[2] = v34;
          v27[0] = v13;
          v30 = 0LL;
          v27[1] = (unsigned int)v14;
          v28 = v14;
          CmpCallCallBacksEx(0x1Fu, (__int64)v27, 0LL, 0, 0x1Fu, (__int64)v13, (__int64)v24);
          v14 = v28;
        }
        goto LABEL_18;
      }
      v18 = v17 + 205;
      if ( ExAcquireRundownProtection_0(v17 + 205) )
      {
        CmpUnlockKcb(v13[1]);
        CmpUnlockRegistry(v19);
        CmpAttachToRegistryProcess(&ApcState);
        v14 = CmpFlushHive((ULONG_PTR)v17, 0);
        if ( v14 < 0 )
          v14 = -1073741491;
        CmpDetachFromRegistryProcess(&ApcState);
        ExReleaseRundownProtection_0(v18);
        goto LABEL_13;
      }
      v14 = -1073740763;
    }
    CmpUnlockKcb(v13[1]);
    CmpUnlockRegistry(v23);
    goto LABEL_13;
  }
LABEL_19:
  if ( v13 )
    ObfDereferenceObject(v13);
LABEL_21:
  if ( v2 && CmpTraceRoutine )
  {
    LOBYTE(v7) = 21;
    guard_dispatch_icall_no_overrides(v7, (__int64)v36);
  }
  if ( v10 )
    CmpReleaseShutdownRundown(v7);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v32);
  return v14;
}
