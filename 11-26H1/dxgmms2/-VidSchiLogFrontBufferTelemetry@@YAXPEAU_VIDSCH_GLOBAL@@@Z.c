/*
 * XREFs of ?VidSchiLogFrontBufferTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x14004C82C
 * Callers:
 *     ?VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x14002F0E4 (-VidSchiLogAggregatedTelemetry@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@3AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3@Z @ 0x1400023AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U1@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     _tlgKeywordOn @ 0x1400411D8 (_tlgKeywordOn.c)
 */

void __fastcall VidSchiLogFrontBufferTelemetry(struct _VIDSCH_GLOBAL *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6[3]; // [rsp+50h] [rbp-18h] BYREF
  __int16 v7; // [rsp+70h] [rbp+8h] BYREF
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int16 *v9; // [rsp+80h] [rbp+18h] BYREF
  __int64 v10; // [rsp+88h] [rbp+20h] BYREF

  if ( *((_QWORD *)a1 + 886) > *((_QWORD *)a1 + 887) )
  {
    if ( (unsigned int)dword_14008A048 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_14008A048, 0x400000000010LL) )
      {
        v5 = *((_QWORD *)a1 + 2);
        v8 = v3 - v4;
        v9 = *(unsigned __int16 **)(v5 + 1968);
        v10 = *(_QWORD *)(v5 + 412);
        v7 = 0;
        v6[0] = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
          v5,
          (__int64)&unk_14007E201,
          v2,
          v3 - v4,
          (__int64)v6,
          (__int64)&v7,
          (__int64)&v10,
          &v9,
          (__int64)&v8);
      }
    }
    *((_QWORD *)a1 + 887) = *((_QWORD *)a1 + 886);
  }
}
