/*
 * XREFs of WheapReportBootError @ 0x1406D49AC
 * Callers:
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1406D4708 (WheapCheckForAndReportErrorsFromPreviousSession.c)
 * Callees:
 *     WheapGetErrorSource @ 0x1403DE1E0 (WheapGetErrorSource.c)
 *     WheapAllocErrorRecord @ 0x1403DE230 (WheapAllocErrorRecord.c)
 *     WheapCallErrorSourceCreateRecord @ 0x1403DE2D8 (WheapCallErrorSourceCreateRecord.c)
 *     WheapWorkQueueAddItem @ 0x1403DE370 (WheapWorkQueueAddItem.c)
 */

char __fastcall WheapReportBootError(__int64 a1)
{
  _QWORD *WheaInfo; // rdi
  __int64 *ErrorSource; // rax
  int *v4; // rbx
  struct _LIST_ENTRY *v5; // rbp
  int v7; // [rsp+38h] [rbp+10h] BYREF

  WheaInfo = KeGetPcr()->Prcb.WheaInfo;
  if ( !WheaInfo )
    return 0;
  ErrorSource = WheapGetErrorSource(WheaInfo[1], *(_DWORD *)(a1 + 24));
  v4 = (int *)ErrorSource;
  if ( !ErrorSource )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)ErrorSource + 6);
  v7 = 0;
  v5 = (struct _LIST_ENTRY *)WheapAllocErrorRecord((__int64)ErrorSource, &v7);
  if ( !v5 )
    return 0;
  WheapCallErrorSourceCreateRecord(v4, a1);
  WheapWorkQueueAddItem(WheaInfo[2], v5);
  return 1;
}
