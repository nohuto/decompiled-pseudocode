/*
 * XREFs of HUBPDO_UnregisterPortPLDRCapability @ 0x14008555C
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016C10 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     HUBPDO_GetPortPath @ 0x140018F9C (HUBPDO_GetPortPath.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     HUBREG_IsPortPLDRCapable @ 0x1400884AC (HUBREG_IsPortPLDRCapable.c)
 *     HUBREG_SetPortPLDRCapabilityValue @ 0x14008C204 (HUBREG_SetPortPLDRCapabilityValue.c)
 */

__int64 __fastcall HUBPDO_UnregisterPortPLDRCapability(_QWORD *a1)
{
  unsigned int v2; // edi
  int v4; // [rsp+30h] [rbp-71h]
  int v5; // [rsp+30h] [rbp-71h]
  int v6; // [rsp+30h] [rbp-71h]
  int v7; // [rsp+38h] [rbp-69h]
  int v8; // [rsp+38h] [rbp-69h]
  int v9; // [rsp+38h] [rbp-69h]
  _WORD v10[2]; // [rsp+48h] [rbp-59h] BYREF
  _WORD v11[2]; // [rsp+4Ch] [rbp-55h] BYREF
  __int16 v12; // [rsp+50h] [rbp-51h] BYREF
  _QWORD v13[2]; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14[2]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD *v15; // [rsp+88h] [rbp-19h]
  __int64 v16; // [rsp+90h] [rbp-11h]
  __int16 *v17; // [rsp+98h] [rbp-9h]
  __int64 v18; // [rsp+A0h] [rbp-1h]
  _WORD *v19; // [rsp+A8h] [rbp+7h]
  __int64 v20; // [rsp+B0h] [rbp+Fh]
  __int16 *v21; // [rsp+B8h] [rbp+17h]
  __int64 v22; // [rsp+C0h] [rbp+1Fh]
  _WORD *v23; // [rsp+C8h] [rbp+27h]
  __int64 v24; // [rsp+D0h] [rbp+2Fh]
  _WORD v25[8]; // [rsp+D8h] [rbp+37h] BYREF

  HUBPDO_GetPortPath(a1[2], v25);
  v2 = 0;
  if ( (unsigned __int8)HUBREG_IsPortPLDRCapable(*a1, *(unsigned __int16 *)(a1[1] + 200LL)) )
  {
    if ( (*(_DWORD *)(*a1 + 40LL) & 0x40000) != 0 && (a1[205] & 0x20) != 0 )
    {
      if ( (unsigned int)HUBREG_SetPortPLDRCapabilityValue(*a1, *(unsigned __int16 *)(a1[1] + 200LL), 0LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v7 = *((unsigned __int16 *)a1 + 1003);
          v4 = *((unsigned __int16 *)a1 + 1002);
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(a1[1] + 1432LL),
            2u,
            5u,
            0xBDu,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
            v4,
            v7);
        }
        if ( (unsigned int)dword_14006D2D0 > 2
          && (qword_14006D2E0 & 0x400000000001LL) != 0
          && (qword_14006D2E8 & 0x400000000001LL) == qword_14006D2E8 )
        {
          v13[0] = 16779264LL;
          v15 = v13;
          v10[0] = *((_WORD *)a1 + 1002);
          v16 = 8LL;
          v17 = v10;
          v11[0] = *((_WORD *)a1 + 1003);
          v19 = v11;
          v12 = 6;
          v21 = &v12;
          v23 = v25;
          v18 = 2LL;
          v20 = 2LL;
          v22 = 2LL;
          v24 = 12LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006D2D0, byte_1400687D7, 0LL, 0LL, 7u, v14);
        }
        return (unsigned int)-1073741762;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = *((unsigned __int16 *)a1 + 1003);
          v5 = *((unsigned __int16 *)a1 + 1002);
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(a1[1] + 1432LL),
            4u,
            5u,
            0xBEu,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
            v5,
            v8);
        }
        if ( (unsigned int)dword_14006D2D0 > 4
          && (qword_14006D2E0 & 0x400000000001LL) != 0
          && (qword_14006D2E8 & 0x400000000001LL) == qword_14006D2E8 )
        {
          v13[0] = 16779264LL;
          v15 = v13;
          v12 = *((_WORD *)a1 + 1002);
          v16 = 8LL;
          v17 = &v12;
          v11[0] = *((_WORD *)a1 + 1003);
          v19 = v11;
          v10[0] = 6;
          v21 = v10;
          v23 = v25;
          v18 = 2LL;
          v20 = 2LL;
          v22 = 2LL;
          v24 = 12LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006D2D0, byte_140068643, 0LL, 0LL, 7u, v14);
        }
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = *((unsigned __int16 *)a1 + 1003);
        v6 = *((unsigned __int16 *)a1 + 1002);
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(a1[1] + 1432LL),
          2u,
          5u,
          0xBCu,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
          v6,
          v9);
      }
      if ( (unsigned int)dword_14006D2D0 > 2
        && (qword_14006D2E0 & 0x400000000001LL) != 0
        && (qword_14006D2E8 & 0x400000000001LL) == qword_14006D2E8 )
      {
        v13[0] = 16779264LL;
        v15 = v13;
        v12 = *((_WORD *)a1 + 1002);
        v16 = 8LL;
        v17 = &v12;
        v11[0] = *((_WORD *)a1 + 1003);
        v19 = v11;
        v10[0] = 6;
        v21 = v10;
        v23 = v25;
        v18 = 2LL;
        v20 = 2LL;
        v22 = 2LL;
        v24 = 12LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006D2D0, byte_140068D94, 0LL, 0LL, 7u, v14);
      }
      return (unsigned int)-1073741808;
    }
  }
  return v2;
}
