/*
 * XREFs of HampConnectionDestroy @ 0x180004D70
 * Callers:
 *     HamConnectForStateChangeNotifications @ 0x180002E60 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForServicing @ 0x180004240 (HamConnectForServicing.c)
 *     HamConnectForExtendedExecution @ 0x180004330 (HamConnectForExtendedExecution.c)
 *     HampConnectionCreate @ 0x180004470 (HampConnectionCreate.c)
 *     HamDisconnectFromServer @ 0x180005090 (HamDisconnectFromServer.c)
 *     HamConnectForSessionState @ 0x1800053F0 (HamConnectForSessionState.c)
 *     HamConnectForDebugging @ 0x180005510 (HamConnectForDebugging.c)
 *     HamConnectToServerEx @ 0x180011AB0 (HamConnectToServerEx.c)
 *     HamConnectForFullTrust @ 0x18001A6C0 (HamConnectForFullTrust.c)
 * Callees:
 *     RmpClientWnfDestroySubscription @ 0x180004DD0 (RmpClientWnfDestroySubscription.c)
 *     HampConnectionCleanup @ 0x180004ECC (HampConnectionCleanup.c)
 *     HamIpcChannelRundown @ 0x180005458 (HamIpcChannelRundown.c)
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
