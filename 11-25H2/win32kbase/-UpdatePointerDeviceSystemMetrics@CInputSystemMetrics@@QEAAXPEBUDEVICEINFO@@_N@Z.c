/*
 * XREFs of ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x14014B6F8
 * Callers:
 *     UpdatePointerDeviceSystemMetrics @ 0x14014B6B8 (UpdatePointerDeviceSystemMetrics.c)
 * Callees:
 *     IsPublicPointerDevice @ 0x1401358DC (IsPublicPointerDevice.c)
 *     ?WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z @ 0x140152E44 (-WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140223A18 (-GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x140223B44 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 */

void __fastcall CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(
        CInputSystemMetrics *this,
        const struct DEVICEINFO *a2)
{
  __int64 v4; // rdx
  CInputSystemMetrics *v5; // rcx
  char v6; // r8
  unsigned int v7; // edi
  unsigned int v8; // esi
  __int64 v9; // rbx
  unsigned int HardwareType; // eax
  CInputSystemMetrics *v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rbx
  int v14; // ebx
  unsigned int v15; // ebx

  if ( !IsPublicPointerDevice((__int64)a2) )
    return;
  v7 = 0;
  v8 = 0;
  if ( v6 )
  {
    v9 = *((_QWORD *)a2 + 57);
    HardwareType = CInputSystemMetrics::GetHardwareType(v5, (const struct tagHID_POINTER_DEVICE_INFO *)v9);
    v8 = *((_DWORD *)this + 2);
    v11 = (CInputSystemMetrics *)*(unsigned int *)(v9 + 776);
    v7 = *((_DWORD *)this + 1) | HardwareType;
    if ( v8 <= (unsigned int)v11 )
      v8 = *(_DWORD *)(v9 + 776);
    goto LABEL_12;
  }
  v11 = *(CInputSystemMetrics **)(W32GetUserSessionState(v5, v4) + 16840);
  v12 = **((_QWORD **)v11 + 155);
  if ( v12 )
  {
    do
    {
      if ( IsPublicPointerDevice(v12) && (*(_DWORD *)(v12 + 168) & 0x400) == 0 )
      {
        v13 = *(_QWORD *)(v12 + 456);
        v7 |= CInputSystemMetrics::GetHardwareType(v11, (const struct tagHID_POINTER_DEVICE_INFO *)v13);
        if ( v8 <= *(_DWORD *)(v13 + 776) )
          v8 = *(_DWORD *)(v13 + 776);
      }
      v12 = *(_QWORD *)(v12 + 56);
    }
    while ( v12 );
LABEL_12:
    if ( (v7 & 0xFFFFFF30) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 159LL);
    v14 = 0xFFFF;
    if ( v8 > 0xFFFF )
      goto LABEL_16;
  }
  v14 = v8;
LABEL_16:
  v15 = v7 & 0xCF | (v14 << 8);
  if ( v15 != *(_DWORD *)this )
  {
    CInputSystemMetrics::WriteSystemMetricsKeyToAllHives(v11, v15);
    *(_DWORD *)this = v15;
  }
  if ( v7 != *((_DWORD *)this + 1) )
  {
    CInputSystemMetrics::WritePointerDevicePresenceKey(v11, v7);
    *((_DWORD *)this + 1) = v7;
  }
  *((_DWORD *)this + 2) = v8;
}
