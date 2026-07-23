/*
 * XREFs of PopNetNonCompliantDeviceUpdate @ 0x1407DE67C
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140B32390 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x14077D290 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140B69B20 (PopNetClearConnectivityConstraint.c)
 */

void __fastcall PopNetNonCompliantDeviceUpdate(char a1, int a2)
{
  int ReadOperationCount; // eax

  if ( a2 || !PopIgnoreCsComplianceCheck )
  {
    ReadOperationCount = PopPdcDeviceListLock.ReadOperationCount;
    if ( a1 )
    {
      ++LODWORD(PopPdcDeviceListLock.ReadOperationCount);
      if ( !ReadOperationCount )
        PopNetSetConnectivityConstraint(3);
    }
    else if ( LODWORD(PopPdcDeviceListLock.ReadOperationCount) )
    {
      --LODWORD(PopPdcDeviceListLock.ReadOperationCount);
      if ( ReadOperationCount == 1 )
        PopNetClearConnectivityConstraint(3LL);
    }
  }
}
