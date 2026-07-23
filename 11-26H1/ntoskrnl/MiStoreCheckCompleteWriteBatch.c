/*
 * XREFs of MiStoreCheckCompleteWriteBatch @ 0x1403FF93C
 * Callers:
 *     MiModifiedPageWriter @ 0x1403FF5C0 (MiModifiedPageWriter.c)
 *     MiModifiedWriterShouldWrite @ 0x1403FF7EC (MiModifiedWriterShouldWrite.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiStoreDrainWriteSupports @ 0x1404A7674 (MiStoreDrainWriteSupports.c)
 *     ?SmNotifyWriteBatchComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1404AD1B0 (-SmNotifyWriteBatchComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 */

__int64 __fastcall MiStoreCheckCompleteWriteBatch(__int64 a1)
{
  __int64 result; // rax
  volatile LONG *v3; // rdi
  KIRQL v4; // si

  result = *(unsigned int *)(a1 + 1300);
  if ( (_DWORD)result != -1 && !*(_DWORD *)(a1 + 1324) )
  {
    v3 = (volatile LONG *)(a1 + 2064);
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2064));
    if ( !*(_DWORD *)(a1 + 1452) )
      SMKM_STORE_MGR<SM_TRAITS>::SmNotifyWriteBatchComplete(*(_QWORD *)(*(_QWORD *)(a1 + 256) + 24LL));
    if ( v4 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v3);
    else
      ExReleaseSpinLockExclusive(v3, v4);
    return MiStoreDrainWriteSupports(a1);
  }
  return result;
}
