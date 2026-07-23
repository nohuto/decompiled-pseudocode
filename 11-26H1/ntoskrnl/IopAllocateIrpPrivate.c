/*
 * XREFs of IopAllocateIrpPrivate @ 0x14026BBF4
 * Callers:
 *     IoAllocateIrp @ 0x14026BA40 (IoAllocateIrp.c)
 *     IoAllocateIrpEx @ 0x14026BAA0 (IoAllocateIrpEx.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IopAllocateIrpWithExtension @ 0x14045782C (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140C4E160 (IovAllocateIrp.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     IopIsActivityTracingEnabled @ 0x1404555A0 (IopIsActivityTracingEnabled.c)
 *     IopInitActivityIdIrp @ 0x14047B8F0 (IopInitActivityIdIrp.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocateIrpPrivate(__int64 a1, char a2, char a3)
{
  char v4; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  PSLIST_ENTRY v6; // rbx
  unsigned __int16 v7; // bp
  __int64 v8; // rsi
  __int64 v9; // r13
  __int16 v10; // bp
  _GENERAL_LOOKASIDE *L; // rsi
  char v12; // si
  char v13; // si
  _SLIST_ENTRY **v14; // rcx
  __int64 result; // rax
  char v16; // [rsp+78h] [rbp+10h]
  char v17; // [rsp+88h] [rbp+20h]

  v17 = 0;
  v4 = a2;
  if ( a1 && (a1 == -1 || (*(_DWORD *)(a1 + 48) & 0x8000000) != 0) )
  {
    v4 = a2 + 2;
    v17 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (IopIrpStackProfilerFlags & 3) != 0 && (IopIrpStackProfilerFlags & 4) != 0 && v4 < 20 )
  {
    ++CurrentPrcb->IoIrpStackProfilerCurrent.Profile[v4];
    ++CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps;
    if ( CurrentPrcb->IoIrpStackProfilerCurrent.Profile[v4] - CurrentPrcb->IoIrpStackProfilerPrevious.Profile[v4] > LODWORD(IopPerfIoTrackingLock.Timer.TimerListEntry.Blink)
      && CurrentPrcb->IoIrpStackProfilerCurrent.TotalIrps - CurrentPrcb->IoIrpStackProfilerPrevious.TotalIrps > HIDWORD(IopPerfIoTrackingLock.Timer.TimerListEntry.Blink) )
    {
      _m_prefetchw(&IopIrpStackProfilerFlags);
      if ( (_InterlockedAnd(&IopIrpStackProfilerFlags, 0xFFFFFFFB) & 4) != 0 )
        KiInsertQueueDpc((ULONG_PTR)&IopPerfIoTrackingLock.320, 0);
    }
  }
  v6 = 0LL;
  v16 = 0;
  v7 = 72 * v4 + 208;
  if ( v4 <= SLOBYTE(IopPerfIoTrackingLock.AffinityVersion) && (!a3 || CurrentPrcb->LookasideIrpFloat > 0) )
  {
    v16 = 4;
    if ( v4 == 1 )
    {
      v9 = 0LL;
      v8 = 2112LL;
    }
    else
    {
      if ( v4 <= SBYTE4(IopPerfIoTrackingLock.AffinityVersion) )
      {
        v8 = 2128LL;
        v9 = 1LL;
        v10 = 9 * SBYTE4(IopPerfIoTrackingLock.AffinityVersion);
      }
      else
      {
        v8 = 2144LL;
        v9 = 2LL;
        v10 = 9 * SLOBYTE(IopPerfIoTrackingLock.AffinityVersion);
      }
      v7 = 8 * v10 + 208;
    }
    L = *(_GENERAL_LOOKASIDE **)((char *)&CurrentPrcb->MxCsr + v8);
    ++L->TotalAllocates;
    v6 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v6 )
    {
      ++L->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[v9].L;
      ++L->TotalAllocates;
      v6 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v6 )
        ++L->AllocateMisses;
    }
    if ( (IopIrpStackProfilerFlags & 3) != 0 && v6 )
    {
      if ( *((_QWORD *)&v6[3].Next + 1) >= (unsigned __int64)(unsigned __int16)(72 * v4 + 208) )
      {
        v7 = *((_WORD *)&v6[3].Next + 4);
        v12 = 0;
        goto LABEL_16;
      }
      ++L->TotalFrees;
      ExFreePoolWithTag(v6, 0);
      v12 = 0;
LABEL_30:
      result = ExAllocatePool2((a3 != 0) + 66LL);
      v6 = (PSLIST_ENTRY)result;
      if ( !result )
        return result;
      goto LABEL_18;
    }
  }
  v12 = 0;
  if ( !v6 )
    goto LABEL_30;
LABEL_16:
  if ( a3 && IopIrpCreditsEnabled > 1 )
  {
    _InterlockedDecrement(&CurrentPrcb->LookasideIrpFloat);
    v12 = 8;
  }
  a3 = 0;
LABEL_18:
  memset_0(v6, 0, v7);
  v13 = v16 | v12;
  BYTE2(v6[4].Next) = v4;
  BYTE3(v6[4].Next) = v4 + 1;
  LOWORD(v6->Next) = 6;
  WORD1(v6->Next) = v7;
  BYTE6(v6[4].Next) = KeGetCurrentThread()->ApcStateIndex;
  *((_QWORD *)&v6[2].Next + 1) = v6 + 2;
  v6[2].Next = v6 + 2;
  v14 = &v6[4 * v4 + 13].Next + v4;
  *((_QWORD *)&v6[11].Next + 1) = v14;
  WORD2(v6->Next) = CurrentPrcb->Number;
  HIBYTE(v6[4].Next) = v13;
  if ( a3 )
    HIBYTE(v6[4].Next) = v13 | 1;
  if ( v17 )
  {
    BYTE3(v6[4].Next) -= 2;
    BYTE2(v6[4].Next) -= 2;
    *((_QWORD *)&v6[11].Next + 1) = v14 - 18;
    *((_QWORD *)&v6[12].Next + 1) = v14 - 18;
    if ( (unsigned __int8)IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(v6);
  }
  return (__int64)v6;
}
