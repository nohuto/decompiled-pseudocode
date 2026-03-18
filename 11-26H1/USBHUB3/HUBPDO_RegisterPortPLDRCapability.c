/*
 * XREFs of HUBPDO_RegisterPortPLDRCapability @ 0x140084D6C
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016C10 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     HUBPDO_GetPortPath @ 0x140018F9C (HUBPDO_GetPortPath.c)
 *     WPP_RECORDER_SF_DDd @ 0x14001D85C (WPP_RECORDER_SF_DDd.c)
 *     DereferenceDeviceResetInterface @ 0x140045C14 (DereferenceDeviceResetInterface.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     HUBREG_SetPortPLDRCapabilityValue @ 0x14008C204 (HUBREG_SetPortPLDRCapabilityValue.c)
 *     QueryDeviceResetInterface @ 0x1400940C4 (QueryDeviceResetInterface.c)
 */

__int64 __fastcall HUBPDO_RegisterPortPLDRCapability(_QWORD *a1)
{
  __int64 v2; // r14
  __int16 v3; // r15
  unsigned int v4; // ebx
  __int64 v5; // rsi
  int DeviceResetInterface; // r14d
  int v8; // [rsp+28h] [rbp-E0h]
  int v9; // [rsp+30h] [rbp-D8h]
  int v10; // [rsp+30h] [rbp-D8h]
  int v11; // [rsp+30h] [rbp-D8h]
  int v12; // [rsp+30h] [rbp-D8h]
  int v13; // [rsp+38h] [rbp-D0h]
  int v14; // [rsp+38h] [rbp-D0h]
  int v15; // [rsp+38h] [rbp-D0h]
  int v16; // [rsp+38h] [rbp-D0h]
  _WORD v17[2]; // [rsp+48h] [rbp-C0h] BYREF
  _WORD v18[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v22[10]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v24; // [rsp+D8h] [rbp-30h]
  __int64 v25; // [rsp+E0h] [rbp-28h]
  __int64 *v26; // [rsp+E8h] [rbp-20h]
  __int64 v27; // [rsp+F0h] [rbp-18h]
  _WORD *v28; // [rsp+F8h] [rbp-10h]
  __int64 v29; // [rsp+100h] [rbp-8h]
  __int64 *v30; // [rsp+108h] [rbp+0h]
  __int64 v31; // [rsp+110h] [rbp+8h]
  _WORD *v32; // [rsp+118h] [rbp+10h]
  __int64 v33; // [rsp+120h] [rbp+18h]
  int *v34; // [rsp+128h] [rbp+20h]
  __int64 v35; // [rsp+130h] [rbp+28h]
  _WORD v36[8]; // [rsp+138h] [rbp+30h] BYREF

  memset(v22, 0, sizeof(v22));
  HUBPDO_GetPortPath(a1[2], v36);
  if ( (*(_DWORD *)(*a1 + 40LL) & 0x40000) != 0 && (a1[205] & 0x20) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
      WdfDriverGlobals,
      *(_QWORD *)(*a1 + 16LL));
    v2 = *a1;
    v3 = *(_WORD *)(a1[1] + 200LL);
    v4 = 0;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
           WdfDriverGlobals,
           *(_QWORD *)(*a1 + 16LL),
           0LL,
           1LL);
    if ( !v5 )
      goto LABEL_30;
    do
    {
      if ( v5 != *(_QWORD *)(v2 + 2672)
        && *(_WORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                        WdfDriverGlobals,
                        v5,
                        off_14006D1D0)
                    + 48) == v3 )
      {
        break;
      }
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
             WdfDriverGlobals,
             *(_QWORD *)(v2 + 16),
             v5,
             1LL);
    }
    while ( v5 );
    if ( v5 )
    {
      DeviceResetInterface = QueryDeviceResetInterface(v5, v22);
      if ( DeviceResetInterface >= 0 )
      {
        DereferenceDeviceResetInterface(v22);
        memset(v22, 0, sizeof(v22));
        if ( (unsigned int)HUBREG_SetPortPLDRCapabilityValue(*a1, *(unsigned __int16 *)(a1[1] + 200LL), 1LL) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v14 = *((unsigned __int16 *)a1 + 1003);
            v10 = *((unsigned __int16 *)a1 + 1002);
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1[1] + 1432LL),
              2u,
              5u,
              0xBAu,
              (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
              v10,
              v14);
          }
          if ( (unsigned int)dword_14006D2D0 > 2
            && (qword_14006D2E0 & 0x400000000001LL) != 0
            && (qword_14006D2E8 & 0x400000000001LL) == qword_14006D2E8 )
          {
            v20 = 16779264LL;
            v24 = &v20;
            LOWORD(v19) = *((_WORD *)a1 + 1002);
            v25 = 8LL;
            v26 = &v19;
            v18[0] = *((_WORD *)a1 + 1003);
            v28 = v18;
            v17[0] = 6;
            v30 = (__int64 *)v17;
            v32 = v36;
            v27 = 2LL;
            v29 = 2LL;
            v31 = 2LL;
            v33 = 12LL;
            tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006D2D0, byte_1400685D9, 0LL, 0LL, 7u, v23);
          }
          v4 = -1073741762;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v13 = *((unsigned __int16 *)a1 + 1003);
            v9 = *((unsigned __int16 *)a1 + 1002);
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(a1[1] + 1432LL),
              4u,
              5u,
              0xBBu,
              (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
              v9,
              v13);
          }
          if ( (unsigned int)dword_14006D2D0 > 4
            && (qword_14006D2E0 & 0x400000000001LL) != 0
            && (qword_14006D2E8 & 0x400000000001LL) == qword_14006D2E8 )
          {
            v20 = 16779264LL;
            v24 = &v20;
            LOWORD(v19) = *((_WORD *)a1 + 1002);
            v25 = 8LL;
            v26 = &v19;
            v18[0] = *((_WORD *)a1 + 1003);
            v28 = v18;
            v17[0] = 6;
            v30 = (__int64 *)v17;
            v32 = v36;
            v27 = 2LL;
            v29 = 2LL;
            v31 = 2LL;
            v33 = 12LL;
            tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006D2D0, byte_140068511, 0LL, 0LL, 7u, v23);
          }
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDd(
            *(_QWORD *)(a1[1] + 1432LL),
            *((unsigned __int16 *)a1 + 1003),
            *((unsigned __int16 *)a1 + 1002),
            0xB9u,
            v8);
        if ( (unsigned int)dword_14006D2D0 > 2
          && (qword_14006D2E0 & 0x400000000001LL) != 0
          && (qword_14006D2E8 & 0x400000000001LL) == qword_14006D2E8 )
        {
          v20 = 16779264LL;
          v24 = &v20;
          v17[0] = *((_WORD *)a1 + 1002);
          v25 = 8LL;
          v26 = (__int64 *)v17;
          v18[0] = *((_WORD *)a1 + 1003);
          v28 = v18;
          LOWORD(v19) = 6;
          v30 = &v19;
          v32 = v36;
          v34 = &v21;
          v27 = 2LL;
          v29 = 2LL;
          v31 = 2LL;
          v33 = 12LL;
          v21 = DeviceResetInterface;
          v35 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006D2D0, byte_140068EC9, 0LL, 0LL, 8u, v23);
        }
        v4 = -1073741808;
      }
    }
    else
    {
LABEL_30:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = *((unsigned __int16 *)a1 + 1003);
        v11 = *((unsigned __int16 *)a1 + 1002);
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(a1[1] + 1432LL),
          2u,
          5u,
          0xB8u,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
          v11,
          v15);
      }
      if ( (unsigned int)dword_14006D2D0 > 2
        && (qword_14006D2E0 & 0x400000000001LL) != 0
        && (qword_14006D2E8 & 0x400000000001LL) == qword_14006D2E8 )
      {
        v20 = 16779264LL;
        v24 = &v20;
        LOWORD(v19) = *((_WORD *)a1 + 1002);
        v25 = 8LL;
        v26 = &v19;
        v18[0] = *((_WORD *)a1 + 1003);
        v28 = v18;
        v17[0] = 6;
        v30 = (__int64 *)v17;
        v32 = v36;
        v27 = 2LL;
        v29 = 2LL;
        v31 = 2LL;
        v33 = 12LL;
        tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006D2D0, byte_140068575, 0LL, 0LL, 7u, v23);
      }
      v4 = -1073741810;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
      WdfDriverGlobals,
      *(_QWORD *)(*a1 + 16LL));
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = *((unsigned __int16 *)a1 + 1003);
      v12 = *((unsigned __int16 *)a1 + 1002);
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a1[1] + 1432LL),
        2u,
        5u,
        0xB7u,
        (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
        v12,
        v16);
    }
    if ( (unsigned int)dword_14006D2D0 > 2
      && (qword_14006D2E0 & 0x400000000001LL) != 0
      && (qword_14006D2E8 & 0x400000000001LL) == qword_14006D2E8 )
    {
      v20 = 16779264LL;
      v24 = &v20;
      LOWORD(v19) = *((_WORD *)a1 + 1002);
      v25 = 8LL;
      v26 = &v19;
      v18[0] = *((_WORD *)a1 + 1003);
      v28 = v18;
      v17[0] = 6;
      v30 = (__int64 *)v17;
      v32 = v36;
      v27 = 2LL;
      v29 = 2LL;
      v31 = 2LL;
      v33 = 12LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006D2D0, byte_140068B5F, 0LL, 0LL, 7u, v23);
    }
    return (unsigned int)-1073741808;
  }
  return v4;
}
