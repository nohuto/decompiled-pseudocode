/*
 * XREFs of ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14017A340
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x1400EE6CC (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x14017A688 (-SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

_BOOL8 __fastcall IsHIDMouseDeviceRelative(struct _FILE_OBJECT *a1, PDEVICE_OBJECT DeviceObject, struct DEVICEINFO *a3)
{
  BOOL v6; // ebx
  struct _HIDP_PREPARSED_DATA *v8; // rax
  int v9; // edx
  int v10; // r8d
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rdi
  char v12; // di
  bool v13; // si
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  CTouchProcessor *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // si
  bool v21; // r14
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  NTSTATUS Caps; // eax
  int v26; // ecx
  char v27; // r15
  char v28; // si
  bool v29; // r14
  __int64 UserSessionState; // rax
  int v31; // r8d
  int v32; // edx
  USHORT ValueCapsLength; // [rsp+50h] [rbp-B0h] BYREF
  __int64 OutputBuffer; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+60h] [rbp-A0h]
  _HIDP_CAPS Capabilities; // [rsp+70h] [rbp-90h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+B0h] [rbp-50h] BYREF

  memset(&Capabilities, 0, sizeof(Capabilities));
  OutputBuffer = 0LL;
  v35 = 0;
  v6 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength = 1;
  if ( (int)SendSyncOutputIrpRequest(0xB01A8u, &OutputBuffer, 0xCu, a1, DeviceObject, a3) < 0 )
    return 0LL;
  v8 = (struct _HIDP_PREPARSED_DATA *)Win32AllocPoolZInitImpl(64LL, (unsigned int)OutputBuffer, 0x44687355u);
  PreparsedData = v8;
  if ( v8 )
  {
    if ( (int)SendSyncOutputIrpRequest(0xB0193u, v8, OutputBuffer, a1, DeviceObject, a3) >= 0 )
    {
      Caps = HidP_GetCaps(PreparsedData, &Capabilities);
      v27 = Caps;
      if ( Caps == 1114112 )
      {
        if ( Capabilities.UsagePage == 1
          && (unsigned __int16)(Capabilities.Usage - 1) <= 1u
          && HidP_GetSpecificValueCaps(HidP_Input, 1u, 0, 0x30u, &ValueCaps, &ValueCapsLength, PreparsedData) >= 0 )
        {
          v6 = ValueCaps.IsAbsolute == 0;
        }
      }
      else
      {
        v17 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (v26 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v26 & 1) == 0)
          || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v28 = 0;
        }
        v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(v26, (_DWORD)WPP_GLOBAL_Control, v18);
          LOBYTE(v31) = v29;
          LOBYTE(v32) = v28;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v31,
            *(_QWORD *)(UserSessionState + 19368),
            3,
            1,
            15,
            (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids,
            v27);
        }
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v20 = 0;
      }
      v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v17, v18);
        LOBYTE(v23) = v21;
        LOBYTE(v24) = v20;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v24,
          v23,
          *(_QWORD *)(v22 + 19368),
          3,
          1,
          14,
          (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
      }
    }
    GreDeleteFastMutex((char *)PreparsedData, (__int64)v17, v18, v19);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v12 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(v14 + 19368),
        3,
        1,
        13,
        (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
    }
  }
  return v6;
}
