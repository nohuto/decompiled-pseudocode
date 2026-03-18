/*
 * XREFs of ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x1402089BC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     PostDeviceNotification @ 0x140171974 (PostDeviceNotification.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1401DAF58 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     PostPointerEventMessage @ 0x1401F1830 (PostPointerEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1402A08EC (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall ShouldReceiveTouchpadMessages(const struct tagTHREADINFO *a1, __int64 a2)
{
  char v4; // bl
  __int64 v6; // rax

  v4 = 0;
  if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline(a1) )
    return (unsigned int)IsTouchpadCapable(a1, a2) != 0;
  if ( (*((_QWORD *)a1 + 170) & 0x2000002000LL) != 0 || *((_WORD *)a1 + 633) )
    return 1;
  if ( a2 )
  {
    v6 = HMValidateHandleNoSecure(a2, 1);
    if ( v6 )
      return (*(_DWORD *)(v6 + 380) & 0x800) != 0;
  }
  return v4;
}
