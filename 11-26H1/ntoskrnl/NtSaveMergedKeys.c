/*
 * XREFs of NtSaveMergedKeys @ 0x1408564A0
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmPostCallbackNotificationEx @ 0x1408D0300 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     CmCheckNoTxContext @ 0x14093E920 (CmCheckNoTxContext.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A80120 (IoConvertFileHandleToKernelHandle.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  void *v3; // rsi
  void *v4; // r14
  HANDLE v5; // rdi
  char v7; // r13
  __int64 v8; // rdx
  NTSTATUS v9; // ebx
  __int64 v10; // rcx
  KPROCESSOR_MODE PreviousMode; // r15
  int v12; // r8d
  int v13; // r9d
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rdx
  int v17; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v20; // r9d
  int v21; // eax
  void *v22; // [rsp+40h] [rbp-99h] BYREF
  void *v23; // [rsp+48h] [rbp-91h] BYREF
  void *v24; // [rsp+50h] [rbp-89h]
  _QWORD v25[2]; // [rsp+58h] [rbp-81h] BYREF
  HANDLE v26; // [rsp+68h] [rbp-71h]
  HANDLE v27; // [rsp+70h] [rbp-69h]
  __int128 v28; // [rsp+78h] [rbp-61h] BYREF
  __int64 v29; // [rsp+88h] [rbp-51h]
  __int128 v30; // [rsp+90h] [rbp-49h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-39h]
  __int128 v32; // [rsp+B0h] [rbp-29h]
  __int64 v33; // [rsp+C0h] [rbp-19h]
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-11h] BYREF

  v26 = HighPrecedenceKeyHandle;
  v27 = LowPrecedenceKeyHandle;
  v3 = 0LL;
  v29 = 0LL;
  v4 = 0LL;
  v33 = 0LL;
  v5 = 0LL;
  v22 = 0LL;
  v28 = 0LL;
  v23 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v24 = 0LL;
  v7 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v28);
  v25[0] = v25;
  v25[1] = v25;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v25, v8) )
  {
    v9 = -1073741431;
    goto LABEL_19;
  }
  v9 = CmCheckNoTxContext();
  if ( v9 >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      v9 = -1073741727;
      goto LABEL_12;
    }
    LOBYTE(v13) = PreviousMode;
    v9 = CmObReferenceObjectByHandle((_DWORD)v26, 0, v12, v13, (__int64)&v22, 0LL);
    if ( v9 < 0 )
    {
LABEL_11:
      v3 = v22;
      goto LABEL_12;
    }
    LOBYTE(v15) = PreviousMode;
    v9 = CmObReferenceObjectByHandle((_DWORD)v27, 0, v14, v15, (__int64)&v23, 0LL);
    if ( v9 >= 0 )
    {
      if ( PreviousMode )
      {
        LOBYTE(v16) = PreviousMode;
        v17 = IoConvertFileHandleToKernelHandle(FileHandle, v16, 2LL);
        v5 = v24;
        v9 = v17;
        if ( v17 < 0 )
          goto LABEL_10;
      }
      else
      {
        v5 = FileHandle;
      }
      CurrentThread = KeGetCurrentThread();
      v3 = v22;
      v4 = v23;
      --CurrentThread->KernelApcDisable;
      if ( !HIDWORD(WheapPfaLock.StateSaveArea)
        || (unsigned int)CmpIsRegistryLockAcquired()
        || (*(_QWORD *)&v31 = v3,
            *((_QWORD *)&v31 + 1) = v4,
            v7 = 1,
            *((_QWORD *)&v30 + 1) = v5,
            LOBYTE(v20) = 1,
            v21 = CmpCallCallBacksEx(49, (unsigned int)&v30, 0, v20, 50, 0LL, (__int64)v25),
            v21 >= 0) )
      {
        CmpAttachToRegistryProcess(&ApcState);
        v9 = CmSaveMergedKeys((__int64)v3, (__int64)v4, (__int64)v5);
        CmpDetachFromRegistryProcess(&ApcState);
        if ( v7 )
          v9 = CmPostCallbackNotificationEx(50, 0, v9, (unsigned int)&v30, 0LL, (__int64)v25);
      }
      else
      {
        v9 = 0;
        if ( v21 != -1073740541 )
          v9 = v21;
      }
      KeLeaveCriticalRegion();
      goto LABEL_12;
    }
LABEL_10:
    v4 = v23;
    goto LABEL_11;
  }
LABEL_12:
  CmpReleaseShutdownRundown(v10);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v5 && v5 != FileHandle )
    ZwClose(v5);
LABEL_19:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v28);
  return v9;
}
