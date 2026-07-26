/*
 * XREFs of ??$ndisAzTelemetryOidDelivered@U_NDIS_MINIPORT_BLOCK@@@@YAXPEBU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140051C40
 * Callers:
 *     ?ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140155C40 (-ndisMInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x14001DBA0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlg_ea_14001DBA0.c)
 *     ?GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x14008E7D0 (-GetRequestSwitchID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x14008E800 (-GetRequestVPortID@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     ?GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z @ 0x14008E830 (-GetRequestFlags@@YAKPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     IsOidInFilterList @ 0x1400E6A00 (IsOidInFilterList.c)
 */

void __fastcall ndisAzTelemetryOidDelivered<_NDIS_MINIPORT_BLOCK>(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  __int64 v4; // r11
  __int16 v5; // r10
  __int64 v6; // rdx
  unsigned int v7; // ecx
  int v8; // eax
  char v9; // al
  unsigned __int16 *v10; // rax
  const struct _NDIS_OID_REQUEST *v11; // rcx
  const struct _NDIS_OID_REQUEST *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned int RequestVPortID; // [rsp+60h] [rbp-28h] BYREF
  unsigned int RequestSwitchID; // [rsp+64h] [rbp-24h] BYREF
  int v19; // [rsp+68h] [rbp-20h] BYREF
  int v20; // [rsp+6Ch] [rbp-1Ch] BYREF
  unsigned __int16 *v21; // [rsp+70h] [rbp-18h] BYREF
  __int64 v22; // [rsp+78h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int RequestFlags; // [rsp+A8h] [rbp+20h] BYREF

  v2 = dword_14011C6C0;
  v3 = a2;
  v4 = a1;
  if ( (unsigned int)dword_14011C6C0 <= 4 )
    return;
  v5 = qword_14011C6D0;
  if ( (qword_14011C6D0 & 0x400) == 0 )
    return;
  v6 = qword_14011C6D8;
  if ( (qword_14011C6D8 & 0x400) != qword_14011C6D8 )
    return;
  v7 = *(_DWORD *)(v3 + 88);
  v8 = v7 & 0x30000000;
  if ( (v7 & 0x30000000) == 0x10000000 )
    return;
  if ( v8 )
  {
    if ( v8 != 0x20000000 )
      return;
    goto LABEL_16;
  }
  if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress
    || (ndisAzOidTelemetryFilter & 2) != 0 && (unsigned __int8)IsOidInFilterList(*(unsigned int *)(v3 + 32)) )
  {
    v9 = 1;
    v7 = *(_DWORD *)(v3 + 88) & 0xCFFFFFFF | 0x20000000;
  }
  else
  {
    v9 = 0;
    v7 = *(_DWORD *)(v3 + 88) & 0xCFFFFFFF | 0x10000000;
  }
  *(_DWORD *)(v3 + 88) = v7;
  if ( v9 )
  {
    v6 = qword_14011C6D8;
    v5 = qword_14011C6D0;
    v2 = dword_14011C6C0;
LABEL_16:
    if ( v2 > 4 && (v5 & 0x400) != 0 && (v6 & 0x400) == v6 )
    {
      v10 = *(unsigned __int16 **)(v4 + 3856);
      v23 = v7;
      v21 = v10;
      RequestFlags = GetRequestFlags((const struct _NDIS_OID_REQUEST *)v3);
      RequestVPortID = GetRequestVPortID(v11);
      RequestSwitchID = GetRequestSwitchID(v12);
      v19 = *(_DWORD *)(v13 + 32);
      v20 = *(_DWORD *)(v13 + 4);
      v22 = v14 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>>(
        v15,
        (__int64)&unk_14010527D,
        v13 + 168,
        v16,
        &v22,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&RequestSwitchID,
        (__int64)&RequestVPortID,
        (__int64)&RequestFlags,
        (__int64)&v23,
        &v21);
    }
  }
}
