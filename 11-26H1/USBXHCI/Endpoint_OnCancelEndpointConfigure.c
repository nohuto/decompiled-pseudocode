/*
 * XREFs of Endpoint_OnCancelEndpointConfigure @ 0x1400054F4
 * Callers:
 *     ESM_ReconfiguringEndpointAfterStop @ 0x140037760 (ESM_ReconfiguringEndpointAfterStop.c)
 * Callees:
 *     XilEndpoint_AcquireBuffer @ 0x140004BCC (XilEndpoint_AcquireBuffer.c)
 *     Endpoint_SetUpConfigureEndpointCommand @ 0x140005A68 (Endpoint_SetUpConfigureEndpointCommand.c)
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     Command_SendCommand @ 0x14000D4AC (Command_SendCommand.c)
 *     ESM_AddEsmEvent @ 0x14001F8C0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x1400242C4 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 */

__int64 __fastcall Endpoint_OnCancelEndpointConfigure(_DWORD *a1)
{
  int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rdx
  char v6; // cl
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 result; // rax
  unsigned int v10; // edx

  v2 = a1[38];
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      *((_QWORD *)a1 + 10),
      4,
      13,
      74,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      *(_BYTE *)(*((_QWORD *)a1 + 2) + 143LL),
      a1[38]);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *(_BYTE *)(v5 + 666);
  if ( (*(_DWORD *)(v4 + 104) & 4) != 0 )
  {
    if ( v6 )
      v7 = XilCoreUsbDevice_GetDeviceContextBufferVA(v5 + (*(_BYTE *)(v5 + 665) != 0 ? 624LL : 616LL))
         + (((unsigned int)(v2 - 1) + 1LL) << 6);
    else
      v7 = 0LL;
    v8 = *((_QWORD *)a1 + 34);
    if ( v8 )
      goto LABEL_7;
    v10 = 2112;
  }
  else
  {
    if ( v6 )
      v7 = XilCoreUsbDevice_GetDeviceContextBufferVA(v5 + (*(_BYTE *)(v5 + 665) != 0 ? 624LL : 616LL))
         + 32 * ((unsigned int)(v2 - 1) + 1LL);
    else
      v7 = 0LL;
    v8 = *((_QWORD *)a1 + 34);
    if ( v8 )
      goto LABEL_7;
    v10 = 1056;
  }
  v8 = XilEndpoint_AcquireBuffer(a1, v10, (__int64)a1, 0x32747045u);
  *((_QWORD *)a1 + 34) = v8;
  if ( v8 )
  {
LABEL_7:
    Endpoint_SetUpConfigureEndpointCommand(
      (int)a1,
      1,
      (int)Endpoint_OnCancelEndpointConfigureCompletion_EpDropped,
      (int)a1,
      v8,
      v7,
      0LL,
      a1 + 42);
    return Command_SendCommand(v3, a1 + 42);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DD(
      *((_QWORD *)a1 + 10),
      2,
      13,
      75,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      *(_BYTE *)(*((_QWORD *)a1 + 2) + 143LL),
      a1[38]);
  Controller_ReportFatalError(*(_QWORD *)a1, 2, 0, 0, *((_QWORD *)a1 + 2), (__int64)a1, 0LL);
  _m_prefetchw(a1 + 8);
  result = (unsigned int)_InterlockedOr(a1 + 8, 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEsmEvent(a1, 12LL);
  return result;
}
