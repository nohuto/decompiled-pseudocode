/*
 * XREFs of Endpoint_OnResetEndpointResetCompletion @ 0x14001DF10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     XilEndpoint_FetchStreamContextArray @ 0x14001D444 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_OnResetSetDequeuePointer @ 0x14001E158 (Endpoint_OnResetSetDequeuePointer.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     UsbDevice_GetEndpointState @ 0x14002276C (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall Endpoint_OnResetEndpointResetCompletion(__int64 a1, int a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 v6; // rbx
  char v7; // cl
  int EndpointState; // edx
  __int64 result; // rax
  __int64 v10; // rcx
  int StreamContextArray; // eax
  int v12; // edx
  unsigned int i; // edi
  char v14; // [rsp+38h] [rbp-10h]

  v3 = *(__int64 **)(a1 + 48);
  v6 = *v3;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v6 + 80),
        4u,
        0xDu,
        0x30u,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 143LL),
        *(_DWORD *)(v6 + 152));
    goto LABEL_13;
  }
  v7 = *(_BYTE *)(a1 + 60);
  if ( v7 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *(unsigned __int8 *)(*(_QWORD *)(v6 + 16) + 143LL);
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v6 + 80),
        v12,
        13,
        49,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v6 + 16) + 143LL),
        *(_DWORD *)(v6 + 152),
        v7);
    }
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)v6,
      *(_QWORD *)(v6 + 8),
      *(_QWORD *)(v6 + 24),
      256,
      (__int64)"Endpoint Reset Command failed",
      a1 + 24,
      a3);
    Controller_ReportFatalError(*(_QWORD *)v6, 2, 4123, 0, *(_QWORD *)(v6 + 16), v6, 0LL);
LABEL_13:
    StreamContextArray = -1073741823;
LABEL_9:
    *(_DWORD *)(v6 + 296) = StreamContextArray;
    _m_prefetchw((const void *)(v6 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v6 + 32), 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEsmEvent(v6, 12LL);
    return result;
  }
  EndpointState = UsbDevice_GetEndpointState(*(_QWORD *)(v6 + 16), *(unsigned int *)(v6 + 152));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = EndpointState;
    LOBYTE(EndpointState) = 4;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v6 + 80),
      EndpointState,
      13,
      50,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v6 + 16) + 143LL),
      *(_DWORD *)(v6 + 152),
      v14);
  }
  if ( !*(_BYTE *)(v6 + 37) )
    return Endpoint_OnResetSetDequeuePointer(v3, 0LL);
  v10 = *(_QWORD *)(v6 + 144);
  *(_DWORD *)(v10 + 20) = 0;
  StreamContextArray = XilEndpoint_FetchStreamContextArray(v10);
  if ( StreamContextArray < 0 )
    goto LABEL_9;
  result = *(_QWORD *)(v6 + 144);
  for ( i = 1; i <= *(_DWORD *)(result + 8); ++i )
  {
    Endpoint_OnResetSetDequeuePointer(v3, i);
    result = *(_QWORD *)(v6 + 144);
  }
  return result;
}
