/*
 * XREFs of EtwpGetCompressionSettings @ 0x1406CC1E4
 * Callers:
 *     NtTraceControl @ 0x1409186E0 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpGetCompressionSettings(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned int v2; // esi
  unsigned int v4; // edi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  __int64 v6; // rax
  struct _KLOCK_ENTRIES *v7; // r9
  _DWORD *v8; // rbp
  signed __int64 *v9; // rbx
  volatile unsigned __int8 *v10; // rdx
  _BYTE *v11; // rsi

  v2 = *a1;
  v4 = 0;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v6 = EtwpAcquireLoggerContextByLoggerId(CurrentServerSiloGlobals[52].Flink, v2, 0LL);
  v8 = (_DWORD *)v6;
  v9 = (signed __int64 *)(v6 + 1408);
  if ( v6 )
  {
    *a2 = v2;
    v11 = (_BYTE *)KeAbPreAcquire(v6 + 1408, 0LL, 0LL, v7);
    if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v9, 0, (LegacyAutoBoost *)v11, (struct _KTHREAD *)v9);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v10) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v11 + 33), v10, 1);
      }
      else
      {
        v11[10] = 1;
      }
    }
    a2[1] = v8[360];
    a2[2] = v8[359];
    a2[3] = v8[361];
    if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v9);
    KeAbPostRelease((unsigned __int64)v9);
    EtwpReleaseLoggerContext(v8, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
