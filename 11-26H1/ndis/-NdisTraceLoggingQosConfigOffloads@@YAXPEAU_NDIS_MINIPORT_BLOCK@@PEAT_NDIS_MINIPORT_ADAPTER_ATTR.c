/*
 * XREFs of ?NdisTraceLoggingQosConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1400B2534
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x140080DC0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x14000208C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6A.c)
 *     _tlgKeywordOn @ 0x140075790 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingQosConfigOffloads(
        struct _NDIS_MINIPORT_BLOCK *a1,
        union _NDIS_MINIPORT_ADAPTER_ATTRIBUTES *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // rdx
  int v6; // [rsp+50h] [rbp-18h] BYREF
  int v7; // [rsp+54h] [rbp-14h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h] BYREF
  int v9; // [rsp+80h] [rbp+18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_14011C6F8 > 5 && tlgKeywordOn((__int64)&dword_14011C6F8, 0x200000000000LL) )
  {
    v5 = *(_DWORD **)(v3 + 72);
    v9 = v5[4];
    v10 = v5[3];
    v6 = v5[2];
    v7 = v5[1];
    v8 = v4 + 4008;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_140103B21,
      v3,
      v4,
      &v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v10,
      (__int64)&v9);
  }
}
