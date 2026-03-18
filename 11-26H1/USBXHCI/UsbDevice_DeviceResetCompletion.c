/*
 * XREFs of UsbDevice_DeviceResetCompletion @ 0x140026930
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_Disable @ 0x14001DD5C (Endpoint_Disable.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     UsbDevice_GetEndpointState @ 0x14002276C (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_dq @ 0x14002510C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dLL @ 0x14004EE64 (WPP_RECORDER_SF_dLL.c)
 *     WPP_RECORDER_SF_dqLL @ 0x14004F074 (WPP_RECORDER_SF_dqLL.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_DeviceResetCompletion(__int64 a1, int a2, __int128 *a3, int a4)
{
  __int64 v4; // rbx
  char v6; // r14
  __int64 *v8; // rsi
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // r9d
  __int64 *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v16; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD *)(a1 + 48);
  v6 = a2;
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        4u,
        0xCu,
        0x53u,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        *(unsigned __int8 *)(v4 + 143),
        *(_QWORD *)v4);
    v8 = (__int64 *)(v4 + 192);
    v9 = 30LL;
    do
    {
      if ( *v8 )
        Endpoint_Disable(*v8, 0LL);
      ++v8;
      --v9;
    }
    while ( v9 );
LABEL_19:
    *(_DWORD *)(v4 + 160) = 3;
    v14 = *(_QWORD *)(v4 + 432);
    *(_QWORD *)(v4 + 432) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             v14,
             0LL);
  }
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        4u,
        0xCu,
        0x54u,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids);
    if ( !(unsigned int)UsbDevice_GetEndpointState(v4, 1)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dLL(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        *(unsigned __int8 *)(a1 + 61),
        v10,
        v11,
        v16,
        *(_BYTE *)(a1 + 61),
        *(_BYTE *)(a1 + 60),
        v6);
    }
    v12 = (__int64 *)(v4 + 192);
    v13 = 30LL;
    do
    {
      if ( *v12 )
        Endpoint_Disable(*v12, 0LL);
      ++v12;
      --v13;
    }
    while ( v13 );
    goto LABEL_19;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqLL(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL), *(unsigned __int8 *)(a1 + 61), (_DWORD)a3, a4);
  Controller_HwVerifierBreakIfEnabled(
    *(_QWORD *)(v4 + 8),
    *(_QWORD *)v4,
    0,
    0x200000LL,
    "Reset Device Command failed",
    (__int128 *)(a1 + 24),
    a3);
  return Controller_ReportFatalError(*(_QWORD *)(v4 + 8), 2, 4121, 0, 0LL, 0LL, 0LL);
}
