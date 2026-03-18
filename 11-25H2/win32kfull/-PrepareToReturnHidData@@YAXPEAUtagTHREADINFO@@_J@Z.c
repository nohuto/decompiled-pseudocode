/*
 * XREFs of ?PrepareToReturnHidData@@YAXPEAUtagTHREADINFO@@_J@Z @ 0x14007A7D4
 * Callers:
 *     ?SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x14007A730 (-SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017F4E0 (-FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x14017F57C (-UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z.c)
 *     ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140274548 (-FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x140275110 (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall PrepareToReturnHidData(struct tagTHREADINFO *a1, __int64 a2)
{
  __int64 v3; // rcx
  struct tagHIDDATA *v4; // rdi
  struct tagHIDDATA *v5; // rax

  v3 = a2;
  LOBYTE(a2) = 18;
  v4 = (struct tagHIDDATA *)HMValidateHandleNoSecure(v3, a2);
  if ( v4 )
  {
    if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
    {
      FlushPostedRawInput(a1);
      v5 = UnlinkHidData(a1, v4, 0LL);
    }
    else
    {
      v5 = FlushPostedRawInputAndUnlinkThisOne(a1, v4, 0LL);
    }
    *((_QWORD *)a1 + 143) = v5;
  }
}
