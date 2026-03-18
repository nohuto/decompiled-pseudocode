/*
 * XREFs of PopFanReportBootStartDevices @ 0x140CD5320
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopSqmFanEnumeration @ 0x1407E3338 (PopSqmFanEnumeration.c)
 */

__int64 __fastcall PopFanReportBootStartDevices(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *i; // rbx

  PopAcquireRwLockShared((volatile signed __int64 *)&unk_140F10E30.Header.Lock, a2, a3, a4);
  for ( i = *(struct _KTHREAD **)((char *)&stru_140F10828.116 + 4);
        i != (struct _KTHREAD *)(&stru_140F10828.MiscFlags + 1);
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    PopSqmFanEnumeration();
  }
  return PopReleaseRwLock(&unk_140F10E30);
}
