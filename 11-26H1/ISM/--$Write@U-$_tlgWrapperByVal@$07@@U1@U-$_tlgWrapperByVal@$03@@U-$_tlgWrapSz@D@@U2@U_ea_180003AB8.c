/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644@Z @ 0x180003AB8
 * Callers:
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x1800D84C8 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000BEAC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const unsigned __int16 **a8,
        __int64 a9,
        const unsigned __int16 **a10,
        __int64 a11,
        const WCHAR **a12,
        __int64 a13,
        const unsigned __int16 **a14,
        __int64 a15,
        const unsigned __int16 **a16,
        const WCHAR **a17,
        __int64 a18,
        const unsigned __int16 **a19,
        const WCHAR **a20,
        __int64 a21,
        __int64 a22)
{
  __int64 v24; // rcx
  int v25; // r9d
  const WCHAR *v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  int v30; // r8d
  const unsigned __int16 *v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  const WCHAR *v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  const unsigned __int16 *v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  const unsigned __int16 *v40; // rdx
  __int64 v41; // rax
  int v42; // eax
  const WCHAR *v43; // rdx
  __int64 v44; // rax
  const unsigned __int16 *v45; // rdx
  __int64 v46; // rax
  int v47; // eax
  const unsigned __int16 *v48; // rdx
  _BYTE v50[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  __int64 v54; // [rsp+68h] [rbp-98h]
  __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h]
  const unsigned __int16 *v57; // [rsp+80h] [rbp-80h]
  int v58; // [rsp+88h] [rbp-78h]
  int v59; // [rsp+8Ch] [rbp-74h]
  __int64 v60; // [rsp+90h] [rbp-70h]
  __int64 v61; // [rsp+98h] [rbp-68h]
  const unsigned __int16 *v62; // [rsp+A0h] [rbp-60h]
  int v63; // [rsp+A8h] [rbp-58h]
  int v64; // [rsp+ACh] [rbp-54h]
  __int64 v65; // [rsp+B0h] [rbp-50h]
  __int64 v66; // [rsp+B8h] [rbp-48h]
  const WCHAR *v67; // [rsp+C0h] [rbp-40h]
  int v68; // [rsp+C8h] [rbp-38h]
  int v69; // [rsp+CCh] [rbp-34h]
  __int64 v70; // [rsp+D0h] [rbp-30h]
  __int64 v71; // [rsp+D8h] [rbp-28h]
  const unsigned __int16 *v72; // [rsp+E0h] [rbp-20h]
  int v73; // [rsp+E8h] [rbp-18h]
  int v74; // [rsp+ECh] [rbp-14h]
  __int64 v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  const unsigned __int16 *v77; // [rsp+100h] [rbp+0h]
  int v78; // [rsp+108h] [rbp+8h]
  int v79; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v80; // [rsp+110h] [rbp+10h]
  int v81; // [rsp+118h] [rbp+18h]
  int v82; // [rsp+11Ch] [rbp+1Ch]
  __int64 v83; // [rsp+120h] [rbp+20h]
  __int64 v84; // [rsp+128h] [rbp+28h]
  const unsigned __int16 *v85; // [rsp+130h] [rbp+30h]
  int v86; // [rsp+138h] [rbp+38h]
  int v87; // [rsp+13Ch] [rbp+3Ch]
  const WCHAR *v88; // [rsp+140h] [rbp+40h]
  int v89; // [rsp+148h] [rbp+48h]
  int v90; // [rsp+14Ch] [rbp+4Ch]
  __int64 v91; // [rsp+150h] [rbp+50h]
  __int64 v92; // [rsp+158h] [rbp+58h]
  __int64 v93; // [rsp+160h] [rbp+60h]
  __int64 v94; // [rsp+168h] [rbp+68h]

  v93 = a22;
  v91 = a21;
  v24 = -1LL;
  v25 = 2;
  v94 = 4LL;
  v92 = 4LL;
  v27 = *a20;
  if ( *a20 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v27 = &WindowName;
    v29 = 2;
  }
  v89 = v29;
  v30 = 1;
  v88 = v27;
  v90 = 0;
  v31 = *a19;
  if ( *a19 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( *((_BYTE *)v31 + v32) );
    v33 = v32 + 1;
  }
  else
  {
    v31 = &word_180200D48;
    v33 = 1;
  }
  v86 = v33;
  v83 = a18;
  v85 = v31;
  v87 = 0;
  v84 = 4LL;
  v34 = *a17;
  if ( *a17 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v34 = &WindowName;
    v36 = 2;
  }
  v81 = v36;
  v80 = v34;
  v82 = 0;
  v37 = *a16;
  if ( *a16 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( *((_BYTE *)v37 + v38) );
    v39 = v38 + 1;
  }
  else
  {
    v37 = &word_180200D48;
    v39 = 1;
  }
  v78 = v39;
  v75 = a15;
  v77 = v37;
  v79 = 0;
  v76 = 4LL;
  v40 = *a14;
  if ( *a14 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( *((_BYTE *)v40 + v41) );
    v42 = v41 + 1;
  }
  else
  {
    v40 = &word_180200D48;
    v42 = 1;
  }
  v73 = v42;
  v70 = a13;
  v72 = v40;
  v74 = 0;
  v71 = 4LL;
  v43 = *a12;
  if ( *a12 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( v43[v44] );
    v25 = 2 * v44 + 2;
  }
  else
  {
    v43 = &WindowName;
  }
  v65 = a11;
  v67 = v43;
  v68 = v25;
  v69 = 0;
  v45 = *a10;
  v66 = 4LL;
  if ( v45 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( *((_BYTE *)v45 + v46) );
    v47 = v46 + 1;
  }
  else
  {
    v45 = &word_180200D48;
    v47 = 1;
  }
  v63 = v47;
  v60 = a9;
  v62 = v45;
  v64 = 0;
  v61 = 4LL;
  v48 = *a8;
  if ( *a8 )
  {
    do
      ++v24;
    while ( *((_BYTE *)v48 + v24) );
    v30 = v24 + 1;
  }
  else
  {
    v48 = &word_180200D48;
  }
  v55 = a7;
  v53 = a6;
  v51 = a5;
  v57 = v48;
  v58 = v30;
  v59 = 0;
  v56 = 4LL;
  v54 = 8LL;
  v52 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 20, v50);
}
