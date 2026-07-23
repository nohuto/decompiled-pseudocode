/*
 * XREFs of NtSaveKeyEx @ 0x140A7E1F0
 * Callers:
 *     NtSaveKey @ 0x140781D00 (NtSaveKey.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     CmDumpKeyToFile @ 0x1408534F4 (CmDumpKeyToFile.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     CmCheckNoTxContext @ 0x14093E920 (CmCheckNoTxContext.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A80120 (IoConvertFileHandleToKernelHandle.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtSaveKeyEx(HANDLE KeyHandle, HANDLE FileHandle, ULONG Format)
{
  int v3; // esi
  struct _KTHREAD *CurrentThread; // rcx
  char PreviousMode; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // r9d
  HANDLE v14; // rdi
  int v15; // eax
  PVOID v16; // rsi
  struct _KTHREAD *v17; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  NTSTATUS v20; // eax
  int v22; // eax
  _QWORD v23[2]; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v25[3]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int128 v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int128 v29; // [rsp+98h] [rbp-68h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int128 v31; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v32; // [rsp+C0h] [rbp-40h]
  __int128 v33; // [rsp+D0h] [rbp-30h]
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-20h] BYREF

  v30 = 0LL;
  Object = 0LL;
  v3 = (int)KeyHandle;
  v23[1] = v23;
  v23[0] = v23;
  v29 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v29);
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(CurrentThread, v8) )
  {
    v10 = -1073741431;
    goto LABEL_23;
  }
  v10 = CmCheckNoTxContext();
  if ( v10 >= 0 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
    {
      if ( ((Format - 1) & 0xFFFFFFFC) == 0 && Format != 3 )
      {
        if ( PreviousMode )
        {
          LOBYTE(v11) = PreviousMode;
          v14 = 0LL;
          v10 = IoConvertFileHandleToKernelHandle(FileHandle, v11, 2LL);
          if ( v10 < 0 )
          {
LABEL_21:
            if ( v14 && v14 != FileHandle )
              ZwClose(v14);
            goto LABEL_22;
          }
        }
        else
        {
          v14 = FileHandle;
        }
        LOBYTE(v13) = PreviousMode;
        v15 = CmObReferenceObjectByHandle(v3, 0, v12, v13, (__int64)&Object, 0LL);
        v16 = Object;
        v10 = v15;
        if ( v15 >= 0 )
        {
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          if ( !HIDWORD(WheapPfaLock.StateSaveArea)
            || (unsigned int)CmpIsRegistryLockAcquired()
            || (*(_QWORD *)&v31 = v16,
                *((_QWORD *)&v31 + 1) = v14,
                LODWORD(v32) = Format,
                v22 = CmpCallCallBacksEx(0x2Bu, (__int64)&v31, 0LL, 1, 0x2Cu, 0LL, (__int64)v23),
                v22 >= 0) )
          {
            CmpAttachToRegistryProcess(&ApcState);
            if ( Format == 4 )
            {
              v20 = CmDumpKeyToFile((__int64)v16, PreviousMode, v14);
            }
            else
            {
              v19 = 5LL;
              LOBYTE(v18) = PreviousMode;
              if ( Format != 2 )
                v19 = 3LL;
              v20 = CmSaveKey(v16, v14, v19, v18);
            }
            v10 = v20;
            CmpDetachFromRegistryProcess(&ApcState);
            if ( HIDWORD(WheapPfaLock.StateSaveArea)
              && !(unsigned int)CmpIsRegistryLockAcquired()
              && (_QWORD *)v23[0] != v23 )
            {
              v28 = 0LL;
              v25[2] = &v31;
              v25[0] = v16;
              v27 = 0LL;
              v25[1] = (unsigned int)v10;
              v26 = (unsigned int)v10;
              CmpCallCallBacksEx(0x2Cu, (__int64)v25, 0LL, 0, 0x2Cu, (__int64)v16, (__int64)v23);
              v10 = v26;
            }
          }
          else
          {
            v10 = 0;
            if ( v22 != -1073740541 )
              v10 = v22;
          }
          KeLeaveCriticalRegion();
        }
        if ( v16 )
          ObfDereferenceObject(v16);
        goto LABEL_21;
      }
      v10 = -1073741811;
    }
    else
    {
      v10 = -1073741727;
    }
  }
LABEL_22:
  CmpReleaseShutdownRundown(v9);
LABEL_23:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v29);
  return v10;
}
