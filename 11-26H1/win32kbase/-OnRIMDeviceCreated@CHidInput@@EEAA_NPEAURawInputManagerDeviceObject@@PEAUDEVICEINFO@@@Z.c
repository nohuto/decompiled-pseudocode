/*
 * XREFs of ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x140219730
 * Callers:
 *     <none>
 * Callees:
 *     HMCreateHandleForObject @ 0x140095100 (HMCreateHandleForObject.c)
 *     ?ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ @ 0x140160D7C (-ShouldPtpSettingFire@PTPTelemetry@@CA_NXZ.c)
 *     ?PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z @ 0x140160DC0 (-PTPConfigUpdateEx@PTPTelemetry@@CAXQEAUDEVICEINFO@@@Z.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x140185818 (UpdatePointerDeviceSystemMetrics.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall CHidInput::OnRIMDeviceCreated(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  int v4; // r8d
  char v5; // si
  _QWORD *v6; // rcx
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rbx
  int v10; // r8d
  bool v11; // zf
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // ecx

  v4 = (int)a2;
  v5 = 1;
  if ( (*((_DWORD *)a2 + 64) & 0x80u) != 0 )
  {
    v6 = (_QWORD *)*((_QWORD *)a2 + 66);
    LOBYTE(a2) = 22;
    v9 = HMCreateHandleForObject(v6, (int)a2, v4);
    if ( v9 )
    {
      if ( *((_DWORD *)a3 + 2) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 817);
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      if ( *(_QWORD *)(v9 + 792) != -1LL )
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 824);
      v11 = *(_DWORD *)(v9 + 24) == 7;
      *(_QWORD *)(v9 + 792) = *(_QWORD *)a3;
      if ( v11 && PTPTelemetry::ShouldPtpSettingFire(v8, v7, v10) )
      {
        PTPTelemetry::PTPConfigUpdateEx(a3, v7, v10);
        if ( *(_BYTE *)(W32GetUserSessionState(v13, v12, v14) + 12058) )
          *(_BYTE *)(W32GetUserSessionState(v15, v7, v10) + 12056) = 1;
      }
      LOBYTE(v7) = 1;
      UpdatePointerDeviceSystemMetrics(a3, v7, v10);
    }
    else
    {
      return 0;
    }
  }
  return v5;
}
