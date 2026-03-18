/*
 * XREFs of MiGetPagePrivilege @ 0x1402F9878
 * Callers:
 *     MiCopyPage @ 0x140293FA4 (MiCopyPage.c)
 *     MiLockTargetPageForTrade @ 0x140295360 (MiLockTargetPageForTrade.c)
 *     MiActivePageTradeable @ 0x140295EB4 (MiActivePageTradeable.c)
 *     MiResetAccessBitPte @ 0x14029C890 (MiResetAccessBitPte.c)
 *     MiSetVaAgeListEx @ 0x14029D300 (MiSetVaAgeListEx.c)
 *     MiCountWslesInPageTableRange @ 0x14029E490 (MiCountWslesInPageTableRange.c)
 *     MiAllocateWsle @ 0x1402D7F18 (MiAllocateWsle.c)
 *     MiProtoFaultGetProtection @ 0x1402D93F0 (MiProtoFaultGetProtection.c)
 *     MiInsertFreeZeroPage @ 0x1402DCE70 (MiInsertFreeZeroPage.c)
 *     MiInsertPageLockStandbyList @ 0x1402DEE20 (MiInsertPageLockStandbyList.c)
 *     MmStoreProbeAndLockPages @ 0x1402F0670 (MmStoreProbeAndLockPages.c)
 *     MiCombineCandidate @ 0x1402F3F80 (MiCombineCandidate.c)
 *     MiReferencePageForModifiedWrite @ 0x1402F4B50 (MiReferencePageForModifiedWrite.c)
 *     MiAddPageToFlushMdl @ 0x1402F5760 (MiAddPageToFlushMdl.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1402FA410 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiUpdateOldPte @ 0x1402FDD30 (MiUpdateOldPte.c)
 *     MiAgePte @ 0x1402FE880 (MiAgePte.c)
 *     MiRevertValidPte @ 0x140304974 (MiRevertValidPte.c)
 *     MiWsleFree @ 0x140319990 (MiWsleFree.c)
 *     MmUnmapViewInSystemCache @ 0x14031E380 (MmUnmapViewInSystemCache.c)
 *     MiFastTrimWorkingSet @ 0x14031F690 (MiFastTrimWorkingSet.c)
 *     MiTrimPteWorker @ 0x140320BF0 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140321400 (MiTrimPte.c)
 *     MiTrimThisWsle @ 0x140322190 (MiTrimThisWsle.c)
 *     MiDeleteVa @ 0x140322AC0 (MiDeleteVa.c)
 *     MiDecommitAddToList @ 0x140323520 (MiDecommitAddToList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14035DBA4 (MI_WSLE_LOG_ACCESS.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MiApplyDebuggerPatches @ 0x14038C7F8 (MiApplyDebuggerPatches.c)
 *     MiMarkPfnVerified @ 0x14038C9E8 (MiMarkPfnVerified.c)
 *     MiPageMightBeZero @ 0x14046A5C0 (MiPageMightBeZero.c)
 *     MiClearPfnImageVerified @ 0x14046FA64 (MiClearPfnImageVerified.c)
 *     MiUpdateSecurePte @ 0x1404B0E7C (MiUpdateSecurePte.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404DDD28 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiProtectDriverSectionPte @ 0x1406E5D50 (MiProtectDriverSectionPte.c)
 *     MiDbgPrivilegedWriteCheck @ 0x1406FEA20 (MiDbgPrivilegedWriteCheck.c)
 *     MmChangeImageProtection @ 0x140AD5D10 (MmChangeImageProtection.c)
 *     MiAddPostHibernateZeroPagesToBitmap @ 0x140C007C4 (MiAddPostHibernateZeroPagesToBitmap.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetSubsectionFromPte @ 0x1402836C0 (MiGetSubsectionFromPte.c)
 *     MiGetTopLevelPfn @ 0x140404690 (MiGetTopLevelPfn.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x140404850 (MiGetPageTablePfnBuddyRaw.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetSecurePageState @ 0x140531F30 (MiGetSecurePageState.c)
 */

unsigned __int64 __fastcall MiGetPagePrivilege(_QWORD *BugCheckParameter2, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  char v4; // r12
  ULONG_PTR v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned int v7; // r14d
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r15
  __int64 TopLevelPfn; // rax
  __int64 v11; // rdx
  __int64 PageTablePfnBuddyRaw; // r13
  __int64 v13; // r8
  unsigned __int64 result; // rax
  __int64 SubsectionFromPte; // rax
  __int64 *v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // r9d
  int v22; // eax
  __int64 v23; // r8
  int v24; // [rsp+60h] [rbp+18h] BYREF

  v3 = (_QWORD *)a3;
  v4 = a2;
  v5 = (ULONG_PTR)BugCheckParameter2;
  if ( a3 )
  {
    *(_QWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 8) = 0LL;
  }
  if ( (MiFlags & 0x4000) == 0 || ((BugCheckParameter2[5] >> 60) & 7) != 3 )
    return 0LL;
  if ( a3 )
    v3 = (_QWORD *)(-(__int64)((MiFlags & 0x10000) != 0) & a3);
  v6 = BugCheckParameter2[1] | 0x8000000000000000uLL;
  if ( (__int64)BugCheckParameter2[5] >= 0 )
  {
    if ( (MiFlags & 0x80000) != 0 )
      return (unsigned __int64)((__int64)(v6 << 25) >> 16) < 0xFFFF800000000000uLL ? 2 : 17;
    if ( BugCheckParameter2[1] )
    {
      v8 = (__int64)(v6 << 25) >> 16;
      if ( v8 < 0xFFFF800000000000uLL )
      {
        v7 = 20;
        if ( v3 )
        {
          CurrentIrql = 17;
          if ( (a2 & 1) == 0 )
          {
            if ( (a2 & 2) != 0 )
            {
              v24 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v24);
                while ( *(__int64 *)(v5 + 24) < 0 );
              }
            }
            else if ( (a2 & 4) == 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql != 2 )
                __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(a2) = 2;
                LOBYTE(BugCheckParameter2) = CurrentIrql;
                KiRaiseIrqlProcessIrqlFlags(BugCheckParameter2, a2);
              }
              v24 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v24);
                while ( *(__int64 *)(v5 + 24) < 0 );
              }
            }
          }
          TopLevelPfn = MiGetTopLevelPfn(v5);
          PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn, v11, TopLevelPfn);
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (v4 & 5) == 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( CurrentIrql < 2u )
            {
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
            }
          }
          if ( (*(_QWORD *)(PageTablePfnBuddyRaw + 368) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
          {
            *v3 = v8;
            v3[1] = *(_QWORD *)(PageTablePfnBuddyRaw + 368) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          else
          {
            return 0;
          }
        }
        return v7;
      }
      v7 = (((unsigned __int8)*((_DWORD *)BugCheckParameter2 + 4) >> 5) & 2) != 0 ? 1 : 64;
      if ( !v3 )
        return v7;
      *v3 = v8;
LABEL_17:
      v3[1] = 0LL;
      return v7;
    }
    if ( (MiGetSecurePageState() & 0x10) == 0 )
    {
      v7 = 4;
      if ( !v3 )
        return v7;
      *v3 = 0LL;
      goto LABEL_17;
    }
    return 0LL;
  }
  if ( (BugCheckParameter2[2] & 0x400LL) == 0 )
  {
    result = ((unsigned __int64)MiFlags >> 15) & 0x10 | 3;
    if ( v3 )
    {
      *v3 = 0LL;
      v3[1] = 0LL;
    }
    return result;
  }
  SubsectionFromPte = MiGetSubsectionFromPte(BugCheckParameter2[2]);
  v16 = (__int64 *)SubsectionFromPte;
  v17 = *(_QWORD *)SubsectionFromPte;
  if ( (*(_DWORD *)(*(_QWORD *)SubsectionFromPte + 56LL) & 0x20) == 0 )
    return 2LL;
  v18 = *(_QWORD *)(SubsectionFromPte + 8);
  if ( v6 < v18 || v6 >= v18 + 8LL * *(unsigned int *)(SubsectionFromPte + 44) )
    return 0LL;
  v19 = *(_DWORD *)(v17 + 92) & 0xC0000;
  if ( v19 != 0 && (*(_DWORD *)(v17 + 92) & 0x20000) != 0 && SubsectionFromPte != v17 + 128 )
    return 40LL;
  v20 = *(_QWORD *)(v5 + 16) >> 5;
  if ( (MiFlags & 0x80000) == 0 )
  {
    if ( v19 )
    {
      v22 = 8;
      if ( (v20 & 2) != 0 )
        v22 = 11;
      v21 = v22;
      goto LABEL_61;
    }
    return 0LL;
  }
  v21 = 2;
  if ( v19 )
  {
    v21 = 10;
    if ( (v20 & 2) != 0 )
      v21 = 11;
  }
LABEL_61:
  if ( v3 )
  {
    v23 = *v16;
    v3[1] = *(_QWORD *)((*(_QWORD *)(v23 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 64);
    *v3 = (__int64)(v6 - *(_QWORD *)(v23 + 136)) >> 3 << 12;
  }
  return v21;
}
