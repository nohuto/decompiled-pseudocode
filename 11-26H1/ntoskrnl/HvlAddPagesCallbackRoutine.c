/*
 * XREFs of HvlAddPagesCallbackRoutine @ 0x1405BFD90
 * Callers:
 *     <none>
 * Callees:
 *     IoIsPartialDumpRetry @ 0x140509E84 (IoIsPartialDumpRetry.c)
 *     HvlpGetPageList @ 0x1405C2250 (HvlpGetPageList.c)
 *     HvlpGetPageListIterator @ 0x1405C2308 (HvlpGetPageListIterator.c)
 *     HvlpStartPageListIteration @ 0x1405C2460 (HvlpStartPageListIteration.c)
 */

void __fastcall HvlAddPagesCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        struct _LIST_ENTRY ***ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  int v5; // eax
  bool v6; // al
  int PageList; // eax
  __int64 PageListIterator; // rax
  struct _LIST_ENTRY **v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h] BYREF

  ReasonSpecificData[3] = 0LL;
  *((_DWORD *)ReasonSpecificData + 2) = 0;
  v9 = 0LL;
  v10 = 0;
  if ( VslpReservedTransferLock.WaitBlock[2].WaitListEntry.Flink
    && (HIDWORD(VslpReservedTransferLock.WaitBlock[2].WaitListEntry.Flink->Flink) & 1) != 0
    && VslpReservedTransferLock.ApcState.ApcListHead[1].Blink )
  {
    if ( !*ReasonSpecificData )
    {
      v6 = 1;
      if ( (VslpReservedTransferLock.ApcStateFill[32] & 1) == 0 )
      {
        if ( (v5 = *((_DWORD *)ReasonSpecificData + 3), v5 != 131073) && v5 != 395 || IoIsPartialDumpRetry() )
          v6 = 0;
      }
      *ReasonSpecificData = &VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Blink;
      BYTE4(VslpReservedTransferLock.WaitStatus) = v6;
      VslpReservedTransferLock.WaitBlockFill7[152] = 1;
      HvlpStartPageListIteration(1LL, 2 * !v6);
    }
    PageList = HvlpGetPageList(1LL, &v9, &v10);
    if ( v10 )
    {
      ReasonSpecificData[3] = (struct _LIST_ENTRY **)v10;
      ReasonSpecificData[2] = v9;
      *((_DWORD *)ReasonSpecificData + 2) = 2;
    }
    if ( PageList == 261 )
    {
      *((_DWORD *)ReasonSpecificData + 2) |= 0x80000000;
    }
    else
    {
      PageListIterator = HvlpGetPageListIterator(1LL);
      *(_QWORD *)(PageListIterator + 8) = 0LL;
      *(_WORD *)PageListIterator = 0;
      *(_WORD *)(PageListIterator + 3) = 0;
      *(_BYTE *)(PageListIterator + 2) = 0;
      VslpReservedTransferLock.WaitBlockFill7[152] = 0;
      *ReasonSpecificData = 0LL;
    }
  }
}
