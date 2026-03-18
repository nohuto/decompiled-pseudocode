/*
 * XREFs of ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YAXHH@Z @ 0x1402D232C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140090B44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1401A90CC (_tlgKeywordOn.c)
 */

void __fastcall TraceLoggingSPISetDesktopDPIOverrideEvent(int a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+60h] [rbp+18h] BYREF
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  v3 = a1;
  if ( (unsigned int)dword_1403AAA30 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1403AAA30, 0x200000000000LL) )
    {
      v3 = v2;
      v4 = 0xFFFF;
      v5 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_1403AAA30,
        (__int64)&unk_140377B0F,
        v1,
        v2,
        (__int64)&v5,
        (__int64)&v4,
        (__int64)&v3);
    }
  }
}
