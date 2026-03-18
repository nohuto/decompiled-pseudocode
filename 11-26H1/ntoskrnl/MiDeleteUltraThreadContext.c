/*
 * XREFs of MiDeleteUltraThreadContext @ 0x14028F5E0
 * Callers:
 *     MiZeroLargePage @ 0x1402A1A04 (MiZeroLargePage.c)
 *     MiCreateUltraThreadContext @ 0x1402F45F0 (MiCreateUltraThreadContext.c)
 *     MiThreadWorker @ 0x1403C32F0 (MiThreadWorker.c)
 *     MiInitializeNewUltraHugeContext @ 0x14048DA98 (MiInitializeNewUltraHugeContext.c)
 *     MiDereferenceHugeContext @ 0x1404F6860 (MiDereferenceHugeContext.c)
 *     MiFindContiguousPagesFinish @ 0x1404F702C (MiFindContiguousPagesFinish.c)
 *     MiDeleteZeroThreadContext @ 0x140530728 (MiDeleteZeroThreadContext.c)
 *     MiHugePageOperation @ 0x140705138 (MiHugePageOperation.c)
 *     MiDefragmentSlabWorker @ 0x1407063E4 (MiDefragmentSlabWorker.c)
 *     MmDeleteProcessor @ 0x140864718 (MmDeleteProcessor.c)
 *     MiReleaseScrubPacket @ 0x14087DD58 (MiReleaseScrubPacket.c)
 *     MiFreeForkMaps @ 0x14096220C (MiFreeForkMaps.c)
 *     MiCombineIdenticalPages @ 0x140B49E94 (MiCombineIdenticalPages.c)
 *     MmRelocatePfnList @ 0x140B6D1F4 (MmRelocatePfnList.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021AAD4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     MiGetUltraMapping @ 0x1402881D0 (MiGetUltraMapping.c)
 *     MI_PAGE_TO_FULL_COLOR @ 0x14028DF90 (MI_PAGE_TO_FULL_COLOR.c)
 *     MiReleaseFreshPage @ 0x140292190 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295CA0 (MiReleaseFreshPageAtDpc.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReturnResident @ 0x14036E2C0 (MiReturnResident.c)
 *     MiSignalCommitSignals @ 0x14043CAA0 (MiSignalCommitSignals.c)
 *     MiManageUltraSpacePageTable @ 0x14049504C (MiManageUltraSpacePageTable.c)
 *     MiRestockOverCommit @ 0x1404F9494 (MiRestockOverCommit.c)
 *     MiArePageContentsZero @ 0x140520384 (MiArePageContentsZero.c)
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
      _InterlockedDecrement(&dword_140E34BE4);
      v6 = 0LL;
      v7 = *(_QWORD *)(v1 - 8);
      if ( v7 != -1LL )
      {
        v8 = 48 * v7 - 0x220000000000LL;
        if ( byte_140E2D71A )
        {
          v9 = MI_PAGE_TO_FULL_COLOR(v7);
          MiManageUltraSpacePageTable(v8, v9, v4);
        }
        else
        {
          if ( (MiFlags & 0x80u) != 0LL
            && (++*(_DWORD *)&stru_140E2EB88.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
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
        if ( byte_140E2D71A )
        {
          v12 = MI_PAGE_TO_FULL_COLOR(v10);
          MiManageUltraSpacePageTable(v11, v12, v4);
        }
        else
        {
          if ( (MiFlags & 0x80u) != 0LL
            && (++*(_DWORD *)&stru_140E2EB88.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
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
        if ( !qword_140E3C048 )
          goto LABEL_46;
        if ( KeGetCurrentIrql() == 2 )
        {
          ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3C038);
          v13 = MiRestockOverCommit(&MiSystemPartition, v6);
        }
        else
        {
          v14 = ExAcquireSpinLockExclusive(dword_140E3C038);
          v13 = MiRestockOverCommit(&MiSystemPartition, v6);
          if ( (_BYTE)v14 != 17 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
              dword_140E3C038[0] = 0;
            else
              ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(dword_140E3C038, retaddr);
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
            if ( dword_140E3C050
              || (CurrentPrcb = KeGetCurrentPrcb(),
                  _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
                  CachedCommit = CurrentPrcb->CachedCommit,
                  (unsigned __int64)(v13 + CachedCommit) > 0x100) )
            {
LABEL_50:
              _InterlockedAdd64(qword_140E3D740, -v13);
              MiSignalCommitSignals(&MiSystemPartition, _InterlockedExchangeAdd64(&qword_140E3D700, -v13) - v13);
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
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
          dword_140E3C038[0] = 0;
        else
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(dword_140E3C038, retaddr);
        goto LABEL_45;
      }
    }
LABEL_52:
    v1 += 32LL;
    ++v2;
  }
}
