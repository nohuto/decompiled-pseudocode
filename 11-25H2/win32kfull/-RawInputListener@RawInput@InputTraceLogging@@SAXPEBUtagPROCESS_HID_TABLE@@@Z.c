/*
 * XREFs of ?RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z @ 0x14011E084
 * Callers:
 *     _RegisterRawInputDevices @ 0x14011DA34 (_RegisterRawInputDevices.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14028D484 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140002D8C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplat.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@43333333333333@Z @ 0x140002EE4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140122004 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RawInput::RawInputListener(const struct tagPROCESS_HID_TABLE *a1)
{
  const struct tagPROCESS_HID_TABLE *i; // rbx
  const struct tagPROCESS_HID_TABLE *j; // rbx
  const struct tagPROCESS_HID_TABLE *k; // rbx

  if ( (unsigned __int8)InputTraceLogging::Enabled(0x40000LL, 0LL) )
  {
    if ( (unsigned int)dword_14039BB50 > 4 && (unsigned __int8)tlgKeywordOn(&dword_14039BB50, 0x40000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_14039BB50,
        (__int64)&unk_1403667EA);
    for ( i = (const struct tagPROCESS_HID_TABLE *)*((_QWORD *)a1 + 2);
          i != (const struct tagPROCESS_HID_TABLE *)((char *)a1 + 16);
          i = *(const struct tagPROCESS_HID_TABLE **)i )
    {
      if ( (unsigned int)dword_14039BB50 > 4 && (unsigned __int8)tlgKeywordOn(&dword_14039BB50, 0x40000LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (__int64)&dword_14039BB50,
          (__int64)&unk_14036675D);
    }
    for ( j = (const struct tagPROCESS_HID_TABLE *)*((_QWORD *)a1 + 4);
          j != (const struct tagPROCESS_HID_TABLE *)((char *)a1 + 32);
          j = *(const struct tagPROCESS_HID_TABLE **)j )
    {
      if ( (unsigned int)dword_14039BB50 > 4 && (unsigned __int8)tlgKeywordOn(&dword_14039BB50, 0x40000LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (__int64)&dword_14039BB50,
          (__int64)&unk_140366994);
    }
    for ( k = (const struct tagPROCESS_HID_TABLE *)*((_QWORD *)a1 + 6);
          k != (const struct tagPROCESS_HID_TABLE *)((char *)a1 + 48);
          k = *(const struct tagPROCESS_HID_TABLE **)k )
    {
      if ( (unsigned int)dword_14039BB50 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_14039BB50, 0x40000LL) )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            (__int64)&dword_14039BB50,
            (__int64)&unk_140366907);
      }
    }
  }
}
