/*
 * XREFs of ?NdisTraceLoggingDeviceAddSuccess@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@E@Z @ 0x1400B18D0
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@_W@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@_W@@3@Z @ 0x14001DA70 (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U2@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapp.c)
 *     _tlgKeywordOn @ 0x140075790 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingDeviceAddSuccess(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_IF_BLOCK *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  void *v5; // rcx
  __int16 v6; // ax
  int v7; // [rsp+60h] [rbp+17h] BYREF
  void *v8; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v9; // [rsp+70h] [rbp+27h] BYREF
  __int64 v10; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v11; // [rsp+80h] [rbp+37h] BYREF
  __int16 v12; // [rsp+88h] [rbp+3Fh]
  __int64 v13; // [rsp+90h] [rbp+47h] BYREF
  __int16 v14; // [rsp+98h] [rbp+4Fh]
  int v15; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_14011C6F8 > 5 && tlgKeywordOn((__int64)&dword_14011C6F8, 0x400000000000LL) )
  {
    v5 = &unk_1400F7E38;
    v15 = (unsigned __int8)v2;
    if ( *(_QWORD *)(v4 + 5376) )
      v5 = *(void **)(v4 + 5376);
    v9 = *(_QWORD *)(v3 + 1312);
    v10 = v3 + 540;
    v11 = v3 + 10;
    v6 = *(_WORD *)(v3 + 8);
    v8 = v5;
    v12 = v6 & 0xFFFE;
    v13 = v3 + 598;
    v14 = *(_WORD *)(v3 + 596) & 0xFFFE;
    v7 = *(_DWORD *)(v3 + 4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>>(
      65534LL,
      (__int64)&unk_140104588,
      v2,
      v3,
      (__int64)&v7,
      &v13,
      &v11,
      &v10,
      (__int64)&v9,
      &v8,
      (__int64)&v15);
  }
}
