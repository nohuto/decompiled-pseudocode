/*
 * XREFs of ??$ndisAzTelemetryOidDelivered@U_NDIS_FILTER_BLOCK@@@@YAXPEBU_NDIS_FILTER_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x140023DF0
 * Callers:
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400248D0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x14001DBA0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U-$_tlg_ea_14001DBA0.c)
 *     IsOidInFilterList @ 0x1400E6A00 (IsOidInFilterList.c)
 */

void __fastcall ndisAzTelemetryOidDelivered<_NDIS_FILTER_BLOCK>(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8
  __int64 v4; // r11
  __int16 v5; // r10
  __int64 v6; // rdx
  unsigned int v7; // ecx
  int v8; // eax
  char v9; // al
  __int64 v10; // r9
  int v11; // edx
  unsigned __int16 *v12; // rax
  _WORD *v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // [rsp+60h] [rbp-28h] BYREF
  int v16; // [rsp+64h] [rbp-24h] BYREF
  int v17; // [rsp+68h] [rbp-20h] BYREF
  int v18; // [rsp+6Ch] [rbp-1Ch] BYREF
  unsigned __int16 *v19; // [rsp+70h] [rbp-18h] BYREF
  __int64 v20; // [rsp+78h] [rbp-10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h] BYREF
  int v22; // [rsp+A8h] [rbp+20h] BYREF

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
  }
  else
  {
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
    if ( !v9 )
      return;
    v6 = qword_14011C6D8;
    v5 = qword_14011C6D0;
    v2 = dword_14011C6C0;
  }
  if ( v2 > 4 && (v5 & 0x400) != 0 && (v6 & 0x400) == v6 )
  {
    v10 = *(unsigned __int8 *)(v3 + 1);
    v11 = 0;
    v12 = *(unsigned __int16 **)(v4 + 48);
    v15 = v7;
    v13 = (_WORD *)(v3 + 2);
    v19 = v12;
    if ( (unsigned __int8)v10 >= 2u || *v13 >= 0xF8u )
    {
      v21 = *(_DWORD *)(v3 + 244);
      if ( (unsigned __int8)v10 >= 2u )
        goto LABEL_25;
    }
    else
    {
      v21 = 0;
    }
    if ( *v13 < 0xF8u )
    {
      v22 = 0;
LABEL_26:
      if ( *v13 < 0xF8u )
      {
LABEL_28:
        v17 = *(_DWORD *)(v3 + 32);
        v18 = *(_DWORD *)(v3 + 4);
        v14 = *(_QWORD *)(v4 + 32);
        v16 = v11;
        v20 = v14 + 4008;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>>(
          (__int64)v13,
          (__int64)&unk_140104EEB,
          v3 + 168,
          v10,
          &v20,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v15,
          &v19);
        return;
      }
LABEL_27:
      v11 = *(_DWORD *)(v3 + 236);
      goto LABEL_28;
    }
LABEL_25:
    v22 = *(_DWORD *)(v3 + 240);
    if ( (unsigned __int8)v10 >= 2u )
      goto LABEL_27;
    goto LABEL_26;
  }
}
