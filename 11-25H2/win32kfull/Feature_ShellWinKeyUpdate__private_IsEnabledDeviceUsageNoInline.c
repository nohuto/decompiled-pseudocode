/*
 * XREFs of Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14027A230
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140059094 (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401B2F08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxSwitchDesktop @ 0x1401FD254 (xxxSwitchDesktop.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x14023A9B4 (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14023BA9C (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     _lambda_901e485e0433aa03d5d4ca8cfaefa235_::operator() @ 0x140277658 (_lambda_901e485e0433aa03d5d4ca8cfaefa235_--operator().c)
 *     ?CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z @ 0x140277CD4 (-CleanupShellWindowManagement@@YAXPEAUtagDESKTOP@@@Z.c)
 *     NtUserSetShellSpecialWindow @ 0x1402A0150 (NtUserSetShellSpecialWindow.c)
 * Callees:
 *     Feature_ShellWinKeyUpdate__private_IsEnabledFallback @ 0x14027A268 (Feature_ShellWinKeyUpdate__private_IsEnabledFallback.c)
 */

__int64 Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ShellWinKeyUpdate__private_featureState & 0x10) != 0 )
    return Feature_ShellWinKeyUpdate__private_featureState & 1;
  else
    return Feature_ShellWinKeyUpdate__private_IsEnabledFallback(
             (unsigned int)Feature_ShellWinKeyUpdate__private_featureState,
             3LL);
}
