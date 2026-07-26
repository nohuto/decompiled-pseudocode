/*
 * XREFs of ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x140078BD0
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1400BC420 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x14008C780 (McTemplateK0zq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ZL @ 0x140090870 (WPP_RECORDER_SF_ZL.c)
 */

__int64 __fastcall ndisValidate60Protocol(struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS *a1, int a2, int a3)
{
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-28h]

  v4 = -1073676283;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x4Bu,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      &a1->Name.Length);
  if ( a1->BindAdapterHandlerEx
    && a1->UnbindAdapterHandlerEx
    && a1->OpenAdapterCompleteHandlerEx
    && a1->CloseAdapterCompleteHandlerEx
    && a1->NetPnPEventHandler )
  {
    if ( a1->SendNetBufferListsCompleteHandler )
    {
      if ( a1->ReceiveNetBufferListsHandler )
      {
        if ( a1->OidRequestCompleteHandler )
        {
          v4 = 0;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Z(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              5u,
              0x4Eu,
              (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
              &a1->Name.Length);
          if ( (byte_14011D044 & 0x10) != 0 )
            McTemplateK0zq_EtwWriteTransfer((_DWORD)a1, (unsigned int)&Validate60ProtocolFailed, a3, a1->Name.Buffer, 2);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Z(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            5u,
            0x4Du,
            (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
            &a1->Name.Length);
        if ( (byte_14011D044 & 0x10) != 0 )
          McTemplateK0zq_EtwWriteTransfer((_DWORD)a1, (unsigned int)&Validate60ProtocolFailed, a3, a1->Name.Buffer, 1);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Z(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          5u,
          0x4Cu,
          (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
          &a1->Name.Length);
      if ( (byte_14011D044 & 0x10) != 0 )
        McTemplateK0zq_EtwWriteTransfer((_DWORD)a1, (unsigned int)&Validate60ProtocolFailed, a3, a1->Name.Buffer, 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ZL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 79, v6, (__int64)&a1->Name, v4);
  return v4;
}
