/*
 * XREFs of NtDuplicateObject @ 0x140A88750
 * Callers:
 *     DifNtDuplicateObjectWrapper @ 0x14067A350 (DifNtDuplicateObjectWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  struct _KPROCESS *v10; // rsi
  char PreviousMode; // r12
  NTSTATUS result; // eax
  NTSTATUS v13; // edi
  NTSTATUS v14; // r13d
  __int64 v15; // [rsp+50h] [rbp-48h] BYREF
  void *v16; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object[7]; // [rsp+60h] [rbp-38h] BYREF

  v16 = 0LL;
  Object[0] = 0LL;
  v10 = 0LL;
  v15 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( TargetHandle && PreviousMode )
    RtlWriteULong64ToUser(TargetHandle, 0LL);
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)SourceProcessHandle,
             64,
             (__int64)PsProcessType,
             PreviousMode,
             0x7544624Fu,
             Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    if ( TargetProcessHandle )
    {
      v13 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)TargetProcessHandle,
              64,
              (__int64)PsProcessType,
              PreviousMode,
              0x7544624Fu,
              &v15,
              0LL,
              0LL);
      v10 = (struct _KPROCESS *)v15;
      if ( v13 < 0 )
        v10 = 0LL;
      v15 = (__int64)v10;
    }
    else
    {
      v13 = 0;
    }
    v14 = ObDuplicateObject(
            (__int64)Object[0],
            SourceHandle,
            v10,
            (__int64 *)&v16,
            DesiredAccess,
            HandleAttributes,
            Options,
            PreviousMode);
    if ( TargetHandle )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(TargetHandle, (__int64)v16);
      else
        *TargetHandle = v16;
    }
    ObfDereferenceObjectWithTag(Object[0], 0x7544624Fu);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x7544624Fu);
    if ( v13 >= 0 )
      return v14;
    return v13;
  }
  return result;
}
