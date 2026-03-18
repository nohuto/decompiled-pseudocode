/*
 * XREFs of MiDeleteHotPatchEntry @ 0x14086FA4C
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x14086E8A8 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteVadHotPatchState @ 0x140B55460 (MiDeleteVadHotPatchState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiGetProcessHotPatchContext @ 0x14086FFF8 (MiGetProcessHotPatchContext.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteHotPatchEntry(char *P)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbx
  void *v4; // rcx
  __int64 ProcessHotPatchContext; // rax
  unsigned __int64 *v6; // rbp
  struct _KLOCK_ENTRIES *v7; // r9
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // r14
  _QWORD *v11; // rcx
  PVOID *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  RtlFreeAnsiString((PUNICODE_STRING)(P + 40));
  v4 = (void *)*((_QWORD *)P + 3);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( *(_QWORD *)P )
  {
    ProcessHotPatchContext = MiGetProcessHotPatchContext(Process, 0LL);
    --CurrentThread->SpecialApcDisable;
    v6 = (unsigned __int64 *)(ProcessHotPatchContext + 16);
    v8 = (AutoBoost *)KeAbPreAcquire(ProcessHotPatchContext + 16, 0LL, 0LL, v7);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v8, (__int64)v6);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    v11 = *(_QWORD **)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v12 = (PVOID *)*((_QWORD *)P + 1), *v12 != P) )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = v12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((unsigned __int64)v6);
    v15 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v15 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v14, v13);
  }
  ExFreePoolWithTag(P, 0);
}
