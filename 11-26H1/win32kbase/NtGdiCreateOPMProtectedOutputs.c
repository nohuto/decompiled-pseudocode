/*
 * XREFs of NtGdiCreateOPMProtectedOutputs @ 0x14000A770
 * Callers:
 *     <none>
 * Callees:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1400096D0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x14000BAA0 (DrvCreatePhysicalMonitorObjects.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 */

__int64 __fastcall NtGdiCreateOPMProtectedOutputs(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        int a3,
        volatile void *a4,
        volatile void *Address)
{
  __int64 result; // rax
  unsigned int v9; // edi
  int PhysicalMonitorObjects; // ebx

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v9 = 0;
  if ( (int)result >= 0 )
  {
    PhysicalMonitorObjects = DrvCreatePhysicalMonitorObjects(a1, UserMode, a3, a4, Address);
    UserSessionSwitchLeaveCritWithNonPaged();
    if ( PhysicalMonitorObjects < 0 )
      return (unsigned int)PhysicalMonitorObjects;
    return v9;
  }
  return result;
}
