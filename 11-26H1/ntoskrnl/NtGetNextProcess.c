/*
 * XREFs of NtGetNextProcess @ 0x140AEF810
 * Callers:
 *     DifNtGetNextProcessWrapper @ 0x1406792C0 (DifNtGetNextProcessWrapper.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsIsProcessInSilo @ 0x14043D820 (PsIsProcessInSilo.c)
 *     PspLockUnlockProcessExclusive @ 0x140449A80 (PspLockUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PsGetNextProcess @ 0x14096EE20 (PsGetNextProcess.c)
 *     SeCreateAccessState @ 0x140A10980 (SeCreateAccessState.c)
 *     PsGetPreviousProcess @ 0x140AEFB30 (PsGetPreviousProcess.c)
 */

__int64 __fastcall NtGetNextProcess(ULONG_PTR BugCheckParameter1, unsigned int a2, int a3, int a4, HANDLE *a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  KPROCESSOR_MODE AccessMode; // r14
  __int64 result; // rax
  int v13; // r12d
  LIST_ENTRY *PreviousProcess; // rax
  __int64 v15; // rbx
  BOOLEAN v16; // r13
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 CurrentServerSilo; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  int v22; // esi
  LIST_ENTRY *NextProcess; // rax
  bool v24; // zf
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-1E8h]
  ULONG HandleAttributes; // [rsp+54h] [rbp-1E4h]
  HANDLE Handle; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-1D0h]
  struct _KTHREAD *v30; // [rsp+70h] [rbp-1C8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+80h] [rbp-1B8h] BYREF
  _QWORD v32[28]; // [rsp+120h] [rbp-118h] BYREF

  v26 = a2;
  Object = 0LL;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v32, 0, sizeof(v32));
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  HandleAttributes = a3 & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
    RtlWriteULong64ToUser(a5, 0LL);
  else
    *a5 = 0LL;
  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( !BugCheckParameter1
    || (result = ObpReferenceObjectByHandleWithTag(
                   BugCheckParameter1,
                   0LL,
                   PsProcessType,
                   AccessMode,
                   0x6E457350u,
                   &Object,
                   0LL,
                   0LL),
        (int)result >= 0) )
  {
    v13 = a4 & 1;
    if ( v13 )
      PreviousProcess = (LIST_ENTRY *)PsGetPreviousProcess(Object);
    else
      PreviousProcess = PsGetNextProcess(Object, v8, v9, v10);
    v15 = (__int64)PreviousProcess;
    Object = PreviousProcess;
    if ( !PreviousProcess )
      return 2147483674LL;
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
        v22 = SeCreateAccessState(&PassedAccessState, v32, v26, (struct _KLOCK_ENTRIES *)((char *)PsProcessType + 76));
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
                HandleAttributes,
                &PassedAccessState,
                0,
                (POBJECT_TYPE)PsProcessType,
                AccessMode,
                &Handle);
        SeDeleteAccessState((__int64)&PassedAccessState);
        if ( v22 >= 0 )
        {
          if ( AccessMode )
            RtlWriteULong64ToUser(a5, (__int64)Handle);
          else
            *a5 = Handle;
LABEL_28:
          if ( v15 )
            ObfDereferenceObjectWithTag((PVOID)v15, 0x6E457350u);
          return (unsigned int)v22;
        }
        if ( v22 != -1073741790 )
          goto LABEL_28;
        CurrentThread = v30;
      }
LABEL_21:
      if ( v13 )
        NextProcess = (LIST_ENTRY *)PsGetPreviousProcess((PVOID)v15);
      else
        NextProcess = PsGetNextProcess((_QWORD *)v15, v19, v20, v21);
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
