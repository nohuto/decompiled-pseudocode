/*
 * XREFs of ?EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z @ 0x1401E1FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1400043C8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapper.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1402FDEB8 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall InkFeedbackProviderBase::EndActiveCommandsByOwnerThread(
        InkFeedbackProviderBase *this,
        const void *a2,
        __int64 a3,
        __int64 a4)
{
  struct InkFeedbackProviderBase::ActiveCommand *v4; // rsi
  struct InkFeedbackProviderBase::ActiveCommand *v6; // rbx
  __int64 v8; // rcx
  struct InkFeedbackProviderBase::ActiveCommand *v9; // r14
  __int64 v10; // [rsp+50h] [rbp-20h] BYREF
  void *v11; // [rsp+58h] [rbp-18h] BYREF
  const char *v12; // [rsp+60h] [rbp-10h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *v13; // [rsp+68h] [rbp-8h] BYREF
  char v14; // [rsp+A0h] [rbp+30h] BYREF
  int v15; // [rsp+B0h] [rbp+40h] BYREF
  int v16; // [rsp+B8h] [rbp+48h] BYREF

  v4 = (InkFeedbackProviderBase *)((char *)this + 24);
  v6 = (struct InkFeedbackProviderBase::ActiveCommand *)*((_QWORD *)this + 3);
  while ( v6 != v4 )
  {
    v8 = (__int64)v6;
    v13 = v6;
    v9 = v6;
    v6 = *(struct InkFeedbackProviderBase::ActiveCommand **)v6;
    if ( *(const void **)(v8 + 24) == a2 )
    {
      if ( (unsigned int)dword_1403AAAD8 > 4 )
      {
        v10 = *(_QWORD *)(v8 + 24);
        v15 = *(_DWORD *)(v8 + 20);
        v14 = *(_BYTE *)(v8 + 16);
        v11 = (void *)*((_QWORD *)this + 6);
        v12 = "Terminating active command by owner thread";
        v16 = 0;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v8,
          (__int64)&unk_1403799F3,
          a3,
          a4,
          (__int64)&v16,
          (void **)&v12,
          &v11,
          (__int64)&v14,
          (__int64)&v15,
          (__int64)&v10);
      }
      (*(void (__fastcall **)(InkFeedbackProviderBase *, struct InkFeedbackProviderBase::ActiveCommand *))(*(_QWORD *)this + 40LL))(
        this,
        v9);
      InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(this, &v13);
    }
  }
}
