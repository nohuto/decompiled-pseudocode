/*
 * XREFs of WheapReportPersistedErrorRecord @ 0x1406D8AD4
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1406D8788 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     WheapWorkQueueAddItem @ 0x1403E1560 (WheapWorkQueueAddItem.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

char __fastcall WheapReportPersistedErrorRecord(_DWORD *Src)
{
  _QWORD *WheaInfo; // rsi
  int v3; // ebp
  _LIST_ENTRY *Pool2; // rax
  _LIST_ENTRY *v5; // rbx

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo )
    return 0;
  v3 = Src[5] + 40;
  Pool2 = (_LIST_ENTRY *)ExAllocatePool2(0x40uLL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  LODWORD(Pool2[1].Flink) = v3;
  LODWORD(Pool2[1].Blink) = 2;
  memmove(&Pool2[2].Blink, Src, (unsigned int)Src[5]);
  WheapWorkQueueAddItem(WheaInfo[2], v5);
  return 1;
}
