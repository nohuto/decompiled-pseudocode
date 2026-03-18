/*
 * XREFs of MiChargePartitionResidentAvailable @ 0x1402F60D0
 * Callers:
 *     MiDoubleLockMdlPage @ 0x1402E5914 (MiDoubleLockMdlPage.c)
 *     MiObtainProtoReference @ 0x1402E5B70 (MiObtainProtoReference.c)
 *     MiProbeLockFrame @ 0x1402EE600 (MiProbeLockFrame.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402F2710 (MiCreateUltraThreadContextHelper.c)
 *     MiCreateUltraThreadContext @ 0x1402F45F0 (MiCreateUltraThreadContext.c)
 *     SmAcquireReleaseResAvailForRead @ 0x1402F48C0 (SmAcquireReleaseResAvailForRead.c)
 *     MiAcquireNonPagedResources @ 0x1402F4A50 (MiAcquireNonPagedResources.c)
 *     MiReferencePageForModifiedWrite @ 0x1402F4B50 (MiReferencePageForModifiedWrite.c)
 *     MiLockProtoPoolPage @ 0x1402F50D0 (MiLockProtoPoolPage.c)
 *     MiAddPageToFlushMdl @ 0x1402F5760 (MiAddPageToFlushMdl.c)
 *     MiChargeForWriteInProgressPage @ 0x1402F5BD0 (MiChargeForWriteInProgressPage.c)
 *     MiAddLockedPageCharge @ 0x1402F5D30 (MiAddLockedPageCharge.c)
 *     MiChargeForLockedPage @ 0x1402F5F60 (MiChargeForLockedPage.c)
 *     MiObtainFaultCharges @ 0x1402F6350 (MiObtainFaultCharges.c)
 *     MiChargeResident @ 0x1403185A0 (MiChargeResident.c)
 *     MiLockPageTablePage @ 0x14031A8E0 (MiLockPageTablePage.c)
 *     MiObtainPoolCharges @ 0x140366384 (MiObtainPoolCharges.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14038EF10 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiAcquireCachedPageLocks @ 0x1403A17C0 (MiAcquireCachedPageLocks.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x140481F1C (MmStoreChargeResidentAvailableForRead.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiChargePartitionResidentAvailable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  signed __int64 v5; // rbx
  unsigned __int64 v6; // r8
  signed __int64 v7; // r10
  bool v8; // zf
  signed __int64 v9; // rax
  BOOL v10; // r11d
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int CachedResidentAvailable; // edx
  unsigned __int64 v13; // rdx
  struct _KPRCB *v14; // r10
  signed __int32 v15; // r8d
  signed __int32 v16; // eax
  __int64 *v18; // rcx
  __int64 v19; // rdi
  unsigned __int64 v20; // r8
  unsigned __int32 v21; // eax

  if ( a2 + a3 < a2 && a3 != 0xFFFFFFFFLL )
  {
    ++*(_DWORD *)&stru_140E2EB88.SchedulerApcFill5[68];
    return 0LL;
  }
  v5 = *(_QWORD *)(a1 + 22528);
  v6 = 0LL;
  if ( v5 < 1024 && (ULONG *)a1 == &MiSystemPartition )
  {
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v18 = KiProcessorBlock;
      v19 = (unsigned int)KeNumberProcessors_0;
      do
      {
        if ( *(_DWORD *)(*v18 + 35804) != -1 )
        {
          v21 = _InterlockedExchange((volatile __int32 *)(*v18 + 35804), -1);
          if ( v21 != -1 )
            v6 += v21;
        }
        ++v18;
        --v19;
      }
      while ( v19 );
    }
    if ( v6 < a2 )
    {
      a2 -= v6;
      goto LABEL_3;
    }
    v20 = v6 - a2;
    if ( v20 )
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 22528), v20);
  }
  else
  {
LABEL_3:
    while ( v5 > 0 )
    {
      if ( a2 + a3 > v5 && a3 != 0xFFFFFFFFLL )
        goto LABEL_41;
      v7 = v5 - a2;
      v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 22528), v5 - a2, v5);
      v8 = v5 == v9;
      v5 = v9;
      if ( v8 )
      {
        v10 = v7 < 1024;
        if ( (ULONG *)a1 == &MiSystemPartition )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
          if ( CachedResidentAvailable == -1 )
          {
            if ( v7 >= 2048 )
            {
              _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable, 0, -1);
              CachedResidentAvailable = 0;
LABEL_10:
              v13 = 128 - CachedResidentAvailable;
              if ( v7 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 22528), v7 - v13, v7) )
              {
                v14 = KeGetCurrentPrcb();
                v15 = v14->CachedResidentAvailable;
                if ( v15 != -1 )
                {
                  do
                  {
                    if ( v13 + v15 > 0x100 || v13 >= 0x80000 )
                      break;
                    v16 = _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v14->CachedResidentAvailable,
                            v15 + v13,
                            v15);
                    v8 = v15 == v16;
                    v15 = v16;
                    if ( v8 )
                      return (unsigned int)(v10 + 2);
                  }
                  while ( v16 != -1 );
                  if ( v15 > 192
                    && v15 == _InterlockedCompareExchange(
                                (volatile signed __int32 *)&v14->CachedResidentAvailable,
                                192,
                                v15) )
                  {
                    v13 += v15 - 192;
                  }
                }
                if ( v13 )
                  _InterlockedAdd64((volatile signed __int64 *)(a1 + 22528), v13);
              }
            }
          }
          else if ( CachedResidentAvailable < 0x40 && v7 > 1024 )
          {
            goto LABEL_10;
          }
        }
        return (unsigned int)(v10 + 2);
      }
    }
    if ( a3 != 0xFFFFFFFFLL )
    {
LABEL_41:
      ++*(_DWORD *)&stru_140E2EB88.SchedulerApcFill5[72];
      if ( v6 )
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 22528), v6);
      return 0LL;
    }
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 22528), -(__int64)a2);
  }
  return 3LL;
}
