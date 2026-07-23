/*
 * XREFs of MiLockUnlockCommon @ 0x140A068FC
 * Callers:
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x140A06230 (NtUnlockVirtualMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall MiLockUnlockCommon(
        ULONG_PTR BugCheckParameter1,
        void **a2,
        __int64 *a3,
        int a4,
        KPROCESSOR_MODE PreviousMode,
        char **a6,
        __int64 *a7,
        PVOID *a8)
{
  char v8; // r14
  __int64 ULong64FromUser; // rax
  __int64 v13; // rax
  char *v14; // rdi
  __int64 v15; // rbx
  __int64 result; // rax
  PVOID Object[4]; // [rsp+40h] [rbp-28h] BYREF

  v8 = a4;
  Object[0] = 0LL;
  if ( (a4 & 0xFFFFFFFC) != 0 || (a4 & 3) == 0 )
    return 3221225485LL;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a2);
    RtlWriteULong64ToUser(a2, ULong64FromUser);
    v13 = RtlReadULong64FromUser(a3);
    RtlWriteULong64ToUser(a3, v13);
    v14 = (char *)RtlReadULong64FromUser(a2);
  }
  else
  {
    v14 = (char *)*a2;
  }
  Object[1] = v14;
  v15 = PreviousMode ? RtlReadULong64FromUser(a3) : *a3;
  Object[2] = (PVOID)v15;
  if ( !v15 || &v14[v15] <= v14 || (unsigned __int64)&v14[v15] > 0x7FFFFFFF0000LL )
    return 3221225485LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x6D566D4Du,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    if ( (v8 & 2) == 0 || SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    {
      *a6 = v14;
      *a7 = v15;
      *a8 = Object[0];
      return 0LL;
    }
    else
    {
      ObfDereferenceObjectWithTag(Object[0], 0x6D566D4Du);
      return 3221225569LL;
    }
  }
  return result;
}
