/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@44AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x140004BDC
 * Callers:
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x140125534 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140079DFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        void **a7,
        void **a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // rcx
  _BYTE *v12; // r8
  __int64 v13; // rax
  int v14; // eax
  _BYTE *v15; // r8
  __int64 v16; // rax
  int v17; // eax
  _BYTE *v18; // r8
  int v19; // ecx
  _BYTE v21[32]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v22; // [rsp+50h] [rbp-49h]
  __int64 v23; // [rsp+58h] [rbp-41h]
  _BYTE *v24; // [rsp+60h] [rbp-39h]
  int v25; // [rsp+68h] [rbp-31h]
  int v26; // [rsp+6Ch] [rbp-2Dh]
  _BYTE *v27; // [rsp+70h] [rbp-29h]
  int v28; // [rsp+78h] [rbp-21h]
  int v29; // [rsp+7Ch] [rbp-1Dh]
  _BYTE *v30; // [rsp+80h] [rbp-19h]
  int v31; // [rsp+88h] [rbp-11h]
  int v32; // [rsp+8Ch] [rbp-Dh]
  __int64 v33; // [rsp+90h] [rbp-9h]
  __int64 v34; // [rsp+98h] [rbp-1h]
  __int64 v35; // [rsp+A0h] [rbp+7h]
  __int64 v36; // [rsp+A8h] [rbp+Fh]

  v35 = a10;
  v11 = -1LL;
  v33 = a9;
  v36 = 4LL;
  v34 = 4LL;
  v12 = *a8;
  if ( *a8 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &unk_14025EF20;
    v14 = 1;
  }
  v31 = v14;
  v30 = v12;
  v32 = 0;
  v15 = *a7;
  if ( *a7 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v15[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v15 = &unk_14025EF20;
    v17 = 1;
  }
  v28 = v17;
  v27 = v15;
  v29 = 0;
  v18 = *a6;
  if ( *a6 )
  {
    do
      ++v11;
    while ( v18[v11] );
    v19 = v11 + 1;
  }
  else
  {
    v18 = &unk_14025EF20;
    v19 = 1;
  }
  v25 = v19;
  v22 = a5;
  v24 = v18;
  v23 = 8LL;
  v26 = 0;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 8, v21);
}
