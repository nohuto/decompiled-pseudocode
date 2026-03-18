/*
 * XREFs of ?FlushPostedRawInputAndUnlinkThisOne@@YAPEAUtagHIDDATA@@PEAUtagTHREADINFO@@PEAU1@PEAPEAPEAU1@@Z @ 0x140028738
 * Callers:
 *     ?SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x140028500 (-SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 */

struct tagHIDDATA *__fastcall FlushPostedRawInputAndUnlinkThisOne(
        union _SLIST_HEADER *a1,
        struct tagHIDDATA *a2,
        struct tagHIDDATA ***a3)
{
  PSLIST_ENTRY v6; // rax
  __int64 v7; // r9
  __int64 i; // r8
  __int64 v9; // rcx
  struct tagHIDDATA **v10; // rcx
  struct tagHIDDATA *v11; // rax
  union _SLIST_HEADER *v12; // rdx
  struct tagHIDDATA *v13; // rax

  v6 = ExpInterlockedFlushSList(a1 + 72);
  v7 = 0LL;
  for ( i = (unsigned __int64)&v6[-2] & -(__int64)(v6 != 0LL); i; i = (v9 - 32) & -(__int64)(v9 != 0) )
  {
    v9 = *(_QWORD *)(i + 32);
    *(_QWORD *)(i + 32) = v7;
    v7 = i;
  }
  v10 = (struct tagHIDDATA **)&a1[73];
  if ( v7 )
  {
    v11 = *v10;
    v12 = a1 + 73;
    while ( v11 )
    {
      v12 = (union _SLIST_HEADER *)((char *)v11 + 32);
      v11 = (struct tagHIDDATA *)*((_QWORD *)v11 + 4);
    }
    v12->Alignment = v7;
  }
  if ( a3 )
    *a3 = 0LL;
  while ( 1 )
  {
    v13 = *v10;
    if ( !*v10 )
      return 0LL;
    if ( v13 == a2 )
      break;
    v10 = (struct tagHIDDATA **)((char *)v13 + 32);
  }
  *v10 = (struct tagHIDDATA *)*((_QWORD *)a2 + 4);
  *((_QWORD *)a2 + 4) = 0LL;
  if ( a3 )
    *a3 = v10;
  if ( (unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline() )
    *((_DWORD *)a2 + 12) |= 1u;
  return a2;
}
