/*
 * XREFs of MiDeleteUltraThreadContext @ 0x14028EB40
 * Callers:
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     MiThreadWorker @ 0x1403CD1F0 (MiThreadWorker.c)
 *     MiInitializeNewUltraHugeContext @ 0x1404875D8 (MiInitializeNewUltraHugeContext.c)
 *     MiDereferenceHugeContext @ 0x1404EFE70 (MiDereferenceHugeContext.c)
 *     MiFindContiguousPagesFinish @ 0x1404F063C (MiFindContiguousPagesFinish.c)
 *     MiDeleteZeroThreadContext @ 0x140532C28 (MiDeleteZeroThreadContext.c)
 *     MiHugePageOperation @ 0x140709E08 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x14070B0B4 (MiDefragmentSlabWorker.c)
 *     MmDeleteProcessor @ 0x14086AAF8 (MmDeleteProcessor.c)
 *     MiReleaseScrubPacket @ 0x140884158 (MiReleaseScrubPacket.c)
 *     MiFreeForkMaps @ 0x140A07F00 (MiFreeForkMaps.c)
 *     MiCombineIdenticalPages @ 0x140B4BC24 (MiCombineIdenticalPages.c)
 *     MmRelocatePfnList @ 0x140B705C4 (MmRelocatePfnList.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021C464 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028D4F0 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiSignalCommitSignals @ 0x14042F350 (MiSignalCommitSignals.c)
 *     MiManageUltraSpacePageTable @ 0x14048EB9C (MiManageUltraSpacePageTable.c)
 *     MiRestockOverCommit @ 0x1404F2AA4 (MiRestockOverCommit.c)
 *     MiArePageContentsZero @ 0x140522A28 (MiArePageContentsZero.c)
 */

void __fastcall MiDeleteUltraThreadContext(__int64 a1)
{
  __int64 v1; // r14
  __int64 *v2; // r12
  unsigned int i; // r15d
  unsigned int v4; // ebp
  char v5; // si
  __int64 v6; // rdi
  ULONG_PTR v7; // rcx
  __int64 v8; // rbx
  unsigned int v9; // eax
  ULONG_PTR v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // eax
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  signed __int32 v17; // eax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = a1 + 16;
  v2 = MiPageSizes;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(_BYTE *)(v1 + 8) )
    {
      v4 = 3;
      if ( *(_BYTE *)(v1 + 9) )
        v4 = 1;
      v5 = 6;
      if ( KeGetCurrentIrql() != 2 )
        v5 = 2;
      MiGetUltraMapping(v1 - 16, i, *v2, v5);
      _InterlockedDecrement(&dword_140E34D64);
      v6 = 0LL;
      v7 = *(_QWORD *)(v1 - 8);
      if ( v7 != -1LL )
      {
        v8 = 48 * v7 - 0x220000000000LL;
        if ( byte_140E2D89A )
        {
          v9 = MI_PAGE_TO_FULL_COLOR(v7);
          MiManageUltraSpacePageTable(v8, v9, v4);
        }
        else
        {
          if ( (MiFlags & 0x80u) != 0LL
            && (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
          {
            MiArePageContentsZero(v7);
          }
          if ( (v5 & 4) != 0 )
            MiReleaseFreshPageAtDpc(v8);
          else
            MiReleaseFreshPage(v8);
          v6 = 1LL;
        }
        *(_QWORD *)(v1 - 8) = -1LL;
      }
      v10 = *(_QWORD *)v1;
      if ( *(_QWORD *)v1 != -1LL )
      {
        v11 = 48 * v10 - 0x220000000000LL;
        if ( byte_140E2D89A )
        {
          v12 = MI_PAGE_TO_FULL_COLOR(v10);
          MiManageUltraSpacePageTable(v11, v12, v4);
        }
        else
        {
          if ( (MiFlags & 0x80u) != 0LL
            && (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
          {
            MiArePageContentsZero(v10);
          }
          if ( (v5 & 4) != 0 )
            MiReleaseFreshPageAtDpc(v11);
          else
            MiReleaseFreshPage(v11);
          ++v6;
        }
        *(_QWORD *)v1 = -1LL;
      }
      *(_BYTE *)(v1 + 8) = 0;
      if ( v6 )
      {
        v13 = v6;
        if ( !qword_140E3C1C8 )
          goto LABEL_46;
        if ( KeGetCurrentIrql() == 2 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3C1B8);
          v13 = MiRestockOverCommit(&MiSystemPartition, v6);
        }
        else
        {
          v14 = ExAcquireSpinLockExclusive(dword_140E3C1B8);
          v13 = MiRestockOverCommit(&MiSystemPartition, v6);
          if ( (_BYTE)v14 != 17 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
              dword_140E3C1B8[0] = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(dword_140E3C1B8, retaddr);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
            __writecr8(v14);
LABEL_45:
            if ( !v13 )
            {
LABEL_51:
              MiReturnResident(&MiSystemPartition, v6);
              goto LABEL_52;
            }
LABEL_46:
            if ( dword_140E3C1D0
              || (CurrentPrcb = KeGetCurrentPrcb(),
                  _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
                  CachedCommit = CurrentPrcb->CachedCommit,
                  (unsigned __int64)(v13 + CachedCommit) > 0x100) )
            {
LABEL_50:
              _InterlockedAdd64(qword_140E3D8C0, -v13);
              MiSignalCommitSignals(&MiSystemPartition, _InterlockedExchangeAdd64(&qword_140E3D880, -v13) - v13);
            }
            else
            {
              while ( 1 )
              {
                v17 = _InterlockedCompareExchange(
                        (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                        v13 + CachedCommit,
                        CachedCommit);
                if ( v17 == CachedCommit )
                  break;
                CachedCommit = v17;
                if ( (unsigned __int64)(v17 + v13) > 0x100 )
                  goto LABEL_50;
              }
            }
            goto LABEL_51;
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
          dword_140E3C1B8[0] = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(dword_140E3C1B8, retaddr);
        goto LABEL_45;
      }
    }
LABEL_52:
    v1 += 32LL;
    ++v2;
  }
}
