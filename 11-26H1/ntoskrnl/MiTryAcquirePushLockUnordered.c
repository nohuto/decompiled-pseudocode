/*
 * XREFs of MiTryAcquirePushLockUnordered @ 0x1406F848C
 * Callers:
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404A4C04 (ExfTryAcquirePushLockSharedEx.c)
 */

char __fastcall MiTryAcquirePushLockUnordered(struct _KTHREAD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // bl
  volatile unsigned __int8 *v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = 0;
  LODWORD(a4->Thread) = 0;
  v7 = KeAbPreAcquire((__int64)a1, 0LL, 1LL, a4);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 17LL, 0LL)
    || ExfTryAcquirePushLockSharedEx((signed __int64 *)&a1->Header.Lock, 0) )
  {
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v6) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v7 + 33), v6, 1);
      }
      else
      {
        *(_BYTE *)(v7 + 10) = 1;
      }
    }
    return 1;
  }
  else if ( v7 )
  {
    KeAbPostReleaseEx(a1, v7, v8, v9);
  }
  return v4;
}
