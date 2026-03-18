/*
 * XREFs of HUBPDO_HandlePLDRRecovery @ 0x1400190E4
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x140082630 (HUBPDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     HUBPDO_GetPortPath @ 0x140018F9C (HUBPDO_GetPortPath.c)
 *     __security_check_cookie @ 0x1400467B0 (__security_check_cookie.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x140084364 (HUBPDO_InvokePortPLDRRecovery.c)
 *     HUBREG_IsPortPLDRCapable @ 0x1400884AC (HUBREG_IsPortPLDRCapable.c)
 */

__int64 __fastcall HUBPDO_HandlePLDRRecovery(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r10
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // [rsp+28h] [rbp-A1h]
  int v14; // [rsp+30h] [rbp-99h]
  _WORD v15[2]; // [rsp+40h] [rbp-89h] BYREF
  _WORD v16[2]; // [rsp+44h] [rbp-85h] BYREF
  int v17; // [rsp+48h] [rbp-81h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19[2]; // [rsp+60h] [rbp-69h] BYREF
  _QWORD *v20; // [rsp+80h] [rbp-49h]
  __int64 v21; // [rsp+88h] [rbp-41h]
  int *v22; // [rsp+90h] [rbp-39h]
  __int64 v23; // [rsp+98h] [rbp-31h]
  _WORD *v24; // [rsp+A0h] [rbp-29h]
  __int64 v25; // [rsp+A8h] [rbp-21h]
  int *v26; // [rsp+B0h] [rbp-19h]
  __int64 v27; // [rsp+B8h] [rbp-11h]
  _WORD *v28; // [rsp+C0h] [rbp-9h]
  __int64 v29; // [rsp+C8h] [rbp-1h]
  _WORD v30[8]; // [rsp+D0h] [rbp+7h] BYREF

  HUBPDO_GetPortPath(a2, v30);
  result = HUBREG_IsPortPLDRCapable(*(_QWORD *)a3, *(unsigned __int16 *)(*(_QWORD *)(a3 + 8) + 200LL));
  if ( (_BYTE)result )
  {
    *(_BYTE *)(*(_QWORD *)(a3 + 8) + 1472LL) = 0;
    v7 = *(_QWORD *)(a3 + 8);
    result = *(unsigned __int16 *)(v7 + 1474);
    if ( (unsigned __int16)result < 2u )
    {
      if ( !(_WORD)result )
      {
        EtwActivityIdControl(3u, (LPGUID)(v7 + 1480));
        if ( (unsigned int)dword_14006D2D0 > 4
          && (qword_14006D2E0 & 0x400000000001LL) != 0
          && (qword_14006D2E8 & 0x400000000001LL) == qword_14006D2E8 )
        {
          v12 = *(_QWORD *)(a3 + 8);
          v20 = v18;
          LOWORD(v17) = *(_WORD *)(a3 + 2004);
          v18[0] = 16779264LL;
          v22 = &v17;
          v16[0] = *(_WORD *)(a3 + 2006);
          v21 = 8LL;
          v24 = v16;
          v26 = (int *)v15;
          v28 = v30;
          v23 = 2LL;
          v25 = 2LL;
          v15[0] = 6;
          v27 = 2LL;
          v29 = 12LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_14006D2D0,
            byte_1400686A9,
            (const GUID *)(v12 + 1480),
            0LL,
            7u,
            v19);
        }
      }
      ++*(_WORD *)(*(_QWORD *)(a3 + 8) + 1474LL);
      return HUBPDO_InvokePortPLDRRecovery(a1, a2);
    }
    else if ( !*(_BYTE *)(v7 + 1476) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = *(unsigned __int16 *)(a3 + 2006);
        v13 = *(unsigned __int16 *)(a3 + 2004);
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(v7 + 1432),
          2u,
          5u,
          0x4Eu,
          (__int64)&WPP_8beb7df92ba934db5f6899fb45b5938a_Traceguids,
          v13,
          v14);
      }
      v8 = dword_14006D2D0;
      v9 = qword_14006D2E8;
      if ( (unsigned int)dword_14006D2D0 > 2
        && (qword_14006D2E0 & 0x400000000001LL) != 0
        && (qword_14006D2E8 & 0x400000000001LL) == qword_14006D2E8 )
      {
        v10 = *(_QWORD *)(a3 + 8);
        v20 = v18;
        v18[0] = 16779264LL;
        v22 = (int *)v15;
        v21 = 8LL;
        v24 = v30;
        v15[0] = 6;
        v23 = 2LL;
        v25 = 12LL;
        v17 = *(unsigned __int16 *)(v10 + 1474);
        v26 = &v17;
        v27 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_14006D2D0,
          byte_140068E76,
          (const GUID *)(v10 + 1480),
          0LL,
          6u,
          v19);
        v9 = qword_14006D2E8;
        v8 = dword_14006D2D0;
      }
      if ( v8 > 4 && (qword_14006D2E0 & 0x400000000001LL) != 0 && (v9 & 0x400000000001LL) == v9 )
      {
        v11 = *(_QWORD *)(a3 + 8);
        v20 = v18;
        v15[0] = *(_WORD *)(a3 + 2004);
        v18[0] = 16779264LL;
        v22 = (int *)v15;
        v16[0] = *(_WORD *)(a3 + 2006);
        v24 = v16;
        v26 = &v17;
        v28 = v30;
        v21 = 8LL;
        v23 = 2LL;
        v25 = 2LL;
        LOWORD(v17) = 6;
        v27 = 2LL;
        v29 = 12LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_14006D2D0,
          byte_140068CB2,
          (const GUID *)(v11 + 1480),
          0LL,
          7u,
          v19);
      }
      *(_OWORD *)(*(_QWORD *)(a3 + 8) + 1480LL) = 0LL;
      result = *(_QWORD *)(a3 + 8);
      *(_BYTE *)(result + 1476) = 1;
    }
  }
  return result;
}
