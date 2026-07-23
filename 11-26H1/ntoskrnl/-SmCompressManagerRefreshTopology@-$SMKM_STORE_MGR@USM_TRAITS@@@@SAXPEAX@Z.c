/*
 * XREFs of ?SmCompressManagerRefreshTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140640330
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x1403EECC8 (-SmCompressCtxUpdateThreadTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x140640690 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerRefreshTopology(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  volatile LONG *v4; // rbx
  volatile LONG *v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 ***v7; // rsi
  __int64 **i; // r15
  volatile LONG *j; // rbx
  __int64 result; // rax

  v2 = *(unsigned int *)(*(_QWORD *)a1 + 2124LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 8));
  v4 = *(volatile LONG **)(a1 + 16);
  v5 = &v4[44 * v2];
  while ( v4 < v5 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v4);
    v4 += 44;
  }
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerUpdateTopology(a1);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 < (unsigned __int64)v5 )
  {
    v7 = (__int64 ***)(v6 + 104);
    do
    {
      for ( i = *v7; i != (__int64 **)v7; i = (__int64 **)*i )
        SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxUpdateThreadTopology(v6, (struct _KTHREAD *)i[2]);
      v6 += 176LL;
      v7 += 22;
    }
    while ( v6 < (unsigned __int64)v5 );
  }
  for ( j = *(volatile LONG **)(a1 + 16); j < v5; j += 44 )
    ExReleaseSpinLockExclusiveFromDpcLevel(j);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 8));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
