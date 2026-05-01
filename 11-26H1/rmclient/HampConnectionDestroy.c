/*
 * XREFs of HampConnectionDestroy @ 0x1800041CC
 * Callers:
 *     HamConnectForStateChangeNotifications @ 0x180002280 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForServicing @ 0x1800036A0 (HamConnectForServicing.c)
 *     HamConnectForExtendedExecution @ 0x180003790 (HamConnectForExtendedExecution.c)
 *     HampConnectionCreate @ 0x180003930 (HampConnectionCreate.c)
 *     HamDisconnectFromServer @ 0x180004F60 (HamDisconnectFromServer.c)
 *     HamConnectForSessionState @ 0x1800052C0 (HamConnectForSessionState.c)
 *     HamConnectForDebugging @ 0x1800053F0 (HamConnectForDebugging.c)
 *     HamConnectToServerEx @ 0x180010990 (HamConnectToServerEx.c)
 *     HamConnectForFullTrust @ 0x180018C40 (HamConnectForFullTrust.c)
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x18000422C (RmpClientWnfDestroySubscription.c)
 *     HampConnectionCleanup @ 0x18000432C (HampConnectionCleanup.c)
 *     HamIpcChannelRundown @ 0x18000532C (HamIpcChannelRundown.c)
 */

__int64 __fastcall HampConnectionDestroy(__int64 a1)
{
  __int64 v3; // rcx

  if ( !*(_BYTE *)(a1 + 156) || *(_BYTE *)(a1 + 156) == 1 || *(_BYTE *)(a1 + 156) == 2 || *(_BYTE *)(a1 + 156) == 3 )
  {
    HamIpcChannelRundown(a1 + 24);
  }
  else if ( *(_BYTE *)(a1 + 156) == 6 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 )
      RmpClientWnfDestroySubscription(v3);
  }
  HampConnectionCleanup(a1);
  return HamFreeBuffer(a1);
}
