/*
 * XREFs of CmpVolumeManagerLockContextListExclusive @ 0x140905BD0
 * Callers:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403BC228 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403BC32C (CmSiReleaseProcessLockedPagesCharge.c)
 *     SshpDereferenceBlocker @ 0x14049BA90 (SshpDereferenceBlocker.c)
 *     SshpSetCollectionActive @ 0x1404A2B28 (SshpSetCollectionActive.c)
 *     SleepstudyHelperCreateLibraryEx @ 0x1404ED710 (SleepstudyHelperCreateLibraryEx.c)
 *     SleepstudyHelperDestroyLibrary @ 0x140614000 (SleepstudyHelperDestroyLibrary.c)
 *     CmSiSetProcessWorkingSetMaximum @ 0x1406E2FDC (CmSiSetProcessWorkingSetMaximum.c)
 *     CmpVolumeContextDecrementRefCount @ 0x1408B7F90 (CmpVolumeContextDecrementRefCount.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14090792C (CmpVolumeManagerGetContextForFile.c)
 *     CmpDumpKeyToBuffer @ 0x140C5812C (CmpDumpKeyToBuffer.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 *     CmFcManagerStartRuntimePhase @ 0x140CF0AF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
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
