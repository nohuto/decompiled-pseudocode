/*
 * XREFs of MiLockFileExtentsExclusive @ 0x140770630
 * Callers:
 *     MiInsertCopyExtents @ 0x1406FA5AC (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x1406FA964 (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x1407705B4 (MiDeleteFileExtentList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall MiLockFileExtentsExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v5; // rax
  void *v6; // rdx
  AutoBoost *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2D150.WaitBlock[3].Object, 0LL, 0LL, a4);
  v7 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E2D150.Spare18, 0LL) )
    ExfAcquirePushLockExclusiveEx(&stru_140E2D150.Spare18, v5, (__int64)&stru_140E2D150.WaitBlock[3].Object);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v7, v6);
    else
      *((_BYTE *)v7 + 10) = 1;
  }
}
