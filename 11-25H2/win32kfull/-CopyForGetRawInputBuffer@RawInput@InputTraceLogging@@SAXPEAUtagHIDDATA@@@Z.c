/*
 * XREFs of ?CopyForGetRawInputBuffer@RawInput@InputTraceLogging@@SAXPEAUtagHIDDATA@@@Z @ 0x140121080
 * Callers:
 *     ?GRIB_CopyHidData@@YAIQEAUtagHIDDATA@@PEAI1PEAPEAUtagRAWINPUT@@I@Z @ 0x140120FAC (-GRIB_CopyHidData@@YAIQEAUtagHIDDATA@@PEAI1PEAPEAUtagRAWINPUT@@I@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140003A40 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x14000424C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U2@U2@U-$_tlgWrapperByVal@$03@@U3@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140004314 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWr.c)
 *     ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140122004 (-Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x14012ADAC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x14017EE94 (_tlgKeywordOn.c)
 */

void __fastcall InputTraceLogging::RawInput::CopyForGetRawInputBuffer(struct tagHIDDATA *a1)
{
  __int64 v1; // r9
  __int64 v2; // r11
  int v3; // r10d
  _WORD *v4; // r9
  __int64 v5; // r9
  int v6; // r8d
  __int64 *v7; // r9
  __int64 *v8; // r9
  int v9; // r10d
  int v10; // [rsp+98h] [rbp+18h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned __int8)InputTraceLogging::Enabled(0x40000LL, 0LL) )
  {
    v3 = *(_DWORD *)(v1 + 56);
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        if ( (unsigned int)dword_14039BB50 > 4 && (unsigned __int8)tlgKeywordOn(&dword_14039BB50, v2) )
        {
          LODWORD(v11) = *(_DWORD *)(v5 + 92);
          LODWORD(v12) = *(_DWORD *)(v5 + 88);
          LOWORD(v10) = *(_WORD *)(v5 + 82);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (__int64)&dword_14039BB50,
            (__int64)&unk_140368D05);
        }
      }
      else if ( v3 == 2 )
      {
        if ( (unsigned int)dword_14039BB50 > 4 && (unsigned __int8)tlgKeywordOn(&dword_14039BB50, v2) )
        {
          v10 = *((_DWORD *)v7 + 21);
          LODWORD(v11) = *((_DWORD *)v7 + 20);
          v12 = *v7;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_14039BB50,
            (unsigned int)&unk_140368BEC,
            v6,
            (_DWORD)v7,
            (__int64)&v12,
            (__int64)&v11,
            (__int64)&v10);
        }
      }
      else if ( (unsigned int)dword_14039BB50 > 4 && (unsigned __int8)tlgKeywordOn(&dword_14039BB50, v2) )
      {
        v11 = *v8;
        v10 = v9;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (__int64)&dword_14039BB50,
          (__int64)&unk_140368C38);
      }
    }
    else if ( (unsigned int)dword_14039BB50 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_14039BB50, v2) )
      {
        LOWORD(v10) = v4[43];
        LOWORD(v11) = v4[42];
        LOWORD(v12) = v4[40];
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_14039BB50,
          (__int64)&unk_140368C81);
      }
    }
  }
}
