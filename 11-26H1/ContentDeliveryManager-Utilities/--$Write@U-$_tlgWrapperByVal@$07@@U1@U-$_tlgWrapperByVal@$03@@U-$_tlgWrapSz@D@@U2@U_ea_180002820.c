/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564444@Z @ 0x180002820
 * Callers:
 *     ?Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIIII@Z @ 0x180064478 (-Stop@SubscriptionManagerContentUpdatedActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CBC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const wchar_t **a8,
        __int64 a9,
        const wchar_t **a10,
        __int64 a11,
        const wchar_t **a12,
        __int64 a13,
        const wchar_t **a14,
        __int64 a15,
        const wchar_t **a16,
        const wchar_t **a17,
        __int64 a18,
        const wchar_t **a19,
        const wchar_t **a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        __int64 a24)
{
  __int64 v26; // rcx
  int v27; // r9d
  const wchar_t *v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  int v32; // r8d
  const wchar_t *v33; // rdx
  __int64 v34; // rax
  int v35; // eax
  const wchar_t *v36; // rdx
  __int64 v37; // rax
  int v38; // eax
  const wchar_t *v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  const wchar_t *v42; // rdx
  __int64 v43; // rax
  int v44; // eax
  const wchar_t *v45; // rdx
  __int64 v46; // rax
  const wchar_t *v47; // rdx
  __int64 v48; // rax
  int v49; // eax
  const wchar_t *v50; // rdx
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B0h]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+60h] [rbp-A0h]
  __int64 v56; // [rsp+68h] [rbp-98h]
  __int64 v57; // [rsp+70h] [rbp-90h]
  __int64 v58; // [rsp+78h] [rbp-88h]
  const wchar_t *v59; // [rsp+80h] [rbp-80h]
  int v60; // [rsp+88h] [rbp-78h]
  int v61; // [rsp+8Ch] [rbp-74h]
  __int64 v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  const wchar_t *v64; // [rsp+A0h] [rbp-60h]
  int v65; // [rsp+A8h] [rbp-58h]
  int v66; // [rsp+ACh] [rbp-54h]
  __int64 v67; // [rsp+B0h] [rbp-50h]
  __int64 v68; // [rsp+B8h] [rbp-48h]
  const wchar_t *v69; // [rsp+C0h] [rbp-40h]
  int v70; // [rsp+C8h] [rbp-38h]
  int v71; // [rsp+CCh] [rbp-34h]
  __int64 v72; // [rsp+D0h] [rbp-30h]
  __int64 v73; // [rsp+D8h] [rbp-28h]
  const wchar_t *v74; // [rsp+E0h] [rbp-20h]
  int v75; // [rsp+E8h] [rbp-18h]
  int v76; // [rsp+ECh] [rbp-14h]
  __int64 v77; // [rsp+F0h] [rbp-10h]
  __int64 v78; // [rsp+F8h] [rbp-8h]
  const wchar_t *v79; // [rsp+100h] [rbp+0h]
  int v80; // [rsp+108h] [rbp+8h]
  int v81; // [rsp+10Ch] [rbp+Ch]
  const wchar_t *v82; // [rsp+110h] [rbp+10h]
  int v83; // [rsp+118h] [rbp+18h]
  int v84; // [rsp+11Ch] [rbp+1Ch]
  __int64 v85; // [rsp+120h] [rbp+20h]
  __int64 v86; // [rsp+128h] [rbp+28h]
  const wchar_t *v87; // [rsp+130h] [rbp+30h]
  int v88; // [rsp+138h] [rbp+38h]
  int v89; // [rsp+13Ch] [rbp+3Ch]
  const wchar_t *v90; // [rsp+140h] [rbp+40h]
  int v91; // [rsp+148h] [rbp+48h]
  int v92; // [rsp+14Ch] [rbp+4Ch]
  __int64 v93; // [rsp+150h] [rbp+50h]
  __int64 v94; // [rsp+158h] [rbp+58h]
  __int64 v95; // [rsp+160h] [rbp+60h]
  __int64 v96; // [rsp+168h] [rbp+68h]
  __int64 v97; // [rsp+170h] [rbp+70h]
  __int64 v98; // [rsp+178h] [rbp+78h]
  __int64 v99; // [rsp+180h] [rbp+80h]
  __int64 v100; // [rsp+188h] [rbp+88h]

  v99 = a24;
  v97 = a23;
  v26 = -1LL;
  v27 = 2;
  v95 = a22;
  v93 = a21;
  v100 = 4LL;
  v98 = 4LL;
  v96 = 4LL;
  v29 = *a20;
  v94 = 4LL;
  if ( v29 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( v29[v30] );
    v31 = 2 * v30 + 2;
  }
  else
  {
    v29 = &Src;
    v31 = 2;
  }
  v91 = v31;
  v32 = 1;
  v90 = v29;
  v92 = 0;
  v33 = *a19;
  if ( *a19 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( *((_BYTE *)v33 + v34) );
    v35 = v34 + 1;
  }
  else
  {
    v33 = &Str;
    v35 = 1;
  }
  v88 = v35;
  v85 = a18;
  v87 = v33;
  v89 = 0;
  v86 = 4LL;
  v36 = *a17;
  if ( *a17 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( v36[v37] );
    v38 = 2 * v37 + 2;
  }
  else
  {
    v36 = &Src;
    v38 = 2;
  }
  v83 = v38;
  v82 = v36;
  v84 = 0;
  v39 = *a16;
  if ( *a16 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( *((_BYTE *)v39 + v40) );
    v41 = v40 + 1;
  }
  else
  {
    v39 = &Str;
    v41 = 1;
  }
  v80 = v41;
  v77 = a15;
  v79 = v39;
  v81 = 0;
  v78 = 4LL;
  v42 = *a14;
  if ( *a14 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( *((_BYTE *)v42 + v43) );
    v44 = v43 + 1;
  }
  else
  {
    v42 = &Str;
    v44 = 1;
  }
  v75 = v44;
  v72 = a13;
  v74 = v42;
  v76 = 0;
  v73 = 4LL;
  v45 = *a12;
  if ( *a12 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( v45[v46] );
    v27 = 2 * v46 + 2;
  }
  else
  {
    v45 = &Src;
  }
  v67 = a11;
  v69 = v45;
  v70 = v27;
  v71 = 0;
  v47 = *a10;
  v68 = 4LL;
  if ( v47 )
  {
    v48 = -1LL;
    do
      ++v48;
    while ( *((_BYTE *)v47 + v48) );
    v49 = v48 + 1;
  }
  else
  {
    v47 = &Str;
    v49 = 1;
  }
  v65 = v49;
  v62 = a9;
  v64 = v47;
  v66 = 0;
  v63 = 4LL;
  v50 = *a8;
  if ( *a8 )
  {
    do
      ++v26;
    while ( *((_BYTE *)v50 + v26) );
    v32 = v26 + 1;
  }
  else
  {
    v50 = &Str;
  }
  v57 = a7;
  v55 = a6;
  v53 = a5;
  v59 = v50;
  v60 = v32;
  v61 = 0;
  v58 = 4LL;
  v56 = 8LL;
  v54 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0x16u, &v52);
}
