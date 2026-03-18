/*
 * XREFs of Endpoint_ControlEndpointResetSetDequeuePointerCompletion @ 0x14002B0C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 */

void __fastcall Endpoint_ControlEndpointResetSetDequeuePointerCompletion(__int64 a1, int a2, __int128 *a3)
{
  __int64 v3; // rbx
  int v6; // ecx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v3 + 80),
        4u,
        0xDu,
        0x56u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 143LL),
        *(_DWORD *)(v3 + 152));
  }
  else
  {
    v6 = *(unsigned __int8 *)(a1 + 60);
    if ( (_BYTE)v6 == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(v3 + 80),
          4u,
          0xDu,
          0x57u,
          (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
          1,
          *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 143LL),
          *(_DWORD *)(v3 + 152));
      *(_DWORD *)(v3 + 296) = 0;
      ESM_AddEvent((KSPIN_LOCK *)(v3 + 304), 16);
      return;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        2u,
        0xDu,
        0x58u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 143LL),
        *(_DWORD *)(v3 + 152),
        v6);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      128LL,
      "Set Dequeue pointer command following a Reset Endpoint command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4101, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
  }
  _m_prefetchw((const void *)(v3 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u) & 2) == 0 )
    ESM_AddEsmEvent(v3);
}
