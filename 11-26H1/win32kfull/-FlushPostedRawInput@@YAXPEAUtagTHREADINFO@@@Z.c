/*
 * XREFs of ?FlushPostedRawInput@@YAXPEAUtagTHREADINFO@@@Z @ 0x140028818
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z @ 0x140028500 (-SaveMessageInfoHandle@@YAXPEAUtagTHREADINFO@@PEAUtagMSG@@@Z.c)
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x140053CD4 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z @ 0x140262518 (-TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@0PEAUtagHIDDATA@@_N@Z.c)
 * Callees:
 *     ?ReverseHidDataList@@YAPEAUtagHIDDATA@@PEAU_SLIST_ENTRY@@@Z @ 0x140054258 (-ReverseHidDataList@@YAPEAUtagHIDDATA@@PEAU_SLIST_ENTRY@@@Z.c)
 */

void __fastcall FlushPostedRawInput(union _SLIST_HEADER *a1)
{
  struct _SLIST_ENTRY *v2; // rax
  struct tagHIDDATA *v3; // rax
  _QWORD *i; // rcx

  v2 = ExpInterlockedFlushSList(a1 + 72);
  v3 = ReverseHidDataList(v2);
  if ( v3 )
  {
    for ( i = &a1[73].Alignment; *i; i = (_QWORD *)(*i + 32LL) )
      ;
    *i = v3;
  }
}
