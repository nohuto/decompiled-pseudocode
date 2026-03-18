/*
 * XREFs of Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline @ 0x1402B6158
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140059094 (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 * Callees:
 *     Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledFallback @ 0x1402B6190 (Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_DefaultIMEFreeWindow__private_featureState & 0x10) != 0 )
    return Feature_Servicing_DefaultIMEFreeWindow__private_featureState & 1;
  else
    return Feature_Servicing_DefaultIMEFreeWindow__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_DefaultIMEFreeWindow__private_featureState,
             3LL);
}
