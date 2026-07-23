/*
 * XREFs of ObpLockObjectTypeExclusive @ 0x1408FFE00
 * Callers:
 *     ObUnRegisterCallbacks @ 0x1407C70A0 (ObUnRegisterCallbacks.c)
 *     ObpFreeObject @ 0x1408FF7D0 (ObpFreeObject.c)
 *     ObpIncrementHandleCountEx @ 0x14090A400 (ObpIncrementHandleCountEx.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 *     ObRegisterCallbacks @ 0x140A676A0 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x140A678A4 (ObpInsertCallbackByAltitude.c)
 *     ObpCreateTypeArray @ 0x140A67954 (ObpCreateTypeArray.c)
 *     ExpWorkerInitialization @ 0x140CECB08 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
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
