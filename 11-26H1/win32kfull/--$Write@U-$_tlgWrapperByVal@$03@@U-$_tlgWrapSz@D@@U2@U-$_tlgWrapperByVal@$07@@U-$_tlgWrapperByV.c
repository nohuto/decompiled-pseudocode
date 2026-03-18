/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU_tlgWrapperBinary@@@Z @ 0x1400020B0
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1402FE0A0 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14009234C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        void **a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10)
{
  int v11; // r8d
  __int64 v12; // rcx
  _BYTE *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  _BYTE *v16; // rdx
  _BYTE v18[32]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v19; // [rsp+50h] [rbp-59h]
  __int64 v20; // [rsp+58h] [rbp-51h]
  _BYTE *v21; // [rsp+60h] [rbp-49h]
  int v22; // [rsp+68h] [rbp-41h]
  int v23; // [rsp+6Ch] [rbp-3Dh]
  _BYTE *v24; // [rsp+70h] [rbp-39h]
  int v25; // [rsp+78h] [rbp-31h]
  int v26; // [rsp+7Ch] [rbp-2Dh]
  __int64 v27; // [rsp+80h] [rbp-29h]
  __int64 v28; // [rsp+88h] [rbp-21h]
  __int64 v29; // [rsp+90h] [rbp-19h]
  __int64 v30; // [rsp+98h] [rbp-11h]
  _DWORD *v31; // [rsp+A0h] [rbp-9h]
  __int64 v32; // [rsp+A8h] [rbp-1h]
  __int64 v33; // [rsp+B0h] [rbp+7h]
  _DWORD v34[2]; // [rsp+B8h] [rbp+Fh] BYREF

  v31 = v34;
  v32 = 2LL;
  v34[1] = 0;
  v33 = *a10;
  v11 = 1;
  v12 = -1LL;
  v34[0] = *((unsigned __int16 *)a10 + 4);
  v29 = a9;
  v27 = a8;
  v30 = 1LL;
  v28 = 8LL;
  v13 = *a7;
  if ( *a7 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &unk_14035E7E1;
    v15 = 1;
  }
  v25 = v15;
  v24 = v13;
  v26 = 0;
  v16 = *a6;
  if ( *a6 )
  {
    do
      ++v12;
    while ( v16[v12] );
    v11 = v12 + 1;
  }
  else
  {
    v16 = &unk_14035E7E1;
  }
  v19 = a5;
  v21 = v16;
  v22 = v11;
  v23 = 0;
  v20 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_1403AAAD8, a2, 0LL, 0LL, 9, v18);
}
