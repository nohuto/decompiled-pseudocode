/*
 * XREFs of PspLockProcessListShared @ 0x14043D700
 * Callers:
 *     PsChangeQuantumTable @ 0x140966954 (PsChangeQuantumTable.c)
 *     PsGetNextProcessEx @ 0x140AC8A10 (PsGetNextProcessEx.c)
 *     PsGetPreviousProcess @ 0x140AEFB30 (PsGetPreviousProcess.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
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
