/*
 * XREFs of RtlWow64GetSharedInfoProcess @ 0x1800E9000
 * Callers:
 *     RtlpWow64IsNinjaSuspendRequiredForThread @ 0x1801387B4 (RtlpWow64IsNinjaSuspendRequiredForThread.c)
 *     RtlpWow64SuspendProcess @ 0x180138A38 (RtlpWow64SuspendProcess.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x18015F160 (NtQueryInformationProcess.c)
 *     ZwReadVirtualMemory @ 0x18015F620 (ZwReadVirtualMemory.c)
 */

int __fastcall RtlWow64GetSharedInfoProcess(HANDLE ProcessHandle, _BYTE *a2, void *a3)
{
  int result; // eax
  void *v7; // rdx
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  result = NtQueryInformationProcess(ProcessHandle, ProcessWow64Information, &v8, 8u, 0LL);
  if ( result >= 0 )
  {
    if ( v8 )
    {
      v7 = (void *)(v8 + 1168);
      *a2 = 1;
      return ZwReadVirtualMemory(ProcessHandle, v7, a3, 0x28uLL, 0LL);
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}
