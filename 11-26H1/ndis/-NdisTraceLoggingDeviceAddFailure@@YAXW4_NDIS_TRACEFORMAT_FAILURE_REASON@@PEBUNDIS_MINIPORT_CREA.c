/*
 * XREFs of ?NdisTraceLoggingDeviceAddFailure@@YAXW4_NDIS_TRACEFORMAT_FAILURE_REASON@@PEBUNDIS_MINIPORT_CREATION_CONFIG@@JEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B17FC
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@_W@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@_W@@3@Z @ 0x140001540 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U-$_tlg.c)
 *     _tlgKeywordOn @ 0x140075790 (_tlgKeywordOn.c)
 */

char __fastcall NdisTraceLoggingDeviceAddFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char result; // al
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // r10
  __int64 v11; // r11
  void *v12; // rax
  int v13; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+54h] [rbp-1Ch] BYREF
  void *v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  __int64 v17; // [rsp+68h] [rbp-8h] BYREF

  result = a5;
  if ( (unsigned int)dword_14011C6F8 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_14011C6F8, 0x400000000000LL);
    if ( result )
    {
      LODWORD(a5) = (unsigned __int8)v9;
      v12 = &unk_1400F7E38;
      v17 = v11;
      if ( v10 )
        v12 = v10;
      v13 = a1;
      v15 = v12;
      v16 = *(_QWORD *)(v11 + 16);
      v14 = v8;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>>(
               v7,
               (__int64)&unk_140104517,
               v8,
               v9,
               (__int64)&v14,
               (__int64)&v13,
               &v17,
               (__int64)&v16,
               &v15,
               (__int64)&a5);
    }
  }
  return result;
}
