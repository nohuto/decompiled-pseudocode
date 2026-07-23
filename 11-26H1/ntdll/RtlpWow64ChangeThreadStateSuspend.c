/*
 * XREFs of RtlpWow64ChangeThreadStateSuspend @ 0x180138678
 * Callers:
 *     RtlWow64ChangeThreadState @ 0x180138380 (RtlWow64ChangeThreadState.c)
 * Callees:
 *     RtlpWow64OpenThreadProcess @ 0x1800F8C38 (RtlpWow64OpenThreadProcess.c)
 *     RtlpWow64IsNinjaSuspendRequiredForThread @ 0x1801387B4 (RtlpWow64IsNinjaSuspendRequiredForThread.c)
 *     RtlpWow64NinjaSuspendThread @ 0x180138848 (RtlpWow64NinjaSuspendThread.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwResumeThread @ 0x18015F880 (ZwResumeThread.c)
 *     NtChangeThreadState @ 0x180160150 (NtChangeThreadState.c)
 */

__int64 __fastcall RtlpWow64ChangeThreadStateSuspend(
        HANDLE ThreadStateChangeHandle,
        HANDLE SourceHandle,
        PVOID ExtendedInformation,
        SIZE_T ExtendedInformationLength,
        ULONG64 a5)
{
  int v5; // r14d
  int IsNinjaSuspendRequiredForThread; // edi
  SIZE_T ExtendedInformationLengtha; // [rsp+20h] [rbp-30h]
  ULONG64 Reserved; // [rsp+28h] [rbp-28h]
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  _CLIENT_ID v14; // [rsp+40h] [rbp-10h] BYREF

  v5 = ExtendedInformationLength;
  Handle = 0LL;
  v14 = 0LL;
  IsNinjaSuspendRequiredForThread = RtlpWow64OpenThreadProcess(
                                      SourceHandle,
                                      (__int64)SourceHandle,
                                      (__int64)ExtendedInformation,
                                      &Handle,
                                      &v14);
  if ( IsNinjaSuspendRequiredForThread >= 0 )
  {
    IsNinjaSuspendRequiredForThread = RtlpWow64IsNinjaSuspendRequiredForThread(Handle);
    if ( IsNinjaSuspendRequiredForThread >= 0 )
    {
      LODWORD(Reserved) = a5;
      LODWORD(ExtendedInformationLengtha) = v5;
      IsNinjaSuspendRequiredForThread = NtChangeThreadState(
                                          ThreadStateChangeHandle,
                                          SourceHandle,
                                          ThreadStateChangeSuspend,
                                          ExtendedInformation,
                                          ExtendedInformationLengtha,
                                          Reserved);
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)IsNinjaSuspendRequiredForThread;
}
