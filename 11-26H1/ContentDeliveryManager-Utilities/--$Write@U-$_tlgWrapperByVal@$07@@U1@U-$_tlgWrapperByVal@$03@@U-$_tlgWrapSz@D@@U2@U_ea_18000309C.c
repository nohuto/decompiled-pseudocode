/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@4545645644545@Z @ 0x18000309C
 * Callers:
 *     ?Stop@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBD@Z @ 0x18007F94C (-Stop@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background.c)
 *     ?Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAX_NPEBD@Z @ 0x18007FBD8 (-Stop@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CBC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
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
        const wchar_t **a23,
        __int64 a24,
        const wchar_t **a25)
{
  __int64 v27; // rdx
  int v29; // r8d
  const wchar_t *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  const wchar_t *v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  int v36; // r9d
  const wchar_t *v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  const wchar_t *v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  const wchar_t *v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  const wchar_t *v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  const wchar_t *v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  const wchar_t *v52; // rcx
  __int64 v53; // rax
  const wchar_t *v54; // rcx
  __int64 v55; // rax
  int v56; // eax
  const wchar_t *v57; // rcx
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v60; // [rsp+50h] [rbp-B0h]
  __int64 v61; // [rsp+58h] [rbp-A8h]
  __int64 v62; // [rsp+60h] [rbp-A0h]
  __int64 v63; // [rsp+68h] [rbp-98h]
  __int64 v64; // [rsp+70h] [rbp-90h]
  __int64 v65; // [rsp+78h] [rbp-88h]
  const wchar_t *v66; // [rsp+80h] [rbp-80h]
  int v67; // [rsp+88h] [rbp-78h]
  int v68; // [rsp+8Ch] [rbp-74h]
  __int64 v69; // [rsp+90h] [rbp-70h]
  __int64 v70; // [rsp+98h] [rbp-68h]
  const wchar_t *v71; // [rsp+A0h] [rbp-60h]
  int v72; // [rsp+A8h] [rbp-58h]
  int v73; // [rsp+ACh] [rbp-54h]
  __int64 v74; // [rsp+B0h] [rbp-50h]
  __int64 v75; // [rsp+B8h] [rbp-48h]
  const wchar_t *v76; // [rsp+C0h] [rbp-40h]
  int v77; // [rsp+C8h] [rbp-38h]
  int v78; // [rsp+CCh] [rbp-34h]
  __int64 v79; // [rsp+D0h] [rbp-30h]
  __int64 v80; // [rsp+D8h] [rbp-28h]
  const wchar_t *v81; // [rsp+E0h] [rbp-20h]
  int v82; // [rsp+E8h] [rbp-18h]
  int v83; // [rsp+ECh] [rbp-14h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+F8h] [rbp-8h]
  const wchar_t *v86; // [rsp+100h] [rbp+0h]
  int v87; // [rsp+108h] [rbp+8h]
  int v88; // [rsp+10Ch] [rbp+Ch]
  const wchar_t *v89; // [rsp+110h] [rbp+10h]
  int v90; // [rsp+118h] [rbp+18h]
  int v91; // [rsp+11Ch] [rbp+1Ch]
  __int64 v92; // [rsp+120h] [rbp+20h]
  __int64 v93; // [rsp+128h] [rbp+28h]
  const wchar_t *v94; // [rsp+130h] [rbp+30h]
  int v95; // [rsp+138h] [rbp+38h]
  int v96; // [rsp+13Ch] [rbp+3Ch]
  const wchar_t *v97; // [rsp+140h] [rbp+40h]
  int v98; // [rsp+148h] [rbp+48h]
  int v99; // [rsp+14Ch] [rbp+4Ch]
  __int64 v100; // [rsp+150h] [rbp+50h]
  __int64 v101; // [rsp+158h] [rbp+58h]
  __int64 v102; // [rsp+160h] [rbp+60h]
  __int64 v103; // [rsp+168h] [rbp+68h]
  const wchar_t *v104; // [rsp+170h] [rbp+70h]
  int v105; // [rsp+178h] [rbp+78h]
  int v106; // [rsp+17Ch] [rbp+7Ch]
  __int64 v107; // [rsp+180h] [rbp+80h]
  __int64 v108; // [rsp+188h] [rbp+88h]
  const wchar_t *v109; // [rsp+190h] [rbp+90h]
  int v110; // [rsp+198h] [rbp+98h]
  int v111; // [rsp+19Ch] [rbp+9Ch]

  v27 = -1LL;
  v29 = 1;
  v30 = *a25;
  if ( *a25 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *((_BYTE *)v30 + v31) );
    v32 = v31 + 1;
  }
  else
  {
    v30 = &Str;
    v32 = 1;
  }
  v110 = v32;
  v107 = a24;
  v109 = v30;
  v111 = 0;
  v108 = 4LL;
  v33 = *a23;
  if ( *a23 )
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
  v105 = v35;
  v36 = 2;
  v102 = a22;
  v100 = a21;
  v104 = v33;
  v106 = 0;
  v103 = 4LL;
  v37 = *a20;
  v101 = 4LL;
  if ( v37 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( v37[v38] );
    v39 = 2 * v38 + 2;
  }
  else
  {
    v37 = &Src;
    v39 = 2;
  }
  v98 = v39;
  v97 = v37;
  v99 = 0;
  v40 = *a19;
  if ( *a19 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( *((_BYTE *)v40 + v41) );
    v42 = v41 + 1;
  }
  else
  {
    v40 = &Str;
    v42 = 1;
  }
  v95 = v42;
  v92 = a18;
  v94 = v40;
  v96 = 0;
  v93 = 4LL;
  v43 = *a17;
  if ( *a17 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( v43[v44] );
    v45 = 2 * v44 + 2;
  }
  else
  {
    v43 = &Src;
    v45 = 2;
  }
  v90 = v45;
  v89 = v43;
  v91 = 0;
  v46 = *a16;
  if ( *a16 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( *((_BYTE *)v46 + v47) );
    v48 = v47 + 1;
  }
  else
  {
    v46 = &Str;
    v48 = 1;
  }
  v87 = v48;
  v84 = a15;
  v86 = v46;
  v88 = 0;
  v85 = 4LL;
  v49 = *a14;
  if ( *a14 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( *((_BYTE *)v49 + v50) );
    v51 = v50 + 1;
  }
  else
  {
    v49 = &Str;
    v51 = 1;
  }
  v82 = v51;
  v79 = a13;
  v81 = v49;
  v83 = 0;
  v80 = 4LL;
  v52 = *a12;
  if ( *a12 )
  {
    v53 = -1LL;
    do
      ++v53;
    while ( v52[v53] );
    v36 = 2 * v53 + 2;
  }
  else
  {
    v52 = &Src;
  }
  v74 = a11;
  v76 = v52;
  v77 = v36;
  v78 = 0;
  v54 = *a10;
  v75 = 4LL;
  if ( v54 )
  {
    v55 = -1LL;
    do
      ++v55;
    while ( *((_BYTE *)v54 + v55) );
    v56 = v55 + 1;
  }
  else
  {
    v54 = &Str;
    v56 = 1;
  }
  v72 = v56;
  v69 = a9;
  v71 = v54;
  v73 = 0;
  v70 = 4LL;
  v57 = *a8;
  if ( *a8 )
  {
    do
      ++v27;
    while ( *((_BYTE *)v57 + v27) );
    v29 = v27 + 1;
  }
  else
  {
    v57 = &Str;
  }
  v64 = a7;
  v62 = a6;
  v60 = a5;
  v66 = v57;
  v67 = v29;
  v68 = 0;
  v65 = 4LL;
  v63 = 8LL;
  v61 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0x17u, &v59);
}
