/*
 * XREFs of ?SmCompressManagerCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x140640230
 * Callers:
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140640114 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x14049AE18 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     ?SmCompressCtxUpdatePriority@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z @ 0x1404D6108 (-SmCompressCtxUpdatePriority@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@J@Z.c)
 *     PsUnregisterAvailableCpusChangeNotification @ 0x1407F6920 (PsUnregisterAvailableCpusChangeNotification.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerCleanup(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rbp
  void *v7; // rcx

  v2 = 0LL;
  if ( *(_QWORD *)(a1 + 320) )
    PsUnregisterAvailableCpusChangeNotification();
  v3 = *(unsigned int *)(*(_QWORD *)a1 + 2124LL);
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( (_DWORD)v3 )
    {
      v4 = 0LL;
      v5 = (unsigned int)v3;
      do
      {
        v6 = v4 + *(_QWORD *)(a1 + 16);
        if ( *(_QWORD *)(v6 + 104) != v6 + 104 )
          SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxUpdatePriority((PEX_SPIN_LOCK)(v4 + *(_QWORD *)(a1 + 16)), 0xCu);
        KeSetEvent((PRKEVENT)(v6 + 80), 0, 0);
        ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v6 + 144));
        v4 += 176LL;
        --v5;
      }
      while ( v5 );
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
  }
  v7 = *(void **)(a1 + 24);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( *(_QWORD *)(a1 + 32) )
  {
    if ( (_DWORD)v3 )
    {
      do
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList((_SLIST_HEADER *)(v2 + *(_QWORD *)(a1 + 32)), 1);
        v2 += 16LL;
        --v3;
      }
      while ( v3 );
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 32), 0);
  }
}
