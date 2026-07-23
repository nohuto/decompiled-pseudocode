/*
 * XREFs of MmGetPageFileForCrashDump @ 0x140872F78
 * Callers:
 *     IoConfigureCrashDump @ 0x1405C8CB0 (IoConfigureCrashDump.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MmGetPageFileForCrashDump(_OWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rbp
  unsigned __int64 v7; // r15
  AutoBoost *v8; // rax
  void *v9; // rdx
  signed __int8 v10; // cf
  AutoBoost *v11; // rsi
  char *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  $241382875694CED3D471BC5892DE3337 *v17; // rcx

  *a1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E37F48.ReadTransferCount, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140E37F48.ReadTransferCount, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140E37F48.ReadTransferCount,
      v8,
      (__int64)&stru_140E37F48.ReadTransferCount);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v9);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( Count )
  {
    v12 = (char *)&unk_140E3D560;
    v13 = Count;
    do
    {
      v14 = *(_QWORD *)v12;
      if ( (*(_WORD *)(*(_QWORD *)v12 + 172LL) & 0x850) == 0 && *(unsigned int *)(v14 + 8) > v7 )
      {
        v6 = *(_QWORD *)(v14 + 192);
        v7 = *(unsigned int *)(v14 + 8);
        if ( a1 )
          *a1 = *(_OWORD *)(v14 + 64);
      }
      v12 += 8;
      --v13;
    }
    while ( v13 );
  }
  if ( (_InterlockedExchangeAdd64(&stru_140E37F48.ReadTransferCount, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140E37F48.ReadTransferCount);
  KeAbPostRelease((unsigned __int64)&stru_140E37F48.ReadTransferCount);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v17 = &CurrentThread->152;
    if ( ($241382875694CED3D471BC5892DE3337 *)v17->ApcState.ApcListHead[0].Flink != v17 )
      KiCheckForKernelApcDelivery((__int64)v17, v15);
  }
  return v6;
}
