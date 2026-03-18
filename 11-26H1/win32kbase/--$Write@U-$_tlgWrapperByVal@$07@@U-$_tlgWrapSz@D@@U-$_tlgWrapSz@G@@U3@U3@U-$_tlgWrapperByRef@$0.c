/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@55AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@77@Z @ 0x140004F9C
 * Callers:
 *     ?LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z @ 0x1401B89DC (-LogBlockingIoControlRequest@RimTelemetry@@SAXPEBDQEAURIMDEV@@_KJK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400F39AC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        const WCHAR **a7,
        const WCHAR **a8,
        const WCHAR **a9,
        __int64 *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v14; // r8d
  __int64 v15; // rcx
  const WCHAR *v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  const WCHAR *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  const WCHAR *v22; // rdx
  __int64 v23; // rax
  _BYTE *v24; // rdx
  int v25; // ecx
  _BYTE v27[32]; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v28; // [rsp+50h] [rbp-91h]
  __int64 v29; // [rsp+58h] [rbp-89h]
  _BYTE *v30; // [rsp+60h] [rbp-81h]
  int v31; // [rsp+68h] [rbp-79h]
  int v32; // [rsp+6Ch] [rbp-75h]
  const WCHAR *v33; // [rsp+70h] [rbp-71h]
  int v34; // [rsp+78h] [rbp-69h]
  int v35; // [rsp+7Ch] [rbp-65h]
  const WCHAR *v36; // [rsp+80h] [rbp-61h]
  int v37; // [rsp+88h] [rbp-59h]
  int v38; // [rsp+8Ch] [rbp-55h]
  const WCHAR *v39; // [rsp+90h] [rbp-51h]
  int v40; // [rsp+98h] [rbp-49h]
  int v41; // [rsp+9Ch] [rbp-45h]
  __int64 v42; // [rsp+A0h] [rbp-41h]
  __int64 v43; // [rsp+A8h] [rbp-39h]
  __int64 v44; // [rsp+B0h] [rbp-31h]
  __int64 v45; // [rsp+B8h] [rbp-29h]
  __int64 v46; // [rsp+C0h] [rbp-21h]
  __int64 v47; // [rsp+C8h] [rbp-19h]
  __int64 v48; // [rsp+D0h] [rbp-11h]
  __int64 v49; // [rsp+D8h] [rbp-9h]

  v48 = a13;
  v46 = a12;
  v44 = a11;
  v14 = 2;
  v49 = 4LL;
  v47 = 4LL;
  v45 = 4LL;
  v42 = *a10;
  v15 = -1LL;
  v43 = 16LL;
  v16 = *a9;
  if ( *a9 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = &word_14026AF94;
    v18 = 2;
  }
  v40 = v18;
  v39 = v16;
  v41 = 0;
  v19 = *a8;
  if ( *a8 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v19 = &word_14026AF94;
    v21 = 2;
  }
  v37 = v21;
  v36 = v19;
  v38 = 0;
  v22 = *a7;
  if ( *a7 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v14 = 2 * v23 + 2;
  }
  else
  {
    v22 = &word_14026AF94;
  }
  v33 = v22;
  v34 = v14;
  v35 = 0;
  v24 = *a6;
  if ( *a6 )
  {
    do
      ++v15;
    while ( v24[v15] );
    v25 = v15 + 1;
  }
  else
  {
    v24 = &unk_140269890;
    v25 = 1;
  }
  v28 = a5;
  v30 = v24;
  v31 = v25;
  v32 = 0;
  v29 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_1402A9E78, a2, 0LL, 0LL, 11, v27);
}
