/*
 * XREFs of ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x140144064
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x140180798 (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z @ 0x1401443AC (-SendSyncOutputIrpRequest@@YAJKPEADKPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@PEAUDEVICEINFO@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

_BOOL8 __fastcall IsHIDMouseDeviceRelative(struct _FILE_OBJECT *a1, PDEVICE_OBJECT DeviceObject, struct DEVICEINFO *a3)
{
  BOOL v6; // ebx
  struct _HIDP_PREPARSED_DATA *v8; // rax
  __int64 v9; // rdx
  struct _HIDP_PREPARSED_DATA *PreparsedData; // rdi
  char v11; // di
  bool v12; // si
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rdx
  char v17; // si
  bool v18; // r14
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  NTSTATUS Caps; // eax
  __int64 v23; // rcx
  char v24; // r15
  char v25; // si
  bool v26; // r14
  __int64 UserSessionState; // rax
  int v28; // r8d
  int v29; // edx
  USHORT ValueCapsLength; // [rsp+50h] [rbp-B0h] BYREF
  __int64 OutputBuffer; // [rsp+58h] [rbp-A8h] BYREF
  int v32; // [rsp+60h] [rbp-A0h]
  struct _HIDP_CAPS Capabilities; // [rsp+70h] [rbp-90h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+B0h] [rbp-50h] BYREF

  memset(&Capabilities, 0, sizeof(Capabilities));
  OutputBuffer = 0LL;
  v32 = 0;
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
      v24 = Caps;
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
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (v23 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v23 & 1) == 0)
          || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v25 = 0;
        }
        v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(v23, WPP_GLOBAL_Control);
          LOBYTE(v28) = v26;
          LOBYTE(v29) = v25;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v29,
            v28,
            *(_QWORD *)(UserSessionState + 19336),
            3,
            1,
            15,
            (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids,
            v24);
        }
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v17 = 0;
      }
      v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
        LOBYTE(v20) = v18;
        LOBYTE(v21) = v17;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v21,
          v20,
          *(_QWORD *)(v19 + 19336),
          3,
          1,
          14,
          (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
      }
    }
    GreDeleteFastMutex((char *)PreparsedData);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v11 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(v13 + 19336),
        3,
        1,
        13,
        (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
    }
  }
  return v6;
}
