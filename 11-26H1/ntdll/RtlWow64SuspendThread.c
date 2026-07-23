/*
 * XREFs of RtlWow64SuspendThread @ 0x1801385D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWow64OpenThreadProcess @ 0x1800F8C38 (RtlpWow64OpenThreadProcess.c)
 *     RtlpWow64IsNinjaSuspendRequiredForThread @ 0x1801387B4 (RtlpWow64IsNinjaSuspendRequiredForThread.c)
 *     RtlpWow64NinjaSuspendThread @ 0x180138848 (RtlpWow64NinjaSuspendThread.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtSuspendThread @ 0x180162830 (NtSuspendThread.c)
 */

__int64 __fastcall RtlWow64SuspendThread(HANDLE SourceHandle, PULONG PreviousSuspendCount, __int64 a3)
{
  int IsNinjaSuspendRequiredForThread; // ebx
  __int64 v7[2]; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+38h] BYREF

  Handle = 0LL;
  *(_OWORD *)v7 = 0LL;
  IsNinjaSuspendRequiredForThread = RtlpWow64OpenThreadProcess(
                                      SourceHandle,
                                      (__int64)PreviousSuspendCount,
                                      a3,
                                      &Handle,
                                      (_CLIENT_ID *)v7);
  if ( IsNinjaSuspendRequiredForThread >= 0 )
  {
    IsNinjaSuspendRequiredForThread = RtlpWow64IsNinjaSuspendRequiredForThread(Handle);
    if ( IsNinjaSuspendRequiredForThread >= 0 )
      IsNinjaSuspendRequiredForThread = NtSuspendThread(SourceHandle, PreviousSuspendCount);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)IsNinjaSuspendRequiredForThread;
}
