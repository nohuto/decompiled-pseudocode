/*
 * XREFs of ?UnlinkHidData@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x1401E9D20
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z @ 0x140262518 (-TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z.c)
 * Callees:
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 */

struct tagHIDDATA *__fastcall UnlinkHidData(struct tagTHREADINFO *a1, struct tagHIDDATA *a2, struct tagHIDDATA ***a3)
{
  struct tagHIDDATA **i; // rcx
  struct tagHIDDATA *result; // rax

  if ( a3 )
    *a3 = 0LL;
  for ( i = (struct tagHIDDATA **)((char *)a1 + 1168); ; i = (struct tagHIDDATA **)((char *)result + 32) )
  {
    result = *i;
    if ( !*i )
      break;
    if ( result == a2 )
    {
      *i = (struct tagHIDDATA *)*((_QWORD *)a2 + 4);
      *((_QWORD *)a2 + 4) = 0LL;
      if ( a3 )
        *a3 = i;
      if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
        *((_DWORD *)a2 + 12) |= 1u;
      return a2;
    }
  }
  return result;
}
