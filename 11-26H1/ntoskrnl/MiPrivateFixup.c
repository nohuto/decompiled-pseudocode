/*
 * XREFs of MiPrivateFixup @ 0x14051D784
 * Callers:
 *     MiProtoFaultApplyPrivateFixups @ 0x1402DA280 (MiProtoFaultApplyPrivateFixups.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     MiFlushSingleTbEntry @ 0x140285050 (MiFlushSingleTbEntry.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028DF90 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiCopyPage @ 0x140293FA4 (MiCopyPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295CA0 (MiReleaseFreshPageAtDpc.c)
 *     MiMakeValidPte @ 0x1402DA020 (MiMakeValidPte.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x1402F5D30 (MiAddLockedPageCharge.c)
 *     MiObtainFaultCharges @ 0x1402F6350 (MiObtainFaultCharges.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     MiIsFaultPteIntact @ 0x14031C508 (MiIsFaultPteIntact.c)
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiReturnFaultCharges @ 0x140338D0C (MiReturnFaultCharges.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033C7D0 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403719B0 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializeReadInProgressPfn @ 0x1403737C0 (MiInitializeReadInProgressPfn.c)
 *     MiRelockFaultState @ 0x14038C0A0 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     MiGetSessionIdForVa @ 0x14038E1A8 (MiGetSessionIdForVa.c)
 *     MiGetInPageSupportBlock @ 0x140396FF0 (MiGetInPageSupportBlock.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140408680 (MiCanPfnOriginalPteBeLost.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiSetSubsectionModified @ 0x14045CF48 (MiSetSubsectionModified.c)
 *     MiDereferenceControlAreaProbe @ 0x1404881AC (MiDereferenceControlAreaProbe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     MiRelocateImagePfn @ 0x1409CEA4C (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x140AEAC6C (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiPrivateFixup(
        __int64 *a1,
        volatile signed __int64 **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v8; // rcx
  unsigned int v9; // r14d
  __int64 Process; // rax
  unsigned __int64 v11; // rdx
  int v12; // edi
  char v13; // di
  struct _KTHREAD *v14; // rax
  __int64 v16; // rcx
  unsigned int v17; // esi
  ULONG *v18; // r12
  __int64 DriverPage; // r12
  __int64 v20; // r8
  __int64 v21; // rdx
  int IsFaultPteIntact; // ecx
  __int64 v23; // r8
  __int64 Page; // rax
  unsigned int v25; // esi
  __int64 v26; // rsi
  PSLIST_ENTRY v27; // r13
  unsigned int v28; // eax
  char EffectivePagePriorityThread; // al
  unsigned __int64 v30; // r12
  __int64 *v31; // r9
  volatile signed __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r8
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rdi
  struct _KLOCK_ENTRIES *v38; // r9
  AutoBoost *v39; // rax
  volatile unsigned __int8 *v40; // rdx
  AutoBoost *v41; // rdi
  int ProtectionPfnCompatible; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  bool v45; // zf
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 CurrentIrql; // rcx
  int v49; // edi
  _DWORD *SubsectionFromPte; // r8
  unsigned __int64 v51; // r9
  int v52; // ebx
  __int64 v53; // rcx
  int v54; // r11d
  unsigned __int8 v55; // r10
  char v56; // [rsp+30h] [rbp-61h]
  int v57; // [rsp+30h] [rbp-61h]
  unsigned __int8 v58[4]; // [rsp+48h] [rbp-49h] BYREF
  int v59; // [rsp+4Ch] [rbp-45h]
  volatile signed __int64 *v60; // [rsp+50h] [rbp-41h]
  unsigned __int64 v61; // [rsp+58h] [rbp-39h]
  ULONG_PTR v62; // [rsp+60h] [rbp-31h] BYREF
  __int64 *v63; // [rsp+68h] [rbp-29h]
  __int64 *v64; // [rsp+70h] [rbp-21h]
  ULONG *v65; // [rsp+78h] [rbp-19h] BYREF
  __int64 v66; // [rsp+80h] [rbp-11h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-9h]
  __int64 v68[9]; // [rsp+90h] [rbp-1h] BYREF
  __int64 *v69; // [rsp+E8h] [rbp+57h] BYREF
  volatile signed __int64 **v70; // [rsp+F0h] [rbp+5Fh]
  __int64 v71; // [rsp+F8h] [rbp+67h]
  __int64 v72; // [rsp+100h] [rbp+6Fh]

  v72 = a4;
  v71 = a3;
  v70 = a2;
  v69 = a1;
  CurrentThread = KeGetCurrentThread();
  v63 = a1 + 7;
  v8 = a1[7];
  v9 = 0;
  v58[0] = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v11 = *a1;
  v12 = *(_DWORD *)(v8 + 184);
  v61 = *a1;
  v66 = Process;
  v13 = v12 & 0xF;
  if ( !v13 )
  {
    v14 = *(struct _KTHREAD **)(Process + 624);
    if ( v14 )
    {
      if ( v14 != CurrentThread )
        *((_DWORD *)a1 + 20) |= 2u;
      return 297LL;
    }
  }
  v16 = *(unsigned __int16 *)(v8 + 174);
  v17 = (*(_DWORD *)(a4 + 16) >> 5) & 0x1F;
  v59 = 0;
  v18 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8 * v16);
  v65 = v18;
  if ( v11 < 0xFFFF800000000000uLL )
  {
    if ( (KeGetCurrentThread()->ApcState.Process->SecureState.EntireField & 1) == 0 )
LABEL_12:
      v59 = 1;
  }
  else if ( (MiFlags & 0x20000) == 0 || (MiFlags & 0x8000) == 0 || (v17 & 2) == 0 )
  {
    goto LABEL_12;
  }
  v64 = (__int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v68[0] = *v64;
  BugCheckParameter2 = (a4 + 0x220000000000LL) / 48;
  MiObtainFaultCharges(v18, 1uLL, 2, a4);
  if ( v59 || v61 < 0xFFFF800000000000uLL )
  {
    v28 = MI_PAGE_TO_FULL_COLOR(BugCheckParameter2);
    Page = MiGetPage((__int64)v18, v28, 1u);
    v62 = Page;
    DriverPage = Page;
    if ( Page == -1 )
    {
      v25 = -1073741670;
      goto LABEL_20;
    }
  }
  else
  {
    v60 = (volatile signed __int64 *)MiReleaseFaultState((__int64)(a1 + 7), 1u, v58);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v58[0]);
    __writecr8(v58[0]);
    DriverPage = MiAllocateDriverPage(v18, v17, 0LL);
    v62 = DriverPage;
    MiRelockFaultState((__int64)(a1 + 7), (__int64)v60, v20);
    IsFaultPteIntact = MiIsFaultPteIntact((__int64)a1, *a1, v64, v68);
    Page = DriverPage;
    v25 = IsFaultPteIntact != 0 ? 0 : 0xC0000434;
    if ( !IsFaultPteIntact )
      goto LABEL_20;
  }
  v26 = 48 * Page - 0x220000000000LL;
  v27 = MiGetInPageSupportBlock(2, 0LL);
  if ( !v27 )
  {
    v25 = -1073741670;
LABEL_20:
    if ( DriverPage != -1 )
      MiReleaseFreshPageAtDpc(48 * DriverPage - 0x220000000000LL, v21, v23);
    MiReturnFaultCharges((__int64)v65, 1LL);
    return v25;
  }
  LODWORD(v60) = 0;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v30 = v61;
  v31 = v64;
  v27[16].Next = (_SLIST_ENTRY *)v26;
  LOBYTE(v60) = EffectivePagePriorityThread & 7 | 0x48;
  *((_DWORD *)&v27[11].Next + 3) |= 0x80u;
  v56 = (char)v60;
  LODWORD(v27[5].Next) = 0;
  *((_QWORD *)&v27[5].Next + 1) = 0LL;
  MiInitializeReadInProgressPfn(v30, (__int64 *)&v62, 1, (__int64)v31, (__int64)v27, v56);
  if ( !v13 )
    _InterlockedIncrement64((volatile signed __int64 *)(v66 + 648));
  v65 = (ULONG *)*v64;
  v32 = *v70;
  v27[12].Next = (_SLIST_ENTRY *)v70;
  v60 = v32;
  _InterlockedAdd64(v32 + 14, 1uLL);
  v33 = (__int64)v63;
  v34 = MiReleaseFaultState((__int64)v63, 1u, v58);
  --CurrentThread->SpecialApcDisable;
  v66 = v34;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v58[0]);
  __writecr8(v58[0]);
  MiCopyPage(v62, BugCheckParameter2, v59 != 0 ? 73 : 17);
  if ( v59 )
  {
    v37 = MiReservePtes((__int64)&stru_140E36558.WaitBlockList, 1u, v35, v36);
    if ( !v37 )
    {
      --CurrentThread->SpecialApcDisable;
      v39 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2D150.SchedulingGroup, 0LL, 0LL, v38);
      v41 = v39;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E2D150.SchedulingGroup, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&stru_140E2D150.SchedulingGroup,
          v39,
          (__int64)&stru_140E2D150.SchedulingGroup);
      if ( v41 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v40) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v41 + 33), v40, 1);
        }
        else
        {
          *((_BYTE *)v41 + 10) = 1;
        }
      }
      v37 = *(_QWORD *)&stru_140E2D150.WaitRegister.Flags;
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v26);
    *(_QWORD *)v37 = MiMakeValidPte(v37, v62, ProtectionPfnCompatible | 0xA0000000);
    if ( *(__int64 *)(v72 + 8) <= 0 || (*(_QWORD *)(v72 + 40) & 0x10000000000LL) != 0 )
    {
      MiGetSessionIdForVa(v61);
      MiRelocateImagePfn((_DWORD)v60, (__int64)(v37 << 25) >> 16, v71, v62, a5, v57, a6 | 0x24);
    }
    if ( v37 == *(_QWORD *)&stru_140E2D150.WaitRegister.Flags )
    {
      *(_QWORD *)v37 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry((__int64)(v37 << 25) >> 16, 2LL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E2D150.SchedulingGroup, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2D150.SchedulingGroup);
      KeAbPostRelease((unsigned __int64)&stru_140E2D150.SchedulingGroup);
      v45 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v45
        && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v44, v43);
      }
    }
    else
    {
      MiReleasePtes((__int64)&stru_140E36558.WaitBlockList, (unsigned __int64 *)v37, 1u);
    }
    v30 = v61;
    v33 = (__int64)v63;
  }
  MiDereferenceControlAreaProbe(v60, 0);
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v46) = 1;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v46);
  }
  v45 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v45 && ($7A85BAF4F1FA08634C1C4A3E45B775B3 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(CurrentIrql, v46);
  MiRelockFaultState(v33, v66, v47);
  v49 = MiIsFaultPteIntact((__int64)v69, *v69, v64, &v65);
  LODWORD(v69) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v69);
    while ( *(__int64 *)(v26 + 24) < 0 );
  }
  *(_DWORD *)(v26 + 32) &= ~0x200000u;
  *(_QWORD *)v26 = 0LL;
  if ( (*(_QWORD *)(v26 + 24) & 0x4000000000000000LL) == 0 )
  {
    v52 = *(_DWORD *)(v26 + 32);
    v51 = 1024LL;
    if ( *(__int64 *)(v26 + 40) < 0 && (*(_QWORD *)(v26 + 16) & 0x400000000000400LL) == 0x400 )
    {
      SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v26 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
        KeBugCheckEx(0x1Au, 0x8840uLL, v26, 0LL, 1uLL);
    }
    if ( *(__int64 *)(v26 + 40) < 0
      && (*(_DWORD *)(v26 + 16) & (unsigned int)v51) != 0
      && (*(_QWORD *)(v26 + 24) & 0x4000000000000000LL) == 0 )
    {
      v53 = MiGetSubsectionFromPte(*(_QWORD *)(v26 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)v53 + 56LL) & 0x20) == 0 && (*(_DWORD *)(v53 + 152) & 1) == 0 )
        MiSetSubsectionModified((__int64 *)v53, 0);
    }
    v54 = 0x100000;
    if ( (v52 & 0x80000) != 0
      && MiCanPfnOriginalPteBeLost(v26)
      && (v52 & v54) == 0
      && (((unsigned __int8)*(_DWORD *)(v26 + 16) >> 3) & v55) != 0 )
    {
      *(_QWORD *)(v26 + 16) &= ~8uLL;
    }
    *(_DWORD *)(v26 + 32) = v54 | v52;
  }
  if ( v49 )
  {
    MiAddLockedPageCharge(v26, 3, (__int64)SubsectionFromPte, v51);
    *(_QWORD *)(v26 + 24) = (*(_QWORD *)(v26 + 24) + 1LL) ^ ((*(_QWORD *)(v26 + 24) + 1LL) ^ *(_QWORD *)(v26 + 24)) & 0xC000000000000000uLL;
    *(_DWORD *)(v26 + 32) = *(_DWORD *)(v26 + 32) & 0xFFF8FFFF | 0x60000;
    if ( !v59 && v30 >= 0xFFFF800000000000uLL )
      *(_BYTE *)(v26 + 35) |= 8u;
  }
  else
  {
    v9 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(v26);
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *((_DWORD *)&v27[11].Next + 3) &= ~0x80u;
  if ( SLODWORD(v27[11].Next) > 1 )
    KeSetEvent((PRKEVENT)(&v27[3].Next + 1), 0, 0);
  MiFreeInPageSupportBlock(v27);
  return v9;
}
