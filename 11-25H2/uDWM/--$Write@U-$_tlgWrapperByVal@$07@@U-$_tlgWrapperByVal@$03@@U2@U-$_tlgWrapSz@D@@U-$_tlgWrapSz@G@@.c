/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001E8C
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18004D408 (-ReportStopActivity@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18004F434 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const unsigned __int16 **a8,
        void **a9)
{
  __int64 v11; // rcx
  _WORD *v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  const unsigned __int16 *v15; // rdx
  int v16; // ecx
  _BYTE v18[32]; // [rsp+30h] [rbp-51h] BYREF
  __int64 v19; // [rsp+50h] [rbp-31h]
  __int64 v20; // [rsp+58h] [rbp-29h]
  __int64 v21; // [rsp+60h] [rbp-21h]
  __int64 v22; // [rsp+68h] [rbp-19h]
  __int64 v23; // [rsp+70h] [rbp-11h]
  __int64 v24; // [rsp+78h] [rbp-9h]
  const unsigned __int16 *v25; // [rsp+80h] [rbp-1h]
  int v26; // [rsp+88h] [rbp+7h]
  int v27; // [rsp+8Ch] [rbp+Bh]
  _WORD *v28; // [rsp+90h] [rbp+Fh]
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
    v12 = &unk_1800FBB08;
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
    v15 = &word_1800FCC30;
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
  return tlgWriteTransfer_EtwEventWriteTransfer(a1, a2, a3, 0, 7, (__int64)v18);
}
