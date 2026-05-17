/*
 * XREFs of EtwpCreateEtwThread @ 0x180076130
 * Callers:
 *     EtwpStartUmLogger @ 0x180076EBC (EtwpStartUmLogger.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180076230 (RtlpCreateUserThreadEx.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwResumeThread @ 0x18015F980 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18015F9A0 (NtTerminateThread.c)
 */

__int64 EtwpCreateEtwThread()
{
  int v0; // eax

  if ( (int)RtlpCreateUserThreadEx(-1, 0, 1, 0, 0LL, 0LL) >= 0 )
  {
    v0 = ZwResumeThread(0LL, 0LL);
    if ( v0 < 0 )
    {
      NtTerminateThread(0LL, (unsigned int)v0);
      NtClose(0LL);
    }
  }
  return 0LL;
}
