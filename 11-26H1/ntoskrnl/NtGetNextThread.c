/*
 * XREFs of NtGetNextThread @ 0x140949FE0
 * Callers:
 *     DifNtGetNextThreadWrapper @ 0x14067D040 (DifNtGetNextThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     SeDeleteAccessState @ 0x1408F7CA0 (SeDeleteAccessState.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14094BA20 (PsSynchronizeWithThreadInsertion.c)
 *     SeCreateAccessState @ 0x140A0FB70 (SeCreateAccessState.c)
 */

NTSTATUS __cdecl NtGetNextThread(
        HANDLE ProcessHandle,
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewThreadHandle)
{
  PVOID v8; // rsi
  char AccessMode; // r15
  NTSTATUS result; // eax
  NTSTATUS v11; // esi
  _DWORD *NextProcessThread; // rbx
  BOOLEAN v13; // r13
  struct _KTHREAD *CurrentThread; // rax
  PVOID v15; // rcx
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  PVOID v17; // [rsp+50h] [rbp-1E8h] BYREF
  ACCESS_MASK v18; // [rsp+58h] [rbp-1E0h]
  ULONG HandleAttributesa; // [rsp+5Ch] [rbp-1DCh]
  HANDLE Handle; // [rsp+68h] [rbp-1D0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-1C8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+80h] [rbp-1B8h] BYREF
  _BYTE v23[224]; // [rsp+120h] [rbp-118h] BYREF

  v18 = DesiredAccess;
  BugCheckParameter1 = (ULONG_PTR)ProcessHandle;
  Object = 0LL;
  v8 = 0LL;
  v17 = 0LL;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v23, 0, sizeof(v23));
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  HandleAttributesa = HandleAttributes & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
    RtlWriteULong64ToUser(NewThreadHandle, 0LL);
  else
    *NewThreadHandle = 0LL;
  if ( Flags )
    return -1073741811;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             1024,
             (__int64)PsProcessType,
             AccessMode,
             0x6E457350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    if ( ThreadHandle )
    {
      v11 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)ThreadHandle,
              0,
              (__int64)PsThreadType,
              AccessMode,
              0x6E457350u,
              &v17,
              0LL,
              0LL);
      if ( v11 >= 0 )
      {
        v8 = v17;
        if ( *((PVOID *)v17 + 68) == Object )
          goto LABEL_9;
        ObfDereferenceObjectWithTag(v17, 0x6E457350u);
        v11 = -1073741811;
      }
LABEL_32:
      v15 = Object;
LABEL_26:
      ObfDereferenceObjectWithTag(v15, 0x6E457350u);
      return v11;
    }
LABEL_9:
    NextProcessThread = (_DWORD *)PsGetNextProcessThread(Object, v8);
    v17 = NextProcessThread;
    if ( NextProcessThread )
    {
      v13 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode);
      CurrentThread = KeGetCurrentThread();
      BugCheckParameter1 = (ULONG_PTR)CurrentThread;
      while ( 1 )
      {
        if ( (NextProcessThread[360] & 2) != 0
          || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[360] & 2) != 0) )
        {
          v11 = SeCreateAccessState(&PassedAccessState, v23, v18, (char *)PsProcessType + 76);
          if ( v11 < 0 )
            goto LABEL_24;
          if ( v13 )
          {
            if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
              PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
            else
              PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
            PassedAccessState.RemainingDesiredAccess = 0;
          }
          v11 = ObOpenObjectByPointer(
                  NextProcessThread,
                  HandleAttributesa,
                  &PassedAccessState,
                  0,
                  (POBJECT_TYPE)PsThreadType,
                  AccessMode,
                  &Handle);
          SeDeleteAccessState((__int64)&PassedAccessState);
          if ( v11 >= 0 )
          {
            if ( AccessMode )
              RtlWriteULong64ToUser(NewThreadHandle, (__int64)Handle);
            else
              *NewThreadHandle = Handle;
LABEL_24:
            ObfDereferenceObjectWithTag(Object, 0x6E457350u);
            if ( NextProcessThread )
            {
              v15 = NextProcessThread;
              goto LABEL_26;
            }
            return v11;
          }
          if ( v11 != -1073741790 )
            goto LABEL_24;
        }
        NextProcessThread = (_DWORD *)PsGetNextProcessThread(Object, NextProcessThread);
        v17 = NextProcessThread;
        CurrentThread = (struct _KTHREAD *)BugCheckParameter1;
        if ( !NextProcessThread )
        {
          v11 = -2147483622;
          goto LABEL_24;
        }
      }
    }
    v11 = -2147483622;
    goto LABEL_32;
  }
  return result;
}
