/*
 * XREFs of PopThermalZoneUpdateCoolingPolicy @ 0x140B3F8C8
 * Callers:
 *     PopThermalCoolingPowerSettingCallback @ 0x140435E10 (PopThermalCoolingPowerSettingCallback.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x14049B940 (IoCancelIrp.c)
 */

__int64 __fastcall PopThermalZoneUpdateCoolingPolicy(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  void **i; // rdi

  PopAcquireRwLockShared((volatile signed __int64 *)&unk_140F10E30.Header.Lock, a2, a3, a4);
  for ( i = (void **)stru_140F10828.FirstArgument; i != &stru_140F10828.FirstArgument; i = (void **)*i )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)i + 54, v4, v5, v6);
    IoCancelIrp((PIRP)i[7]);
    PopReleaseRwLock((struct _KTHREAD *)(i + 54));
  }
  return PopReleaseRwLock(&unk_140F10E30);
}
