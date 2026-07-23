/*
 * XREFs of IopAllocateMdl @ 0x1403A0940
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x14026A720 (IopBuildDeviceIoControlRequest.c)
 *     CcZeroDataInCache @ 0x1403A0CB8 (CcZeroDataInCache.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14043832C (HalpDmaCheckMdlAccessibility.c)
 *     MiZeroPageWrite @ 0x140466EC8 (MiZeroPageWrite.c)
 *     HalBuildMdlFromScatterGatherListV2 @ 0x140476C00 (HalBuildMdlFromScatterGatherListV2.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404AD760 (IopBuildAsynchronousFsdRequest.c)
 *     HalBuildMdlFromScatterGatherListV3 @ 0x1404B1540 (HalBuildMdlFromScatterGatherListV3.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1404B3F40 (IopAllocateAndPopulateWriteIrp.c)
 *     CcPrepareMdlWrite @ 0x1404C7470 (CcPrepareMdlWrite.c)
 *     CcLockSystemCacheBuffer @ 0x1405288CC (CcLockSystemCacheBuffer.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405CA64C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x1405D0650 (IopLiveDumpAllocateMappingResources.c)
 *     MmAllocateMdlForIoSpace @ 0x1406EFA80 (MmAllocateMdlForIoSpace.c)
 *     MiLockPatchIatForDV @ 0x1406FFC20 (MiLockPatchIatForDV.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140701500 (MiPrepareImagePagesForHotPatch.c)
 *     IopMcCreatePartialMdl @ 0x140B02E94 (IopMcCreatePartialMdl.c)
 * Callees:
 *     IovAiIrpHasUnlockedMdl @ 0x140532AF0 (IovAiIrpHasUnlockedMdl.c)
 *     IovLogIrpMdlEvent @ 0x140533384 (IovLogIrpMdlEvent.c)
 *     IovAiInsertObject @ 0x14053451C (IovAiInsertObject.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ViPtLogPoolTraceWrapper @ 0x140C4B06C (ViPtLogPoolTraceWrapper.c)
 */

__int64 __fastcall IopAllocateMdl(__int64 a1, unsigned int a2, char a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v6; // ebp
  unsigned int v7; // esi
  __int16 v8; // r15
  __int16 v10; // r12
  unsigned __int64 v11; // rdi
  struct _KPRCB *v12; // rbp
  _GENERAL_LOOKASIDE *v13; // rsi
  PSLIST_ENTRY v14; // rbx
  unsigned int Number; // eax
  char v16; // si
  __int64 result; // rax
  _QWORD **v18; // rcx
  _GENERAL_LOOKASIDE *v19; // rsi
  _QWORD *i; // rdx
  _GENERAL_LOOKASIDE *P; // [rsp+20h] [rbp-58h]
  _GENERAL_LOOKASIDE *L; // [rsp+20h] [rbp-58h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  struct _KPRCB *CurrentPrcb; // [rsp+80h] [rbp+8h]
  char v27; // [rsp+98h] [rbp+20h]

  v6 = 0;
  v7 = a2;
  v8 = a1;
  v27 = 0;
  v10 = 0;
  v11 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
  if ( (unsigned int)(a6 + 48 + 8 * v11) > 0xB8 )
    goto LABEL_22;
  v10 = 8;
  if ( ViAptInitialized && KernelVerifier == 1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v27 = 1;
    P = CurrentPrcb->PPLookasideList[3].P;
    ++P->TotalAllocates;
    v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( v14
      || (++P->AllocateMisses,
          L = CurrentPrcb->PPLookasideList[3].L,
          ++L->TotalAllocates,
          (v14 = RtlpInterlockedPopEntrySList(&L->ListHead)) != 0LL)
      || (v27 = 0,
          ++L->AllocateMisses,
          (v14 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size, L->Tag)) != 0LL) )
    {
      LODWORD(v14->Next) = CurrentPrcb->Number;
    }
  }
  else
  {
    v12 = KeGetCurrentPrcb();
    v13 = v12->PPLookasideList[3].P;
    ++v13->TotalAllocates;
    v14 = RtlpInterlockedPopEntrySList(&v13->ListHead);
    if ( v14
      || (++v13->AllocateMisses,
          v19 = v12->PPLookasideList[3].L,
          ++v19->TotalAllocates,
          (v14 = RtlpInterlockedPopEntrySList(&v19->ListHead)) != 0LL)
      || (++v19->AllocateMisses,
          (v14 = (PSLIST_ENTRY)guard_dispatch_icall_no_overrides((unsigned int)v19->Type, v19->Size, v19->Tag)) != 0LL) )
    {
      LODWORD(v14->Next) = v12->Number;
    }
    v7 = a2;
    v6 = 0;
  }
  if ( v14 )
  {
    LOWORD(Number) = v14->Next;
  }
  else
  {
LABEL_22:
    result = ExAllocatePool2(0x42uLL);
    v14 = (PSLIST_ENTRY)result;
    if ( !result )
      return result;
    Number = KeGetPcr()->Prcb.Number;
  }
  *((_WORD *)&v14->Next + 6) = Number;
  *((_WORD *)&v14->Next + 4) = 8 * (v11 + 6);
  v14->Next = 0LL;
  v14[2].Next = (_SLIST_ENTRY *)(a1 & 0xFFFFFFFFFFFFF000uLL);
  *((_DWORD *)&v14[2].Next + 3) = v8 & 0xFFF;
  *((_DWORD *)&v14[2].Next + 2) = v7;
  *((_WORD *)&v14->Next + 5) = v10;
  if ( a5 )
  {
    v18 = *(_QWORD ***)(a5 + 8);
    if ( !a3 )
    {
      if ( v18
        && KernelVerifier == 1
        && (VfRuleClasses & 0x20000000000000LL) != 0
        && (unsigned __int8)IovAiIrpHasUnlockedMdl() )
      {
        IovLogIrpMdlEvent(*(_QWORD *)(a5 + 8), a5, retaddr);
      }
      *(_QWORD *)(a5 + 8) = v14;
      v16 = 1;
      goto LABEL_10;
    }
    for ( i = *v18; i; i = (_QWORD *)*i )
      v18 = (_QWORD **)i;
    *v18 = &v14->Next;
  }
  v16 = 0;
LABEL_10:
  if ( KernelVerifier == 1 )
  {
    if ( v27 )
    {
      if ( (unsigned int)(DifpPoolTagsSize - 1) <= 9 )
      {
        while ( v6 < DifpPoolTagsSize )
        {
          if ( *((_DWORD *)&DifpPoolTags + v6) == 543974477 )
            goto LABEL_31;
          ++v6;
        }
      }
      else
      {
LABEL_31:
        ViPtLogPoolTraceWrapper(v14, 543974477LL, *((__int16 *)&v14->Next + 4), 2LL);
      }
    }
    if ( a5 && v16 && (VfRuleClasses & 0x20000000000000LL) != 0 )
      IovAiInsertObject(v14);
  }
  return (__int64)v14;
}
