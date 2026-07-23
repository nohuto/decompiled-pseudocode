/*
 * XREFs of RtlpTpRevertCapture @ 0x180087B90
 * Callers:
 *     RtlCreateTimer @ 0x180087900 (RtlCreateTimer.c)
 *     RtlDeleteTimer @ 0x180087CA0 (RtlDeleteTimer.c)
 *     RtlSetIoCompletionCallback @ 0x1800B4830 (RtlSetIoCompletionCallback.c)
 *     RtlUpdateTimer @ 0x1800F7F10 (RtlUpdateTimer.c)
 *     RtlDeleteTimerQueueEx @ 0x1800FB3F0 (RtlDeleteTimerQueueEx.c)
 *     RtlCreateTimerQueue @ 0x1800FD330 (RtlCreateTimerQueue.c)
 *     RtlDeregisterWaitEx @ 0x180108160 (RtlDeregisterWaitEx.c)
 * Callees:
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenThreadToken @ 0x18015F2C0 (NtOpenThreadToken.c)
 */

NTSTATUS __fastcall RtlpTpRevertCapture(PHANDLE TokenHandle, int a2)
{
  ACCESS_MASK v4; // edx
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  *TokenHandle = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0;
  v4 = 6;
  if ( !a2 )
    v4 = 4;
  result = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, v4, 1u, TokenHandle);
  if ( result >= 0 )
  {
    ThreadInformation = 0LL;
    v6 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    if ( v6 < 0 )
    {
      NtClose(*TokenHandle);
      *TokenHandle = 0LL;
      return v6;
    }
    return 0;
  }
  return result;
}
