/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U2@U1@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U1@U?$_tlgWrapperByVal@$03@@U7@U7@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@443AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@883AEBU?$_tlgWrapperByVal@$03@@9933@Z @ 0x140003D78
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x14017E400 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140079DFC (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        void **a7,
        void **a8,
        __int64 a9,
        unsigned __int16 **a10,
        void **a11,
        __int64 *a12,
        const WCHAR **a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23)
{
  __int64 v25; // rdx
  const WCHAR *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  _BYTE *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  int v32; // ecx
  _BYTE *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  _BYTE *v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  _BYTE *v39; // rcx
  int v40; // edx
  _BYTE v42[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B0h]
  __int64 v44; // [rsp+58h] [rbp-A8h]
  _BYTE *v45; // [rsp+60h] [rbp-A0h]
  int v46; // [rsp+68h] [rbp-98h]
  int v47; // [rsp+6Ch] [rbp-94h]
  _BYTE *v48; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+78h] [rbp-88h]
  int v50; // [rsp+7Ch] [rbp-84h]
  _BYTE *v51; // [rsp+80h] [rbp-80h]
  int v52; // [rsp+88h] [rbp-78h]
  int v53; // [rsp+8Ch] [rbp-74h]
  __int64 v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  _DWORD *v56; // [rsp+A0h] [rbp-60h]
  __int64 v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+B0h] [rbp-50h]
  _DWORD v59[2]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE *v60; // [rsp+C0h] [rbp-40h]
  int v61; // [rsp+C8h] [rbp-38h]
  int v62; // [rsp+CCh] [rbp-34h]
  __int64 v63; // [rsp+D0h] [rbp-30h]
  __int64 v64; // [rsp+D8h] [rbp-28h]
  const WCHAR *v65; // [rsp+E0h] [rbp-20h]
  int v66; // [rsp+E8h] [rbp-18h]
  int v67; // [rsp+ECh] [rbp-14h]
  __int64 v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  __int64 v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  __int64 v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  __int64 v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+128h] [rbp+28h]
  __int64 v76; // [rsp+130h] [rbp+30h]
  __int64 v77; // [rsp+138h] [rbp+38h]
  __int64 v78; // [rsp+140h] [rbp+40h]
  __int64 v79; // [rsp+148h] [rbp+48h]
  __int64 v80; // [rsp+150h] [rbp+50h]
  __int64 v81; // [rsp+158h] [rbp+58h]
  __int64 v82; // [rsp+160h] [rbp+60h]
  __int64 v83; // [rsp+168h] [rbp+68h]
  __int64 v84; // [rsp+170h] [rbp+70h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  __int64 v86; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+188h] [rbp+88h]

  v86 = a23;
  v84 = a22;
  v25 = -1LL;
  v82 = a21;
  v80 = a20;
  v78 = a19;
  v76 = a18;
  v74 = a17;
  v72 = a16;
  v70 = a15;
  v68 = a14;
  v87 = 8LL;
  v85 = 8LL;
  v83 = 4LL;
  v26 = *a13;
  v81 = 4LL;
  v79 = 4LL;
  v77 = 8LL;
  v75 = 1LL;
  v73 = 1LL;
  v71 = 1LL;
  v69 = 8LL;
  if ( v26 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v26[v27] );
    v28 = 2 * v27 + 2;
  }
  else
  {
    v26 = &word_14025FAA8;
    v28 = 2;
  }
  v66 = v28;
  v65 = v26;
  v67 = 0;
  v64 = 16LL;
  v63 = *a12;
  v29 = *a11;
  if ( *a11 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( v29[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v29 = &unk_14025EF20;
    v31 = 1;
  }
  v61 = v31;
  v56 = v59;
  v60 = v29;
  v62 = 0;
  v57 = 2LL;
  v32 = **a10;
  v58 = *((_QWORD *)*a10 + 1);
  v54 = a9;
  v59[0] = v32;
  v59[1] = 0;
  v55 = 8LL;
  v33 = *a8;
  if ( *a8 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( v33[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v33 = &unk_14025EF20;
    v35 = 1;
  }
  v52 = v35;
  v51 = v33;
  v53 = 0;
  v36 = *a7;
  if ( *a7 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( v36[v37] );
    v38 = v37 + 1;
  }
  else
  {
    v36 = &unk_14025EF20;
    v38 = 1;
  }
  v49 = v38;
  v48 = v36;
  v50 = 0;
  v39 = *a6;
  if ( *a6 )
  {
    do
      ++v25;
    while ( v39[v25] );
    v40 = v25 + 1;
  }
  else
  {
    v39 = &unk_14025EF20;
    v40 = 1;
  }
  v43 = a5;
  v45 = v39;
  v46 = v40;
  v47 = 0;
  v44 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 22, v42);
}
