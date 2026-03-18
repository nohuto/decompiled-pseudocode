/*
 * XREFs of NtSaveKeyEx @ 0x140A754D0
 * Callers:
 *     NtSaveKey @ 0x14077F200 (NtSaveKey.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     CmDumpKeyToFile @ 0x14084D1E8 (CmDumpKeyToFile.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     CmCheckNoTxContext @ 0x14097C910 (CmCheckNoTxContext.c)
 *     CmSaveKey @ 0x140A7626C (CmSaveKey.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A77400 (IoConvertFileHandleToKernelHandle.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtSaveKeyEx(int a1, void *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rcx
  char PreviousMode; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // r9d
  void *v14; // rdi
  int v15; // eax
  PVOID v16; // rsi
  struct _KTHREAD *v17; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  int v20; // eax
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
      if ( ((a3 - 1) & 0xFFFFFFFC) == 0 && a3 != 3 )
      {
        if ( PreviousMode )
        {
          LOBYTE(v11) = PreviousMode;
          v14 = 0LL;
          v10 = IoConvertFileHandleToKernelHandle(a2, v11, 2LL);
          if ( v10 < 0 )
          {
LABEL_21:
            if ( v14 && v14 != a2 )
              ZwClose(v14);
            goto LABEL_22;
          }
        }
        else
        {
          v14 = a2;
        }
        LOBYTE(v13) = PreviousMode;
        v15 = CmObReferenceObjectByHandle(a1, 0, v12, v13, (__int64)&Object, 0LL);
        v16 = Object;
        v10 = v15;
        if ( v15 >= 0 )
        {
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          if ( !WheapPfaLock.ExpectedRunTime
            || (unsigned int)CmpIsRegistryLockAcquired()
            || (*(_QWORD *)&v31 = v16,
                *((_QWORD *)&v31 + 1) = v14,
                LODWORD(v32) = a3,
                v22 = CmpCallCallBacksEx(0x2Bu, (__int64)&v31, 0LL, 1, 0x2Cu, 0LL, (__int64)v23),
                v22 >= 0) )
          {
            CmpAttachToRegistryProcess(&ApcState);
            if ( a3 == 4 )
            {
              v20 = CmDumpKeyToFile((__int64)v16, PreviousMode, v14);
            }
            else
            {
              v19 = 5LL;
              LOBYTE(v18) = PreviousMode;
              if ( a3 != 2 )
                v19 = 3LL;
              v20 = CmSaveKey(v16, v14, v19, v18);
            }
            v10 = v20;
            CmpDetachFromRegistryProcess(&ApcState);
            if ( WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v23[0] != v23 )
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
  return (unsigned int)v10;
}
