/*
 * XREFs of WheapProcessWorkQueueItem @ 0x1403DFB60
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     WheapFreeErrorRecord @ 0x1403DFC30 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x1403DFC68 (WheapGenerateETWEvents.c)
 *     WheapPredictiveFailureAnalysis @ 0x140AC88D8 (WheapPredictiveFailureAnalysis.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140BFFFD0 (WheapCreateLiveDumpFromPreviousSession.c)
 */

LONG __fastcall WheapProcessWorkQueueItem(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rax
  unsigned int v6; // eax
  int v7; // ecx

  if ( WheapPreviousSessionFailure )
  {
    if ( (*(_BYTE *)(a2 + 144) & 2) != 0 && *(_DWORD *)(a2 + 52) <= 1u )
    {
      v5 = *(_QWORD *)(a2 + 32);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 40);
        if ( !v6 || v6 <= 9 && (v7 = 664, _bittest(&v7, v6)) )
          WheapCreateLiveDumpFromPreviousSession(a2);
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
    v4 = (__int64 *)qword_140EFE1C8;
    if ( *(__int64 **)qword_140EFE1C8 != &WheapWaitingETWEvents )
      __fastfail(3u);
    *(_QWORD *)a2 = &WheapWaitingETWEvents;
    *(_QWORD *)(a2 + 8) = v4;
    *v4 = a2;
    qword_140EFE1C8 = a2;
    return KeSetEvent(&WheapWaitingETWEventLock, 0, 0);
  }
}
