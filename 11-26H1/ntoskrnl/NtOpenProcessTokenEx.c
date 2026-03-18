/*
 * XREFs of NtOpenProcessTokenEx @ 0x140A81910
 * Callers:
 *     DifNtOpenProcessTokenExWrapper @ 0x14067E4D0 (DifNtOpenProcessTokenExWrapper.c)
 *     RtlpSysVolTakeOwnership @ 0x14080620C (RtlpSysVolTakeOwnership.c)
 *     NtOpenProcessToken @ 0x140A818F0 (NtOpenProcessToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     ObOpenObjectByPointer @ 0x14092AFF0 (ObOpenObjectByPointer.c)
 */

NTSTATUS __stdcall NtOpenProcessTokenEx(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  KPROCESSOR_MODE AccessMode; // r14
  ULONG v7; // ebx
  NTSTATUS result; // eax
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  void *v11; // rsi
  int v12; // ebx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-10h] BYREF

  Handle = 0LL;
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v7 = HandleAttributes & (AccessMode != 0 ? 7666 : 73714);
  Object = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             4096LL,
             PsProcessType,
             KeGetCurrentThread()->PreviousMode,
             0x65537350u,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v11 = (void *)PsReferencePrimaryTokenWithTag((__int64)Object, 0x746C6644u, v9, v10);
    ObfDereferenceObjectWithTag(Object, 0x65537350u);
    v12 = ObOpenObjectByPointer(v11, v7, 0LL, DesiredAccess, (POBJECT_TYPE)SeTokenObjectType, AccessMode, &Handle);
    ObfDereferenceObject(v11);
    if ( v12 >= 0 )
    {
      if ( AccessMode )
        RtlWriteULong64ToUser(TokenHandle, (__int64)Handle);
      else
        *TokenHandle = Handle;
    }
    return v12;
  }
  return result;
}
