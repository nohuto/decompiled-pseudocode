/*
 * XREFs of ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140049CA4
 * Callers:
 *     DrvEnumDisplayDevices @ 0x140047DF0 (DrvEnumDisplayDevices.c)
 *     DrvSetMonitorBrightness @ 0x14007F6BC (DrvSetMonitorBrightness.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x14007F970 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvSetMonitorsDimState @ 0x140080510 (DrvSetMonitorsDimState.c)
 *     PruneModesByDisplayDeviceCaps @ 0x140080A98 (PruneModesByDisplayDeviceCaps.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x14008205C (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x14012292C (DrvUpdateDisplayDriverParameters.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x140139E70 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvGetMonitorPhysicalDimensions @ 0x1401CE420 (DrvGetMonitorPhysicalDimensions.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1401CE744 (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x14004E440 (-GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z.c)
 */

void __fastcall EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice(
        EnsureMonitorDevices *this,
        struct tagGRAPHICS_DEVICE *a2)
{
  __int64 *v2; // rbx
  void *v4; // rcx
  struct _DEVICE_OBJECT *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 16);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *v2 = 0LL;
  }
  *((_DWORD *)this + 2) = 0;
  v6 = (struct _DEVICE_OBJECT *)*((_QWORD *)a2 + 17);
  if ( v6 )
  {
    if ( (int)GreDeviceIoControlImpl(v6, 0x23201Bu, 0LL, 0, v2, 8u, &v10, 1u, 1) >= 0 )
    {
      v7 = *v2;
      if ( *v2 )
      {
        v8 = *((unsigned int *)this + 2);
        if ( _bittest((const signed __int32 *)(v7 + 20 * v8), 0x1Du) )
        {
          do
          {
            v9 = (unsigned int)(v8 + 1);
            *((_DWORD *)this + 2) = v9;
            LODWORD(v8) = v8 + 1;
          }
          while ( _bittest((const signed __int32 *)(v7 + 20 * v9), 0x1Du) );
        }
      }
    }
  }
}
