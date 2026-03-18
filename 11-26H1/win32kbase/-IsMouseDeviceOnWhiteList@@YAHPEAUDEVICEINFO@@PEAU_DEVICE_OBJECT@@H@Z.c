/*
 * XREFs of ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1400EED24
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x1400EE6CC (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z @ 0x1400EF4D8 (-IsDeviceOnRegistryList@@YAHU_UNICODE_STRING@@0H@Z.c)
 */

__int64 __fastcall IsMouseDeviceOnWhiteList(struct DEVICEINFO *a1, struct _DEVICE_OBJECT *a2, int a3)
{
  int v5; // ecx
  unsigned int v6; // esi
  int v7; // r8d
  bool v8; // bl
  bool v9; // di
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  struct _UNICODE_STRING v14; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING v15; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING v16; // [rsp+60h] [rbp-18h] BYREF

  v14 = 0LL;
  RtlInitUnicodeString(
    &v14,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyDevices");
  v15 = *(struct _UNICODE_STRING *)((char *)a1 + 872);
  v16 = v14;
  v6 = IsDeviceOnRegistryList(&v16, &v15, a3);
  if ( !v6 )
  {
    v8 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v5 = *((_DWORD *)WPP_GLOBAL_Control + 11);
      if ( (v5 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
        v8 = 1;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(v5, (_DWORD)WPP_GLOBAL_Control, v7);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 19368),
        3,
        1,
        18,
        (__int64)&WPP_b554531fceee36eb2b750301196162e5_Traceguids);
    }
  }
  return v6;
}
