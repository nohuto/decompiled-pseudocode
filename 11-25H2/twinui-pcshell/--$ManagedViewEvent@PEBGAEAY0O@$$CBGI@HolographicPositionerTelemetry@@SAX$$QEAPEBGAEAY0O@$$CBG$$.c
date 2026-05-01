/*
 * XREFs of ??$ManagedViewEvent@PEBGAEAY0O@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0O@$$CBG$$QEAI@Z @ 0x1803F640C
 * Callers:
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[10]_unsigned_int_ @ 0x1803F6970 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[10]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[11]_unsigned_int_ @ 0x1803F6A18 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[11]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[12]_unsigned_int_ @ 0x1803F6AC0 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[12]_unsigned_int_.c)
 *     _LogEventWithApplicationViewData_unsigned_short_const_(&)[14]_unsigned_int_ @ 0x1803F6B68 (_LogEventWithApplicationViewData_unsigned_short_const_(-)[14]_unsigned_int_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005370 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x18008E69C (_tlgKeywordOn.c)
 *     ?Provider@HolographicPositionerProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1802AF79C (-Provider@HolographicPositionerProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall HolographicPositionerTelemetry::ManagedViewEvent<unsigned short const *,unsigned short const (&)[14],unsigned int>(
        _QWORD *a1,
        __int64 a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF

  v4 = HolographicPositionerProvider::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 4u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x200000000000LL);
    if ( (_BYTE)v4 )
    {
      v9[0] = *a1;
      v8 = a2;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v6,
                     (__int64)&unk_1807CC204,
                     v5,
                     v6,
                     v9,
                     &v8);
    }
  }
  return (char)v4;
}
