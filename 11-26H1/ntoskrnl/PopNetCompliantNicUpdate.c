/*
 * XREFs of PopNetCompliantNicUpdate @ 0x1407DA440
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x140B3018C (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x14077A360 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140B66B94 (PopNetClearConnectivityConstraint.c)
 */

char __fastcall PopNetCompliantNicUpdate(char a1)
{
  int v1; // eax
  bool v2; // zf

  LOBYTE(v1) = stru_140F0C428.Header.WaitListHead.Blink;
  if ( a1 )
  {
    v1 = LODWORD(stru_140F0C428.Header.WaitListHead.Blink) + 1;
    LODWORD(stru_140F0C428.Header.WaitListHead.Blink) = v1;
    if ( v1 == 1 )
      LOBYTE(v1) = PopNetClearConnectivityConstraint(6LL);
  }
  else if ( LODWORD(stru_140F0C428.Header.WaitListHead.Blink) )
  {
    v2 = LODWORD(stru_140F0C428.Header.WaitListHead.Blink) == 1;
    LOBYTE(v1) = LOBYTE(stru_140F0C428.Header.WaitListHead.Blink) - 1;
    --LODWORD(stru_140F0C428.Header.WaitListHead.Blink);
    if ( v2 )
      LOBYTE(v1) = PopNetSetConnectivityConstraint(6);
  }
  return v1;
}
