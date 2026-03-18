/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@444465@Z @ 0x14000773C
 * Callers:
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x14019D604 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@AEBVCInputDest@@W4INPU.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void **a7,
        const WCHAR **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        const WCHAR **a13,
        void **a14)
{
  __int64 v16; // rcx
  int v17; // r9d
  _BYTE *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  int v21; // r8d
  const WCHAR *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  const WCHAR *v25; // rdx
  __int64 v26; // rax
  _BYTE *v27; // rdx
  _BYTE v29[32]; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v30; // [rsp+50h] [rbp-A9h]
  __int64 v31; // [rsp+58h] [rbp-A1h]
  __int64 v32; // [rsp+60h] [rbp-99h]
  __int64 v33; // [rsp+68h] [rbp-91h]
  _BYTE *v34; // [rsp+70h] [rbp-89h]
  int v35; // [rsp+78h] [rbp-81h]
  int v36; // [rsp+7Ch] [rbp-7Dh]
  const WCHAR *v37; // [rsp+80h] [rbp-79h]
  int v38; // [rsp+88h] [rbp-71h]
  int v39; // [rsp+8Ch] [rbp-6Dh]
  __int64 v40; // [rsp+90h] [rbp-69h]
  __int64 v41; // [rsp+98h] [rbp-61h]
  __int64 v42; // [rsp+A0h] [rbp-59h]
  __int64 v43; // [rsp+A8h] [rbp-51h]
  __int64 v44; // [rsp+B0h] [rbp-49h]
  __int64 v45; // [rsp+B8h] [rbp-41h]
  __int64 v46; // [rsp+C0h] [rbp-39h]
  __int64 v47; // [rsp+C8h] [rbp-31h]
  const WCHAR *v48; // [rsp+D0h] [rbp-29h]
  int v49; // [rsp+D8h] [rbp-21h]
  int v50; // [rsp+DCh] [rbp-1Dh]
  _BYTE *v51; // [rsp+E0h] [rbp-19h]
  int v52; // [rsp+E8h] [rbp-11h]
  int v53; // [rsp+ECh] [rbp-Dh]

  v16 = -1LL;
  v17 = 1;
  v18 = *a14;
  if ( *a14 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v18 = &unk_140269890;
    v20 = 1;
  }
  v52 = v20;
  v21 = 2;
  v51 = v18;
  v53 = 0;
  v22 = *a13;
  if ( *a13 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v22 = &word_14026AF94;
    v24 = 2;
  }
  v49 = v24;
  v46 = a12;
  v44 = a11;
  v42 = a10;
  v40 = a9;
  v48 = v22;
  v50 = 0;
  v47 = 4LL;
  v25 = *a8;
  v45 = 4LL;
  v43 = 4LL;
  v41 = 4LL;
  if ( v25 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v21 = 2 * v26 + 2;
  }
  else
  {
    v25 = &word_14026AF94;
  }
  v37 = v25;
  v38 = v21;
  v39 = 0;
  v27 = *a7;
  if ( *a7 )
  {
    do
      ++v16;
    while ( v27[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v27 = &unk_140269890;
  }
  v32 = a6;
  v30 = a5;
  v34 = v27;
  v35 = v17;
  v36 = 0;
  v33 = 4LL;
  v31 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 12, v29);
}
