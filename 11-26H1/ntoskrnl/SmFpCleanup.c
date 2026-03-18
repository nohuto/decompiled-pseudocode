/*
 * XREFs of SmFpCleanup @ 0x1403F02E0
 * Callers:
 *     SmFpPreAllocate @ 0x1403EFFC0 (SmFpPreAllocate.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403F0B90 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1403F49B8 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14063C534 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x14063CDAC (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     SmPartitionCleanup @ 0x140818F90 (SmPartitionCleanup.c)
 * Callees:
 *     SmKmFreeMdlForLock @ 0x14038302C (SmKmFreeMdlForLock.c)
 *     SmAcquireReleaseCharges @ 0x140394610 (SmAcquireReleaseCharges.c)
 *     MmFreeMappingAddress @ 0x140B12E50 (MmFreeMappingAddress.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall SmFpCleanup(__int64 a1)
{
  unsigned __int16 *v2; // r14
  unsigned int v3; // ebx
  void **v4; // rsi
  void *v5; // rdi

  v2 = (unsigned __int16 *)(a1 + 96);
  v3 = 0;
  v4 = (void **)(a1 + 40);
  do
  {
    while ( 1 )
    {
      v5 = *v4;
      if ( !*v4 )
        break;
      *v4 = *(void **)v5;
      if ( v3 < 5 )
      {
        if ( v3 == 2 )
        {
          SmKmFreeMdlForLock(*(_QWORD *)(a1 + 32), *((unsigned int **)v5 + 1));
        }
        else if ( v3 == 3 )
        {
          SmAcquireReleaseCharges(*(_QWORD *)(a1 + 32), (unsigned __int64)*v2 << 12, 1, 1);
        }
        else
        {
          ExFreePoolWithTag(*((PVOID *)v5 + 1), 0);
        }
      }
      else
      {
        MmFreeMappingAddress(*((PVOID *)v5 + 1), 0x6D526D73u);
      }
      ExFreePoolWithTag(v5, 0);
    }
    ++v3;
    ++v4;
    ++v2;
  }
  while ( v3 < 6 );
}
