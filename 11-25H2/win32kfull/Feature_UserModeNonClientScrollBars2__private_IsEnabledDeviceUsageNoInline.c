/*
 * XREFs of Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x140281C38
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140058980 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     NtUserGetScrollBarInfo @ 0x1401B8D60 (NtUserGetScrollBarInfo.c)
 *     NtUserSBGetParms @ 0x14024C8E0 (NtUserSBGetParms.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x140259C18 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     xxxDrawWindowFrame @ 0x14025CE6C (xxxDrawWindowFrame.c)
 *     ?GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z @ 0x14026E7C0 (-GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027D2B8 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 *     ?GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z @ 0x1402F2B34 (-GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z.c)
 * Callees:
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledFallback @ 0x140281C70 (Feature_UserModeNonClientScrollBars2__private_IsEnabledFallback.c)
 */

__int64 Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UserModeNonClientScrollBars2__private_featureState & 0x10) != 0 )
    return Feature_UserModeNonClientScrollBars2__private_featureState & 1;
  else
    return Feature_UserModeNonClientScrollBars2__private_IsEnabledFallback(
             (unsigned int)Feature_UserModeNonClientScrollBars2__private_featureState,
             3LL);
}
