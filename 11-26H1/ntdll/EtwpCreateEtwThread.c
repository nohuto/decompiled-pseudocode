/*
 * XREFs of EtwpCreateEtwThread @ 0x180064950
 * Callers:
 *     EtwpStartUmLogger @ 0x1800656DC (EtwpStartUmLogger.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180064A50 (RtlpCreateUserThreadEx.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwResumeThread @ 0x18015F880 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18015F8A0 (NtTerminateThread.c)
 */

HANDLE __fastcall EtwpCreateEtwThread(NTSTATUS (__cdecl *a1)(PVOID), void *a2)
{
  HANDLE v2; // rbx
  int v3; // eax
  int v5; // [rsp+30h] [rbp-38h]
  HANDLE ThreadHandle; // [rsp+80h] [rbp+18h] BYREF

  ThreadHandle = 0LL;
  if ( (int)RtlpCreateUserThreadEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, v5, a1, a2, (__int64)&ThreadHandle, 0LL) < 0 )
    return 0LL;
  v2 = ThreadHandle;
  v3 = ZwResumeThread(ThreadHandle, 0LL);
  if ( v3 < 0 )
  {
    NtTerminateThread(v2, v3);
    NtClose(v2);
    return 0LL;
  }
  return v2;
}
