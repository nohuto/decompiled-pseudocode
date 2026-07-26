/*
 * XREFs of ?NdisTraceLoggingGreTaskHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1400B19DC
 * Callers:
 *     ?NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z @ 0x1400B2410 (-NdisTraceLoggingOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$00@@444AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140001DCC (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U-$_tlgWrapperByVal@$03@@@.c)
 *     _tlgKeywordOn @ 0x140075790 (_tlgKeywordOn.c)
 */

void __fastcall NdisTraceLoggingGreTaskHardwareOffloads(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OFFLOAD *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ecx
  char v5; // al
  __int64 v6; // rcx
  char v7; // al
  char v8; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v9[3]; // [rsp+51h] [rbp-Fh] BYREF
  int v10; // [rsp+54h] [rbp-Ch] BYREF
  __int64 v11; // [rsp+58h] [rbp-8h] BYREF
  char v12; // [rsp+80h] [rbp+20h] BYREF
  char v13; // [rsp+88h] [rbp+28h] BYREF

  if ( (unsigned int)dword_14011C6F8 > 5 && tlgKeywordOn((__int64)&dword_14011C6F8, 0x200000000000LL) )
  {
    v4 = *(_DWORD *)(v2 + 148);
    v10 = *(_DWORD *)(v2 + 152);
    v12 = BYTE2(v4) & 0xF;
    v5 = BYTE1(v4) & 0xF;
    v6 = v4 >> 4;
    v13 = v5;
    LOBYTE(v6) = v6 & 0xF;
    v7 = *(_BYTE *)(v2 + 148) & 0xF;
    v8 = v6;
    v9[0] = v7;
    v11 = v3 + 4008;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v6,
      (__int64)&unk_140103413,
      v2,
      v3,
      &v11,
      (__int64)v9,
      (__int64)&v8,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v10);
  }
}
