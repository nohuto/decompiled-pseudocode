/*
 * XREFs of PopNetCompliantNicUpdate @ 0x1407DE328
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140B32390 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x14077D290 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140B69B20 (PopNetClearConnectivityConstraint.c)
 */

char __fastcall PopNetCompliantNicUpdate(char a1)
{
  int v1; // eax
  bool v2; // zf

  LOBYTE(v1) = PopPdcDeviceListLock.SchedulerApcFill3[44];
  if ( a1 )
  {
    v1 = *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[44] + 1;
    *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[44] = v1;
    if ( v1 == 1 )
      LOBYTE(v1) = PopNetClearConnectivityConstraint(6LL);
  }
  else if ( *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[44] )
  {
    v2 = *(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[44] == 1;
    LOBYTE(v1) = PopPdcDeviceListLock.SchedulerApcFill3[44] - 1;
    --*(_DWORD *)&PopPdcDeviceListLock.SchedulerApcFill5[44];
    if ( v2 )
      LOBYTE(v1) = PopNetSetConnectivityConstraint(6);
  }
  return v1;
}
