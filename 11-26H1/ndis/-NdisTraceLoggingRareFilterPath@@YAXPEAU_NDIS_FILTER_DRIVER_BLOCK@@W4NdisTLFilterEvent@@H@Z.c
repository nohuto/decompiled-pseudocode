/*
 * XREFs of ?NdisTraceLoggingRareFilterPath@@YAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4NdisTLFilterEvent@@H@Z @ 0x140142144
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1401572B0 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x140163ED0 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@43@Z @ 0x140002F4C (--$Write@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14001DD30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140075790 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRareFilterPath(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  __int16 v4; // ax
  __int16 v5; // ax
  int v6; // r8d
  int v7; // r10d
  int v8; // [rsp+40h] [rbp-29h] BYREF
  int v9; // [rsp+44h] [rbp-25h] BYREF
  __int64 v10; // [rsp+48h] [rbp-21h] BYREF
  __int16 v11; // [rsp+50h] [rbp-19h]
  __int64 v12; // [rsp+58h] [rbp-11h] BYREF
  __int16 v13; // [rsp+60h] [rbp-9h]
  _EVENT_DATA_DESCRIPTOR v14; // [rsp+70h] [rbp+7h] BYREF
  int *v15; // [rsp+90h] [rbp+27h]
  __int64 v16; // [rsp+98h] [rbp+2Fh]
  int *v17; // [rsp+A0h] [rbp+37h]
  __int64 v18; // [rsp+A8h] [rbp+3Fh]

  if ( a1 )
  {
    if ( (unsigned int)dword_14011C6F8 > 5 && tlgKeywordOn((__int64)&dword_14011C6F8, 0x400000000000LL) )
    {
      v10 = *(_QWORD *)(v2 + 152);
      v4 = *(_WORD *)(v2 + 144) & 0xFFFE;
      v8 = v1;
      v11 = v4;
      v12 = *(_QWORD *)(v2 + 120);
      v5 = *(_WORD *)(v2 + 112) & 0xFFFE;
      v9 = v3;
      v13 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
        65534LL,
        (__int64)&unk_140103E26,
        v1,
        v2,
        (__int64)&v9,
        &v12,
        &v10,
        (__int64)&v8);
    }
  }
  else if ( (unsigned int)dword_14011C6F8 > 5 && tlgKeywordOn((__int64)&dword_14011C6F8, 0x400000000000LL) )
  {
    v9 = v6;
    v18 = 4LL;
    v17 = &v9;
    v16 = 4LL;
    v15 = &v8;
    v8 = v7;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_14011C6F8, byte_140103DED, 0LL, 0LL, 4u, &v14);
  }
}
