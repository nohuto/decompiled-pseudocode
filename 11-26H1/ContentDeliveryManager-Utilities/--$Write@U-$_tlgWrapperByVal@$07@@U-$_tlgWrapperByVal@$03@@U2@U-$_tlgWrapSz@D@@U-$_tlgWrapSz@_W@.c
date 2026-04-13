/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@_W@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@_W@@@Z @ 0x1800022B4
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180056C44 (-ReportStopActivity@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04$.c)
 *     ?ReportStopActivity@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18007F078 (-ReportStopActivity@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMana.c)
 *     ?ReportStopActivity@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180090510 (-ReportStopActivity@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CBC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const wchar_t **a8,
        const wchar_t **a9)
{
  __int64 v11; // rcx
  const wchar_t *v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  const wchar_t *v15; // rdx
  int v16; // ecx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-51h] BYREF
  __int64 v19; // [rsp+50h] [rbp-31h]
  __int64 v20; // [rsp+58h] [rbp-29h]
  __int64 v21; // [rsp+60h] [rbp-21h]
  __int64 v22; // [rsp+68h] [rbp-19h]
  __int64 v23; // [rsp+70h] [rbp-11h]
  __int64 v24; // [rsp+78h] [rbp-9h]
  const wchar_t *v25; // [rsp+80h] [rbp-1h]
  int v26; // [rsp+88h] [rbp+7h]
  int v27; // [rsp+8Ch] [rbp+Bh]
  const wchar_t *v28; // [rsp+90h] [rbp+Fh]
  int v29; // [rsp+98h] [rbp+17h]
  int v30; // [rsp+9Ch] [rbp+1Bh]

  v11 = -1LL;
  v12 = *a9;
  if ( *a9 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v12 = &Src;
    v14 = 2;
  }
  v29 = v14;
  v28 = v12;
  v30 = 0;
  v15 = *a8;
  if ( *a8 )
  {
    do
      ++v11;
    while ( *((_BYTE *)v15 + v11) );
    v16 = v11 + 1;
  }
  else
  {
    v15 = &Str;
    v16 = 1;
  }
  v23 = a7;
  v21 = a6;
  v19 = a5;
  v25 = v15;
  v26 = v16;
  v27 = 0;
  v24 = 4LL;
  v22 = 4LL;
  v20 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 7u, &v18);
}
