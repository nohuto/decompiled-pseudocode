/*
 * XREFs of NtOpenProcessTokenEx @ 0x140A87780
 * Callers:
 *     DifNtOpenProcessTokenExWrapper @ 0x1406820B0 (DifNtOpenProcessTokenExWrapper.c)
 *     RtlpSysVolTakeOwnership @ 0x14080BCAC (RtlpSysVolTakeOwnership.c)
 *     NtOpenProcessToken @ 0x140A87760 (NtOpenProcessToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
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
             4096,
             (__int64)PsProcessType,
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
