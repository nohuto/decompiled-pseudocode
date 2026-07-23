/*
 * XREFs of NtFreeVirtualMemory @ 0x140A04B90
 * Callers:
 *     DifNtFreeVirtualMemoryWrapper @ 0x14067C070 (DifNtFreeVirtualMemoryWrapper.c)
 *     RtlpInitializeStackTraceDatabase @ 0x14080832C (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MmFreeVirtualMemory @ 0x140A04CB0 (MmFreeVirtualMemory.c)
 */

NTSTATUS __stdcall NtFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  char PreviousMode; // bl
  __int64 ULong64FromUser; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  ULONG_PTR v11; // rax
  NTSTATUS result; // eax
  NTSTATUS v13; // edi
  ULONG_PTR v14; // [rsp+38h] [rbp-20h]
  void *v15; // [rsp+40h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(BaseAddress);
    RtlWriteULong64ToUser(BaseAddress, ULong64FromUser);
    v9 = RtlReadULong64FromUser(RegionSize);
    RtlWriteULong64ToUser(RegionSize, v9);
    v10 = RtlReadULong64FromUser(BaseAddress);
  }
  else
  {
    v10 = (__int64)*BaseAddress;
  }
  v15 = (void *)v10;
  if ( PreviousMode )
    v11 = RtlReadULong64FromUser(RegionSize);
  else
    v11 = *RegionSize;
  v14 = v11;
  result = MmFreeVirtualMemory((ULONG_PTR)ProcessHandle, PreviousMode, 0);
  v13 = result;
  if ( result >= 0 )
  {
    if ( PreviousMode )
      RtlWriteULong64ToUser(RegionSize, v14);
    else
      *RegionSize = v14;
    if ( PreviousMode )
      RtlWriteULong64ToUser(BaseAddress, (__int64)v15);
    else
      *BaseAddress = v15;
    return v13;
  }
  return result;
}
