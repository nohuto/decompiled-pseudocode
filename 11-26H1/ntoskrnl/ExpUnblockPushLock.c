/*
 * XREFs of ExpUnblockPushLock @ 0x1403682A0
 * Callers:
 *     RtlReleaseSwapReference @ 0x1402C5854 (RtlReleaseSwapReference.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140351604 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x140351AB4 (RtlpCSparseBitmapWaitOnAddress.c)
 *     MiUnlockImageSection @ 0x140366FC8 (MiUnlockImageSection.c)
 *     PspHandleTableWalker @ 0x1403681B0 (PspHandleTableWalker.c)
 *     ExUnblockOnAddressPushLockEx @ 0x140368210 (ExUnblockOnAddressPushLockEx.c)
 *     ExSweepSingleHandle @ 0x140368260 (ExSweepSingleHandle.c)
 *     CmpTryToRundownHive @ 0x140463B48 (CmpTryToRundownHive.c)
 *     CmpWaitForLateUnloadWorker @ 0x14047EAC4 (CmpWaitForLateUnloadWorker.c)
 *     ExBlockOnAddressPushLock @ 0x14047EBC0 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14047ECC0 (ExTimedWaitForUnblockPushLock.c)
 *     ExfUnblockPushLock @ 0x1404CE970 (ExfUnblockPushLock.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1404D6BAC (CmpDecrementAppHiveUnloadCount.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14047ECC0 (ExTimedWaitForUnblockPushLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

NTSTATUS __fastcall ExpUnblockPushLock(volatile __int64 *a1, void *a2, char a3)
{
  char v3; // r14
  __int64 v4; // rbx
  NTSTATUS result; // eax
  char v6; // r12
  void *v7; // rsi
  volatile __int64 *v8; // r15
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // rbp

  v3 = 0;
  v4 = _InterlockedExchange64(a1, 0LL);
  result = 2;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  CurrentIrql = 2;
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 24) )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        LOBYTE(a1) = CurrentIrql;
        result = KiRaiseIrqlProcessIrqlFlags(a1, a2);
      }
    }
    do
    {
      v10 = *(_QWORD *)(v4 + 24);
      if ( (void *)v4 == v7 )
        v3 = 1;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 52), 1u) )
        result = KeSetEvent((PRKEVENT)v4, 1, 0);
      v4 = v10;
    }
    while ( v10 );
    v6 = a3;
    if ( CurrentIrql != 2 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( v7 && !v3 )
  {
    if ( v6 )
      return KeWaitForSingleObject(v7, WrPushLock, 0, 0, 0LL);
    else
      return ExTimedWaitForUnblockPushLock(v8, v7, 0LL);
  }
  return result;
}
