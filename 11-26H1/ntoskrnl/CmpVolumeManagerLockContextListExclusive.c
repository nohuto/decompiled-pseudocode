/*
 * XREFs of CmpVolumeManagerLockContextListExclusive @ 0x140A2E304
 * Callers:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403C6098 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C619C (CmSiReleaseProcessLockedPagesCharge.c)
 *     SshpDereferenceBlocker @ 0x1404955E0 (SshpDereferenceBlocker.c)
 *     SshpSetCollectionActive @ 0x14049C548 (SshpSetCollectionActive.c)
 *     SleepstudyHelperCreateLibraryEx @ 0x1404E6CF0 (SleepstudyHelperCreateLibraryEx.c)
 *     SleepstudyHelperDestroyLibrary @ 0x140616EC0 (SleepstudyHelperDestroyLibrary.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1406E7C88 (CmSiSetProcessWorkingSetMaximum.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1408BE560 (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140A2FA8C (CmpVolumeManagerGetContextForFile.c)
 *     CmpDumpKeyToBuffer @ 0x140C5E12C (CmpDumpKeyToBuffer.c)
 *     HvLockHiveFlusherExclusive @ 0x140C5ED30 (HvLockHiveFlusherExclusive.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF6E68 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall CmpVolumeManagerLockContextListExclusive(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  v5 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1, v5, (__int64)a1);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
