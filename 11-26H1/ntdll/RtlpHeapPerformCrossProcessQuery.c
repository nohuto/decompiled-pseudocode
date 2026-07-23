/*
 * XREFs of RtlpHeapPerformCrossProcessQuery @ 0x1800926EC
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x180092130 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180114FC0 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpHpStackTraceConfig @ 0x180120DE8 (RtlpHpStackTraceConfig.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014FCC0 (RtlpHpStackTraceSerializeRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180064A50 (RtlpCreateUserThreadEx.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800CAA80 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x18010E1F4 (RtlpDestroyExecutionRequiredRequest.c)
 *     NtWaitForSingleObject @ 0x18015EEC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18015F140 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F200 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18015F580 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18015F620 (ZwReadVirtualMemory.c)
 *     ZwResumeThread @ 0x18015F880 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18015F8A0 (NtTerminateThread.c)
 */

__int64 __fastcall RtlpHeapPerformCrossProcessQuery(HANDLE ProcessHandle, HANDLE *Buffer)
{
  HANDLE v2; // rsi
  NTSTATUS v5; // ebx
  HANDLE v6; // rdi
  int v8; // eax
  ULONG Options; // [rsp+30h] [rbp-29h]
  ULONG_PTR NumberOfBytesWritten; // [rsp+60h] [rbp+7h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+Fh] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+17h] BYREF
  __int64 v13[2]; // [rsp+78h] [rbp+1Fh] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE ThreadHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  NumberOfBytesWritten = 0LL;
  Handle = 0LL;
  BaseAddress = 0LL;
  ThreadHandle = 0LL;
  RegionSize = 96LL;
  *(_OWORD *)v13 = 0LL;
  v5 = ZwAllocateVirtualMemory(ProcessHandle, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v5 < 0 )
    goto LABEL_11;
  v5 = RtlpCreateUserThreadEx(
         ProcessHandle,
         0LL,
         3,
         0,
         0LL,
         0LL,
         Options,
         RtlpExtendedHeapInformationWorkerThread,
         BaseAddress,
         &ThreadHandle,
         v13);
  if ( v5 < 0 )
    goto LABEL_8;
  if ( *Buffer )
  {
    v5 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, *Buffer, ProcessHandle, Buffer, 0xF001Fu, 0, 0);
    if ( v5 < 0 )
      goto LABEL_8;
  }
  v5 = NtWriteVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x60uLL, &NumberOfBytesWritten);
  if ( v5 < 0 )
    goto LABEL_8;
  if ( NumberOfBytesWritten != 96 )
  {
    v5 = -2147483635;
LABEL_8:
    v6 = ThreadHandle;
    goto LABEL_9;
  }
  v8 = RtlpCreateExecutionRequiredRequest(ProcessHandle, &Handle);
  v6 = ThreadHandle;
  v5 = v8;
  if ( v8 < 0 || (v5 = ZwResumeThread(ThreadHandle, 0LL), v5 < 0) )
  {
    v2 = Handle;
LABEL_9:
    if ( v6 )
    {
      NtTerminateThread(v6, 0);
      NtClose(v6);
    }
    goto LABEL_11;
  }
  NtWaitForSingleObject(v6, 0, 0LL);
  v2 = Handle;
  if ( Handle )
  {
    RtlpDestroyExecutionRequiredRequest(Handle);
    v2 = 0LL;
  }
  NtClose(v6);
  v6 = 0LL;
  v5 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x60uLL, &NumberOfBytesWritten);
  if ( v5 >= 0 )
  {
    if ( NumberOfBytesWritten != 96 )
    {
      v5 = -2147483635;
      goto LABEL_11;
    }
    v5 = *((_DWORD *)Buffer + 7);
    goto LABEL_9;
  }
LABEL_11:
  if ( BaseAddress )
    ZwFreeVirtualMemory(ProcessHandle, &BaseAddress, &RegionSize, 0x8000u);
  if ( v2 )
    RtlpDestroyExecutionRequiredRequest(v2);
  return (unsigned int)v5;
}
