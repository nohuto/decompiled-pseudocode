/*
 * XREFs of ObDereferenceObjectExWithTag2 @ 0x1404791B8
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     ExpTimerApcRoutine @ 0x1404790D0 (ExpTimerApcRoutine.c)
 *     ExTimerRundown @ 0x140513E74 (ExTimerRundown.c)
 *     ExpSetTimerObject @ 0x1406D2DD8 (ExpSetTimerObject.c)
 *     ExpTimerDpcRoutine @ 0x1406D35D0 (ExpTimerDpcRoutine.c)
 *     NtCancelTimer @ 0x1406D37B0 (NtCancelTimer.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     PspClearProcessThreadCidRefs @ 0x1409FF230 (PspClearProcessThreadCidRefs.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A227F0 (PspThreadFromTicket.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A4E1B0 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A6A8B0 (NtAlertThreadByThreadId.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403E0BE0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ObDereferenceObjectExWithTag2(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3, char a4)
{
  __int64 v4; // rsi
  signed __int64 v6; // rdi
  signed __int64 BugCheckParameter4; // rbx

  v4 = a2;
  v6 = BugCheckParameter2 - 48;
  if ( a4 && ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48, -(__int16)a2, a3);
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, -(int)v4) - v4;
  if ( BugCheckParameter4 <= 0 )
  {
    if ( *(_QWORD *)(v6 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v6 + 24) ^ (unsigned __int64)BYTE1(v6)],
        BugCheckParameter2,
        6uLL,
        *(_QWORD *)(v6 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(v6);
  }
  return BugCheckParameter4;
}
