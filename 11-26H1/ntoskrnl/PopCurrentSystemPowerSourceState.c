/*
 * XREFs of PopCurrentSystemPowerSourceState @ 0x1407D91A8
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 */

__int64 __fastcall PopCurrentSystemPowerSourceState(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  PopAcquireRwLockShared((volatile signed __int64 *)&stru_140F10070.Header.Lock, a2, a3, a4);
  *(_OWORD *)a1 = *(_OWORD *)&stru_140F10070.Header.WaitListHead.Blink;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&stru_140F10070.QuantumTarget;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&stru_140F10070.StackLimit;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&stru_140F10070.ThreadLock;
  *(_DWORD *)(a1 + 64) = stru_140F10070.CurrentRunTime;
  return PopReleaseRwLock(&stru_140F10070);
}
