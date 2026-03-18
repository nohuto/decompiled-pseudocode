/*
 * XREFs of HUBPDO_ValidateURB @ 0x14001C858
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016C10 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     McTemplateK0ppn_EtwWriteTransfer @ 0x14001CD20 (McTemplateK0ppn_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dq @ 0x14001DCEC (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_dqd @ 0x14001DDD4 (WPP_RECORDER_SF_dqd.c)
 */

__int64 __fastcall HUBPDO_ValidateURB(__int64 a1, unsigned __int16 *a2, int a3)
{
  unsigned __int16 *v3; // rbx
  unsigned int v5; // esi
  unsigned int v6; // edi
  int v7; // eax
  int v9; // [rsp+20h] [rbp-28h]

  v3 = a2;
  if ( *a2 < 0x18u )
  {
    if ( (byte_140070D49 & 8) != 0 )
      McTemplateK0ppn_EtwWriteTransfer(
        a1,
        (unsigned int)&USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_HEADER_LENGTH_WARNING,
        *(_QWORD *)(a1 + 24) + 1524,
        *(_QWORD *)(a1 + 24) + 24,
        (char)a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        *v3,
        a3,
        45,
        v9,
        *v3,
        (char)v3,
        24);
  }
  v5 = v3[1];
  v6 = 0;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 4) = 0;
  if ( v5 <= 0x3C )
  {
    if ( v5 == 30 || (unsigned __int16)(v5 - 48) <= 1u )
    {
      v7 = *v3;
      if ( (_WORD)v7 != 40 )
      {
        *((_DWORD *)v3 + 1) = -2147483136;
        v6 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqd(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
            v7,
            40,
            47,
            v9,
            v7,
            (char)v3,
            40);
        if ( (byte_140070D49 & 8) != 0 )
          McTemplateK0ppn_EtwWriteTransfer(
            a1,
            (unsigned int)&USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_HEADER_LENGTH_WARNING,
            *(_QWORD *)(a1 + 24) + 1524,
            *(_QWORD *)(a1 + 24) + 24,
            (char)v3);
      }
    }
  }
  else
  {
    *((_DWORD *)v3 + 1) = -2147483136;
    v6 = -1073741811;
    if ( (byte_140070D49 & 0x10) != 0 )
      McTemplateK0ppn_EtwWriteTransfer(
        a1,
        (unsigned int)&USBHUB3_ETW_EVENT_DISPATCH_URB_INVALID_FUNCTION,
        *(_QWORD *)(a1 + 24) + 1524,
        *(_QWORD *)(a1 + 24) + 24,
        (char)v3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        (_DWORD)a2,
        a3,
        46,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v5,
        (char)v3);
    }
  }
  return v6;
}
