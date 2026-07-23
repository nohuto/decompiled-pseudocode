/*
 * XREFs of MiCreateSlabIdentity @ 0x14070AD4C
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiDeletePendingSlabIdentities @ 0x14049A848 (MiDeletePendingSlabIdentities.c)
 *     MiInitializeSlabIdentities @ 0x14070C2BC (MiInitializeSlabIdentities.c)
 */

__int64 __fastcall MiCreateSlabIdentity(__int64 a1, _BYTE *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v5; // rdi
  AutoBoost *v8; // rax
  volatile unsigned __int8 *v9; // rdx
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rsi
  int v13; // esi
  ULONG ClearBitsAndSet; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 22072);
  --CurrentThread->SpecialApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire(a1 + 22072, 0LL, 0LL, a4);
  v12 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v8, (__int64)v5);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v9) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v12 + 33), v9, 1);
    }
    else
    {
      *((_BYTE *)v12 + 10) = 1;
    }
  }
  if ( !*(_DWORD *)(a1 + 22064) )
  {
    v13 = MiInitializeSlabIdentities(a1);
    if ( v13 < 0 )
      goto LABEL_13;
    *(_DWORD *)(a1 + 22064) = 1;
  }
  MiDeletePendingSlabIdentities(a1, 1, v10, v11);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 22040), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v13 = -1073741298;
  }
  else
  {
    *(_QWORD *)(a1 + 8LL * ClearBitsAndSet + 21528) = 1LL;
    v13 = 0;
    *a2 = ClearBitsAndSet;
  }
LABEL_13:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v16, v15);
  return (unsigned int)v13;
}
