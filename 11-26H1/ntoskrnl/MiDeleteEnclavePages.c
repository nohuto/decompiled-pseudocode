/*
 * XREFs of MiDeleteEnclavePages @ 0x140C07CE8
 * Callers:
 *     MiCreateHardwareEnclave @ 0x14087C4D4 (MiCreateHardwareEnclave.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140C07A84 (MiDeleteAllHardwareEnclaves.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiDeleteEnclavePage @ 0x140342680 (MiDeleteEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x140343280 (KeRemoveEnclavePage.c)
 *     MiReturnEnclavePage @ 0x140343FC4 (MiReturnEnclavePage.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PsDeleteVsmEnclave @ 0x140804538 (PsDeleteVsmEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x140C07FA8 (MiReturnReservedEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x140C08014 (MiTerminateHardwareEnclave.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteEnclavePages(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // eax
  _QWORD *v6; // r14
  unsigned __int64 v7; // rdi
  int v8; // eax
  void *v9; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  void *v13; // rdx
  signed __int8 v14; // cf
  AutoBoost *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int64 *PteAddress; // rax
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v24; // rdx

  v4 = *(_DWORD *)(a2 + 72);
  if ( (v4 & 1) != 0 )
  {
    v6 = (_QWORD *)(a2 + 136);
    if ( *(_QWORD *)(a2 + 136) )
    {
      if ( (v4 & 8) == 0 )
        MiTerminateHardwareEnclave(a1, a2);
      v7 = *(_QWORD *)(a2 + 88);
      if ( (*(_QWORD *)v7 & 1) != 0 )
      {
        v8 = KeRemoveEnclavePage((__int64)(v7 << 25) >> 16);
        if ( (int)(v8 + 0x80000000) >= 0 && v8 != -1073741795 )
          KeBugCheckEx(0x1Au, 0x51601uLL, v7, v8, 0LL);
        MiDeleteEnclavePage(v7, 0LL);
      }
      MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned __int64 *)v7, 1u);
      v9 = *(void **)(a2 + 96);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      MiReturnReservedEnclavePages(a2, -1LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v12 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E366D8.StateSaveArea, 0LL, 0LL, v11);
      v14 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140E366D8.StateSaveArea, 0LL);
      v15 = v12;
      if ( v14 )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&stru_140E366D8.StateSaveArea,
          v12,
          (__int64)&stru_140E366D8.StateSaveArea);
      if ( v15 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v15, v13);
        else
          *((_BYTE *)v15 + 10) = 1;
      }
      v16 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v17 = (_QWORD *)v6[1], (_QWORD *)*v17 != v6) )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      *v6 = 0LL;
      if ( *(struct _KTHREAD **)&stru_140E366D8.CurrentRunTime == (struct _KTHREAD *)&stru_140E366D8.CurrentRunTime )
      {
        KeRemoveEnclavePage((__int64)stru_140E366D8.StackLimit);
        PteAddress = (unsigned __int64 *)MiGetPteAddress((unsigned __int64)stru_140E366D8.StackLimit);
        stru_140E366D8.StackLimit = 0LL;
        v19 = *PteAddress;
        MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, PteAddress, 1u);
        MiReturnEnclavePage((v19 >> 12) & 0xFFFFFFFFFFLL, v20);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E366D8.StateSaveArea, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E366D8.StateSaveArea);
      KeAbPostRelease((unsigned __int64)&stru_140E366D8.StateSaveArea);
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v22, v21);
      }
    }
  }
  else
  {
    v24 = *(_QWORD **)(a2 + 80);
    if ( v24 )
      PsDeleteVsmEnclave(a1, v24, a3, a4);
  }
}
