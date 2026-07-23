/*
 * XREFs of MiAgeThreadFaultClusterContexts @ 0x140467600
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiAgeThreadFaultClusterBlock @ 0x14046770C (MiAgeThreadFaultClusterBlock.c)
 */

__int64 __fastcall MiAgeThreadFaultClusterContexts(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rcx
  LegacyAutoBoost *v7; // rsi
  signed __int64 *i; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx

  v4 = (signed __int64 *)(*(_QWORD *)(a1 + 1040) + 832LL);
  if ( !a2 && *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 864LL) )
    return 1LL;
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 1040) + 832LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (LegacyAutoBoost *)KeAbPreAcquire(v6, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v7, (struct _KTHREAD *)v4);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v7 + 33) |= 2u;
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  for ( i = (signed __int64 *)v4[1]; i != v4 + 1; i = (signed __int64 *)*i )
    MiAgeThreadFaultClusterBlock(i);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((unsigned __int64)v4);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery(v10, v9);
  }
  return 0LL;
}
