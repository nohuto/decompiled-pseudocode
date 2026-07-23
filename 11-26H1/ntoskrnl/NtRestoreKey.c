/*
 * XREFs of NtRestoreKey @ 0x140A7FCE0
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
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     CmCheckNoTxContext @ 0x14093E920 (CmCheckNoTxContext.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A80120 (IoConvertFileHandleToKernelHandle.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  int v3; // esi
  char v6; // r12
  struct _KTHREAD *CurrentThread; // rcx
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // r9d
  HANDLE v15; // rdi
  int v16; // eax
  _QWORD *v17; // rsi
  struct _KTHREAD *v19; // rax
  int v20; // eax
  _QWORD v21[2]; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v23[3]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int128 v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+98h] [rbp-68h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-58h]
  __int128 v29; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v30; // [rsp+C0h] [rbp-40h]
  __int128 v31; // [rsp+D0h] [rbp-30h]
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-20h] BYREF

  v28 = 0LL;
  Object = 0LL;
  v3 = (int)KeyHandle;
  v21[1] = v21;
  v6 = 0;
  v21[0] = v21;
  v27 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v27);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(CurrentThread, v9) )
  {
    v11 = -1073741431;
    goto LABEL_11;
  }
  v11 = CmCheckNoTxContext();
  if ( v11 >= 0 )
  {
    if ( SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      if ( PreviousMode )
      {
        LOBYTE(v12) = PreviousMode;
        v15 = 0LL;
        v11 = IoConvertFileHandleToKernelHandle(FileHandle, v12, 1LL);
        if ( v11 < 0 )
        {
LABEL_9:
          if ( v15 && v15 != FileHandle )
            ZwClose(v15);
          goto LABEL_10;
        }
      }
      else
      {
        v15 = FileHandle;
      }
      LOBYTE(v14) = PreviousMode;
      v16 = CmObReferenceObjectByHandle(v3, 0, v13, v14, (__int64)&Object, 0LL);
      v17 = Object;
      v11 = v16;
      if ( v16 < 0 )
      {
LABEL_7:
        if ( v17 )
          ObfDereferenceObject(v17);
        goto LABEL_9;
      }
      v10 = *(unsigned int *)(*((_QWORD *)Object + 1) + 8LL);
      if ( (v10 & 0x80u) != 0LL )
      {
        v11 = -1073741790;
        goto LABEL_7;
      }
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      if ( HIDWORD(WheapPfaLock.StateSaveArea) && !(unsigned int)CmpIsRegistryLockAcquired() )
      {
        *(_QWORD *)&v29 = v17;
        *((_QWORD *)&v29 + 1) = v15;
        LODWORD(v30) = Flags;
        v20 = CmpCallCallBacksEx(0x29u, (__int64)&v29, 0LL, 1, 0x2Au, 0LL, (__int64)v21);
        if ( v20 < 0 )
        {
          v11 = 0;
          if ( v20 != -1073740541 )
            v11 = v20;
LABEL_20:
          KeLeaveCriticalRegion();
          goto LABEL_7;
        }
        v6 = 1;
      }
      CmpAttachToRegistryProcess(&ApcState);
      v11 = CmRestoreKey(v17, (__int64)v15, Flags);
      CmpDetachFromRegistryProcess(&ApcState);
      if ( v6
        && HIDWORD(WheapPfaLock.StateSaveArea)
        && !(unsigned int)CmpIsRegistryLockAcquired()
        && (_QWORD *)v21[0] != v21 )
      {
        v26 = 0LL;
        v23[2] = &v29;
        v23[0] = v17;
        v25 = 0LL;
        v23[1] = (unsigned int)v11;
        v24 = (unsigned int)v11;
        CmpCallCallBacksEx(0x2Au, (__int64)v23, 0LL, 0, 0x2Au, (__int64)v17, (__int64)v21);
        v11 = v24;
      }
      goto LABEL_20;
    }
    v11 = -1073741727;
  }
LABEL_10:
  CmpReleaseShutdownRundown(v10);
LABEL_11:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v27);
  return v11;
}
