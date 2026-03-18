/*
 * XREFs of ?SfmResetTokenEvent@@YAJXZ @ 0x1400B333C
 * Callers:
 *     GreSfmGetNotificationTokens @ 0x1400B2E90 (GreSfmGetNotificationTokens.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SfmResetTokenEvent(__int64 a1)
{
  __int64 SessionState; // rax
  LONG NumberOfWaitingThreads; // [rsp+30h] [rbp+8h] BYREF

  NumberOfWaitingThreads = 0;
  SessionState = W32GetSessionState(a1);
  ZwResetEvent(*(HANDLE *)(*(_QWORD *)(*(_QWORD *)(SessionState + 88) + 4344LL) + 32LL), &NumberOfWaitingThreads);
  return (unsigned int)NumberOfWaitingThreads;
}
