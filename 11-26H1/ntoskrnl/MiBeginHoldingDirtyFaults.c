/*
 * XREFs of MiBeginHoldingDirtyFaults @ 0x1406FBF38
 * Callers:
 *     MiPrepareToHotPatchVad @ 0x140873C64 (MiPrepareToHotPatchVad.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027E5A0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027E758 (MiUnlockWorkingSetExclusive.c)
 *     MiMoveDirtyBitsToPfns @ 0x140319470 (MiMoveDirtyBitsToPfns.c)
 */

void __fastcall MiBeginHoldingDirtyFaults(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r8
  _KPROCESS *Process; // rsi
  KIRQL v6; // al
  _QWORD *v7; // rcx
  __int64 v8; // rbx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v6 = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, (__int64)a2, (__int64)CurrentThread);
  v7 = *(_QWORD **)(a1 + 32);
  v8 = a1 + 24;
  if ( *v7 != v8 )
    __fastfail(3u);
  a2[1] = v7;
  *a2 = v8;
  *v7 = a2;
  *(_QWORD *)(v8 + 8) = a2;
  MiUnlockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink, v6);
  MiMoveDirtyBitsToPfns(a2[2], a2[3], 0LL, 0);
}
