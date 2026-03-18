/*
 * XREFs of ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140160DC0
 * Callers:
 *     ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x140160D20 (-OnUserLogin@PTPTelemetry@@SAXXZ.c)
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 *     EnablePTPDevices @ 0x1401D7790 (EnablePTPDevices.c)
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x140219730 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     IsTouchPointerDevice @ 0x14013EB58 (IsTouchPointerDevice.c)
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x1401610E8 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x140161350 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x14017333C (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall PTPTelemetry::PTPConfigUpdateEx(struct DEVICEINFO *const a1, int a2, int a3)
{
  unsigned int v4; // esi
  bool v5; // di
  bool v6; // r14
  _DWORD *UserSessionState; // rbx
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  __int64 i; // rdx
  __int64 v16; // rcx
  int v17; // r8d
  bool v18; // bl
  struct tagRECT v19; // xmm6
  struct tagRECT v20; // xmm7
  int v21; // ecx
  __int64 v22; // rax
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  bool v26[8]; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v27; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v28; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v29; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v30; // [rsp+98h] [rbp-70h] BYREF
  int v31; // [rsp+A8h] [rbp-60h] BYREF
  int v32; // [rsp+ACh] [rbp-5Ch]
  int v33; // [rsp+B0h] [rbp-58h]
  int v34; // [rsp+B4h] [rbp-54h]
  int v35; // [rsp+B8h] [rbp-50h]
  int v36; // [rsp+BCh] [rbp-4Ch]
  int v37; // [rsp+C0h] [rbp-48h]
  int v38; // [rsp+C4h] [rbp-44h]
  int v39; // [rsp+C8h] [rbp-40h]
  int v40; // [rsp+CCh] [rbp-3Ch]
  int v41; // [rsp+D0h] [rbp-38h]
  int v42; // [rsp+D4h] [rbp-34h]
  int v43; // [rsp+D8h] [rbp-30h]
  __int16 v44; // [rsp+E0h] [rbp-28h] BYREF
  __int16 v45; // [rsp+F0h] [rbp-18h] BYREF

  *(_QWORD *)&v28.Length = 0x100000LL;
  *(_DWORD *)&v26[4] = 0;
  v28.Buffer = (PWSTR)&v44;
  v44 = 0;
  *(_QWORD *)&v27.Length = 0x100000LL;
  v27.Buffer = (PWSTR)&v45;
  v26[0] = 1;
  v4 = 0;
  v45 = 0;
  v5 = 0;
  v26[1] = 0;
  v6 = 0;
  v26[2] = 0;
  v29 = 0LL;
  v30 = 0LL;
  UserSessionState = (_DWORD *)W32GetUserSessionState((_DWORD)a1, a2, a3);
  v32 = -__CFSHR__(UserSessionState[4194], 10);
  v10 = W32GetUserSessionState(v32, v8, v9);
  v12 = UserSessionState[4194];
  v31 = *(_DWORD *)(v10 + 328);
  v33 = UserSessionState[4195];
  v13 = -__CFSHR__(v12, 3);
  v34 = v13;
  v35 = -__CFSHR__(v12, 4);
  v36 = -__CFSHR__(UserSessionState[4193], 3);
  v37 = UserSessionState[4196];
  v38 = -__CFSHR__(v12, 8);
  v39 = -__CFSHR__(v12, 9);
  v40 = -__CFSHR__(v12, 5);
  v41 = -(v12 & 1);
  v42 = -__CFSHR__(v12, 6);
  v14 = -__CFSHR__(v12, 7);
  v43 = v14;
  if ( a1 )
  {
    v18 = 0;
    *(_BYTE *)(W32GetUserSessionState(v13, v14, v11) + 12058) = 1;
    v21 = *(_DWORD *)(*((_QWORD *)a1 + 57) + 964LL);
    switch ( v21 )
    {
      case 1:
        v4 = 1;
        break;
      case 2:
        v4 = 2;
        break;
      case 3:
        v4 = 3;
        break;
      case 0:
        *(_DWORD *)&v26[4] = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2065LL);
        break;
    }
    v22 = *((_QWORD *)a1 + 57);
    v19 = *(struct tagRECT *)(v22 + 124);
    v20 = *(struct tagRECT *)(v22 + 140);
    RimTelemetry::GetHidVidPidStrings(a1, &v28, &v27);
    v16 = *(_QWORD *)(W32GetUserSessionState(v24, v23, v25) + 16832);
    for ( i = **(_QWORD **)(v16 + 1240); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 184) & 0x80u) == 0 )
      {
        if ( !*(_DWORD *)(i + 48) && !*(_WORD *)(i + 864) )
          v5 = 1;
      }
      else if ( (unsigned int)IsTouchPointerDevice(*(_QWORD *)(i + 456)) )
      {
        v6 = 1;
      }
    }
  }
  else
  {
    PTPTelemetry::GetDeviceData(&v28, &v27, &v26[1], &v26[2], (unsigned int *)&v26[4], v26, &v29, &v30);
    v4 = *(_DWORD *)&v26[4];
    v18 = v26[0];
    v5 = v26[1];
    v6 = v26[2];
    v19 = v29;
    v20 = v30;
  }
  if ( *(_BYTE *)(W32GetUserSessionState(v16, i, v17) + 12058) )
  {
    v30 = v20;
    v29 = v19;
    TraceLoggingPTPSettingsConfigEvent(
      (struct tagTPSETTINGS *)&v31,
      v4,
      v18,
      v28.Buffer,
      v27.Buffer,
      v5,
      v6,
      &v29,
      &v30);
  }
}
