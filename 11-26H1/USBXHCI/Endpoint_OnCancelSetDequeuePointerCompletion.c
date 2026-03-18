/*
 * XREFs of Endpoint_OnCancelSetDequeuePointerCompletion @ 0x140022C20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x140001BD4 (WPP_RECORDER_SF_ddd.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x140022E08 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 *     WPP_RECORDER_SF_dddL @ 0x140030330 (WPP_RECORDER_SF_dddL.c)
 */

void __fastcall Endpoint_OnCancelSetDequeuePointerCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 v3; // rbx
  unsigned __int16 *v6; // rdi
  int v7; // edx
  int v8; // edx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v3 + 80),
        4u,
        0xDu,
        0x41u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 143LL),
        *(_DWORD *)(v3 + 152),
        *(unsigned __int16 *)(a1 + 34));
  }
  else
  {
    if ( *(_BYTE *)(a1 + 60) == 1 )
    {
      v6 = (unsigned __int16 *)(a1 + 34);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 143LL);
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_dddL(*(_QWORD *)(v3 + 80), v7, (_DWORD)a3, 67);
      }
      if ( *(_BYTE *)(v3 + 37) )
        Endpoint_StreamsOnCancelSetDequeuePointerComplete(v3, *v6);
      else
        ESM_AddEvent((KSPIN_LOCK *)(v3 + 304), 16);
      return;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = *(unsigned __int16 *)(a1 + 34);
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_dddL(*(_QWORD *)(v3 + 80), v8, *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 143LL), 66);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      512LL,
      "Set Dequeue Pointer command following a Stop Endpoint command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4106, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
  }
  _m_prefetchw((const void *)(v3 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u) & 2) == 0 )
    ESM_AddEsmEvent(v3);
}
