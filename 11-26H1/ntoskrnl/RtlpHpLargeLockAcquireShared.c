/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x14053162C
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x140637FB0 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpAcquireLockShared @ 0x140349FDC (RtlpHpAcquireLockShared.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquireShared(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  return RtlpHpAcquireLockShared((struct _KTHREAD *)(a1 + 64), *(_DWORD *)a1 & 1, a3, a4);
}
