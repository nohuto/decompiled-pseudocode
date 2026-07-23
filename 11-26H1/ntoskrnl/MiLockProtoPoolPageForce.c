/*
 * XREFs of MiLockProtoPoolPageForce @ 0x1403A2E40
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MiInitializeImageProtos @ 0x14033A684 (MiInitializeImageProtos.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiDeletePerSessionProtos @ 0x14044FF10 (MiDeletePerSessionProtos.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404A7DCC (MiInitializeNewImageSectionProtos.c)
 *     MiMakeImageReadOnly @ 0x1404B7CFC (MiMakeImageReadOnly.c)
 *     MiCreateFileOnlyImageFixupExtents @ 0x140500CE0 (MiCreateFileOnlyImageFixupExtents.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiInitializeNewPfnsLockProtos @ 0x1406EE224 (MiInitializeNewPfnsLockProtos.c)
 *     MiEliminateOverlappingExtents @ 0x1406FE3B4 (MiEliminateOverlappingExtents.c)
 *     MiEnableLargeSubsection @ 0x1406FE68C (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x1406FEA80 (MiFillFileOnlyProtoAsBad.c)
 *     MiInitializeSharedUserData @ 0x140CF82E0 (MiInitializeSharedUserData.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 *     MiSpinForProtoPoolLock @ 0x14040AEE0 (MiSpinForProtoPoolLock.c)
 */

__int64 __fastcall MiLockProtoPoolPageForce(ULONG_PTR BugCheckParameter4, unsigned __int8 *a2)
{
  _DWORD *v2; // rbp
  ULONG_PTR v4; // rsi
  __int64 v5; // r8
  BOOL v6; // r15d
  unsigned __int64 v7; // r14
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // rdi
  ULONG_PTR ContainingPageTable; // rdi
  __int64 v11; // rbx
  unsigned __int8 v12; // r12
  unsigned int v13; // esi
  unsigned __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // rax
  int v17; // edx
  bool v18; // zf
  unsigned __int64 v19; // rax
  volatile signed __int64 *v20; // r8
  signed __int64 i; // rcx
  signed __int64 v22; // rax
  char v23; // si
  __int64 v24; // rax
  ULONG *v25; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v28; // ett
  __int64 LeafPfnBuddy; // rax
  _QWORD *v31; // rcx
  _DWORD v32[16]; // [rsp+60h] [rbp+0h] BYREF

  v2 = (_DWORD *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = BugCheckParameter4;
  while ( 2 )
  {
    v5 = 0xFFFFF68000000000uLL;
    if ( a2 )
      *a2 = 17;
    v6 = v4 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState + ((v4 >> 39) & 0x1FF) + 46064) == 4;
    while ( 1 )
    {
      if ( !v6 )
        goto LABEL_8;
      ContainingPageTable = MiGetContainingPageTable(v4);
      v7 = v4 & 0xFFFFFFFFFFFFLL;
LABEL_18:
      v11 = 48 * ContainingPageTable - 0x220000000000LL;
      if ( !a2 )
        break;
      v12 = MiSafeLockPage(ContainingPageTable, (__int64)v8, v5);
      if ( v12 != 17 )
        goto LABEL_22;
      v5 = 0xFFFFF68000000000uLL;
    }
    v12 = 17;
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v13);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
    v4 = BugCheckParameter4;
LABEL_22:
    if ( !v6 )
    {
      v5 = 0xFFFFF68000000000uLL;
      v14 = *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
      if ( (v14 & 1) == 0 || (v14 & 0x200) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v12 <= 1u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
          __writecr8(v12);
        }
        goto LABEL_15;
      }
      if ( ContainingPageTable != ((v14 >> 12) & 0xFFFFFFFFFFLL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v12 <= 1u )
        {
          if ( KiIrqlFlags )
          {
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
            v5 = 0xFFFFF68000000000uLL;
          }
          __writecr8(v12);
        }
LABEL_8:
        v7 = v4 & 0xFFFFFFFFFFFFLL;
        v8 = (unsigned __int64 *)((((v4 & 0xFFFFFFFFFFFFLL) >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
        while ( 1 )
        {
          v9 = *v8;
          if ( (*v8 & 1) == 0 || (v9 & 0x200) != 0 )
            break;
          ContainingPageTable = (v9 >> 12) & 0xFFFFFFFFFFLL;
          if ( ContainingPageTable <= qword_140E2D920
            && (*(_QWORD *)(48 * ContainingPageTable - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          {
            goto LABEL_18;
          }
        }
LABEL_15:
        MmAccessFault(2uLL, v4);
        continue;
      }
      if ( (*(_QWORD *)(v11 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(v11 + 40) & 0x20000000000000LL) != 0 )
        goto LABEL_33;
      v15 = *(_DWORD *)(v11 + 32);
      v16 = *(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v17 = 0;
      if ( (_WORD)v15 )
      {
        if ( (_WORD)v15 == 1 )
        {
          if ( v16 || (*(_BYTE *)(v11 + 34) & 8) != 0 )
            v17 = 1;
          if ( !v17 )
            goto LABEL_33;
        }
        else if ( (_WORD)v15 != 2 || !v16 || (*(_BYTE *)(v11 + 34) & 8) == 0 )
        {
LABEL_33:
          *(_DWORD *)(v11 + 32) = (*(_DWORD *)(v11 + 32) + 1) ^ ((*(_DWORD *)(v11 + 32) + 1) ^ *(_DWORD *)(v11 + 32)) & 0xFFFF0000;
          break;
        }
      }
      v23 = 0;
      if ( *(__int64 *)(v11 + 40) < 0 && (*(_DWORD *)(v11 + 16) & 0x400LL) != 0
        || (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
        && (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
        && (*(_BYTE *)(v11 + 35) & 0x20) != 0 )
      {
        v23 = 1;
      }
      v24 = (*(_QWORD *)(v11 + 40) >> 43) & 0x3FFLL;
      v25 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8 * v24);
      if ( !v23 || (unsigned int)MiChargeCommit(*(ULONG **)(stru_140E2ED08.ThreadLock + 8 * v24), 1uLL, 4u) )
      {
        if ( v25 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
          while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
          {
            v28 = CachedResidentAvailable;
            CachedResidentAvailable = _InterlockedCompareExchange(
                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                        CachedResidentAvailable - 1,
                                        CachedResidentAvailable);
            if ( v28 == CachedResidentAvailable )
              goto LABEL_33;
          }
        }
        if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)v25, 1uLL, 0xFFFFFFFFLL) )
          goto LABEL_33;
        if ( v23 )
          MiReturnCommit((__int64)v25, 1LL, 0);
      }
    }
    break;
  }
  if ( v12 != 17 )
    *a2 = v12;
  v18 = (*(_BYTE *)(v11 + 34) & 0x20) == 0;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
  *(_OWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
  if ( v18 )
  {
    *(_DWORD *)(v11 + 32) |= 0x200000u;
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
    LeafPfnBuddy = MiGetLeafPfnBuddy(v11, 1LL);
    if ( LeafPfnBuddy )
    {
      v31 = *(_QWORD **)(LeafPfnBuddy + 8);
      if ( *v31 != LeafPfnBuddy )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v31;
      *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = LeafPfnBuddy;
      *v31 = v2 + 16;
      *(_QWORD *)(LeafPfnBuddy + 8) = v2 + 16;
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)v11 = ((unsigned __int64)(v2 + 16) >> 3) ^ (((unsigned __int64)(v2 + 16) >> 3) ^ *(_QWORD *)v11) & 0xFFFFF00000000001uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiSpinForProtoPoolLock(v2 + 16);
    *v2 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx((_DWORD *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL));
      while ( *(__int64 *)(v11 + 24) < 0 );
    }
  }
  if ( (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 && (*(_QWORD *)(v11 + 40) & 0x10000000000LL) == 0 )
  {
    v19 = (__int64)(*(_QWORD *)(v11 + 8) << 25) >> 16;
    if ( v19 < 0xFFFF800000000000uLL || *((_BYTE *)&MiState + ((v19 >> 39) & 0x1FF) + 46064) != 4 )
    {
      v20 = (volatile signed __int64 *)(*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL);
      if ( (*v20 & 0x20) == 0 )
      {
        for ( i = *v20; ; i = v22 )
        {
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          v22 = _InterlockedCompareExchange64(v20, i | 0x20, i);
          if ( i == v22 )
            break;
        }
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v11 )
  {
    v4 = BugCheckParameter4;
    goto LABEL_15;
  }
  return v11;
}
