/*
 * XREFs of ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14000C7AC
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x14000BAA0 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x14000C3E0 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1401F7FB4 (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x14000E47C (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     DrvGetDeviceFromName @ 0x140028550 (DrvGetDeviceFromName.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

__int64 __fastcall DrvGetDeviceFromNameAndValidateDevice(
        struct _UNICODE_STRING *a1,
        enum _MODE a2,
        struct tagGRAPHICS_DEVICE **a3)
{
  __int64 DeviceFromName; // rdi
  int v5; // eax
  PCUNICODE_STRING String1; // [rsp+48h] [rbp+20h] BYREF

  DeviceFromName = 0LL;
  if ( a2 == UserMode )
  {
    String1 = 0LL;
    if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
      DeviceFromName = DrvGetDeviceFromName(String1);
    if ( String1 )
      GreDeleteFastMutex((PVOID)String1);
  }
  else
  {
    DeviceFromName = DrvGetDeviceFromName(a1);
  }
  if ( !DeviceFromName )
    return 3223193057LL;
  v5 = *(_DWORD *)(DeviceFromName + 160);
  if ( (v5 & 1) == 0 )
    return 3223193058LL;
  if ( (v5 & 8) != 0 )
    return 3223193059LL;
  *a3 = (struct tagGRAPHICS_DEVICE *)DeviceFromName;
  return 0LL;
}
