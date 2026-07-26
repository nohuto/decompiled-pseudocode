/*
 * XREFs of ?NdisTraceLoggingOffloadConfigRead@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140076230
 * Callers:
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14001EA80 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x14001DCA0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 */

void __fastcall NdisTraceLoggingOffloadConfigRead(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int Value; // [rsp+48h] [rbp+10h] BYREF
  _GUID *p_InterfaceGuid; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)dword_14011C6F8 > 5
    && (qword_14011C708 & 0x200000000000LL) != 0
    && (qword_14011C710 & 0x200000000000LL) == qword_14011C710 )
  {
    Value = a1->OffloadRegistry.Value;
    p_InterfaceGuid = &a1->InterfaceGuid;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      (__int64)&a1->InterfaceGuid,
      (__int64)&unk_140103D71,
      0x200000000000LL,
      a4,
      (__int64 *)&p_InterfaceGuid,
      (__int64)&Value);
  }
}
