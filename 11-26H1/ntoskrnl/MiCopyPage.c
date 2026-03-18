/*
 * XREFs of MiCopyPage @ 0x140293FA4
 * Callers:
 *     MiTradeForLeafPage @ 0x140293AE4 (MiTradeForLeafPage.c)
 *     MiReplaceTransitionPageInitializeTargetPfn @ 0x140293DE0 (MiReplaceTransitionPageInitializeTargetPfn.c)
 *     MiTradeActivePage @ 0x140295898 (MiTradeActivePage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C8D30 (MiSwapNumaStandbyPage.c)
 *     MiMigratePfn @ 0x1402F6990 (MiMigratePfn.c)
 *     MiDuplicateCloneLeaf @ 0x14030D374 (MiDuplicateCloneLeaf.c)
 *     MiCopyOnWritePerformCopy @ 0x14036B248 (MiCopyOnWritePerformCopy.c)
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     MiTradeStackPageFast @ 0x140415F18 (MiTradeStackPageFast.c)
 *     MiCopyHeaderIfResident @ 0x1404B51A4 (MiCopyHeaderIfResident.c)
 *     MiCopyFileOnlyPage @ 0x1404B5FDC (MiCopyFileOnlyPage.c)
 *     MiPrivateFixup @ 0x14051D784 (MiPrivateFixup.c)
 *     MiSoftFaultClusterTradePageFinish @ 0x1407126D8 (MiSoftFaultClusterTradePageFinish.c)
 *     MiTradeBootImagePage @ 0x140D00E4C (MiTradeBootImagePage.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14024FD8C (MiFlushEntireTbDueToAttributeChange.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetPteFromCopyList @ 0x140285490 (MiGetPteFromCopyList.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiGetPagePrivilege @ 0x1402F9878 (MiGetPagePrivilege.c)
 *     MiTranslateCacheAttribute @ 0x140309CE0 (MiTranslateCacheAttribute.c)
 *     MiAbortCombineScan @ 0x1403691D0 (MiAbortCombineScan.c)
 *     MiMarkPfnVerified @ 0x14038C9E8 (MiMarkPfnVerified.c)
 *     MiGetPteMappingSet @ 0x14044FFD0 (MiGetPteMappingSet.c)
 *     MiReturnPteMappingSet @ 0x140457050 (MiReturnPteMappingSet.c)
 *     MiClearPfnImageVerified @ 0x14046FA64 (MiClearPfnImageVerified.c)
 *     KeSetPagePrivilege @ 0x1404B0F70 (KeSetPagePrivilege.c)
 *     KeCopyPrivilegedPage @ 0x1404CA384 (KeCopyPrivilegedPage.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     KeCopyPageNoOverride @ 0x140730860 (KeCopyPageNoOverride.c)
 */

char __fastcall MiCopyPage(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v4; // r13d
  char v5; // si
  ULONG_PTR v6; // r9
  __int64 v7; // r14
  char v8; // bl
  int v9; // edi
  int v10; // edx
  int PagePrivilege; // eax
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  int v14; // eax
  char v15; // r12
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // r12d
  _KPROCESS *Process; // rcx
  unsigned __int8 v21; // bl
  unsigned __int8 CurrentIrql; // bl
  int v23; // eax
  ULONG_PTR v24; // rbx
  char result; // al
  unsigned int v26; // ebx
  unsigned __int64 PteFromCopyList; // rdi
  __int64 v28; // r8
  unsigned int v29; // eax
  __int64 v30; // r9
  unsigned int v31; // [rsp+30h] [rbp-59h]
  unsigned __int8 v32; // [rsp+38h] [rbp-51h]
  int v33; // [rsp+40h] [rbp-49h]
  __int128 v34; // [rsp+50h] [rbp-39h] BYREF
  ULONG_PTR v35; // [rsp+60h] [rbp-29h]
  __int128 v36; // [rsp+70h] [rbp-19h] BYREF
  __int128 v37; // [rsp+80h] [rbp-9h] BYREF
  __int64 v38; // [rsp+90h] [rbp+7h]
  int v41; // [rsp+100h] [rbp+77h]
  int v42; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = a1;
  v38 = 0LL;
  v37 = 0LL;
  *(_QWORD *)&v34 = 0LL;
  v4 = a3;
  v36 = 0LL;
  v5 = 0;
  v6 = 48 * a2 - 0x220000000000LL;
  v35 = v6;
  v7 = 48 * a1 - 0x220000000000LL;
  v8 = 4;
  v9 = -1073741823;
  if ( (a3 & 4) != 0 )
  {
    v31 = 4;
    v4 = a3 | 0x100;
  }
  else
  {
    v10 = 0;
    if ( (a3 & 0x100) != 0 )
      v10 = 64;
    v31 = v10;
  }
  v42 = v4 & 4;
  PagePrivilege = MiGetPagePrivilege(v6);
  v13 = 0xFFFFF68000000000uLL;
  if ( PagePrivilege )
  {
    if ( (v4 & 0x12) != 0
      || (MiFlags & 0x20000) != 0 && (v4 & 8) == 0 && (PagePrivilege & 1) != 0 && *(__int64 *)(v35 + 40) >= 0
      || _bittest64(&MiFlags, 0x13u) && (v4 & 8) == 0 && (PagePrivilege & 2) != 0 )
    {
      v8 = 2;
      v14 = 2;
      v15 = 10;
    }
    else
    {
      v14 = 0;
      v15 = 12;
    }
    v16 = 2LL;
    v5 = v8;
    v17 = v4 & 2;
    if ( !v14 )
    {
      v3 = a1;
      goto LABEL_78;
    }
    v33 = 0;
    v32 = 17;
    *((_QWORD *)&v34 + 1) = 0LL;
    if ( _bittest64(&MiFlags, 0x13u) )
    {
      MiFlushEntireTbDueToAttributeChange();
      v16 = 2LL;
      v13 = 0xFFFFF68000000000uLL;
    }
    v18 = 0LL;
    v41 = v4 & 2;
    if ( (MiFlags & 0x10000) == 0 )
      goto LABEL_63;
    if ( (v4 & 2) != 0 )
    {
      v34 = v36;
LABEL_23:
      v19 = v42;
      v41 = v4 & 2;
LABEL_24:
      if ( (v4 & 0x20) != 0 )
      {
        if ( !v19 )
        {
          v33 = 1;
          if ( (v4 & 0x100) != 0 )
          {
            v42 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v42);
              while ( *(__int64 *)(v7 + 24) < 0 );
            }
          }
          else
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql != 2 )
              __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v16) = 2;
              LOBYTE(v17) = CurrentIrql;
              KiRaiseIrqlProcessIrqlFlags(v17, v16);
            }
            v42 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v42);
              while ( *(__int64 *)(v7 + 24) < 0 );
            }
            v32 = CurrentIrql;
          }
        }
        v18 = (((*(_QWORD *)(v7 + 40) & 0xFFFFFFFFFFLL) << 12) + (*(_QWORD *)(v7 + 8) & 0xFFFLL)) | 1;
      }
LABEL_63:
      v3 = a1;
      v23 = KeCopyPrivilegedPage(a1, (unsigned int)&v34, a2, (unsigned int)&v36, v18, (v4 & 2) != 0);
      v9 = v23;
      if ( v23 < 0 )
        KeBugCheckEx(0x1Au, 0x5150AuLL, a2, a1, v23);
      if ( v33 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v32 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v32);
          __writecr8(v32);
        }
      }
      LODWORD(v17) = v41;
      if ( (MiFlags & 0x80000) != 0 && !v41 )
      {
        if ( (*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) < 0xFFFFF6C000000000uLL )
        {
          v9 = KeSetPagePrivilege(a1, 0LL, &v34, 4LL);
          if ( v9 < 0 )
            KeBugCheckEx(0x1Au, 0x5150DuLL, a2, a1, 0LL);
        }
        LODWORD(v17) = v41;
      }
      goto LABEL_78;
    }
    v17 = (__int64)(*(_QWORD *)(v7 + 8) << 25) >> 16;
    *(_QWORD *)&v34 = v17;
    if ( v17 >= 0xFFFF800000000000uLL )
      goto LABEL_23;
    v5 = v15;
    v19 = v42;
    Process = KeGetCurrentThread()->ApcState.Process;
    *((_QWORD *)&v34 + 1) = Process->SecureState.EntireField & 0xFFFFFFFFFFFFFFFCuLL;
    v41 = 0;
    if ( !v42 )
    {
      if ( (v4 & 0x100) == 0 )
      {
        v21 = KeGetCurrentIrql();
        v32 = v21;
        if ( v21 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(Process) = v21;
          KiRaiseIrqlProcessIrqlFlags(Process, 2LL);
        }
        v42 = 0;
        v41 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v42);
          while ( *(__int64 *)(v7 + 24) < 0 );
        }
        goto LABEL_47;
      }
      v42 = 0;
      v41 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v42);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
    }
    v21 = 17;
LABEL_47:
    MiMarkPfnVerified(v7, 4LL, v12, v13);
    MiAbortCombineScan(v7);
    if ( !v19 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v21 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
        __writecr8(v21);
      }
      v32 = 17;
    }
    goto LABEL_24;
  }
  LODWORD(v17) = v4 & 2;
  if ( (v4 & 2) == 0 )
    v5 = 4;
LABEL_78:
  v24 = v35;
  result = (*(_QWORD *)(v35 + 40) >> 60) & 7;
  if ( result == 3 )
  {
    if ( (_DWORD)v17 )
      result = MiClearPfnImageVerified(v35, v31);
    if ( (v5 & 4) == 0 )
    {
      result = (*(_QWORD *)(v7 + 40) >> 60) & 7;
      if ( result != 3 )
        result = MiMarkPfnVerified(v7, v31, v12, v13);
    }
  }
  if ( v9 < 0 )
  {
    v26 = (*(_DWORD *)(v24 + 32) >> 22) & 3;
    if ( ((*(_DWORD *)(v7 + 32) >> 22) & 3) != v26 )
      MiChangePageAttribute(v7, v26, (v4 >> 4) & 0x10);
    if ( (v4 & 1) != 0 )
      v5 = 1;
    MiGetPteMappingSet(v5 & 1, 2LL, &v37);
    PteFromCopyList = MiGetPteFromCopyList((unsigned int *)&v37, v3, a2);
    v29 = MiTranslateCacheAttribute(v26, 0LL, v28, (__int64)(PteFromCopyList << 25) >> 16);
    KeCopyPageNoOverride(v30, v30 + 4096, v29);
    *(_QWORD *)PteFromCopyList = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    *(_QWORD *)(PteFromCopyList + 8) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    return MiReturnPteMappingSet(&v37);
  }
  return result;
}
