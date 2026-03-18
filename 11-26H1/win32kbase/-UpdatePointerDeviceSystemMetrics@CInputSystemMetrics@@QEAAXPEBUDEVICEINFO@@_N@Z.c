/*
 * XREFs of ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1401BF034
 * Callers:
 *     UpdatePointerDeviceSystemMetrics @ 0x140185818 (UpdatePointerDeviceSystemMetrics.c)
 * Callees:
 *     IsPublicPointerDevice @ 0x14016B628 (IsPublicPointerDevice.c)
 *     ?WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z @ 0x140190B78 (-WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z.c)
 *     ?GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1401B4474 (-GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1401BFA3C (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 *     ?GetSystemMetricsKey@CInputSystemMetrics@@AEBAKKK@Z @ 0x1401C0660 (-GetSystemMetricsKey@CInputSystemMetrics@@AEBAKKK@Z.c)
 */

void __fastcall CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(
        CInputSystemMetrics *this,
        const struct DEVICEINFO *a2)
{
  int v4; // edx
  CInputSystemMetrics *v5; // rcx
  int v6; // r8d
  unsigned int v7; // esi
  unsigned int v8; // ebp
  __int64 v9; // rbx
  int HardwareType; // eax
  CInputSystemMetrics *v11; // rcx
  __int64 i; // rdi
  __int64 v13; // rbx
  unsigned int SystemMetricsKey; // eax
  CInputSystemMetrics *v15; // rcx
  unsigned int v16; // ebx

  if ( IsPublicPointerDevice((__int64)a2) )
  {
    v7 = 0;
    v8 = 0;
    if ( (_BYTE)v6 )
    {
      v9 = *((_QWORD *)a2 + 57);
      HardwareType = CInputSystemMetrics::GetHardwareType(v5, (const struct tagHID_POINTER_DEVICE_INFO *)v9);
      v11 = (CInputSystemMetrics *)*(unsigned int *)(v9 + 776);
      v8 = *((_DWORD *)this + 2);
      v7 = *((_DWORD *)this + 1) | HardwareType;
      if ( v8 <= (unsigned int)v11 )
        v8 = *(_DWORD *)(v9 + 776);
    }
    else
    {
      v11 = *(CInputSystemMetrics **)(W32GetUserSessionState((_DWORD)v5, v4, v6) + 16832);
      for ( i = **((_QWORD **)v11 + 155); i; i = *(_QWORD *)(i + 56) )
      {
        if ( IsPublicPointerDevice(i) && (*(_DWORD *)(i + 168) & 0x400) == 0 )
        {
          v13 = *(_QWORD *)(i + 456);
          v7 |= CInputSystemMetrics::GetHardwareType(v11, (const struct tagHID_POINTER_DEVICE_INFO *)v13);
          if ( v8 <= *(_DWORD *)(v13 + 776) )
            v8 = *(_DWORD *)(v13 + 776);
        }
      }
    }
    SystemMetricsKey = CInputSystemMetrics::GetSystemMetricsKey(v11, v7, v8);
    v16 = SystemMetricsKey;
    if ( SystemMetricsKey != *(_DWORD *)this )
    {
      CInputSystemMetrics::WriteSystemMetricsKeyToAllHives(v15, SystemMetricsKey);
      *(_DWORD *)this = v16;
    }
    if ( v7 != *((_DWORD *)this + 1) )
    {
      CInputSystemMetrics::WritePointerDevicePresenceKey(v15, v7);
      *((_DWORD *)this + 1) = v7;
    }
    *((_DWORD *)this + 2) = v8;
  }
}
