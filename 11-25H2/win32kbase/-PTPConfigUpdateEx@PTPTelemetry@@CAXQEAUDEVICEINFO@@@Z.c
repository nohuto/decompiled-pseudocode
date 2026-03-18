/*
 * XREFs of ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x1400A89E4
 * Callers:
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 *     ?OnUserLogin@PTPTelemetry@@SAXXZ @ 0x14015B4A0 (-OnUserLogin@PTPTelemetry@@SAXXZ.c)
 *     EnablePTPDevices @ 0x1401B4DE0 (EnablePTPDevices.c)
 *     ?OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z @ 0x1402114A4 (-OnPTPDeviceArrived@PTPTelemetry@@SAXQEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     ?GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z @ 0x14018ABC0 (-GetDeviceData@PTPTelemetry@@CAXPEAU_UNICODE_STRING@@0PEA_N1PEAK1PEAUtagRECT@@3@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1401D4890 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     ?TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z @ 0x1402116B0 (-TraceLoggingPTPSettingsConfigEvent@@YAXPEAUtagTPSETTINGS@@KHPEAG1HHUtagRECT@@2@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall PTPTelemetry::PTPConfigUpdateEx(struct DEVICEINFO *const a1, __int64 a2)
{
  unsigned int v3; // esi
  bool v4; // di
  bool v5; // r14
  _DWORD *UserSessionState; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 i; // rdx
  __int64 v13; // rcx
  bool v14; // bl
  struct tagRECT v15; // xmm6
  struct tagRECT v16; // xmm7
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  bool v21[8]; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v22; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v23; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v24; // [rsp+88h] [rbp-80h] BYREF
  struct tagRECT v25; // [rsp+98h] [rbp-70h] BYREF
  int v26; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v27; // [rsp+ACh] [rbp-5Ch]
  int v28; // [rsp+B0h] [rbp-58h]
  int v29; // [rsp+B4h] [rbp-54h]
  int v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+BCh] [rbp-4Ch]
  int v32; // [rsp+C0h] [rbp-48h]
  int v33; // [rsp+C4h] [rbp-44h]
  int v34; // [rsp+C8h] [rbp-40h]
  int v35; // [rsp+CCh] [rbp-3Ch]
  int v36; // [rsp+D0h] [rbp-38h]
  int v37; // [rsp+D4h] [rbp-34h]
  int v38; // [rsp+D8h] [rbp-30h]
  __int16 v39; // [rsp+E0h] [rbp-28h] BYREF
  __int16 v40; // [rsp+F0h] [rbp-18h] BYREF

  *(_QWORD *)&v23.Length = 0x100000LL;
  *(_DWORD *)&v21[4] = 0;
  v23.Buffer = (PWSTR)&v39;
  v39 = 0;
  *(_QWORD *)&v22.Length = 0x100000LL;
  v22.Buffer = (PWSTR)&v40;
  v21[0] = 1;
  v3 = 0;
  v40 = 0;
  v4 = 0;
  v21[1] = 0;
  v5 = 0;
  v21[2] = 0;
  v24 = 0LL;
  v25 = 0LL;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2);
  v27 = -__CFSHR__(UserSessionState[4196], 10);
  v8 = W32GetUserSessionState(v27, v7);
  v9 = UserSessionState[4196];
  v26 = *(_DWORD *)(v8 + 328);
  v28 = UserSessionState[4197];
  v10 = (unsigned int)-__CFSHR__(v9, 3);
  v29 = -__CFSHR__(v9, 3);
  v30 = -__CFSHR__(v9, 4);
  v31 = -__CFSHR__(UserSessionState[4195], 3);
  v32 = UserSessionState[4198];
  v33 = -__CFSHR__(v9, 8);
  v34 = -__CFSHR__(v9, 9);
  v35 = -__CFSHR__(v9, 5);
  v36 = -(v9 & 1);
  v37 = -__CFSHR__(v9, 6);
  v11 = (unsigned int)-__CFSHR__(v9, 7);
  v38 = v11;
  if ( a1 )
  {
    v14 = 0;
    *(_BYTE *)(W32GetUserSessionState(v10, v11) + 12058) = 1;
    v17 = *(_DWORD *)(*((_QWORD *)a1 + 57) + 964LL);
    switch ( v17 )
    {
      case 1:
        v3 = 1;
        break;
      case 2:
        v3 = 2;
        break;
      case 3:
        v3 = 3;
        break;
      case 0:
        *(_DWORD *)&v21[4] = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2098LL);
        break;
    }
    v18 = *((_QWORD *)a1 + 57);
    v15 = *(struct tagRECT *)(v18 + 124);
    v16 = *(struct tagRECT *)(v18 + 140);
    RimTelemetry::GetHidVidPidStrings(a1, &v23, &v22);
    v13 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 16840);
    for ( i = **(_QWORD **)(v13 + 1240); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(i + 184) & 0x80u) == 0 )
      {
        if ( !*(_DWORD *)(i + 48) && !*(_WORD *)(i + 864) )
          v4 = 1;
      }
      else
      {
        v13 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(i + 456) + 24LL) - 1);
        if ( (unsigned int)v13 <= 3 )
          v5 = 1;
      }
    }
  }
  else
  {
    PTPTelemetry::GetDeviceData(&v23, &v22, &v21[1], &v21[2], (unsigned int *)&v21[4], v21, &v24, &v25);
    v3 = *(_DWORD *)&v21[4];
    v14 = v21[0];
    v4 = v21[1];
    v5 = v21[2];
    v15 = v24;
    v16 = v25;
  }
  if ( *(_BYTE *)(W32GetUserSessionState(v13, i) + 12058) )
  {
    v25 = v16;
    v24 = v15;
    TraceLoggingPTPSettingsConfigEvent(
      (struct tagTPSETTINGS *)&v26,
      v3,
      v14,
      v23.Buffer,
      v22.Buffer,
      v4,
      v5,
      &v24,
      &v25);
  }
}
