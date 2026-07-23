/*
 * XREFs of MmInitializeProcessAddressSpace @ 0x140A08138
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     MiInitializeBootProcess @ 0x140CF8124 (MiInitializeBootProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiGetSharedVm @ 0x140441D90 (MiGetSharedVm.c)
 *     ExInitializeAutoExpandPushLock @ 0x14046E140 (ExInitializeAutoExpandPushLock.c)
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 *     MiInitializeProcessPageTableCommitmentBitMaps @ 0x1404C37E0 (MiInitializeProcessPageTableCommitmentBitMaps.c)
 *     MiInitializeWorkingSetList @ 0x1404CD360 (MiInitializeWorkingSetList.c)
 *     MiAllowWorkingSetExpansion @ 0x1404D1810 (MiAllowWorkingSetExpansion.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiInitializeLockedPagesTracking @ 0x14086A25C (MiInitializeLockedPagesTracking.c)
 *     MiAllocateProcessVads @ 0x140A03904 (MiAllocateProcessVads.c)
 *     MiCloneProcessAddressSpace @ 0x140A07308 (MiCloneProcessAddressSpace.c)
 *     MiInsertProcessVads @ 0x140A085A8 (MiInsertProcessVads.c)
 *     MiReturnProcessVads @ 0x140A08654 (MiReturnProcessVads.c)
 *     MiComputeProcessUserVa @ 0x140A086A0 (MiComputeProcessUserVa.c)
 *     MiMapProcessExecutable @ 0x140A08810 (MiMapProcessExecutable.c)
 *     MiInitializeVadBitMap @ 0x140A08F10 (MiInitializeVadBitMap.c)
 *     MiInitializeProcessTopDownEntropy @ 0x140A094D8 (MiInitializeProcessTopDownEntropy.c)
 *     MiInitializeProcessBottomUpEntropy @ 0x140A0959C (MiInitializeProcessBottomUpEntropy.c)
 *     PsSessionCreate @ 0x140A0975C (PsSessionCreate.c)
 *     MiReferenceCfgVad @ 0x140AF33F0 (MiReferenceCfgVad.c)
 */

__int64 __fastcall MmInitializeProcessAddressSpace(
        __int64 BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        int a5)
{
  __int64 v8; // rsi
  _QWORD *ProcessVads; // r12
  __int64 v10; // r15
  int inserted; // ebx
  __int64 v12; // r8
  struct _KLOCK_ENTRIES *v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rcx
  __int128 v18; // xmm1
  __int64 v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _QWORD *v22; // rax
  __int64 v23; // rax
  struct _KTHREAD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int128 v27; // xmm1
  __int64 v28; // r12
  __int128 v29; // xmm0
  __int128 *v30; // rax
  __int128 v31; // xmm1
  struct _KTHREAD *CurrentThread; // rbx
  int v33; // eax
  __int64 v34; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+28h] [rbp-D8h]
  __int64 v36; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+38h] [rbp-C8h]
  __int64 v38; // [rsp+40h] [rbp-C0h]
  __int128 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v41; // [rsp+70h] [rbp-90h]
  __int128 v42; // [rsp+80h] [rbp-80h]
  _BYTE Src[224]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v44[3]; // [rsp+170h] [rbp+70h] BYREF

  v38 = a3;
  memset(v44, 0, sizeof(v44));
  memset_0(Src, 0, 0xD8uLL);
  v37 = BugCheckParameter1 + 1024;
  v8 = *MiGetSharedVm(BugCheckParameter1 + 1024);
  ExInitializeAutoExpandPushLock((_QWORD *)(v8 + 992), 1);
  ProcessVads = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    v10 = *(_QWORD *)(a2 + 1040) + 896LL;
    memmove(Src, (const void *)v10, 0xD8uLL);
    v25 = *(_QWORD *)(v10 + 216);
    v26 = 2LL;
    v27 = *(_OWORD *)(v10 + 504);
    v28 = *(_QWORD *)(v10 + 296);
    v39 = *(_OWORD *)(v10 + 488);
    v29 = *(_OWORD *)(v10 + 520);
    v35 = v25;
    v30 = &v40;
    v40 = v27;
    v31 = *(_OWORD *)(v10 + 536);
    v36 = v28;
    ProcessVads = 0LL;
    v41 = v29;
    v42 = v31;
    do
    {
      *(_QWORD *)v30 = 0LL;
      v30 += 2;
      --v26;
    }
    while ( v26 );
  }
  else
  {
    v35 = 0LL;
    v36 = 0LL;
    memset_0(&v39, 0, 0x40uLL);
  }
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v44);
  *(_QWORD *)(BugCheckParameter1 + 600) = 0LL;
  *(_QWORD *)(BugCheckParameter1 + 608) = 0LL;
  *(_QWORD *)(BugCheckParameter1 + 1368) = 0LL;
  if ( (MmTrackLockedPages & 1) != 0 && (MmTrackLockedPages & 0x10000000) == 0 )
    MiInitializeLockedPagesTracking(BugCheckParameter1);
  inserted = MiInitializeWorkingSetList(BugCheckParameter1 + 1024, v8 - 320, 0, 0LL);
  if ( inserted < 0 )
    goto LABEL_15;
  v14 = *(_QWORD *)(BugCheckParameter1 + 1040) + 896LL;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a2, v12, v13);
    *(_OWORD *)(v14 + 728) = *(_OWORD *)(v10 + 728);
    *(_OWORD *)(v14 + 744) = *(_OWORD *)(v10 + 744);
    v33 = *(_DWORD *)(v10 + 712);
    *(_QWORD *)(v14 + 720) = v14 + 728;
    *(_DWORD *)(v14 + 712) = v33;
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a2);
  }
  *(_DWORD *)(v14 + 232) = 1;
  MiInitializeProcessPageTableCommitmentBitMaps(BugCheckParameter1);
  _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 500), 0x400u);
  v15 = v38;
  v34 = 0LL;
  inserted = MiComputeProcessUserVa(v16, a2, v38, &v34);
  if ( inserted < 0 )
    goto LABEL_15;
  if ( !a2 && (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) == 0 )
  {
    ProcessVads = MiAllocateProcessVads(BugCheckParameter1, v34);
    if ( !ProcessVads )
    {
      inserted = -1073741670;
      goto LABEL_15;
    }
  }
  InitializeSListHead((PSLIST_HEADER)(v14 + 320));
  if ( !a2 )
  {
    MiInitializeProcessBottomUpEntropy(BugCheckParameter1);
    MiInitializeProcessTopDownEntropy(BugCheckParameter1);
    inserted = MiInitializeVadBitMap();
    if ( inserted < 0 )
    {
      MiReturnProcessVads(ProcessVads);
      goto LABEL_15;
    }
  }
  inserted = MiInsertProcessVads(BugCheckParameter1, ProcessVads);
  if ( inserted < 0 )
    goto LABEL_15;
  if ( v15 )
  {
    if ( (*(_BYTE *)(BugCheckParameter1 + 368) & 1) == 0 )
      inserted = MiMapProcessExecutable(BugCheckParameter1, v15, a4);
    goto LABEL_14;
  }
  *(_BYTE *)(v14 + 293) |= 4u;
  if ( (*(_DWORD *)(BugCheckParameter1 + 1532) & 1) != 0 && !a2 )
  {
LABEL_14:
    MiAllowWorkingSetExpansion(v37);
    goto LABEL_15;
  }
  *a4 &= ~0x10u;
  if ( !a2 )
  {
    KiUnstackDetachProcess((__int64)v44, 0);
    return 0;
  }
  if ( (*(_BYTE *)(a2 + 368) & 1) != 0 )
  {
    inserted = -1073741595;
    goto LABEL_15;
  }
  *(_QWORD *)(BugCheckParameter1 + 824) = *(_QWORD *)(a2 + 824);
  *(_DWORD *)(BugCheckParameter1 + 832) = *(_DWORD *)(a2 + 832);
  *(_WORD *)(BugCheckParameter1 + 836) = *(_WORD *)(a2 + 836);
  *(_BYTE *)(BugCheckParameter1 + 838) = *(_BYTE *)(a2 + 838);
  *(_QWORD *)(BugCheckParameter1 + 872) = *(_QWORD *)(a2 + 872);
  memmove((void *)v14, Src, 0xD8uLL);
  v18 = v40;
  v19 = v35;
  *(_OWORD *)(v14 + 488) = v39;
  *(_QWORD *)(v14 + 216) = v19;
  v20 = v41;
  *(_OWORD *)(v14 + 504) = v18;
  v21 = v42;
  *(_OWORD *)(v14 + 520) = v20;
  *(_OWORD *)(v14 + 536) = v21;
  inserted = MiInitializeVadBitMap();
  if ( inserted < 0 )
  {
LABEL_15:
    KiUnstackDetachProcess((__int64)v44, 0);
    return (unsigned int)inserted;
  }
  v22 = *(_QWORD **)(a2 + 784);
  if ( v22 && *v22 )
    **(_QWORD **)(BugCheckParameter1 + 784) = *v22;
  if ( (*a4 & 0x80u) == 0 )
    inserted = 0;
  else
    inserted = PsSessionCreate();
  if ( (a5 & 1) != 0 )
    v23 = v36 + 1;
  else
    v23 = 0LL;
  *(_QWORD *)(v14 + 296) = v23;
  *(_QWORD *)(v14 + 272) = v14 + 264;
  *(_QWORD *)(v14 + 264) = v14 + 264;
  *(_BYTE *)(v14 + 293) |= 2u;
  KiUnstackDetachProcess((__int64)v44, 0);
  if ( inserted >= 0 )
  {
    inserted = MiCloneProcessAddressSpace((_KPROCESS *)a2, (_KPROCESS *)BugCheckParameter1, a5);
    if ( inserted >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v44);
      v24 = KeGetCurrentThread();
      if ( *((_QWORD *)&v41 + 1) )
        MiReferenceCfgVad(v24, v41, 1LL);
      if ( *((_QWORD *)&v39 + 1) )
        MiReferenceCfgVad(v24, v39, 0LL);
      KiUnstackDetachProcess((__int64)v44, 0);
    }
  }
  MiAllowWorkingSetExpansion(v37);
  return (unsigned int)inserted;
}
