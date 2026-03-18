/*
 * XREFs of ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x140266170
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x140295910 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1402FB748 (--0InkProcessor@@AEAA@XZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400044CC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 */

__int64 __fastcall InkFeedbackServer::AddInkFeedbackProvider(
        InkFeedbackServer *this,
        struct InkFeedbackProviderBase *a2,
        __int64 a3,
        __int64 a4)
{
  InkFeedbackServer **v4; // r8
  InkFeedbackServer *v5; // rax
  int v7; // [rsp+50h] [rbp+8h] BYREF
  struct InkFeedbackProviderBase *v8; // [rsp+58h] [rbp+10h] BYREF
  void *v9; // [rsp+60h] [rbp+18h] BYREF
  const char *v10; // [rsp+68h] [rbp+20h] BYREF

  v4 = (InkFeedbackServer **)*((_QWORD *)this + 1);
  v5 = (struct InkFeedbackProviderBase *)((char *)a2 + 8);
  if ( *v4 != this )
    __fastfail(3u);
  *(_QWORD *)v5 = this;
  *((_QWORD *)a2 + 2) = v4;
  *v4 = v5;
  *((_QWORD *)this + 1) = v5;
  if ( (unsigned int)dword_1403AAAD8 > 4 )
  {
    v9 = (void *)*((_QWORD *)a2 + 6);
    v10 = "Added ink feedback provider";
    v8 = a2;
    v7 = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      (__int64)this,
      (__int64)&unk_1403795DD,
      (__int64)v4,
      a4,
      (__int64)&v7,
      (void **)&v10,
      &v9,
      (__int64)&v8);
  }
  return 0LL;
}
