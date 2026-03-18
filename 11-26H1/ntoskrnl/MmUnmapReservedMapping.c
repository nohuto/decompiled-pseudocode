/*
 * XREFs of MmUnmapReservedMapping @ 0x1403C1C70
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14020CDA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmFpFree @ 0x140281020 (SmFpFree.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x140281140 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     HalpDmaFreeMapRegisters @ 0x140359820 (HalpDmaFreeMapRegisters.c)
 *     HalpDmaSyncMapBuffers @ 0x14035BE40 (HalpDmaSyncMapBuffers.c)
 *     ?SmStUnmapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x1403C0D08 (-SmStUnmapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     PspIumFreePhysicalPages @ 0x1403C2C2C (PspIumFreePhysicalPages.c)
 *     SmKmUnlockMdl @ 0x14040751C (SmKmUnlockMdl.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404413A8 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x140441650 (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpDmaReleaseBufferMappings @ 0x14048F54C (HalpDmaReleaseBufferMappings.c)
 *     PnprCopyReservedMapping @ 0x14050D5C8 (PnprCopyReservedMapping.c)
 *     sub_140551760 @ 0x140551760 (sub_140551760.c)
 *     PnprSwap @ 0x1405DBE70 (PnprSwap.c)
 *     EtwpSavePersistedLogger @ 0x14082E8E4 (EtwpSavePersistedLogger.c)
 *     PnprMapPhysicalPages @ 0x140BF1AD0 (PnprMapPhysicalPages.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402EDFB0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiRetardMdl @ 0x140504688 (MiRetardMdl.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __stdcall MmUnmapReservedMapping(PVOID BaseAddress, ULONG PoolTag, PMDL MemoryDescriptorList)
{
  ULONG_PTR v3; // r14
  ULONG_PTR v5; // rsi
  ULONG_PTR BugCheckParameter4; // rbp
  KIRQL v7; // r15
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  ULONG_PTR v11; // r9
  ULONG_PTR v12; // rcx
  __int64 v13; // rax
  _QWORD *i; // rdx

  v3 = PoolTag;
  v5 = (ULONG_PTR)BaseAddress;
  if ( _bittest16(&MemoryDescriptorList->MdlFlags, 9u) )
    v5 = (ULONG_PTR)BaseAddress - (unsigned int)MiRetardMdl(MemoryDescriptorList);
  BugCheckParameter4 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
                      + (unsigned __int64)MemoryDescriptorList->ByteCount
                      + 4095) >> 12;
  if ( KeGetCurrentIrql() == 2 )
  {
    v7 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E34B68);
  }
  else
  {
    v7 = ExAcquireSpinLockShared(&dword_140E34B68);
  }
  v8 = qword_140E34B70;
  v9 = v5 & 0xFFFFFFFFFFFFF000uLL;
  if ( !qword_140E34B70 )
    goto LABEL_29;
  do
  {
    v10 = *(_QWORD *)(v8 + 24);
    if ( v9 < v10 )
    {
      v8 = *(_QWORD *)v8;
    }
    else
    {
      if ( v9 < v10 + (*(_QWORD *)(v8 + 32) << 12) )
        break;
      v8 = *(_QWORD *)(v8 + 8);
    }
  }
  while ( v8 );
  if ( !v8 )
LABEL_29:
    KeBugCheckEx(0xDAu, 0x106uLL, v5, v3, 2uLL);
  if ( v7 == 17 )
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140E34B68);
  else
    ExReleaseSpinLockShared(&dword_140E34B68, v7);
  if ( *(_DWORD *)(v8 + 40) != (_DWORD)v3 )
    KeBugCheckEx(0xDAu, 0x102uLL, v5, v3, BugCheckParameter4);
  if ( (*(_DWORD *)(v8 + 44) & 1) != 0 )
  {
    v11 = *(_QWORD *)(v8 + 32);
    v12 = v11 - ((v5 - *(_QWORD *)(v8 + 24)) >> 12);
  }
  else
  {
    v12 = *(_QWORD *)(v8 + 32);
    v5 = *(_QWORD *)(v8 + 24);
    v11 = v12;
  }
  if ( BugCheckParameter4 > v12 )
    KeBugCheckEx(0xDAu, 0x10AuLL, v5, v11, BugCheckParameter4);
  MiUnmapMdlCommon(v5, BugCheckParameter4);
  if ( (*(_DWORD *)(v8 + 44) & 1) == 0 )
  {
    v13 = (v5 >> 9) & 0x7FFFFFFFF8LL;
    for ( i = (_QWORD *)(v13 - 0x98000000000LL + 8 * BugCheckParameter4);
          (unsigned __int64)i < v13 - 0x98000000000LL + 8LL * *(_QWORD *)(v8 + 32);
          ++i )
    {
      if ( *i )
        KeBugCheckEx(0xDAu, 0x10CuLL, v5, v3, BugCheckParameter4);
    }
  }
  MemoryDescriptorList->MdlFlags &= 0xFFDEu;
  if ( (MemoryDescriptorList->MdlFlags & 4) != 0 )
    MemoryDescriptorList->MappedSystemVa = (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset;
}
