/*
 * XREFs of MmCheckProcessShadow @ 0x1404E5E90
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     MiCheckProcessShadow @ 0x1402B2E70 (MiCheckProcessShadow.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MmCheckProcessShadow(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rsi
  __int64 p_Blink; // rsi
  __int64 v7; // rdx
  LegacyAutoBoost *v8; // rbx
  __int64 v9; // r8
  char v10; // bl
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E2D930, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2D930, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E2D930.Header.Lock, 0, v8, &stru_140E2D930);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v8 + 33) |= 2u;
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v10 = MiLockWorkingSetShared(p_Blink, v7, v9);
  v11 = MiCheckProcessShadow(p_Blink, 0x1Du);
  LOBYTE(v12) = v10;
  v13 = v11;
  MiUnlockWorkingSetShared(p_Blink, v12);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2D930, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E2D930.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2D930);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v15, v14);
  return v13;
}
