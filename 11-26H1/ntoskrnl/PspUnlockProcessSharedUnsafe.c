/*
 * XREFs of PspUnlockProcessSharedUnsafe @ 0x1404D6D7C
 * Callers:
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 */

void __fastcall PspUnlockProcessSharedUnsafe(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 456);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 456), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  KeAbPostRelease((unsigned __int64)v1);
}
