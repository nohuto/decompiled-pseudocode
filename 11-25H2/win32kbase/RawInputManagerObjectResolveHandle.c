/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x14002E4F0
 * Callers:
 *     RIMGetDeviceProperties @ 0x14002C910 (RIMGetDeviceProperties.c)
 *     RIMGetSourceProcessId @ 0x14002CBA0 (RIMGetSourceProcessId.c)
 *     RIMRemoveInputOfType @ 0x14002D000 (RIMRemoveInputOfType.c)
 *     RIMResetPointerDevices @ 0x14002DBC0 (RIMResetPointerDevices.c)
 *     RIMRefreshDeviceAttributes @ 0x14002DEC0 (RIMRefreshDeviceAttributes.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x14002E240 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 *     RIMUnregisterForInput @ 0x14009DC10 (RIMUnregisterForInput.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1400AED40 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMDirectStartStopDeviceRead @ 0x14012C380 (RIMDirectStartStopDeviceRead.c)
 *     RIMRegisterForInputWithCallbacks @ 0x140154130 (RIMRegisterForInputWithCallbacks.c)
 *     RIMGetDevicePreparsedData @ 0x140155BB0 (RIMGetDevicePreparsedData.c)
 *     RIMInjectInput @ 0x14015AA60 (RIMInjectInput.c)
 *     RIMDeviceIoControl @ 0x14017EA70 (RIMDeviceIoControl.c)
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 *     CleanupTouchExtensibility @ 0x1401A1BD8 (CleanupTouchExtensibility.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1401D7834 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401D8A10 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1401D92F0 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1401D9660 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D9BA0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1401DA550 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1401DA730 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1401DAE00 (RIMFreeInputBuffer.c)
 *     RIMGetDownContactCount @ 0x1401DB080 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1401DB4D0 (RIMGetPhysicalDeviceRect.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1401DB850 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMRemoveInjectionDevice @ 0x1401DBD60 (RIMRemoveInjectionDevice.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x14020F150 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
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
