/*
 * XREFs of IoMakeAssociatedIrpPriv @ 0x1404578A8
 * Callers:
 *     IoMakeAssociatedIrp @ 0x140457810 (IoMakeAssociatedIrp.c)
 *     IoMakeAssociatedIrpEx @ 0x140457890 (IoMakeAssociatedIrpEx.c)
 * Callees:
 *     IopSetDiskIoAttributionExtension @ 0x1402692E4 (IopSetDiskIoAttributionExtension.c)
 *     IopIrpHasExtensionType @ 0x14041C8C0 (IopIrpHasExtensionType.c)
 *     IopIsActivityTracingEnabled @ 0x1404555A0 (IopIsActivityTracingEnabled.c)
 *     IopSetDriverFlagsExtension @ 0x140457C2C (IopSetDriverFlagsExtension.c)
 *     IoSetActivityIdIrp @ 0x14047BB00 (IoSetActivityIdIrp.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoMakeAssociatedIrpPriv(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int16 v12; // di
  __int64 v13; // rbp
  __int16 v14; // di
  _GENERAL_LOOKASIDE *L; // rbp
  PSLIST_ENTRY v16; // rbx
  _SLIST_ENTRY **v17; // rdx
  __int16 Number; // ax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 result; // rax
  char v22; // [rsp+80h] [rbp+18h]
  char v23; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v23 = 0;
  if ( IopIsActivityTracingEnabled()
    && (v10 = *(_QWORD *)(v7 + 200), *(char *)(v7 + 71) >= 0)
    && v10
    && (*(_BYTE *)(v10 + 2) & 1) != 0
    || (v8 = *(_QWORD *)(v7 + 200), *(char *)(v7 + 71) >= 0) && v8 && (*(_BYTE *)(v8 + 2) & 0x40) != 0
    || (v9 = *(_QWORD *)(v7 + 200), *(char *)(v7 + 71) >= 0) && v9 && _bittest16((const signed __int16 *)(v9 + 2), 8u)
    || v6 && (*(_DWORD *)(v6 + 48) & 0x8000000) != 0 )
  {
    a3 += 2;
    v23 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = 0;
  v12 = 72 * a3 + 208;
  if ( a3 > SLOBYTE(IopPerfIoTrackingLock.AffinityVersion) )
    goto LABEL_43;
  v22 = 4;
  if ( a3 == 1 )
  {
    v13 = 2112LL;
  }
  else
  {
    if ( a3 <= SBYTE4(IopPerfIoTrackingLock.AffinityVersion) )
    {
      v13 = 2128LL;
      v3 = 1LL;
      v14 = 9 * SBYTE4(IopPerfIoTrackingLock.AffinityVersion);
    }
    else
    {
      v13 = 2144LL;
      v3 = 2LL;
      v14 = 9 * SLOBYTE(IopPerfIoTrackingLock.AffinityVersion);
    }
    v12 = 8 * v14 + 208;
  }
  L = *(_GENERAL_LOOKASIDE **)((char *)&CurrentPrcb->MxCsr + v13);
  ++L->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( !v16 )
  {
    ++L->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[v3].L;
    ++L->TotalAllocates;
    v16 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v16 )
      ++L->AllocateMisses;
  }
  if ( (IopIrpStackProfilerFlags & 3) == 0 )
  {
    if ( v16 )
      goto LABEL_26;
LABEL_43:
    result = ExAllocatePool2(0x40uLL);
    v16 = (PSLIST_ENTRY)result;
    if ( !result )
      return result;
    goto LABEL_26;
  }
  if ( !v16 )
    goto LABEL_43;
  if ( *((_QWORD *)&v16[3].Next + 1) < (unsigned __int64)(unsigned __int16)(72 * a3 + 208) )
  {
    ++L->TotalFrees;
    ExFreePoolWithTag(v16, 0);
    goto LABEL_43;
  }
  v12 = *((_WORD *)&v16[3].Next + 4);
LABEL_26:
  memset_0(v16, 0, v12);
  BYTE2(v16[4].Next) = a3;
  BYTE3(v16[4].Next) = a3 + 1;
  LOWORD(v16->Next) = 6;
  WORD1(v16->Next) = v12;
  BYTE6(v16[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v16[2].Next + 1) = v16 + 2;
  v16[2].Next = v16 + 2;
  v17 = &v16[4 * a3 + 13].Next + a3;
  *((_QWORD *)&v16[11].Next + 1) = v17;
  Number = CurrentPrcb->Number;
  LODWORD(v16[1].Next) |= 8u;
  WORD2(v16->Next) = Number;
  LODWORD(v16[1].Next) |= *(_DWORD *)(a1 + 16) & 0xE0002;
  HIBYTE(v16[4].Next) |= v22;
  *((_QWORD *)&v16[9].Next + 1) = *(_QWORD *)(a1 + 152);
  *((_QWORD *)&v16[1].Next + 1) = a1;
  if ( v23 )
  {
    BYTE3(v16[4].Next) -= 2;
    BYTE2(v16[4].Next) -= 2;
    *((_QWORD *)&v16[11].Next + 1) = v17 - 18;
    *((_QWORD *)&v16[12].Next + 1) = v17 - 18;
  }
  if ( IopIsActivityTracingEnabled() && IopIrpHasExtensionType(a1, 0) )
    IoSetActivityIdIrp(v16, *(_QWORD *)(a1 + 200) + 24LL);
  v19 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) >= 0 && v19 && (*(_BYTE *)(v19 + 2) & 0x40) != 0 )
    IopSetDiskIoAttributionExtension(
      (__int64)v16,
      *(_QWORD *)(*(_QWORD *)(a1 + 200) + 16LL),
      *((_QWORD *)&v16[9].Next + 1),
      1);
  v20 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) >= 0 && v20 )
  {
    if ( _bittest16((const signed __int16 *)(v20 + 2), 8u) )
      IopSetDriverFlagsExtension(v16, *(_QWORD *)(*(_QWORD *)(a1 + 200) + 56LL));
  }
  return (__int64)v16;
}
