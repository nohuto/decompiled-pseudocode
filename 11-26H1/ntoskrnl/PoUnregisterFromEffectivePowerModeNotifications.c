/*
 * XREFs of PoUnregisterFromEffectivePowerModeNotifications @ 0x1407D25E0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     ExUnsubscribeWnfStateChange @ 0x1409FD2E0 (ExUnsubscribeWnfStateChange.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
