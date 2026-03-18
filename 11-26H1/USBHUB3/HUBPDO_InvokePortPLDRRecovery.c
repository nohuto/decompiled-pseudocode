/*
 * XREFs of HUBPDO_InvokePortPLDRRecovery @ 0x140084364
 * Callers:
 *     HUBPDO_HandlePLDRRecovery @ 0x1400190E4 (HUBPDO_HandlePLDRRecovery.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x14007F8D0 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     HUBPDO_GetPortPath @ 0x140018F9C (HUBPDO_GetPortPath.c)
 *     WPP_RECORDER_SF_DDd @ 0x14001D85C (WPP_RECORDER_SF_DDd.c)
 *     DereferenceDeviceResetInterface @ 0x140045C14 (DereferenceDeviceResetInterface.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 *     memset @ 0x140046BC0 (memset.c)
 *     QueryDeviceResetInterface @ 0x1400940C4 (QueryDeviceResetInterface.c)
 */

__int64 __fastcall HUBPDO_InvokePortPLDRRecovery(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  int DeviceResetInterface; // ebx
  __int64 v6; // r8
  unsigned __int16 *v7; // rdi
  __int64 v8; // r8
  unsigned __int8 *v9; // rdx
  __int64 v10; // r8
  const GUID *v11; // r8
  int v13; // [rsp+20h] [rbp-E0h]
  ULONG v14; // [rsp+20h] [rbp-E0h]
  _WORD v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v16[2]; // [rsp+44h] [rbp-BCh] BYREF
  _WORD v17[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+4Ch] [rbp-B4h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[10]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  _WORD *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  _WORD *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  _WORD *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  _WORD *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  int *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  _WORD v34[8]; // [rsp+130h] [rbp+30h] BYREF

  memset(v20, 0, sizeof(v20));
  v4 = *(_QWORD *)(a2 + 24);
  HUBPDO_GetPortPath(a2, v34);
  DeviceResetInterface = QueryDeviceResetInterface(a1, v20);
  if ( DeviceResetInterface >= 0 )
  {
    if ( v20[4] )
    {
      DeviceResetInterface = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))v20[4])(v20[1], 1LL, 0LL);
      if ( DeviceResetInterface >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL),
            4u,
            5u,
            0xC2u,
            (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
            *(unsigned __int16 *)(v4 + 2004),
            *(unsigned __int16 *)(v4 + 2006));
        if ( (unsigned int)dword_14006D2D0 <= 4
          || (qword_14006D2E0 & 0x400000000001LL) == 0
          || (qword_14006D2E8 & 0x400000000001LL) != qword_14006D2E8 )
        {
          goto LABEL_29;
        }
        v23 = 8LL;
        v22 = v19;
        v9 = (unsigned __int8 *)&unk_140068710;
        v17[0] = *(_WORD *)(v4 + 2004);
        v24 = v17;
        v16[0] = *(_WORD *)(v4 + 2006);
        v26 = v16;
        v15[0] = 6;
        v28 = v15;
        v30 = v34;
        v14 = 7;
        v25 = 2LL;
        v27 = 2LL;
        v29 = 2LL;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDd(
            *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL),
            *(unsigned __int16 *)(v4 + 2004),
            v10,
            0xC1u,
            v13);
        if ( (unsigned int)dword_14006D2D0 <= 2
          || (qword_14006D2E0 & 0x400000000001LL) == 0
          || (qword_14006D2E8 & 0x400000000001LL) != qword_14006D2E8 )
        {
          goto LABEL_29;
        }
        v25 = 2LL;
        v22 = v19;
        v9 = (unsigned __int8 *)&unk_140068BC9;
        v17[0] = *(_WORD *)(v4 + 2004);
        v24 = v17;
        v16[0] = *(_WORD *)(v4 + 2006);
        v26 = v16;
        v15[0] = 6;
        v28 = v15;
        v30 = v34;
        v32 = &v18;
        v14 = 8;
        v23 = 8LL;
        v27 = 2LL;
        v29 = 2LL;
        v18 = DeviceResetInterface;
        v33 = 4LL;
      }
    }
    else
    {
      DeviceResetInterface = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDd(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL), *(unsigned __int16 *)(v4 + 2004), v6, 0xC0u, v13);
      if ( (unsigned int)dword_14006D2D0 <= 2
        || (qword_14006D2E0 & 0x400000000001LL) == 0
        || (qword_14006D2E8 & 0x400000000001LL) != qword_14006D2E8 )
      {
        goto LABEL_29;
      }
      v25 = 2LL;
      v22 = v19;
      v9 = (unsigned __int8 *)&unk_140068D18;
      v17[0] = *(_WORD *)(v4 + 2004);
      v24 = v17;
      v16[0] = *(_WORD *)(v4 + 2006);
      v26 = v16;
      v15[0] = 6;
      v28 = v15;
      v30 = v34;
      v32 = &v18;
      v14 = 8;
      v23 = 8LL;
      v27 = 2LL;
      v29 = 2LL;
      v18 = -1073741637;
      v33 = 4LL;
    }
    v11 = (const GUID *)(*(_QWORD *)(v4 + 8) + 1480LL);
    v19[0] = 16779264LL;
    v31 = 12LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14006D2D0, v9, v11, 0LL, v14, v21);
LABEL_29:
    DereferenceDeviceResetInterface(v20);
    return (unsigned int)DeviceResetInterface;
  }
  v7 = (unsigned __int16 *)(v4 + 2004);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDd(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL), *(unsigned __int16 *)(v4 + 2006), *v7, 0xBFu, v13);
  if ( (unsigned int)dword_14006D2D0 > 2
    && (qword_14006D2E0 & 0x400000000001LL) != 0
    && (qword_14006D2E8 & 0x400000000001LL) == qword_14006D2E8 )
  {
    v25 = 2LL;
    v27 = 2LL;
    v22 = v19;
    v15[0] = *v7;
    v24 = v15;
    v16[0] = *(_WORD *)(v4 + 2006);
    v26 = v16;
    v17[0] = 6;
    v28 = v17;
    v30 = v34;
    v29 = 2LL;
    v8 = *(_QWORD *)(v4 + 8);
    v32 = &v18;
    v23 = 8LL;
    v19[0] = 16779264LL;
    v31 = 12LL;
    v18 = DeviceResetInterface;
    v33 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_14006D2D0,
      byte_140068E01,
      (const GUID *)(v8 + 1480),
      0LL,
      8u,
      v21);
  }
  return (unsigned int)DeviceResetInterface;
}
