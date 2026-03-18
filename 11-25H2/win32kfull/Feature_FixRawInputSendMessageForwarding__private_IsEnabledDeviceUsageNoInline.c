/*
 * XREFs of Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x140275110
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSendTransformableMessageTimeout @ 0x140030264 (xxxSendTransformableMessageTimeout.c)
 *     ?PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z @ 0x14007A7D4 (-PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z.c)
 *     ?FreePreviouslyReturnedHidData@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400C9AC4 (-FreePreviouslyReturnedHidData@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     PostInputMessage @ 0x14011FED8 (PostInputMessage.c)
 *     AllocateHidData @ 0x140120CE4 (AllocateHidData.c)
 *     xxxInterSendMsgEx @ 0x14012BE00 (xxxInterSendMsgEx.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x14016A55C (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017F57C (-UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?GetRawInputData_NoUserCrit@@YAIPEAUHRAWINPUT__@@IPEAXPEAI@Z @ 0x140186B94 (-GetRawInputData_NoUserCrit@@YAIPEAUHRAWINPUT__@@IPEAXPEAI@Z.c)
 *     _PostThreadMessageEx @ 0x1401AAC9C (_PostThreadMessageEx.c)
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x1401D0484 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 * Callees:
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledFallback @ 0x140275148 (Feature_FixRawInputSendMessageForwarding__private_IsEnabledFallback.c)
 */

__int64 Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixRawInputSendMessageForwarding__private_featureState & 0x10) != 0 )
    return Feature_FixRawInputSendMessageForwarding__private_featureState & 1;
  else
    return Feature_FixRawInputSendMessageForwarding__private_IsEnabledFallback(
             (unsigned int)Feature_FixRawInputSendMessageForwarding__private_featureState,
             3LL);
}
