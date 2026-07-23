/*
 * XREFs of ?SmCompressCtxQueueEntries@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_QUEUE@@@Z @ 0x140404388
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402800C0 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmPageWrite @ 0x140402BD4 (SmPageWrite.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxQueueEntries(PEX_SPIN_LOCK SpinLock, __int64 a2)
{
  KIRQL v4; // al
  __int64 *v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r14
  _QWORD *v9; // rax

  v4 = ExAcquireSpinLockExclusive(SpinLock);
  v5 = (__int64 *)*((_QWORD *)SpinLock + 3);
  v6 = v4;
  v7 = **(_QWORD **)(a2 + 8);
  v8 = *v5;
  if ( v7 )
  {
    *v5 = *(_QWORD *)a2;
    v9 = *(_QWORD **)(a2 + 8);
    *((_QWORD *)SpinLock + 3) = v9;
    *v9 = v8 + v7;
    *(_QWORD *)(a2 + 8) = a2;
    *(_QWORD *)a2 = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( !v8 )
    KeSetEvent((PRKEVENT)(SpinLock + 8), 0, 0);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  __writecr8(v6);
}
