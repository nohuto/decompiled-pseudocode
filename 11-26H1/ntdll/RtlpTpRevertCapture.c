/*
 * XREFs of RtlpTpRevertCapture @ 0x180067740
 * Callers:
 *     RtlCreateTimer @ 0x1800674B0 (RtlCreateTimer.c)
 *     RtlDeleteTimer @ 0x180067850 (RtlDeleteTimer.c)
 *     RtlSetIoCompletionCallback @ 0x1800B7310 (RtlSetIoCompletionCallback.c)
 *     RtlUpdateTimer @ 0x1800F8740 (RtlUpdateTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FBCA0 (RtlDeleteTimerQueueEx.c)
 *     RtlCreateTimerQueue @ 0x1800FDBE0 (RtlCreateTimerQueue.c)
 *     RtlDeregisterWaitEx @ 0x1801087C0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenThreadToken @ 0x18015F3C0 (NtOpenThreadToken.c)
 */

__int64 __fastcall RtlpTpRevertCapture(HANDLE *a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 result; // rax
  int v6; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  *a1 = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0LL;
  v4 = 6LL;
  if ( !(_DWORD)v2 )
    v4 = 4LL;
  LOBYTE(v2) = 1;
  result = NtOpenThreadToken(-2LL, v4, v2, a1);
  if ( (int)result >= 0 )
  {
    v7 = 0LL;
    v6 = NtSetInformationThread(-2LL, 5LL, &v7, 8LL);
    if ( v6 < 0 )
    {
      NtClose(*a1);
      *a1 = 0LL;
      return (unsigned int)v6;
    }
    return 0LL;
  }
  return result;
}
