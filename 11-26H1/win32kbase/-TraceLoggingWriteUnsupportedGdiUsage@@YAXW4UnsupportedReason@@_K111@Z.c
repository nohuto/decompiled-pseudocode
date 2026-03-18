/*
 * XREFs of ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1401C35F4
 * Callers:
 *     EngAssociateSurface @ 0x1401F0E20 (EngAssociateSurface.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4444@Z @ 0x140004AD0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 */

void TraceLoggingWriteUnsupportedGdiUsage(int a1, __int64 a2, ...)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // [rsp+50h] [rbp-10h] BYREF
  __int64 v5; // [rsp+58h] [rbp-8h] BYREF
  int v6; // [rsp+70h] [rbp+10h] BYREF
  __int64 v7; // [rsp+80h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+20h]
  __int64 v9; // [rsp+88h] [rbp+28h] BYREF
  va_list va1; // [rsp+88h] [rbp+28h]
  __int64 v11; // [rsp+90h] [rbp+30h] BYREF
  va_list va2; // [rsp+90h] [rbp+30h]
  va_list va3; // [rsp+98h] [rbp+38h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v7 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v9 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v11 = va_arg(va3, _QWORD);
  v6 = a1;
  if ( (unsigned int)dword_1402A9F58 > 5 && tlgKeywordOn((__int64)&dword_1402A9F58, 0x400000000000LL) )
  {
    v9 = 0LL;
    v7 = 0LL;
    v11 = 0LL;
    v4 = v2;
    v5 = 0x2000000LL;
    v6 = 3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      0LL,
      (__int64)&unk_140283CAF,
      v2,
      v3,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)va2,
      (__int64)va,
      (__int64)va1);
  }
}
