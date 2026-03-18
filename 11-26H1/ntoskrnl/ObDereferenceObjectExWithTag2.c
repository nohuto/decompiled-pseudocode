/*
 * XREFs of ObDereferenceObjectExWithTag2 @ 0x14047F848
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     ExpTimerApcRoutine @ 0x14047F760 (ExpTimerApcRoutine.c)
 *     ExTimerRundown @ 0x14051A404 (ExTimerRundown.c)
 *     ExpSetTimerObject @ 0x1406CEDA8 (ExpSetTimerObject.c)
 *     ExpTimerDpcRoutine @ 0x1406CF5A0 (ExpTimerDpcRoutine.c)
 *     NtCancelTimer @ 0x1406CF780 (NtCancelTimer.c)
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     PspClearProcessThreadCidRefs @ 0x140959970 (PspClearProcessThreadCidRefs.c)
 *     PsLookupThreadByThreadId @ 0x140A10B70 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A33250 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A5D8F0 (NtAlertThreadByThreadId.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403DD9F0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
