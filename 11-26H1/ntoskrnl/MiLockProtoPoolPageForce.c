/*
 * XREFs of MiLockProtoPoolPageForce @ 0x1403A10E0
 * Callers:
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     MiInitializeImageProtos @ 0x140338604 (MiInitializeImageProtos.c)
 *     MiPfPutPagesInTransition @ 0x140372C60 (MiPfPutPagesInTransition.c)
 *     MiDeletePerSessionProtos @ 0x1404586A0 (MiDeletePerSessionProtos.c)
 *     MiInitializeNewImageSectionProtos @ 0x1404AE73C (MiInitializeNewImageSectionProtos.c)
 *     MiMakeImageReadOnly @ 0x1404BE4AC (MiMakeImageReadOnly.c)
 *     MiCreateFileOnlyImageFixupExtents @ 0x140507310 (MiCreateFileOnlyImageFixupExtents.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiInitializeNewPfnsLockProtos @ 0x1406E9584 (MiInitializeNewPfnsLockProtos.c)
 *     MiEliminateOverlappingExtents @ 0x1406F96E4 (MiEliminateOverlappingExtents.c)
 *     MiEnableLargeSubsection @ 0x1406F99BC (MiEnableLargeSubsection.c)
 *     MiFillFileOnlyProtoAsBad @ 0x1406F9DB0 (MiFillFileOnlyProtoAsBad.c)
 *     MiInitializeSharedUserData @ 0x140CF1F60 (MiInitializeSharedUserData.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x1402D9BF0 (MiGetContainingPageTable.c)
 *     MiSafeLockPage @ 0x1402F3700 (MiSafeLockPage.c)
 *     MiChargePartitionResidentAvailable @ 0x1402F60D0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 *     MiGetLeafPfnBuddy @ 0x140416870 (MiGetLeafPfnBuddy.c)
 *     MiSpinForProtoPoolLock @ 0x1404168D0 (MiSpinForProtoPoolLock.c)
 */

__int64 __fastcall MiLockProtoPoolPageForce(ULONG_PTR BugCheckParameter4, unsigned __int8 *a2)
{
  _DWORD *v2; // rbp
  ULONG_PTR v4; // rsi
  BOOL v5; // r15d
  unsigned __int64 v6; // r14
  unsigned __int64 *v7; // rdx
  unsigned __int64 v8; // rdi
  ULONG_PTR ContainingPageTable; // rdi
  __int64 v10; // rbx
  unsigned __int8 v11; // r12
  unsigned int v12; // esi
  unsigned __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  int v16; // edx
  bool v17; // zf
  unsigned __int64 v18; // rax
  volatile signed __int64 *v19; // r8
  signed __int64 i; // rcx
  signed __int64 v21; // rax
  char v22; // si
  __int64 v23; // rax
  ULONG *v24; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v27; // ett
  __int64 LeafPfnBuddy; // rax
  _QWORD *v30; // rcx
  _DWORD v31[16]; // [rsp+60h] [rbp+0h] BYREF

  v2 = (_DWORD *)((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = BugCheckParameter4;
  while ( 2 )
  {
    if ( a2 )
      *a2 = 17;
    v5 = v4 >= 0xFFFF800000000000uLL && *((_BYTE *)&MiState + ((v4 >> 39) & 0x1FF) + 46064) == 4;
    while ( 1 )
    {
      if ( !v5 )
        goto LABEL_8;
      ContainingPageTable = MiGetContainingPageTable(v4);
      v6 = v4 & 0xFFFFFFFFFFFFLL;
LABEL_18:
      v10 = 48 * ContainingPageTable - 0x220000000000LL;
      if ( !a2 )
        break;
      v11 = MiSafeLockPage(ContainingPageTable, (__int64)v7);
      if ( v11 != 17 )
        goto LABEL_22;
    }
    v11 = 17;
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    v4 = BugCheckParameter4;
LABEL_22:
    if ( !v5 )
    {
      v13 = *(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
      if ( (v13 & 1) == 0 || (v13 & 0x200) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v11 <= 1u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
          __writecr8(v11);
        }
        goto LABEL_15;
      }
      if ( ContainingPageTable != ((v13 >> 12) & 0xFFFFFFFFFFLL) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v11 <= 1u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
          __writecr8(v11);
        }
LABEL_8:
        v6 = v4 & 0xFFFFFFFFFFFFLL;
        v7 = (unsigned __int64 *)((((v4 & 0xFFFFFFFFFFFFLL) >> 9) & 0x7FFFFFFFFFFFF8LL) - 0x98000000000LL);
        while ( 1 )
        {
          v8 = *v7;
          if ( (*v7 & 1) == 0 || (v8 & 0x200) != 0 )
            break;
          ContainingPageTable = (v8 >> 12) & 0xFFFFFFFFFFLL;
          if ( ContainingPageTable <= qword_140E2D7A0
            && (*(_QWORD *)(48 * ContainingPageTable - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          {
            goto LABEL_18;
          }
        }
LABEL_15:
        MmAccessFault(2uLL, v4);
        continue;
      }
      if ( (*(_QWORD *)(v10 + 40) & 0x10000000000LL) != 0 || (*(_QWORD *)(v10 + 40) & 0x20000000000000LL) != 0 )
        goto LABEL_33;
      v14 = *(_DWORD *)(v10 + 32);
      v15 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      v16 = 0;
      if ( (_WORD)v14 )
      {
        if ( (_WORD)v14 == 1 )
        {
          if ( v15 || (*(_BYTE *)(v10 + 34) & 8) != 0 )
            v16 = 1;
          if ( !v16 )
            goto LABEL_33;
        }
        else if ( (_WORD)v14 != 2 || !v15 || (*(_BYTE *)(v10 + 34) & 8) == 0 )
        {
LABEL_33:
          *(_DWORD *)(v10 + 32) = (*(_DWORD *)(v10 + 32) + 1) ^ ((*(_DWORD *)(v10 + 32) + 1) ^ *(_DWORD *)(v10 + 32)) & 0xFFFF0000;
          break;
        }
      }
      v22 = 0;
      if ( *(__int64 *)(v10 + 40) < 0 && (*(_DWORD *)(v10 + 16) & 0x400LL) != 0
        || (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) <= 0xFFFFF6BFFFFFFF78uLL
        && (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) >= 0xFFFFF68000000000uLL
        && (*(_BYTE *)(v10 + 35) & 0x20) != 0 )
      {
        v22 = 1;
      }
      v23 = (*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL;
      v24 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8 * v23);
      if ( !v22 || (unsigned int)MiChargeCommit(*(ULONG **)(stru_140E2EB88.ThreadLock + 8 * v23), 1uLL, 4u) )
      {
        if ( v24 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
          while ( (unsigned int)(CachedResidentAvailable - 1) <= 0xFFFFFFFD )
          {
            v27 = CachedResidentAvailable;
            CachedResidentAvailable = _InterlockedCompareExchange(
                                        (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                        CachedResidentAvailable - 1,
                                        CachedResidentAvailable);
            if ( v27 == CachedResidentAvailable )
              goto LABEL_33;
          }
        }
        if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)v24, 1uLL, 0xFFFFFFFFLL) )
          goto LABEL_33;
        if ( v22 )
          MiReturnCommit((__int64)v24, 1LL, 0);
      }
    }
    break;
  }
  if ( v11 != 17 )
    *a2 = v11;
  v17 = (*(_BYTE *)(v10 + 34) & 0x20) == 0;
  *(_OWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 0LL;
  *(_OWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
  *(_OWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
  *(_OWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = 0LL;
  if ( v17 )
  {
    *(_DWORD *)(v10 + 32) |= 0x200000u;
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
    LeafPfnBuddy = MiGetLeafPfnBuddy(v10, 1LL);
    if ( LeafPfnBuddy )
    {
      v30 = *(_QWORD **)(LeafPfnBuddy + 8);
      if ( *v30 != LeafPfnBuddy )
        __fastfail(3u);
      *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v30;
      *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = LeafPfnBuddy;
      *v30 = v2 + 16;
      *(_QWORD *)(LeafPfnBuddy + 8) = v2 + 16;
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = ((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)(((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 64;
      *(_QWORD *)v10 = ((unsigned __int64)(v2 + 16) >> 3) ^ (((unsigned __int64)(v2 + 16) >> 3) ^ *(_QWORD *)v10) & 0xFFFFF00000000001uLL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiSpinForProtoPoolLock(v2 + 16);
    *v2 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx((_DWORD *)((unsigned __int64)v31 & 0xFFFFFFFFFFFFFFC0uLL));
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
  }
  if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 && (*(_QWORD *)(v10 + 40) & 0x10000000000LL) == 0 )
  {
    v18 = (__int64)(*(_QWORD *)(v10 + 8) << 25) >> 16;
    if ( v18 < 0xFFFF800000000000uLL || *((_BYTE *)&MiState + ((v18 >> 39) & 0x1FF) + 46064) != 4 )
    {
      v19 = (volatile signed __int64 *)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL);
      if ( (*v19 & 0x20) == 0 )
      {
        for ( i = *v19; ; i = v21 )
        {
          if ( (MiFlags & 0x8000000) != 0 )
            _mm_lfence();
          v21 = _InterlockedCompareExchange64(v19, i | 0x20, i);
          if ( i == v21 )
            break;
        }
      }
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v10 )
  {
    v4 = BugCheckParameter4;
    goto LABEL_15;
  }
  return v10;
}
