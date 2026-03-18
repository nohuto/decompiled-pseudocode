/*
 * XREFs of Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x1402B3154
 * Callers:
 *     _PostMessageCheckIL @ 0x1400CA9FC (_PostMessageCheckIL.c)
 *     _PostTransformableMessageIL @ 0x14012A580 (_PostTransformableMessageIL.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     NtUserPostMessage @ 0x1401421C0 (NtUserPostMessage.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140167A50 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x140182E58 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     NtUserPostThreadMessage @ 0x14024B7E0 (NtUserPostThreadMessage.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 * Callees:
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledFallback @ 0x1402B318C (Feature_MsgUseCSRSSTrueIL__private_IsEnabledFallback.c)
 */

__int64 Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MsgUseCSRSSTrueIL__private_featureState & 0x10) != 0 )
    return Feature_MsgUseCSRSSTrueIL__private_featureState & 1;
  else
    return Feature_MsgUseCSRSSTrueIL__private_IsEnabledFallback(
             (unsigned int)Feature_MsgUseCSRSSTrueIL__private_featureState,
             3LL);
}
