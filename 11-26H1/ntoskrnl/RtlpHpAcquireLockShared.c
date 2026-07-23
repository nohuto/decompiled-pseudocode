/*
 * XREFs of RtlpHpAcquireLockShared @ 0x14034C05C
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x140349990 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x14034BE98 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpLargeLockAcquireShared @ 0x140533B2C (RtlpHpLargeLockAcquireShared.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall RtlpHpAcquireLockShared(struct _KTHREAD *a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  LegacyAutoBoost *v6; // rbx

  if ( a2 )
    return ExAcquireSpinLockShared(&a1->Header.Lock);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&a1->Header.Lock, 0, v6, a1);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v6 + 33) |= 2u;
    else
      *((_BYTE *)v6 + 10) = 1;
  }
  return -1;
}
