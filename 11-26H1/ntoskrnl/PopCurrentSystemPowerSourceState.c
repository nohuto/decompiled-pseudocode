/*
 * XREFs of PopCurrentSystemPowerSourceState @ 0x1407DCBC8
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 */

__int64 __fastcall PopCurrentSystemPowerSourceState(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F10830, a2, a3, a4);
  *(_OWORD *)a1 = xmmword_140F10840;
  *(_OWORD *)(a1 + 16) = xmmword_140F10850;
  *(_OWORD *)(a1 + 32) = xmmword_140F10860;
  *(_OWORD *)(a1 + 48) = xmmword_140F10870;
  *(_DWORD *)(a1 + 64) = dword_140F10880;
  return PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F10830);
}
