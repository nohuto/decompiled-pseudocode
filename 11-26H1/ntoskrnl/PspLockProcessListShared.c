/*
 * XREFs of PspLockProcessListShared @ 0x14042FFB0
 * Callers:
 *     PsGetPreviousProcess @ 0x1409B92F8 (PsGetPreviousProcess.c)
 *     PsChangeQuantumTable @ 0x140AB8200 (PsChangeQuantumTable.c)
 *     PsGetNextProcessEx @ 0x140ACA600 (PsGetNextProcessEx.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall PspLockProcessListShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  LegacyAutoBoost *v4; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v4 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(
               (signed __int64 *)&PspActiveProcessLock,
               0,
               v4,
               (struct _KTHREAD *)&PspActiveProcessLock);
  if ( v4 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v4 + 33) |= 2u;
    else
      *((_BYTE *)v4 + 10) = 1;
  }
  return result;
}
