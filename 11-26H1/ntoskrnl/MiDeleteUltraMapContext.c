/*
 * XREFs of MiDeleteUltraMapContext @ 0x14045E5A0
 * Callers:
 *     MiReclaimUnusedUltraMdlMaps @ 0x1402A5D98 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiGetUltraMdlContext @ 0x1404DACD8 (MiGetUltraMdlContext.c)
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

__int64 *__fastcall MiDeleteUltraMapContext(__int64 a1, unsigned __int64 a2)
{
  __int64 *result; // rax
  unsigned int v4; // r12d
  char v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // rdi
  ULONG_PTR v9; // rcx
  __int64 v10; // rbx
  unsigned int v11; // eax
  ULONG_PTR v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  __int64 retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(_BYTE *)(a1 + 24) )
  {
    v4 = 3;
    if ( *(_BYTE *)(a1 + 25) )
      v4 = 1;
    v5 = 6;
    if ( KeGetCurrentIrql() != 2 )
      v5 = 2;
    MiGetUltraMapping(a1, a2, MiPageSizes[(unsigned int)a2], v5);
    _InterlockedDecrement(&dword_140E34D64);
    v8 = 0LL;
    v9 = *(_QWORD *)(a1 + 8);
    result = (__int64 *)0xFFFFDE0000000000LL;
    if ( v9 != -1LL )
    {
      v10 = 48 * v9 - 0x220000000000LL;
      if ( byte_140E2D89A )
      {
        v11 = MI_PAGE_TO_FULL_COLOR(v9);
        MiManageUltraSpacePageTable(v10, v11, v4);
      }
      else
      {
        if ( (MiFlags & 0x80u) != 0LL
          && (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
        {
          MiArePageContentsZero(v9);
        }
        if ( (v5 & 4) != 0 )
          MiReleaseFreshPageAtDpc(v10, v6, v7);
        else
          MiReleaseFreshPage(v10, v6, v7);
        v8 = 1LL;
      }
      *(_QWORD *)(a1 + 8) = -1LL;
      result = (__int64 *)0xFFFFDE0000000000LL;
    }
    v12 = *(_QWORD *)(a1 + 16);
    v13 = a1 + 8;
    if ( v12 != -1LL )
    {
      v14 = 48 * v12 - 0x220000000000LL;
      if ( byte_140E2D89A )
      {
        v15 = MI_PAGE_TO_FULL_COLOR(v12);
        result = (__int64 *)MiManageUltraSpacePageTable(v14, v15, v4);
      }
      else
      {
        if ( (MiFlags & 0x80u) != 0LL
          && (++*(_DWORD *)&stru_140E2ED08.SavedApcStateFill[40] & MmPageValidationFrequency) == 0 )
        {
          MiArePageContentsZero(v12);
        }
        if ( (v5 & 4) != 0 )
          result = (__int64 *)MiReleaseFreshPageAtDpc(v14, v6, v7);
        else
          result = (__int64 *)MiReleaseFreshPage(v14, v6, v7);
        ++v8;
        v13 = a1 + 8;
      }
      *(_QWORD *)(v13 + 8) = -1LL;
    }
    *(_BYTE *)(a1 + 24) = 0;
    if ( v8 )
    {
      v16 = v8;
      if ( !qword_140E3C1C8 )
        goto LABEL_45;
      if ( KeGetCurrentIrql() == 2 )
      {
        ExAcquireSpinLockExclusiveAtDpcLevel(dword_140E3C1B8);
        v16 = MiRestockOverCommit(&MiSystemPartition, v8);
      }
      else
      {
        v17 = ExAcquireSpinLockExclusive(dword_140E3C1B8);
        v16 = MiRestockOverCommit(&MiSystemPartition, v8);
        if ( (_BYTE)v17 != 17 )
        {
          if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
            dword_140E3C1B8[0] = 0;
          else
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(dword_140E3C1B8, retaddr);
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
          __writecr8(v17);
LABEL_44:
          if ( !v16 )
            return (__int64 *)MiReturnResident((__int64)&MiSystemPartition, v8);
LABEL_45:
          if ( dword_140E3C1D0
            || (CurrentPrcb = KeGetCurrentPrcb(),
                _m_prefetchw((const void *)&CurrentPrcb->CachedCommit),
                CachedCommit = CurrentPrcb->CachedCommit,
                (unsigned __int64)(v16 + CachedCommit) > 0x100) )
          {
LABEL_49:
            _InterlockedAdd64(qword_140E3D8C0, -v16);
            v21 = _InterlockedExchangeAdd64(&qword_140E3D880, -v16);
            MiSignalCommitSignals((__int64)&MiSystemPartition, v21 - v16, v21);
          }
          else
          {
            while ( 1 )
            {
              v20 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                      v16 + CachedCommit,
                      CachedCommit);
              if ( v20 == CachedCommit )
                break;
              CachedCommit = v20;
              if ( (unsigned __int64)(v20 + v16) > 0x100 )
                goto LABEL_49;
            }
          }
          return (__int64 *)MiReturnResident((__int64)&MiSystemPartition, v8);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        dword_140E3C1B8[0] = 0;
      else
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(dword_140E3C1B8, retaddr);
      goto LABEL_44;
    }
  }
  return result;
}
