/*
 * XREFs of PopNetNonCompliantDeviceUpdate @ 0x1407DA78C
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140B3018C (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x14077A360 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140B66B94 (PopNetClearConnectivityConstraint.c)
 */

void __fastcall PopNetNonCompliantDeviceUpdate(char a1, int a2)
{
  int v2; // eax

  if ( a2 || !PopIgnoreCsComplianceCheck )
  {
    v2 = *(_DWORD *)&stru_140F0C428.WaitBlockFill11[104];
    if ( a1 )
    {
      ++*(_DWORD *)&stru_140F0C428.WaitBlockFill11[104];
      if ( !v2 )
        PopNetSetConnectivityConstraint(3);
    }
    else if ( *(_DWORD *)&stru_140F0C428.WaitBlockFill11[104] )
    {
      --*(_DWORD *)&stru_140F0C428.WaitBlockFill11[104];
      if ( v2 == 1 )
        PopNetClearConnectivityConstraint(3LL);
    }
  }
}
