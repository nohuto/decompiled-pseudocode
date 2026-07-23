/*
 * XREFs of RtlpWow64IsNinjaSuspendRequiredForThread @ 0x1801387B4
 * Callers:
 *     RtlWow64SuspendThread @ 0x1801385D0 (RtlWow64SuspendThread.c)
 *     RtlpWow64ChangeThreadStateSuspend @ 0x180138678 (RtlpWow64ChangeThreadStateSuspend.c)
 * Callees:
 *     RtlWow64GetSharedInfoProcess @ 0x1800E9000 (RtlWow64GetSharedInfoProcess.c)
 */

int __fastcall RtlpWow64IsNinjaSuspendRequiredForThread(HANDLE ProcessHandle, void **a2, _DWORD *a3)
{
  int result; // eax
  _OWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]
  char v7; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0;
  v6 = 0LL;
  memset(v5, 0, sizeof(v5));
  if ( *a2 == NtCurrentTeb()->ClientId.UniqueProcess && a2[1] == NtCurrentTeb()->ClientId.UniqueThread )
  {
    *a3 = 0;
  }
  else
  {
    result = RtlWow64GetSharedInfoProcess(ProcessHandle, &v7, v5);
    if ( result < 0 )
      return result;
    *a3 = v7 && (BYTE4(v5[0]) & 2) != 0;
  }
  return 0;
}
