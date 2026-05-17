/*
 * XREFs of RtlpHeapPerformCrossProcessQuery @ 0x180113660
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x180092520 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1801157E0 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpHpStackTraceConfig @ 0x180121038 (RtlpHpStackTraceConfig.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x18014FE10 (RtlpHpStackTraceSerializeRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180076230 (RtlpCreateUserThreadEx.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800CD310 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x18010E6A4 (RtlpDestroyExecutionRequiredRequest.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18015F240 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18015F680 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18015F6C0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18015F720 (ZwReadVirtualMemory.c)
 *     ZwResumeThread @ 0x18015F980 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18015F9A0 (NtTerminateThread.c)
 */

__int64 __fastcall RtlpHeapPerformCrossProcessQuery(void *a1, __int64 a2)
{
  HANDLE v2; // rsi
  int v5; // ebx
  HANDLE v6; // rdi
  NTSTATUS v8; // eax
  __int64 v9; // [rsp+30h] [rbp-29h]
  __int64 v10; // [rsp+60h] [rbp+7h] BYREF
  HANDLE v11; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v12; // [rsp+70h] [rbp+17h] BYREF
  __int128 v13; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v14 = 0LL;
  Handle = 0LL;
  v12 = 96LL;
  v13 = 0LL;
  v5 = ZwAllocateVirtualMemory(a1, &v14, 0LL, &v12, 12288, 4);
  if ( v5 < 0 )
    goto LABEL_11;
  v5 = RtlpCreateUserThreadEx(
         (__int64)a1,
         0LL,
         3,
         0,
         0LL,
         0LL,
         v9,
         (__int64)RtlpExtendedHeapInformationWorkerThread,
         v14,
         &Handle,
         &v13);
  if ( v5 < 0 )
    goto LABEL_8;
  if ( *(_QWORD *)a2 )
  {
    v5 = ZwDuplicateObject(-1LL, *(_QWORD *)a2, a1, a2, 983071, 0, 0);
    if ( v5 < 0 )
      goto LABEL_8;
  }
  v5 = NtWriteVirtualMemory(a1, v14, a2, 96LL, &v10);
  if ( v5 < 0 )
    goto LABEL_8;
  if ( v10 != 96 )
  {
    v5 = -2147483635;
LABEL_8:
    v6 = Handle;
    goto LABEL_9;
  }
  v8 = RtlpCreateExecutionRequiredRequest(a1, &v11);
  v6 = Handle;
  v5 = v8;
  if ( v8 < 0 || (v5 = ZwResumeThread(Handle, 0LL), v5 < 0) )
  {
    v2 = v11;
LABEL_9:
    if ( v6 )
    {
      NtTerminateThread(v6, 0LL);
      NtClose(v6);
    }
    goto LABEL_11;
  }
  NtWaitForSingleObject(v6, 0, 0LL);
  v2 = v11;
  if ( v11 )
  {
    RtlpDestroyExecutionRequiredRequest(v11);
    v2 = 0LL;
  }
  NtClose(v6);
  v6 = 0LL;
  v5 = ZwReadVirtualMemory(a1, v14, a2, 96LL, &v10);
  if ( v5 >= 0 )
  {
    if ( v10 != 96 )
    {
      v5 = -2147483635;
      goto LABEL_11;
    }
    v5 = *(_DWORD *)(a2 + 28);
    goto LABEL_9;
  }
LABEL_11:
  if ( v14 )
    ZwFreeVirtualMemory(a1, &v14, &v12, 0x8000LL);
  if ( v2 )
    RtlpDestroyExecutionRequiredRequest(v2);
  return (unsigned int)v5;
}
