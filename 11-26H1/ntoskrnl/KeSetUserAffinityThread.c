/*
 * XREFs of KeSetUserAffinityThread @ 0x1403F0B04
 * Callers:
 *     ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x1403EECC8 (-SmCompressCtxUpdateThreadTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@.c)
 *     ExpWorkerThread @ 0x1403EF030 (ExpWorkerThread.c)
 *     MiStoreWriteModifiedPages @ 0x140401E78 (MiStoreWriteModifiedPages.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     ExpWorkQueueManagerThread @ 0x140A77D60 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KiSetUserAffinityThread @ 0x14022C114 (KiSetUserAffinityThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiNotifyAvailableCpusChangeProcess @ 0x1404D9868 (KiNotifyAvailableCpusChangeProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiUpdateProcessAvailableCpuState @ 0x1405E8528 (KiUpdateProcessAvailableCpuState.c)
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 *     KiExtendProcessAffinity @ 0x1405FBEA8 (KiExtendProcessAffinity.c)
 */

__int64 __fastcall KeSetUserAffinityThread(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbp
  char CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r12
  char v7; // r14
  __int64 v8; // r9
  unsigned __int16 *v9; // r10
  unsigned __int16 *v10; // r8
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // r11
  __int64 v13; // rcx
  unsigned __int16 i; // cx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 result; // rax
  struct _SINGLE_LIST_ENTRY v18; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 544);
  v18.Next = 0LL;
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  v8 = *a2;
  v9 = a2;
  v10 = *(unsigned __int16 **)(v2 + 80);
  v11 = 0;
  v12 = *v10;
  if ( (unsigned __int16)v8 < *v10 )
    v9 = *(unsigned __int16 **)(v2 + 80);
  else
    v12 = *a2;
  if ( (unsigned __int16)v8 >= *v10 )
    LOWORD(v8) = *v10;
  while ( v11 < (unsigned __int16)v8 )
  {
    v13 = *(_QWORD *)&a2[4 * v11 + 4];
    if ( (v13 & *(_QWORD *)&v10[4 * v11 + 4]) != v13 )
    {
LABEL_17:
      KiExtendProcessAffinity(v2, a2, v10, v8);
      v7 = 1;
      goto LABEL_18;
    }
    ++v11;
  }
  if ( v9 != v10 )
  {
    while ( v11 < v12 )
    {
      if ( *(_QWORD *)&a2[4 * v11 + 4] )
        goto LABEL_17;
      ++v11;
    }
  }
LABEL_18:
  for ( i = 0; i < *a2; ++i )
  {
    if ( *(_QWORD *)&a2[4 * i + 4] )
      goto LABEL_23;
  }
  a2 = *(unsigned __int16 **)(v2 + 80);
LABEL_23:
  KiSetUserAffinityThread(v4, (__int64)&v18, a2, CurrentIrql);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  LOBYTE(v15) = CurrentIrql;
  result = KiProcessDeferredReadyList(CurrentPrcb, &v18, v15, v16);
  if ( v7 )
  {
    KiUpdateProcessAvailableCpuState(v2, 0LL);
    result = KiNotifyAvailableCpusChangeProcess(v2);
  }
  if ( (WORD2(xmmword_140FC0C10) & 0x200) != 0 )
    return KiCpuPartitionCheckAffinitization(v2, v4, a2, 0LL);
  return result;
}
