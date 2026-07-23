/*
 * XREFs of ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140204AF0
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1403E40C8 (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140204C10 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStUpdateMemoryCondition@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z @ 0x140204C38 (-SmStUpdateMemoryCondition@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@@Z.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     ?SmCompressManagerUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1404D6000 (-SmCompressManagerUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAG.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(__int64 a1, unsigned int a2)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // rdx
  struct _EX_RUNDOWN_REF *v10; // r14
  unsigned __int64 Count; // rbp
  struct _EX_RUNDOWN_REF *v12; // rcx

  if ( (*(_DWORD *)(a1 + 2120) & 0x20) != 0 )
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerUpdateMemoryCondition(a1 + 1104);
  v4 = 0;
  v5 = 0LL;
  do
  {
    v6 = *(_QWORD *)(a1 + 8 * (v5 >> 5));
    if ( v6 )
    {
      v7 = v6 + 40 * (v5 & 0x1F);
      if ( v7 )
      {
        v8 = v4 | ((*(_WORD *)(v7 + 32) & 0x3F) << 10);
        v9 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)(v4 & 0x3FF) >> 5));
        if ( v9 )
        {
          v10 = (struct _EX_RUNDOWN_REF *)(v9 + 40LL * (v4 & 0x1F));
          if ( v10 )
          {
            if ( ExAcquireRundownProtection_0(v10 + 1) )
            {
              if ( (v10[4].Count & 0x3F) == v8 >> 10 )
              {
                Count = v10->Count;
                if ( !v10->Count )
                  goto LABEL_11;
                SMKM_STORE<SM_TRAITS>::SmStUpdateMemoryCondition(v10->Count, a2);
                v12 = (struct _EX_RUNDOWN_REF *)(SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(Count + 2464) & 0x3FF) + 8);
              }
              else
              {
                v12 = v10 + 1;
              }
              ExReleaseRundownProtection_0(v12);
            }
          }
        }
      }
    }
LABEL_11:
    ++v4;
    ++v5;
  }
  while ( v4 < 0x400 );
}
