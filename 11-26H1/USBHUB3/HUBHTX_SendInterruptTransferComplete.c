/*
 * XREFs of HUBHTX_SendInterruptTransferComplete @ 0x140005ED0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x140006790 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x14000A81C (HUBSM_AddEvent.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1400341F4 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBHTX_SendInterruptTransferComplete(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v6; // ebx
  int v7; // ebp
  __int64 *v8; // rsi
  __int64 v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+30h] [rbp-28h]

  v4 = *(unsigned __int16 *)(a4 + 1028);
  v6 = *(_DWORD *)(a3 + 8);
  v7 = *(_DWORD *)(a4 + 996);
  *(_WORD *)(a4 + 1146) = v4;
  *(_DWORD *)(a4 + 1152) = 8 * v4;
  *(_QWORD *)(a4 + 1160) = *(_QWORD *)(a4 + 1136);
  if ( v6 < 0 )
  {
    v8 = (__int64 *)(a4 + 2536);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = v7;
      v11 = v6;
      WPP_RECORDER_SF_dD(*v8, 2u, 3u, 0x1Du, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v11, v13);
    }
    if ( v6 != -1073741536 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v12) = v7;
        LODWORD(v10) = v6;
        WPP_RECORDER_SF_dD(*v8, 2u, 3u, 0x1Eu, (__int64)&WPP_70469c384dd13630d566350a6f2705ad_Traceguids, v10, v12);
      }
      if ( (*(_DWORD *)(a4 + 2608) & 4) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierInterruptTransferFailure", a4 + 1280);
      *(_DWORD *)(a4 + 2612) = 1073872898;
      if ( (byte_140070D4A & 2) != 0 )
        McTemplateK0pqqq_EtwWriteTransfer(
          a1,
          (unsigned int)&USBHUB3_ETW_EVENT_PORT_INTERRUPT_TRANSFER_ERROR,
          a4 + 2428,
          *(_QWORD *)(a4 + 248),
          0,
          v7,
          v6);
    }
  }
  return HUBSM_AddEvent(a4 + 1280, ((v6 >> 31) & 0xFFFFFFFC) + 2034);
}
