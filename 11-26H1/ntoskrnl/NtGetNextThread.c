/*
 * XREFs of NtGetNextThread @ 0x140956360
 * Callers:
 *     DifNtGetNextThreadWrapper @ 0x140679460 (DifNtGetNextThreadWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140956164 (PsSynchronizeWithThreadInsertion.c)
 *     PsGetNextProcessThread @ 0x1409573A0 (PsGetNextProcessThread.c)
 *     SeCreateAccessState @ 0x140A10980 (SeCreateAccessState.c)
 */

__int64 __fastcall NtGetNextThread(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, int a4, int a5, HANDLE *a6)
{
  PVOID v8; // rsi
  char AccessMode; // r15
  __int64 result; // rax
  int v11; // esi
  _DWORD *NextProcessThread; // rbx
  __int64 v13; // r8
  struct _KLOCK_ENTRIES *v14; // r9
  BOOLEAN v15; // r13
  struct _KTHREAD *CurrentThread; // rax
  PVOID v17; // rcx
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  PVOID v19; // [rsp+50h] [rbp-1E8h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-1E0h]
  ULONG HandleAttributes; // [rsp+5Ch] [rbp-1DCh]
  HANDLE Handle; // [rsp+68h] [rbp-1D0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-1C8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+80h] [rbp-1B8h] BYREF
  _BYTE v25[224]; // [rsp+120h] [rbp-118h] BYREF

  v20 = a3;
  BugCheckParameter1 = a1;
  Object = 0LL;
  v8 = 0LL;
  v19 = 0LL;
  memset_0(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset_0(v25, 0, sizeof(v25));
  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  HandleAttributes = a4 & (AccessMode != 0 ? 7666 : 73714);
  if ( AccessMode )
    RtlWriteULong64ToUser(a6, 0LL);
  else
    *a6 = 0LL;
  if ( a5 )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             1024LL,
             PsProcessType,
             AccessMode,
             0x6E457350u,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      v11 = ObpReferenceObjectByHandleWithTag(a2, 0LL, PsThreadType, AccessMode, 0x6E457350u, &v19, 0LL, 0LL);
      if ( v11 >= 0 )
      {
        v8 = v19;
        if ( *((PVOID *)v19 + 68) == Object )
          goto LABEL_9;
        ObfDereferenceObjectWithTag(v19, 0x6E457350u);
        v11 = -1073741811;
      }
LABEL_32:
      v17 = Object;
LABEL_26:
      ObfDereferenceObjectWithTag(v17, 0x6E457350u);
      return (unsigned int)v11;
    }
LABEL_9:
    NextProcessThread = (_DWORD *)PsGetNextProcessThread(Object, v8);
    v19 = NextProcessThread;
    if ( NextProcessThread )
    {
      v15 = SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode);
      CurrentThread = KeGetCurrentThread();
      BugCheckParameter1 = (ULONG_PTR)CurrentThread;
      while ( 1 )
      {
        if ( (NextProcessThread[360] & 2) != 0
          || (PsSynchronizeWithThreadInsertion((__int64)NextProcessThread, (__int64)CurrentThread, v13, v14),
              (NextProcessThread[360] & 2) != 0) )
        {
          v11 = SeCreateAccessState(&PassedAccessState, v25, v20, (char *)PsProcessType + 76);
          if ( v11 < 0 )
            goto LABEL_24;
          if ( v15 )
          {
            if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
              PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
            else
              PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
            PassedAccessState.RemainingDesiredAccess = 0;
          }
          v11 = ObOpenObjectByPointer(
                  NextProcessThread,
                  HandleAttributes,
                  &PassedAccessState,
                  0,
                  (POBJECT_TYPE)PsThreadType,
                  AccessMode,
                  &Handle);
          SeDeleteAccessState((__int64)&PassedAccessState);
          if ( v11 >= 0 )
          {
            if ( AccessMode )
              RtlWriteULong64ToUser(a6, (__int64)Handle);
            else
              *a6 = Handle;
LABEL_24:
            ObfDereferenceObjectWithTag(Object, 0x6E457350u);
            if ( NextProcessThread )
            {
              v17 = NextProcessThread;
              goto LABEL_26;
            }
            return (unsigned int)v11;
          }
          if ( v11 != -1073741790 )
            goto LABEL_24;
        }
        NextProcessThread = (_DWORD *)PsGetNextProcessThread(Object, NextProcessThread);
        v19 = NextProcessThread;
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
