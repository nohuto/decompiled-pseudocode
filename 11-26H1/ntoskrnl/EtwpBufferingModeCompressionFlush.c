/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x1406CB8FC
 * Callers:
 *     EtwpBufferingModeFlush @ 0x140A12844 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     EtwpCompressPendingBuffers @ 0x1406CBD3C (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x1406CC2F0 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  struct _KLOCK_ENTRIES *v2; // r9
  AutoBoost *v3; // rax
  volatile unsigned __int8 *v4; // rdx
  AutoBoost *v5; // rdi

  if ( *(_DWORD *)(a1 + 1432) )
  {
    EtwpCompressPendingBuffers();
    v3 = (AutoBoost *)KeAbPreAcquire(a1 + 1408, 0LL, 0LL, v2);
    v5 = v3;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1408), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1408), v3, a1 + 1408);
    if ( v5 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v4) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v5 + 33), v4, 1);
      }
      else
      {
        *((_BYTE *)v5 + 10) = 1;
      }
    }
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1408), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1408));
    KeAbPostRelease(a1 + 1408);
  }
}
