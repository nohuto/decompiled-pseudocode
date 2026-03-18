/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140189C6C
 * Callers:
 *     ?UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@_N2@Z @ 0x1400EA5B4 (-UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUES.c)
 *     ?DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z @ 0x1401DA944 (-DisplayChange@Power@InputTraceLogging@@SAXAEBU_POWER_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rcx
  int v11; // r8d
  _BYTE *v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  _BYTE *v15; // rdx
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+30h] [rbp-39h] BYREF
  _BYTE *v18; // [rsp+50h] [rbp-19h]
  int v19; // [rsp+58h] [rbp-11h]
  int v20; // [rsp+5Ch] [rbp-Dh]
  _BYTE *v21; // [rsp+60h] [rbp-9h]
  int v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+6Ch] [rbp+3h]
  __int64 v24; // [rsp+70h] [rbp+7h]
  __int64 v25; // [rsp+78h] [rbp+Fh]
  __int64 v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh]

  v26 = a8;
  v24 = a7;
  v10 = -1LL;
  v11 = 1;
  v27 = 4LL;
  v25 = 4LL;
  v12 = *a6;
  if ( *a6 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &unk_140269890;
    v14 = 1;
  }
  v22 = v14;
  v21 = v12;
  v23 = 0;
  v15 = *a5;
  if ( *a5 )
  {
    do
      ++v10;
    while ( v15[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v15 = &unk_140269890;
  }
  v18 = v15;
  v19 = v11;
  v20 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 6u, &v17);
}
