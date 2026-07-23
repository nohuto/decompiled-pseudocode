/*
 * XREFs of PspCriticalProcessDeathBugcheckCallback @ 0x140618EF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlULongLongSub @ 0x1404A8EE4 (RtlULongLongSub.c)
 *     KeAddTriageDumpDataBlock @ 0x1405E8760 (KeAddTriageDumpDataBlock.c)
 */

void __fastcall PspCriticalProcessDeathBugcheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        struct _KTRIAGE_DUMP_DATA_ARRAY **ReasonSpecificData,
        SIZE_T ReasonSpecificDataLength)
{
  struct _KTRIAGE_DUMP_DATA_ARRAY *v4; // rbx
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *Size; // r14
  struct _KTRIAGE_DUMP_DATA_ARRAY *v6; // r14
  SIZE_T v7; // r9
  SIZE_T v8; // r9
  SIZE_T v9; // r9
  SIZE_T v10; // r9
  SIZE_T v11; // r9
  struct _LIST_ENTRY *Flink; // r10
  __int64 v13; // r10
  SIZE_T v14; // r9
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdi
  unsigned int i; // esi
  NTSTATUS v18; // eax
  ULONGLONG pullResult; // [rsp+48h] [rbp+10h] BYREF

  v4 = ReasonSpecificData[6];
  pullResult = 0LL;
  Size = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)v4->Blocks[0].Size;
  if ( Record == Size && (v4->VirtMemSize & 1) != 0 )
  {
    v6 = (struct _KTRIAGE_DUMP_DATA_ARRAY *)&Size[1];
    *ReasonSpecificData = v6;
    KeAddTriageDumpDataBlock(v6, v4->Blocks[0].Size, (PVOID)0x20C0, ReasonSpecificDataLength);
    KeAddTriageDumpDataBlock(v6, (_DWORD)v4 + 8, (PVOID)0x28, v7);
    KeAddTriageDumpDataBlock(v6, (ULONG)v4->Blocks[0].Address, (PVOID)v4->NumBlocksTotal, v8);
    KeAddTriageDumpDataBlock(v6, (ULONG)v4[1].List.Flink, (PVOID)0x798, v9);
    KeAddTriageDumpDataBlock(v6, (ULONG)v4[1].List.Flink[34].Flink, (PVOID)0x840, v10);
    Flink = v4[1].List.Flink;
    if ( HIDWORD(Flink[94].Blink) )
    {
      RtlULongLongSub((ULONGLONG)Flink[3].Blink, (ULONGLONG)Flink[3].Flink, &pullResult);
      KeAddTriageDumpDataBlock(v6, *(_QWORD *)(v13 + 48), (PVOID)pullResult, v14);
    }
    v15 = *(_QWORD *)&v4[1].VirtMemSize & 0xFFFFFFFFFFFFF000uLL;
    v16 = 4096LL;
    if ( ((*(_QWORD *)&v4[1].NumBlocksUsed + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x1000 )
      v16 = (*(_QWORD *)&v4[1].NumBlocksUsed + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    for ( i = 0; i < 0x200; ++i )
    {
      v16 -= 4096LL;
      if ( v16 < v15 )
        break;
      ++HIDWORD(v4[2].List.Blink);
      v18 = KeAddTriageDumpDataBlock(v6, v16, (PVOID)0x1000, v11);
      if ( v18 >= 0 )
        ++v4[2].NumBlocksUsed;
      if ( !v4[2].NumBlocksTotal )
        v4[2].NumBlocksTotal = v18;
    }
  }
}
