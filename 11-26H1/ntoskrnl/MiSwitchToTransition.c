/*
 * XREFs of MiSwitchToTransition @ 0x1402A1680
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x140AEFA48 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1402A13B0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiObtainFaultCharges @ 0x1402D83D0 (MiObtainFaultCharges.c)
 *     MiSwitchValidPteToTransition @ 0x1402F0DC0 (MiSwitchValidPteToTransition.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031594C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiReturnFaultCharges @ 0x14033AD8C (MiReturnFaultCharges.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiMakeLinkedListPte @ 0x1403675E4 (MiMakeLinkedListPte.c)
 *     MiChangePageAttributeBatch @ 0x14036ABBC (MiChangePageAttributeBatch.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     MiWaitForFreePage @ 0x1403D4D84 (MiWaitForFreePage.c)
 *     MiAddMdlTracker @ 0x1404ED400 (MiAddMdlTracker.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiGetReadyInPageBlock @ 0x140B3EB1C (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  _KPROCESS *Process; // r14
  unsigned __int64 v7; // rdi
  ULONG_PTR v8; // rsi
  struct _LIST_ENTRY **p_Blink; // r12
  __int64 Blink_high; // rcx
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 Page; // rax
  _QWORD *v17; // r13
  _QWORD *v18; // rax
  bool v19; // zf
  ULONG_PTR v20; // r13
  __int64 v21; // r15
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  unsigned int v28; // esi
  ULONG_PTR v29; // r14
  _KPROCESS *v31; // r15
  unsigned __int64 v32; // r9
  char v33; // bl
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 valid; // rax
  char v38; // [rsp+30h] [rbp-D0h]
  int v39; // [rsp+34h] [rbp-CCh]
  unsigned int v41; // [rsp+3Ch] [rbp-C4h]
  __int128 v42; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 DemandZeroPte; // [rsp+50h] [rbp-B0h]
  _QWORD *v44; // [rsp+58h] [rbp-A8h]
  __int64 v45; // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-80h]
  _KPROCESS *v50; // [rsp+88h] [rbp-78h]
  unsigned __int64 v51; // [rsp+90h] [rbp-70h]
  __int128 v52; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v53[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v54; // [rsp+C0h] [rbp-40h]
  __int64 ReadyInPageBlock; // [rsp+C8h] [rbp-38h]
  __int64 v56; // [rsp+D0h] [rbp-30h]
  __int64 ContainingPageTable; // [rsp+D8h] [rbp-28h]
  __int128 v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+F0h] [rbp-10h]
  int EffectivePagePriorityThread; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v61; // [rsp+100h] [rbp+0h]
  unsigned __int64 v62; // [rsp+108h] [rbp+8h]
  _BYTE v63[208]; // [rsp+110h] [rbp+10h] BYREF

  BugCheckParameter3 = a1;
  v52 = 0LL;
  memset_0(v63, 0, 0xC8uLL);
  DemandZeroPte = 0LL;
  v42 = 0LL;
  memset_0(v53, 0, 0x60uLL);
  v53[0] = a1;
  v53[1] = a2;
  v54 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v50 = Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread();
  ReadyInPageBlock = MiGetReadyInPageBlock(a2);
  *(_QWORD *)(ReadyInPageBlock + 256) = 0LL;
  v7 = *(unsigned int *)(a1 + 40);
  v51 = *(_QWORD *)(a1 + 32);
  v8 = ((v51 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v39 = 0;
  MiInitializePageColorBase(&Process[2].ReadyListHead.Blink, 3LL, 0LL, &v52);
  v41 = DWORD2(v52) & 0xFFF3FFFF | ((a3 & 3) << 18);
  Blink_high = HIWORD(Process[2].ProcessListEntry.Blink);
  v45 = 0LL;
  v59 = 0LL;
  *(_QWORD *)&v42 = 0x7FFFFFFFFFLL;
  v58 = 0LL;
  v11 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * Blink_high);
  v47 = v11;
  v12 = MiObtainFaultCharges(v11, v7 >> 12, 2LL);
  v13 = (_QWORD *)v58;
  v14 = v12;
  v46 = v12;
  v15 = 0LL;
  v44 = (_QWORD *)*((_QWORD *)&v58 + 1);
  v56 = v11;
  while ( v15 != v14 )
  {
    Page = MiGetPage(
             v11,
             v41 ^ (unsigned __int8)(v41 ^ _InterlockedExchangeAdd((volatile signed __int32 *)v52, 1u)),
             8u);
    v48 = Page;
    if ( Page == -1 )
    {
      if ( v15 )
      {
        MiReturnResident(v11, v14 - v15);
        v14 = v15;
        v46 = v15;
        break;
      }
      MiWaitForFreePage(v11, 0LL);
    }
    else
    {
      v17 = (_QWORD *)(48 * Page - 0x220000000000LL);
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded((__int64)v17, a3, 0LL) )
      {
        v17[2] = MiMakeLinkedListPte(v42);
        *(_QWORD *)&v42 = v48;
      }
      v18 = v44;
      v19 = v44 == 0LL;
      *v17 = v13;
      v13 = v17;
      *(_QWORD *)&v58 = v17;
      if ( v19 )
        v18 = v17;
      v11 = v47;
      v44 = v18;
      *((_QWORD *)&v58 + 1) = v18;
      ++v45;
      ++v15;
      v59 = v45;
    }
  }
  if ( (_QWORD)v42 != 0x7FFFFFFFFFLL )
  {
    DWORD2(v42) = a3;
    BYTE12(v42) = 0;
    DemandZeroPte = MiMakeDemandZeroPte(4);
    MiChangePageAttributeBatch(&v42, 0LL);
  }
  v20 = v8 + 8 * v14;
  ContainingPageTable = -1LL;
  v61 = v20;
  v21 = 0LL;
  v22 = MiLockWorkingSetShared(p_Blink);
  v38 = v22;
  if ( v8 < v20 )
  {
    v33 = v22;
    while ( 1 )
    {
      if ( v21 )
      {
        if ( (v8 & 0xFFF) != 0 )
          goto LABEL_33;
        MiUnlockPageTableInternal(p_Blink, v21);
      }
      v21 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(p_Blink, v21, 0LL);
      LOBYTE(v34) = v33;
      MiUnlockOpportunisticPagesInPageTable(p_Blink, v34, v8, v20 - 8);
      ContainingPageTable = MiGetContainingPageTable(v8);
      LOBYTE(v35) = 17;
      v36 = MiUnlockOpportunisticPagesInPageTable(p_Blink, v35, v8, v20 - 8);
      if ( v36 )
      {
        v61 = v36;
        v39 = 1073741849;
        if ( v8 == v36 )
        {
LABEL_34:
          v14 = v46;
          if ( v21 )
            MiUnlockPageTableInternal(p_Blink, v21);
          v22 = v38;
          v13 = (_QWORD *)v58;
          break;
        }
      }
LABEL_33:
      valid = MiSwitchValidPteToTransition(v53, v8);
      v20 = v61;
      v8 = valid;
      if ( valid >= v61 )
        goto LABEL_34;
    }
  }
  LOBYTE(v23) = v22;
  MiUnlockWorkingSetShared(p_Blink, v23);
  while ( 1 )
  {
    v26 = (__int64)v13;
    if ( !v13 )
      break;
    v13 = (_QWORD *)*v13;
    MiReleaseFreshPage(v26, v24, v25);
  }
  v27 = v62;
  if ( v62 == v14 )
  {
    v28 = v39;
  }
  else
  {
    MiReturnFaultCharges(v47, v14 - v62, 0LL);
    v28 = v39;
    if ( !v27 )
      v28 = 1073741849;
  }
  v29 = BugCheckParameter3;
  *(_DWORD *)(BugCheckParameter3 + 40) = (_DWORD)v27 << 12;
  if ( v27 )
  {
    v31 = v50;
    _InterlockedAdd64((volatile signed __int64 *)v50[1].Padding, v27);
    MiInitializeTbFlushList((unsigned int)v63, (_DWORD)p_Blink, 20, 8, 1);
    MiInsertTbFlushEntry(v63, v51 & 0xFFFFFFFFFFFFF000uLL, v27);
    MiFlushTbList(v63);
    *(_QWORD *)(v29 + 16) = v31;
    *(_WORD *)(v29 + 10) |= 2u;
    LODWORD(v32) = KeGetPcr()->Prcb.Number;
    _InterlockedAdd64(
      (volatile signed __int64 *)&v31[2].ActiveProcessors[2].StaticBitmap[8 * ((v32 >> 1) & 3) + 5],
      v27);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(v29);
  }
  return v28;
}
