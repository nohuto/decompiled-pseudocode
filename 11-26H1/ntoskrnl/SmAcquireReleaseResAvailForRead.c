/*
 * XREFs of SmAcquireReleaseResAvailForRead @ 0x1402D6940
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140390CC0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 */

_BOOL8 __fastcall SmAcquireReleaseResAvailForRead(__int64 a1, signed __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v7; // r9
  ULONG *v8; // r10
  struct _KPRCB *v9; // r8
  unsigned __int32 v10; // edx
  bool v11; // zf
  signed __int32 v12; // eax
  unsigned __int64 v14; // rdx
  __int64 v15; // r10
  struct _KPRCB *CurrentPrcb; // r9
  signed __int32 CachedResidentAvailable; // r8d
  signed __int32 v18; // eax

  if ( a4 )
  {
    if ( *(_QWORD *)(a1 + 2328) == a2 )
    {
      _InterlockedExchange64((volatile __int64 *)(a1 + 2328), 0LL);
    }
    else
    {
      v14 = a3 + 48;
      v15 = **(_QWORD **)(a1 + 2208);
      if ( (ULONG *)v15 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
        if ( CachedResidentAvailable != -1 )
        {
          do
          {
            if ( v14 + CachedResidentAvailable > 0x100 || v14 >= 0x80000 )
              break;
            v18 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    v14 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v11 = CachedResidentAvailable == v18;
            CachedResidentAvailable = v18;
            if ( v11 )
              return 1LL;
          }
          while ( v18 != -1 );
          if ( CachedResidentAvailable > 192
            && CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
          {
            v14 += CachedResidentAvailable - 192;
          }
        }
      }
      if ( v14 )
        _InterlockedAdd64((volatile signed __int64 *)(v15 + 22528), v14);
    }
    return 1LL;
  }
  v7 = a3 + 48;
  v8 = **(ULONG ***)(a1 + 2208);
  if ( v8 == &MiSystemPartition )
  {
    v9 = KeGetCurrentPrcb();
    v10 = v9->CachedResidentAvailable;
    while ( v7 <= v10 && v10 != -1 )
    {
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)&v9->CachedResidentAvailable, v10 - v7, v10);
      v11 = v10 == v12;
      v10 = v12;
      if ( v11 )
        return 1LL;
    }
  }
  return (unsigned int)MiChargePartitionResidentAvailable(v8, v7, 0LL)
      || !*(_QWORD *)(a1 + 2328)
      && a3 == 1
      && !_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 2328), a2, 0LL);
}
