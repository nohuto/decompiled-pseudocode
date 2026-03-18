/*
 * XREFs of CmpLockFreezeQueue @ 0x14077054C
 * Callers:
 *     CmThawRegistry @ 0x1408571F0 (CmThawRegistry.c)
 *     CmpLockRegistryFreezeAware @ 0x1408B3FA0 (CmpLockRegistryFreezeAware.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall CmpLockFreezeQueue(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v4; // rax
  void *v5; // rdx
  AutoBoost *v6; // rbx

  v4 = (AutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock, 0LL, 0LL, a4);
  v6 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&CmpFreezeListLock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&CmpFreezeListLock, v4, (__int64)&CmpFreezeListLock);
  if ( v6 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v6, v5);
    else
      *((_BYTE *)v6 + 10) = 1;
  }
}
