/*
 * XREFs of ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x14026B5F4
 * Callers:
 *     ??1InkProcessor@@AEAA@XZ @ 0x1402FB858 (--1InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1402FBB14 (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400044CC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     ?Unlink@ListEntry@@YAXPEAU_LIST_ENTRY@@@Z @ 0x140288C88 (-Unlink@ListEntry@@YAXPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall InkFeedbackServer::RemoveInkFeedbackProvider(InkFeedbackServer *this, struct _LIST_ENTRY *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  InkFeedbackServer *v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  void *v8; // [rsp+60h] [rbp+18h] BYREF
  const char *v9; // [rsp+68h] [rbp+20h] BYREF

  v6 = this;
  ListEntry::Unlink((ListEntry *)&a2->Blink, a2);
  if ( (unsigned int)dword_1403AAAD8 > 4 )
  {
    v8 = *(void **)(v3 + 48);
    v9 = "Removed ink feedback provider";
    v7 = v3;
    LODWORD(v6) = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      v2,
      (__int64)&unk_14037962A,
      v3,
      v4,
      (__int64)&v6,
      (void **)&v9,
      &v8,
      (__int64)&v7);
  }
  return 0LL;
}
