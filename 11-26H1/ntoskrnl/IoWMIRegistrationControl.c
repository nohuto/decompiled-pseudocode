/*
 * XREFs of IoWMIRegistrationControl @ 0x140ACF980
 * Callers:
 *     DifIoWMIRegistrationControlWrapper @ 0x140662E60 (DifIoWMIRegistrationControlWrapper.c)
 *     PpmEnableWmiInterface @ 0x1407DDEC8 (PpmEnableWmiInterface.c)
 *     ViDdiDriverEntry @ 0x140C49070 (ViDdiDriverEntry.c)
 *     WmipDriverEntry @ 0x140CE6560 (WmipDriverEntry.c)
 *     WheaInitialize @ 0x140CEDE58 (WheaInitialize.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     WmipUnreferenceRegEntry @ 0x1403C0F80 (WmipUnreferenceRegEntry.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     WmipFindRegEntryByDevice @ 0x14048FD3C (WmipFindRegEntryByDevice.c)
 *     WmipUpdateRegistration @ 0x140ACFADC (WmipUpdateRegistration.c)
 *     WmipRegisterDevice @ 0x140ACFB28 (WmipRegisterDevice.c)
 *     WmipDeregisterDevice @ 0x140ACFDE8 (WmipDeregisterDevice.c)
 *     WmipSetTraceNotify @ 0x140B4BA8C (WmipSetTraceNotify.c)
 */

NTSTATUS __stdcall IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, ULONG Action)
{
  char v2; // r14
  ULONG v5; // ecx
  ULONG v6; // ecx
  NTSTATUS v7; // ebx
  ULONG v8; // ecx
  ULONG v9; // ecx
  ULONG v10; // ecx
  __int64 RegEntryByDevice; // rbx

  v2 = 0;
  if ( !WmipServiceDeviceObject )
    return -1073741823;
  v5 = Action & 0x7FFFFFFF;
  if ( (Action & 0x80000000) == 0 )
    v5 = Action;
  if ( (v5 & 0x10000) != 0 )
  {
    v2 = 1;
    v5 &= 0xFF0EFFFF;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = WmipRegisterDevice(DeviceObject);
    if ( v2 )
      WmipSetTraceNotify(DeviceObject);
    return v7;
  }
  v8 = v6 - 1;
  if ( !v8 )
    return WmipDeregisterDevice(DeviceObject, 0x10000LL);
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return -1073741811;
      RegEntryByDevice = WmipFindRegEntryByDevice((__int64)DeviceObject);
      if ( !RegEntryByDevice )
        return -1073741811;
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      _InterlockedOr((volatile signed __int32 *)(RegEntryByDevice + 48), 0x20000000u);
      KeReleaseMutex(&WmipSMMutex, 0);
      WmipUnreferenceRegEntry(RegEntryByDevice);
      return 0;
    }
    return WmipUpdateRegistration(DeviceObject, 0x10000LL);
  }
  else
  {
    v7 = WmipDeregisterDevice(DeviceObject, 0x10000LL);
    if ( v7 < 0 )
      return v7;
    return WmipRegisterDevice(DeviceObject);
  }
}
