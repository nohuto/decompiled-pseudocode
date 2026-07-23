/*
 * XREFs of MiCreateHardwareEnclave @ 0x14087C4D4
 * Callers:
 *     MiCreateEnclave @ 0x14087C3B8 (MiCreateEnclave.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiAllocateEnclavePages @ 0x14033995C (MiAllocateEnclavePages.c)
 *     MiInitializeEnclavePfn @ 0x140343B28 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x140343DD0 (MiReserveEnclavePages.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     MiGetVmPartition @ 0x140447EB0 (MiGetVmPartition.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 *     KeGetIdealNodeNumberThread @ 0x140485DEC (KeGetIdealNodeNumberThread.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140704D20 (MiPrepareEnclaveMetadataPage.c)
 *     KeCreateEnclave @ 0x1407BCFEC (KeCreateEnclave.c)
 *     MiDeleteEnclavePages @ 0x140C07CE8 (MiDeleteEnclavePages.c)
 */

__int64 __fastcall MiCreateHardwareEnclave(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v8; // rdx
  _KPROCESS *Process; // r15
  unsigned __int64 v10; // r12
  __int64 v11; // r12
  __int64 VmPartition; // r13
  struct _KLOCK_ENTRIES *v13; // r9
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // rbp
  _QWORD *KernelStack; // rcx
  unsigned int **v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // r9
  bool v24; // zf
  int v25; // ebx
  unsigned __int16 IdealNodeNumberThread; // ax
  __int64 *v27; // rax
  unsigned __int64 v28; // rsi
  __int64 v29; // kr00_8
  unsigned __int64 ValidPte; // rax
  int v31; // ecx
  int v32; // ecx
  __int16 v33; // ax
  int v34; // [rsp+20h] [rbp-78h]
  __int64 v35; // [rsp+40h] [rbp-58h]
  __int128 v36; // [rsp+48h] [rbp-50h] BYREF
  __int64 v37; // [rsp+58h] [rbp-40h]
  unsigned __int64 v38; // [rsp+A0h] [rbp+8h]
  int v39; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v40; // [rsp+B8h] [rbp+20h]

  v40 = a4;
  CurrentThread = KeGetCurrentThread();
  v8 = *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32);
  Process = CurrentThread->ApcState.Process;
  v10 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
  v39 = 0;
  v11 = (v10 << 12) | 0xFFF;
  v37 = 0LL;
  v36 = 0LL;
  v35 = v8 << 12;
  VmPartition = MiGetVmPartition((__int64)&Process[2].ReadyListHead.Blink);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&stru_140E366D8.SchedulingGroup) )
    return 3221225738LL;
  *(_QWORD *)(a2 + 128) = Process;
  --CurrentThread->SpecialApcDisable;
  v15 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E366D8.StateSaveArea, 0LL, 0LL, v13);
  v17 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E366D8.StateSaveArea, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&stru_140E366D8.StateSaveArea,
      v15,
      (__int64)&stru_140E366D8.StateSaveArea);
  if ( v17 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v17, v16);
    else
      *((_BYTE *)v17 + 10) = 1;
  }
  KernelStack = stru_140E366D8.KernelStack;
  v19 = (unsigned int **)(a2 + 136);
  if ( *(struct _KTHREAD **)stru_140E366D8.KernelStack != (struct _KTHREAD *)&stru_140E366D8.CurrentRunTime )
    __fastfail(3u);
  *v19 = &stru_140E366D8.CurrentRunTime;
  *(_QWORD *)(a2 + 144) = KernelStack;
  *KernelStack = v19;
  stru_140E366D8.KernelStack = (void *)(a2 + 136);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E366D8.StateSaveArea, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E366D8.StateSaveArea);
  KeAbPostRelease((unsigned __int64)&stru_140E366D8.StateSaveArea);
  v24 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v24 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v21, v20);
  v25 = MiPrepareEnclaveMetadataPage(v21, v20, v22, v23);
  if ( v25 >= 0 )
  {
    if ( !a3 || (v25 = MiReserveEnclavePages(a2, VmPartition, (a3 >> 12) + ((a3 & 0xFFF) != 0)), v25 >= 0) )
    {
      IdealNodeNumberThread = KeGetIdealNodeNumberThread((__int64)KeGetCurrentThread());
      MiAllocateEnclavePages(VmPartition, IdealNodeNumberThread, 0, 1LL, &v36);
      if ( MiPageChainCount((__int64)&v36) )
      {
        v27 = MiUnlinkPageChainHead((__int64)&v36);
        v28 = *(_QWORD *)(a2 + 88);
        v29 = (__int64)(v27 + 0x44000000000LL);
        MiInitializeEnclavePfn((__int64)(v27 + 0x44000000000LL) / 48, v28, 4, 0);
        ValidPte = MiMakeValidPte(v28, v29 / 48, -1610612732);
        v38 = ValidPte;
        v31 = 0;
        if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v31 = MiSanitizeShadowPxe();
          ValidPte = v38;
        }
        *(_QWORD *)v28 = ValidPte;
        if ( v31 )
          MiWritePteShadow();
        v32 = (*(_DWORD *)(a2 + 80) & 1) << 8;
        if ( !Process[1].ReadyTime || (v33 = WORD2(Process[3].PerProcessorCycleTimes), v33 != 332) && v33 != 452 )
          LOWORD(v32) = v32 | 1;
        v25 = KeCreateEnclave((__int64)(v28 << 25) >> 16, v35, v11 - v35 + 1, v40, v34, v32, &v39, a5);
        if ( v25 >= 0 )
        {
          if ( (v39 & 2) != 0 )
            *(_DWORD *)(a2 + 72) |= 4u;
          v25 = 0;
          goto LABEL_22;
        }
      }
      else
      {
        v25 = -1073741801;
      }
    }
  }
  *(_DWORD *)(a2 + 72) |= 8u;
  MiDeleteEnclavePages(Process, a2);
LABEL_22:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140E366D8.SchedulingGroup);
  return (unsigned int)v25;
}
