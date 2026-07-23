/*
 * XREFs of NtFlushVirtualMemory @ 0x140A69D30
 * Callers:
 *     DifNtFlushVirtualMemoryWrapper @ 0x14067BD60 (DifNtFlushVirtualMemoryWrapper.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     MmFlushVirtualMemory @ 0x140A69F30 (MmFlushVirtualMemory.c)
 */

NTSTATUS __cdecl NtFlushVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        PIO_STATUS_BLOCK IoStatus)
{
  char PreviousMode; // bl
  __int64 ULong64FromUser; // rax
  __int64 v10; // rax
  int ULongFromUser; // eax
  unsigned __int64 v12; // rdi
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rcx
  bool v15; // al
  NTSTATUS result; // eax
  NTSTATUS v17; // edi
  ULONG_PTR v18; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-30h] BYREF
  __int128 Src; // [rsp+60h] [rbp-28h] BYREF

  Object = 0LL;
  Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(BaseAddress);
    RtlWriteULong64ToUser(BaseAddress, ULong64FromUser);
    v10 = RtlReadULong64FromUser(RegionSize);
    RtlWriteULong64ToUser(RegionSize, v10);
    ULongFromUser = RtlReadULongFromUser((unsigned int *)IoStatus);
    RtlWriteULongToUser(IoStatus, ULongFromUser);
    v12 = RtlReadULong64FromUser(BaseAddress);
    v20 = v12;
    v13 = RtlReadULong64FromUser(RegionSize);
    v18 = v13;
  }
  else
  {
    v12 = (unsigned __int64)*BaseAddress;
    v20 = (unsigned __int64)*BaseAddress;
    v13 = *RegionSize;
    v18 = *RegionSize;
  }
  v14 = v13 + v12;
  if ( v13 + v12 <= v12 )
  {
    if ( v13 )
      return -1073741811;
    v15 = v14 < 0x7FFFFFFF0000LL;
  }
  else
  {
    if ( v14 <= 0x7FFFFFFF0000LL )
      goto LABEL_7;
    v15 = 0;
  }
  if ( !v15 )
    return -1073741811;
LABEL_7:
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ProcessHandle,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x6C466D4Du,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v17 = MmFlushVirtualMemory(Object, &v20, &v18, &Src);
    ObfDereferenceObjectWithTag(Object, 0x6C466D4Du);
    if ( PreviousMode )
      RtlWriteULong64ToUser(RegionSize, v18);
    else
      *RegionSize = v18;
    if ( PreviousMode )
      RtlWriteULong64ToUser(BaseAddress, v20 & 0xFFFFFFFFFFFFF000uLL);
    else
      *BaseAddress = (PVOID)(v20 & 0xFFFFFFFFFFFFF000uLL);
    if ( PreviousMode )
      RtlCopyToUser(IoStatus, &Src, 0x10uLL);
    else
      RtlCopyVolatileMemory(IoStatus, &Src, 0x10uLL);
    return v17;
  }
  return result;
}
