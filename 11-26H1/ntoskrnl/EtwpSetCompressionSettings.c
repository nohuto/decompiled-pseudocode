/*
 * XREFs of EtwpSetCompressionSettings @ 0x1406C8414
 * Callers:
 *     NtTraceControl @ 0x14093CB40 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14093D918 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpSetCompressionSettings(unsigned int *a1)
{
  unsigned int v2; // edi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v4; // rax
  struct _KLOCK_ENTRIES *v5; // r9
  _DWORD *v6; // rbp
  unsigned __int64 *v7; // rbx
  AutoBoost *v8; // rax
  volatile unsigned __int8 *v9; // rdx
  AutoBoost *v10; // rsi

  v2 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v4 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[52].Flink, *a1, 0LL);
  v6 = (_DWORD *)v4;
  v7 = (unsigned __int64 *)(v4 + 1408);
  if ( v4 )
  {
    v8 = (AutoBoost *)KeAbPreAcquire(v4 + 1408, 0LL, 0LL, v5);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v9) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v10 + 33), v9, 1);
      }
      else
      {
        *((_BYTE *)v10 + 10) = 1;
      }
    }
    v6[360] = a1[1];
    v6[359] = a1[2];
    v6[361] = a1[3];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((unsigned __int64)v7);
    EtwpReleaseLoggerContext(v6, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
