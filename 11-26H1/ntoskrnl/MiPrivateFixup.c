/*
 * XREFs of MiPrivateFixup @ 0x14051FCB0
 * Callers:
 *     MiProtoFaultApplyPrivateFixups @ 0x1402BC040 (MiProtoFaultApplyPrivateFixups.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiGetSubsectionFromPte @ 0x140282C30 (MiGetSubsectionFromPte.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402CAC30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x1402D7DB0 (MiAddLockedPageCharge.c)
 *     MiObtainFaultCharges @ 0x1402D83D0 (MiObtainFaultCharges.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiIsFaultPteIntact @ 0x14031E538 (MiIsFaultPteIntact.c)
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiReturnFaultCharges @ 0x14033AD8C (MiReturnFaultCharges.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializeReadInProgressPfn @ 0x140375570 (MiInitializeReadInProgressPfn.c)
 *     MiRelockFaultState @ 0x14038DE50 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     MiGetSessionIdForVa @ 0x14038FF58 (MiGetSessionIdForVa.c)
 *     MiGetInPageSupportBlock @ 0x140398D70 (MiGetInPageSupportBlock.c)
 *     MiCanPfnOriginalPteBeLost @ 0x140401770 (MiCanPfnOriginalPteBeLost.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     MiSetSubsectionModified @ 0x140456AF0 (MiSetSubsectionModified.c)
 *     MiDereferenceControlAreaProbe @ 0x140481CEC (MiDereferenceControlAreaProbe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiRelocateImagePfn @ 0x14099FA2C (MiRelocateImagePfn.c)
 *     MiAllocateDriverPage @ 0x140AEDA3C (MiAllocateDriverPage.c)
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
  __int64 v19; // r9
  __int64 DriverPage; // r12
  __int64 v21; // r8
  __int64 v22; // rdx
  int IsFaultPteIntact; // ecx
  __int64 v24; // r8
  __int64 Page; // rax
  unsigned int v26; // esi
  __int64 v27; // rsi
  PSLIST_ENTRY v28; // r13
  unsigned int v29; // eax
  char EffectivePagePriorityThread; // al
  unsigned __int64 v31; // r12
  __int64 *v32; // r9
  __int64 v33; // r9
  volatile signed __int64 *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rdi
  struct _KLOCK_ENTRIES *v40; // r9
  AutoBoost *v41; // rax
  volatile unsigned __int8 *v42; // rdx
  AutoBoost *v43; // rdi
  int ProtectionPfnCompatible; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  bool v47; // zf
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 CurrentIrql; // rcx
  int v51; // edi
  _DWORD *SubsectionFromPte; // r8
  unsigned __int64 v53; // r9
  int v54; // ebx
  __int64 v55; // rcx
  int v56; // r11d
  unsigned __int8 v57; // r10
  char v58; // [rsp+30h] [rbp-61h]
  int v59; // [rsp+30h] [rbp-61h]
  unsigned __int8 v60[4]; // [rsp+48h] [rbp-49h] BYREF
  int v61; // [rsp+4Ch] [rbp-45h]
  volatile signed __int64 *v62; // [rsp+50h] [rbp-41h]
  unsigned __int64 v63; // [rsp+58h] [rbp-39h]
  ULONG_PTR v64; // [rsp+60h] [rbp-31h] BYREF
  __int64 *v65; // [rsp+68h] [rbp-29h]
  __int64 *v66; // [rsp+70h] [rbp-21h]
  ULONG *v67; // [rsp+78h] [rbp-19h] BYREF
  __int64 v68; // [rsp+80h] [rbp-11h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-9h]
  __int64 v70[9]; // [rsp+90h] [rbp-1h] BYREF
  __int64 *v71; // [rsp+E8h] [rbp+57h] BYREF
  volatile signed __int64 **v72; // [rsp+F0h] [rbp+5Fh]
  __int64 v73; // [rsp+F8h] [rbp+67h]
  __int64 v74; // [rsp+100h] [rbp+6Fh]

  v74 = a4;
  v73 = a3;
  v72 = a2;
  v71 = a1;
  CurrentThread = KeGetCurrentThread();
  v65 = a1 + 7;
  v8 = a1[7];
  v9 = 0;
  v60[0] = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v11 = *a1;
  v12 = *(_DWORD *)(v8 + 184);
  v63 = *a1;
  v68 = Process;
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
  v61 = 0;
  v18 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * v16);
  v67 = v18;
  if ( v11 < 0xFFFF800000000000uLL )
  {
    if ( (KeGetCurrentThread()->ApcState.Process->SecureState.EntireField & 1) == 0 )
LABEL_12:
      v61 = 1;
  }
  else if ( (MiFlags & 0x20000) == 0 || (MiFlags & 0x8000) == 0 || (v17 & 2) == 0 )
  {
    goto LABEL_12;
  }
  v66 = (__int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v70[0] = *v66;
  BugCheckParameter2 = (a4 + 0x220000000000LL) / 48;
  MiObtainFaultCharges(v18, 1uLL, 2, a4);
  if ( v61 || v63 < 0xFFFF800000000000uLL )
  {
    v29 = MI_PAGE_TO_FULL_COLOR(BugCheckParameter2);
    Page = MiGetPage((__int64)v18, v29, 1u);
    v64 = Page;
    DriverPage = Page;
    if ( Page == -1 )
    {
      v26 = -1073741670;
      goto LABEL_20;
    }
  }
  else
  {
    v62 = (volatile signed __int64 *)MiReleaseFaultState((__int64)(a1 + 7), 1u, (__int64)v60, v19);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v60[0]);
    __writecr8(v60[0]);
    DriverPage = MiAllocateDriverPage(v18, v17, 0LL);
    v64 = DriverPage;
    MiRelockFaultState((__int64)(a1 + 7), (__int64)v62, v21);
    IsFaultPteIntact = MiIsFaultPteIntact((__int64)a1, *a1, v66, v70);
    Page = DriverPage;
    v26 = IsFaultPteIntact != 0 ? 0 : 0xC0000434;
    if ( !IsFaultPteIntact )
      goto LABEL_20;
  }
  v27 = 48 * Page - 0x220000000000LL;
  v28 = MiGetInPageSupportBlock(2, 0LL);
  if ( !v28 )
  {
    v26 = -1073741670;
LABEL_20:
    if ( DriverPage != -1 )
      MiReleaseFreshPageAtDpc(48 * DriverPage - 0x220000000000LL, v22, v24);
    MiReturnFaultCharges((__int64)v67, 1LL);
    return v26;
  }
  LODWORD(v62) = 0;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v31 = v63;
  v32 = v66;
  v28[16].Next = (_SLIST_ENTRY *)v27;
  LOBYTE(v62) = EffectivePagePriorityThread & 7 | 0x48;
  *((_DWORD *)&v28[11].Next + 3) |= 0x80u;
  v58 = (char)v62;
  LODWORD(v28[5].Next) = 0;
  *((_QWORD *)&v28[5].Next + 1) = 0LL;
  MiInitializeReadInProgressPfn(v31, (__int64 *)&v64, 1, (__int64)v32, (__int64)v28, v58);
  if ( !v13 )
    _InterlockedIncrement64((volatile signed __int64 *)(v68 + 648));
  v67 = (ULONG *)*v66;
  v34 = *v72;
  v28[12].Next = (_SLIST_ENTRY *)v72;
  v62 = v34;
  _InterlockedAdd64(v34 + 14, 1uLL);
  v35 = (__int64)v65;
  v36 = MiReleaseFaultState((__int64)v65, 1u, (__int64)v60, v33);
  --CurrentThread->SpecialApcDisable;
  v68 = v36;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v60[0]);
  __writecr8(v60[0]);
  MiCopyPage(v64, BugCheckParameter2, v61 != 0 ? 73 : 17);
  if ( v61 )
  {
    v39 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 1u, v37, v38);
    if ( !v39 )
    {
      --CurrentThread->SpecialApcDisable;
      v41 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140E2D2D0.SchedulingGroup, 0LL, 0LL, v40);
      v43 = v41;
      if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140E2D2D0.SchedulingGroup, 0LL) )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&stru_140E2D2D0.SchedulingGroup,
          v41,
          (__int64)&stru_140E2D2D0.SchedulingGroup);
      if ( v43 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v42) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v43 + 33), v42, 1);
        }
        else
        {
          *((_BYTE *)v43 + 10) = 1;
        }
      }
      v39 = *(_QWORD *)&stru_140E2D2D0.WaitRegister.Flags;
    }
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v27);
    *(_QWORD *)v39 = MiMakeValidPte(v39, v64, ProtectionPfnCompatible | 0xA0000000);
    if ( *(__int64 *)(v74 + 8) <= 0 || (*(_QWORD *)(v74 + 40) & 0x10000000000LL) != 0 )
    {
      MiGetSessionIdForVa(v63);
      MiRelocateImagePfn((_DWORD)v62, (__int64)(v39 << 25) >> 16, v73, v64, a5, v59, a6 | 0x24);
    }
    if ( v39 == *(_QWORD *)&stru_140E2D2D0.WaitRegister.Flags )
    {
      *(_QWORD *)v39 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      MiFlushSingleTbEntry((__int64)(v39 << 25) >> 16, 2LL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140E2D2D0.SchedulingGroup, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140E2D2D0.SchedulingGroup);
      KeAbPostRelease((unsigned __int64)&stru_140E2D2D0.SchedulingGroup);
      v47 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v47
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v46, v45);
      }
    }
    else
    {
      MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned __int64 *)v39, 1u);
    }
    v31 = v63;
    v35 = (__int64)v65;
  }
  MiDereferenceControlAreaProbe(v62, 0);
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v48) = 1;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v48);
  }
  v47 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v47 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(CurrentIrql, v48);
  MiRelockFaultState(v35, v68, v49);
  v51 = MiIsFaultPteIntact((__int64)v71, *v71, v66, &v67);
  LODWORD(v71) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v71);
    while ( *(__int64 *)(v27 + 24) < 0 );
  }
  *(_DWORD *)(v27 + 32) &= ~0x200000u;
  *(_QWORD *)v27 = 0LL;
  if ( (*(_QWORD *)(v27 + 24) & 0x4000000000000000LL) == 0 )
  {
    v54 = *(_DWORD *)(v27 + 32);
    v53 = 1024LL;
    if ( *(__int64 *)(v27 + 40) < 0 && (*(_QWORD *)(v27 + 16) & 0x400000000000400LL) == 0x400 )
    {
      SubsectionFromPte = (_DWORD *)MiGetSubsectionFromPte(*(_QWORD *)(v27 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x820) == 0x20 && (SubsectionFromPte[8] & 0x20000) == 0 )
        KeBugCheckEx(0x1Au, 0x8840uLL, v27, 0LL, 1uLL);
    }
    if ( *(__int64 *)(v27 + 40) < 0
      && (*(_DWORD *)(v27 + 16) & (unsigned int)v53) != 0
      && (*(_QWORD *)(v27 + 24) & 0x4000000000000000LL) == 0 )
    {
      v55 = MiGetSubsectionFromPte(*(_QWORD *)(v27 + 16));
      if ( (*(_DWORD *)(*(_QWORD *)v55 + 56LL) & 0x20) == 0 && (*(_DWORD *)(v55 + 152) & 1) == 0 )
        MiSetSubsectionModified((__int64 *)v55, 0);
    }
    v56 = 0x100000;
    if ( (v54 & 0x80000) != 0
      && MiCanPfnOriginalPteBeLost(v27)
      && (v54 & v56) == 0
      && (((unsigned __int8)*(_DWORD *)(v27 + 16) >> 3) & v57) != 0 )
    {
      *(_QWORD *)(v27 + 16) &= ~8uLL;
    }
    *(_DWORD *)(v27 + 32) = v56 | v54;
  }
  if ( v51 )
  {
    MiAddLockedPageCharge(v27, 3, (__int64)SubsectionFromPte, v53);
    *(_QWORD *)(v27 + 24) = (*(_QWORD *)(v27 + 24) + 1LL) ^ ((*(_QWORD *)(v27 + 24) + 1LL) ^ *(_QWORD *)(v27 + 24)) & 0xC000000000000000uLL;
    *(_DWORD *)(v27 + 32) = *(_DWORD *)(v27 + 32) & 0xFFF8FFFF | 0x60000;
    if ( !v61 && v31 >= 0xFFFF800000000000uLL )
      *(_BYTE *)(v27 + 35) |= 8u;
  }
  else
  {
    v9 = -1073740748;
  }
  MiRemoveLockedPageChargeAndDecRef(v27);
  _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *((_DWORD *)&v28[11].Next + 3) &= ~0x80u;
  if ( SLODWORD(v28[11].Next) > 1 )
    KeSetEvent((PRKEVENT)(&v28[3].Next + 1), 0, 0);
  MiFreeInPageSupportBlock(v28);
  return v9;
}
