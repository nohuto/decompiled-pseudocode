/*
 * XREFs of RIMHidGetVendorAndProductID @ 0x14007937C
 * Callers:
 *     RIMCreateHidDesc @ 0x1400780EC (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14016CD20 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 */

__int64 __fastcall RIMHidGetVendorAndProductID(__int64 a1, _WORD *a2, _WORD *a3)
{
  char v3; // r15
  __int64 v5; // rbx
  int DeviceInterfacePropertyData; // esi
  int v8; // r8d
  int v9; // ebx
  int v10; // r8d
  CTouchProcessor **v12; // rcx
  char v13; // bl
  bool v14; // di
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  CTouchProcessor **v18; // rcx
  char v19; // di
  bool v20; // si
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  _DWORD v24[4]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v25; // [rsp+90h] [rbp+30h] BYREF
  int v26; // [rsp+A8h] [rbp+48h] BYREF

  v3 = a1;
  v24[0] = 5;
  v25 = 0;
  v5 = a1 + 192;
  v26 = 2;
  DeviceInterfacePropertyData = IoGetDeviceInterfacePropertyData(
                                  a1 + 192,
                                  &DEVPKEY_DeviceInterface_HID_VendorId,
                                  0LL,
                                  0LL,
                                  2,
                                  &v25,
                                  &v26,
                                  v24);
  if ( DeviceInterfacePropertyData < 0 )
  {
    v12 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (LODWORD(v12) = *((_DWORD *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v12 & 1) == 0)
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)v12, (_DWORD)WPP_GLOBAL_Control, v8);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 19368),
        3,
        1,
        44,
        (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
        v3,
        DeviceInterfacePropertyData);
    }
    return (unsigned int)DeviceInterfacePropertyData;
  }
  else
  {
    *a2 = v25;
    v25 = 0;
    v9 = IoGetDeviceInterfacePropertyData(v5, &DEVPKEY_DeviceInterface_HID_ProductId, 0LL, 0LL, v26, &v25, &v26, v24);
    if ( v9 < 0 )
    {
      v18 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (LODWORD(v18) = *((_DWORD *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v18 & 1) == 0)
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState((_DWORD)v18, (_DWORD)WPP_GLOBAL_Control, v10);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v19;
        WPP_RECORDER_AND_TRACE_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v23,
          v22,
          *(_QWORD *)(v21 + 19368),
          3,
          1,
          45,
          (__int64)&WPP_2c4ac3064f9f30623cb2b4ebc0636cf4_Traceguids,
          v3,
          v9);
      }
    }
    else
    {
      *a3 = v25;
    }
    return (unsigned int)v9;
  }
}
