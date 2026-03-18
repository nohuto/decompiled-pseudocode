/*
 * XREFs of ?EngTraceLoggingWrite@@YAXPEBD_K111@Z @ 0x1401F0F10
 * Callers:
 *     bCvtPts @ 0x1400C25C8 (bCvtPts.c)
 *     ?LogLongAddFailure@@YAXJJAEAH@Z @ 0x1400C2B28 (-LogLongAddFailure@@YAXJJAEAH@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@4444@Z @ 0x140004B7C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_t.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 */

void __fastcall EngTraceLoggingWrite(const char *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  void *v9; // r11
  __int64 v10; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h] BYREF
  __int64 v13; // [rsp+68h] [rbp-18h] BYREF
  __int64 v14; // [rsp+70h] [rbp-10h] BYREF
  void *v15; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1402A9F58 > 5 && tlgKeywordOn((__int64)&dword_1402A9F58, 0x400000000000LL) )
  {
    v11 = a5;
    v10 = 0x2000000LL;
    v12 = v7;
    v13 = v6;
    v14 = v8;
    v15 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v5,
      (__int64)&unk_140283D1A,
      v6,
      v7,
      &v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10);
  }
}
