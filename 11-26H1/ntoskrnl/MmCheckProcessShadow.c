/*
 * XREFs of MmCheckProcessShadow @ 0x1404DF430
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1402FDB40 (MiCheckProcessShadow.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v8 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&stru_140E2DAB0, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2DAB0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&stru_140E2DAB0.Header.Lock, 0, v8, &stru_140E2DAB0);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v8 + 33) |= 2u;
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v10 = MiLockWorkingSetShared(p_Blink, v7, v9);
  v13 = MiCheckProcessShadow(p_Blink, 0x1Du, v11, v12);
  LOBYTE(v14) = v10;
  v15 = v13;
  MiUnlockWorkingSetShared(p_Blink, v14);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E2DAB0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&stru_140E2DAB0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&stru_140E2DAB0);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v17, v16);
  return v15;
}
