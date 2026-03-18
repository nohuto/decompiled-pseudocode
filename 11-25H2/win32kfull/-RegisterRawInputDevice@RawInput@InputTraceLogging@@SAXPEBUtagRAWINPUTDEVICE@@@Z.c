/*
 * XREFs of ?RegisterRawInputDevice@RawInput@InputTraceLogging@@SAXPEBUtagRAWINPUTDEVICE@@@Z @ 0x14011D1D8
 * Callers:
 *     _RegisterRawInputDevices @ 0x14011DA34 (_RegisterRawInputDevices.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140002E64 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@5@Z @ 0x140003070 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U3@@-$_tlgWr.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RawInput::RegisterRawInputDevice(const struct tagRAWINPUTDEVICE *a1)
{
  __int16 v1; // ax
  void *v2; // rdx

  if ( *(_WORD *)a1 != 1 )
    goto LABEL_18;
  v1 = *((_WORD *)a1 + 1);
  if ( v1 == 2 )
  {
    if ( (unsigned int)dword_14039BB50 > 4
      && (qword_14039BB60 & 0x40000) != 0
      && (qword_14039BB68 & 0x40000) == qword_14039BB68 )
    {
      v2 = &unk_140366B09;
LABEL_7:
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        (__int64)&dword_14039BB50,
        (__int64)v2);
      return;
    }
    return;
  }
  if ( v1 != 6 )
  {
LABEL_18:
    if ( (unsigned int)dword_14039BB50 > 4 && (unsigned __int8)tlgKeywordOn(&dword_14039BB50, 0x40000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        (__int64)&dword_14039BB50,
        (__int64)&unk_140366B4E);
    return;
  }
  if ( (unsigned int)dword_14039BB50 > 4 && (unsigned __int8)tlgKeywordOn(&dword_14039BB50, 0x40000LL) )
  {
    v2 = &unk_140366BA3;
    goto LABEL_7;
  }
}
