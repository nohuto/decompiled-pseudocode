/*
 * XREFs of RIMHidGetVendorAndProductID @ 0x14011C4D0
 * Callers:
 *     RIMCreateHidDesc @ 0x1401DF458 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14013B930 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 */

__int64 __fastcall RIMHidGetVendorAndProductID(__int64 a1, _WORD *a2, _WORD *a3)
{
  char v3; // r15
  __int64 v5; // rbx
  int DeviceInterfacePropertyData; // esi
  int v8; // ebx
  _UNKNOWN **v10; // rcx
  char v11; // bl
  bool v12; // di
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  _UNKNOWN **v16; // rcx
  char v17; // di
  bool v18; // si
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  _DWORD v22[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v23; // [rsp+90h] [rbp+30h] BYREF
  int v24; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a1;
  v22[0] = 5;
  v23 = 0;
  v5 = a1 + 192;
  v24 = 2;
  DeviceInterfacePropertyData = IoGetDeviceInterfacePropertyData(
                                  a1 + 192,
                                  &DEVPKEY_DeviceInterface_HID_VendorId,
                                  0LL,
                                  0LL,
                                  2,
                                  &v23,
                                  &v24,
                                  v22);
  if ( DeviceInterfacePropertyData < 0 )
  {
    v10 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (v10 = (_UNKNOWN **)*((unsigned int *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v10 & 1) == 0)
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v10, WPP_GLOBAL_Control);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 19336),
        3,
        1,
        44,
        (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
        v3,
        DeviceInterfacePropertyData);
    }
    return (unsigned int)DeviceInterfacePropertyData;
  }
  else
  {
    *a2 = v23;
    v23 = 0;
    v8 = IoGetDeviceInterfacePropertyData(v5, &DEVPKEY_DeviceInterface_HID_ProductId, 0LL, 0LL, v24, &v23, &v24, v22);
    if ( v8 < 0 )
    {
      v16 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v16 = (_UNKNOWN **)*((unsigned int *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v16 & 1) == 0)
        || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v17 = 0;
      }
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = W32GetUserSessionState(v16, WPP_GLOBAL_Control);
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v17;
        WPP_RECORDER_AND_TRACE_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(v19 + 19336),
          3,
          1,
          45,
          (__int64)&WPP_4b537dbb8ab73c4205f41be231a53f59_Traceguids,
          v3,
          v8);
      }
    }
    else
    {
      *a3 = v23;
    }
    return (unsigned int)v8;
  }
}
