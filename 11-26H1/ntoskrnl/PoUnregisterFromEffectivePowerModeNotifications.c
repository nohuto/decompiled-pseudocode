/*
 * XREFs of PoUnregisterFromEffectivePowerModeNotifications @ 0x1407CF540
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     ExUnsubscribeWnfStateChange @ 0x140A41930 (ExUnsubscribeWnfStateChange.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoUnregisterFromEffectivePowerModeNotifications(
        unsigned __int64 *P,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // edi

  v4 = 0;
  if ( P && *((_DWORD *)P + 8) == -1122885 )
  {
    PopAcquireRwLockExclusive(P + 5, a2, a3, a4);
    P[7] = 0LL;
    PopReleaseRwLock((struct _KTHREAD *)(P + 5));
    ExUnsubscribeWnfStateChange(P[3]);
    ExFreePoolWithTag(P, 0x74655350u);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
