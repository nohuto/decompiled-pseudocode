/*
 * XREFs of ObpLockObjectTypeExclusive @ 0x1409242F0
 * Callers:
 *     ObUnRegisterCallbacks @ 0x1407C4040 (ObUnRegisterCallbacks.c)
 *     ObpFreeObject @ 0x140923CC0 (ObpFreeObject.c)
 *     ObpIncrementHandleCountEx @ 0x14092E8D0 (ObpIncrementHandleCountEx.c)
 *     ObCreateObjectTypeEx @ 0x140A5A0C0 (ObCreateObjectTypeEx.c)
 *     ObRegisterCallbacks @ 0x140A5A730 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x140A5A934 (ObpInsertCallbackByAltitude.c)
 *     ObpCreateTypeArray @ 0x140A5A9E4 (ObpCreateTypeArray.c)
 *     ExpWorkerInitialization @ 0x140CE6768 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall ObpLockObjectTypeExclusive(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 184);
  --CurrentThread->SpecialApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire(a1 + 184, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
}
