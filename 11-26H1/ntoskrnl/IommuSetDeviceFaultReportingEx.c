/*
 * XREFs of IommuSetDeviceFaultReportingEx @ 0x1405A21F0
 * Callers:
 *     <none>
 * Callees:
 *     IommupDeviceRegisterFaultCallback @ 0x1405A2DB0 (IommupDeviceRegisterFaultCallback.c)
 *     IommupDeviceUnregisterFaultCallback @ 0x1405A2E70 (IommupDeviceUnregisterFaultCallback.c)
 */

__int64 __fastcall IommuSetDeviceFaultReportingEx(__int64 a1, int a2, char a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a2 )
    return (unsigned int)-1073741584;
  if ( !a3 )
  {
    if ( !a4 )
    {
      IommupDeviceUnregisterFaultCallback(a1);
      return v4;
    }
    return (unsigned int)-1073741582;
  }
  if ( !a4 )
    return (unsigned int)-1073741582;
  v4 = IommupDeviceRegisterFaultCallback(a1, a4);
  if ( v4 == -1073741584 )
    return (unsigned int)-1073741582;
  return v4;
}
