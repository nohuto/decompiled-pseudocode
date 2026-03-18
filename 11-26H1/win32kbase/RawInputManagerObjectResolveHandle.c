/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x14005DF20
 * Callers:
 *     RIMOnPnpNotification @ 0x14005B7D0 (RIMOnPnpNotification.c)
 *     RIMRegisterForInputWithCallbacks @ 0x14005C740 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x14005E4F0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDeviceIoControl @ 0x14005E7A0 (RIMDeviceIoControl.c)
 *     RIMResetPointerDevices @ 0x14005EF00 (RIMResetPointerDevices.c)
 *     RIMRefreshDeviceAttributes @ 0x140060820 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInputOfType @ 0x140092800 (RIMRemoveInputOfType.c)
 *     RIMDirectStartStopDeviceRead @ 0x140095B60 (RIMDirectStartStopDeviceRead.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1400E52A0 (RIMDirectStartDeviceClassNotifications.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1401297B8 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 *     RIMGetDeviceProperties @ 0x14016D2C0 (RIMGetDeviceProperties.c)
 *     RIMGetSourceProcessId @ 0x14016F0B0 (RIMGetSourceProcessId.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x14017D760 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMGetDevicePreparsedData @ 0x140183A90 (RIMGetDevicePreparsedData.c)
 *     RIMInjectInput @ 0x14019AE50 (RIMInjectInput.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401A4390 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     CleanupTouchExtensibility @ 0x1401C5B00 (CleanupTouchExtensibility.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1401FEA78 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401FFA30 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x140200340 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1402006B0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMEnableMonitorMappingForDevice @ 0x140200E20 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1402014A0 (RIMFreeInputBuffer.c)
 *     RIMGetDownContactCount @ 0x140201720 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x140201B70 (RIMGetPhysicalDeviceRect.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x140201EE0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMRemoveInjectionDevice @ 0x1402023F0 (RIMRemoveInjectionDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputManagerObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 1 )
    {
      *a4 = Object;
    }
    else
    {
      v5 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v5;
}
