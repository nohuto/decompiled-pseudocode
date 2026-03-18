/*
 * XREFs of PopThermalUpdateTimerPolicy @ 0x1404363F8
 * Callers:
 *     PopThermalPollingPowerSettingCallback @ 0x140435EC0 (PopThermalPollingPowerSettingCallback.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140436298 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x14049B940 (IoCancelIrp.c)
 */

__int64 __fastcall PopThermalUpdateTimerPolicy(char a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  void **i; // rbx
  __int64 result; // rax

  if ( unk_140F10E70 && unk_140F10E6C != a1 )
  {
    unk_140F10E6C = a1;
    PopAcquireRwLockShared((volatile signed __int64 *)&unk_140F10E30.Header.Lock, a2, a3, a4);
    for ( i = (void **)stru_140F10828.FirstArgument; i != &stru_140F10828.FirstArgument; i = (void **)*i )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)i + 54, v4, v5, v6);
      if ( i[29] || (*((_BYTE *)i + 65) & 1) != 0 && *((_DWORD *)i + 26) )
        IoCancelIrp((PIRP)i[7]);
      PopReleaseRwLock((struct _KTHREAD *)(i + 54));
    }
    return PopReleaseRwLock(&unk_140F10E30);
  }
  return result;
}
