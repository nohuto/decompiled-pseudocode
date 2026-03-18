/*
 * XREFs of Endpoint_OnResetSetDequeuePointerCompletion @ 0x140022880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x140001BD4 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Endpoint_StreamsOnResetSetDequeuePointerComplete @ 0x14001C798 (Endpoint_StreamsOnResetSetDequeuePointerComplete.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 */

void __fastcall Endpoint_OnResetSetDequeuePointerCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  char v7; // cl
  unsigned __int16 *v8; // rdi
  int v9; // edx

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v6 + 80),
        4u,
        0xDu,
        0x2Du,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 143LL),
        *(_DWORD *)(v6 + 152));
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 60);
    if ( v7 == 1 )
    {
      v8 = (unsigned __int16 *)(a1 + 34);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddd(
          *(_QWORD *)(v6 + 80),
          4u,
          0xDu,
          0x2Fu,
          (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 143LL),
          *(_DWORD *)(v6 + 152),
          *v8);
      if ( *(_BYTE *)(v6 + 37) )
      {
        Endpoint_StreamsOnResetSetDequeuePointerComplete(v3, *v8);
      }
      else
      {
        *(_DWORD *)(v6 + 296) = 0;
        ESM_AddEvent((KSPIN_LOCK *)(v6 + 304), 16);
      }
      return;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 143LL);
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v6 + 80),
        v9,
        13,
        46,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v6 + 16) + 143LL),
        *(_DWORD *)(v6 + 152),
        v7);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      128LL,
      "Set Dequeue pointer command following a Reset Endpoint command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4122, 0, *(_QWORD *)(v6 + 16), v6, (__int64)a3);
  }
  *(_DWORD *)(v6 + 296) = -1073741823;
  _m_prefetchw((const void *)(v6 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u) & 2) == 0 )
    ESM_AddEsmEvent(v6);
}
