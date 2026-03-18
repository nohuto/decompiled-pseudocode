/*
 * XREFs of ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14010E9E0
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x14001922C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ??0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x14010E874 (--0AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAUFONTFILEVIEW@@I@Z @ 0x14010E8B0 (-ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAUFONTFILEVIEW@@I@Z.c)
 * Callees:
 *     <none>
 */

UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *__fastcall UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock(
        UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *this,
        __int64 a2,
        __int64 a3)
{
  struct W32_PUSH_LOCK *v4; // rcx

  v4 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 24256LL);
  *(_QWORD *)this = v4;
  GreAcquirePushLockShared(v4);
  return this;
}
