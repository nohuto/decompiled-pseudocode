/*
 * XREFs of NtGetNextProcess @ 0x1409BA3B0
 * Callers:
 *     DifNtGetNextProcessWrapper @ 0x14067CEA0 (DifNtGetNextProcessWrapper.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessInSilo @ 0x1404300D0 (PsIsProcessInSilo.c)
 *     PspLockUnlockProcessExclusive @ 0x140441BB0 (PspLockUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetPreviousProcess @ 0x1409B92F8 (PsGetPreviousProcess.c)
 *     PsGetNextProcess @ 0x1409BC470 (PsGetNextProcess.c)
 *     SeCreateAccessState @ 0x140A0FB70 (SeCreateAccessState.c)
 */

NTSTATUS __cdecl NtGetNextProcess(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewProcessHandle)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  KPROCESSOR_MODE AccessMode; // r14
  NTSTATUS result; // eax
  ULONG v13; // r12d
  void *PreviousProcess; // rax
  __int64 v15; // rbx
  BOOLEAN v16; // r13
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  int v22; // esi
  void *NextProcess; // rax
  bool v24; // zf
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  ACCESS_MASK v26; // [rsp+50h] [rbp-1E8h]
  ULONG HandleAttributesa; // [rsp+54h] [rbp-1E4h]
  HANDLE Handle; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-1D0h]
  struct _KTHREAD *v30; // [rsp+70h] [rbp-1C8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+80h] [rbp-1B8h] BYREF
  _BYTE v32[224]; // [rsp+120h] [rbp-118h] BYREF

  v26 = DesiredAccess;
  Object = 0LL;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v32, 0, sizeof(v32));
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  HandleAttributesa = HandleAttributes & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
    RtlWriteULong64ToUser(NewProcessHandle, 0LL);
  else
    *NewProcessHandle = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( !ProcessHandle
    || (result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ProcessHandle,
                   0,
                   (__int64)PsProcessType,
                   AccessMode,
                   0x6E457350u,
                   &Object,
                   0LL,
                   0LL),
        result >= 0) )
  {
    v13 = Flags & 1;
    if ( v13 )
      PreviousProcess = (void *)PsGetPreviousProcess(Object, v8, v9, v10);
    else
      PreviousProcess = (void *)PsGetNextProcess(Object);
    v15 = (__int64)PreviousProcess;
    Object = PreviousProcess;
    if ( !PreviousProcess )
      return -2147483622;
    v16 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode);
    CurrentThread = KeGetCurrentThread();
    v30 = CurrentThread;
    CurrentServerSilo = PsGetCurrentServerSilo();
    v29 = CurrentServerSilo;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v15 + 500) & 0x4000000) == 0 )
      {
        PspLockUnlockProcessExclusive(v15, (__int64)CurrentThread);
        if ( (*(_DWORD *)(v15 + 500) & 0x4000000) == 0 )
          goto LABEL_21;
        CurrentServerSilo = v29;
      }
      if ( PsIsProcessInSilo((struct _KPROCESS *)v15, CurrentServerSilo) )
      {
        v22 = SeCreateAccessState(&PassedAccessState, v32, v26, (char *)PsProcessType + 76);
        if ( v22 < 0 )
          goto LABEL_28;
        if ( v16 )
        {
          if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
            PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
          else
            PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
          PassedAccessState.RemainingDesiredAccess = 0;
        }
        v22 = ObOpenObjectByPointer(
                (PVOID)v15,
                HandleAttributesa,
                &PassedAccessState,
                0,
                (POBJECT_TYPE)PsProcessType,
                AccessMode,
                &Handle);
        SeDeleteAccessState((__int64)&PassedAccessState);
        if ( v22 >= 0 )
        {
          if ( AccessMode )
            RtlWriteULong64ToUser(NewProcessHandle, (__int64)Handle);
          else
            *NewProcessHandle = Handle;
LABEL_28:
          if ( v15 )
            ObfDereferenceObjectWithTag((PVOID)v15, 0x6E457350u);
          return v22;
        }
        if ( v22 != -1073741790 )
          goto LABEL_28;
        CurrentThread = v30;
      }
LABEL_21:
      if ( v13 )
        NextProcess = (void *)PsGetPreviousProcess((_QWORD *)v15, v19, v20, v21);
      else
        NextProcess = (void *)PsGetNextProcess((PVOID)v15);
      v15 = (__int64)NextProcess;
      Object = NextProcess;
      v24 = NextProcess == 0LL;
      CurrentServerSilo = v29;
      if ( v24 )
      {
        v22 = -2147483622;
        goto LABEL_28;
      }
    }
  }
  return result;
}
