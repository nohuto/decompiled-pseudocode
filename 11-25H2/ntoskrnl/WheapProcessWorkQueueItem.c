/*
 * XREFs of WheapProcessWorkQueueItem @ 0x1404781D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     WheapFreeErrorRecord @ 0x1404782CC (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x1404782FC (WheapGenerateETWEvents.c)
 *     WheapPredictiveFailureAnalysis @ 0x140A41918 (WheapPredictiveFailureAnalysis.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140B51DA8 (WheapCreateLiveDumpFromPreviousSession.c)
 */

LONG __fastcall WheapProcessWorkQueueItem(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rax
  unsigned int v6; // ecx
  int v7; // eax

  if ( WheapPreviousSessionFailure )
  {
    if ( (*(_BYTE *)(a2 + 144) & 2) != 0 && *(_DWORD *)(a2 + 52) <= 1u )
    {
      v5 = *(_QWORD *)(a2 + 32);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 40);
        if ( v6 <= 9 )
        {
          v7 = 665;
          if ( _bittest(&v7, v6) )
            WheapCreateLiveDumpFromPreviousSession(a2);
        }
      }
    }
  }
  if ( WheapEventingInitialized && *(char *)(a2 + 144) >= 0 )
  {
    WheapPredictiveFailureAnalysis(a2);
    WheapGenerateETWEvents(a2 + 40);
    return WheapFreeErrorRecord(a2);
  }
  else
  {
    KeWaitForSingleObject(&WheapWaitingETWEventLock, Executive, 0, 0, 0LL);
    v4 = (__int64 *)qword_140EF9728;
    if ( *(__int64 **)qword_140EF9728 != &WheapWaitingETWEvents )
      __fastfail(3u);
    *(_QWORD *)a2 = &WheapWaitingETWEvents;
    *(_QWORD *)(a2 + 8) = v4;
    *v4 = a2;
    qword_140EF9728 = a2;
    return KeSetEvent(&WheapWaitingETWEventLock, 0, 0);
  }
}
