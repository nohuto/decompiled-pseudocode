/*
 * XREFs of DpiReportSoftwareDevice @ 0x14023F1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiReportSoftwareDevice(PDRIVER_OBJECT DriverObject)
{
  NTSTATUS v2; // ebx
  _DWORD *DriverObjectExtension; // rax

  if ( DriverObject )
  {
    DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverObject);
    if ( DriverObjectExtension && DriverObjectExtension[4] == 1953656900 && DriverObjectExtension[5] == 1 )
    {
      v2 = IoReportRootDevice(DriverObject);
      if ( v2 >= 0 )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 4000;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 3993;
      }
    }
    else
    {
      v2 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3974;
    }
  }
  else
  {
    v2 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3956;
  }
  return (unsigned int)v2;
}
