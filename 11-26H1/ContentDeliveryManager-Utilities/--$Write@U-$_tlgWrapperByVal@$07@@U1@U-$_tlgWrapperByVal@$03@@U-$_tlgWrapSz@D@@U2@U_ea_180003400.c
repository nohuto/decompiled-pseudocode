/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@_W@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@_W@@454564564455@Z @ 0x180003400
 * Callers:
 *     ?Stop@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18007FE64 (-Stop@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliver.c)
 *     ?Stop@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18008BEF4 (-Stop@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryM.c)
 *     ?Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18008C154 (-Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDelive.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CBC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>>(
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
        const wchar_t **a24)
{
  __int64 v26; // rdx
  int v28; // r8d
  const wchar_t *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  const wchar_t *v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  int v35; // r9d
  const wchar_t *v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  const wchar_t *v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  const wchar_t *v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  const wchar_t *v45; // rcx
  __int64 v46; // rax
  int v47; // eax
  const wchar_t *v48; // rcx
  __int64 v49; // rax
  int v50; // eax
  const wchar_t *v51; // rcx
  __int64 v52; // rax
  const wchar_t *v53; // rcx
  __int64 v54; // rax
  int v55; // eax
  const wchar_t *v56; // rcx
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+50h] [rbp-B0h]
  __int64 v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+60h] [rbp-A0h]
  __int64 v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h]
  const wchar_t *v65; // [rsp+80h] [rbp-80h]
  int v66; // [rsp+88h] [rbp-78h]
  int v67; // [rsp+8Ch] [rbp-74h]
  __int64 v68; // [rsp+90h] [rbp-70h]
  __int64 v69; // [rsp+98h] [rbp-68h]
  const wchar_t *v70; // [rsp+A0h] [rbp-60h]
  int v71; // [rsp+A8h] [rbp-58h]
  int v72; // [rsp+ACh] [rbp-54h]
  __int64 v73; // [rsp+B0h] [rbp-50h]
  __int64 v74; // [rsp+B8h] [rbp-48h]
  const wchar_t *v75; // [rsp+C0h] [rbp-40h]
  int v76; // [rsp+C8h] [rbp-38h]
  int v77; // [rsp+CCh] [rbp-34h]
  __int64 v78; // [rsp+D0h] [rbp-30h]
  __int64 v79; // [rsp+D8h] [rbp-28h]
  const wchar_t *v80; // [rsp+E0h] [rbp-20h]
  int v81; // [rsp+E8h] [rbp-18h]
  int v82; // [rsp+ECh] [rbp-14h]
  __int64 v83; // [rsp+F0h] [rbp-10h]
  __int64 v84; // [rsp+F8h] [rbp-8h]
  const wchar_t *v85; // [rsp+100h] [rbp+0h]
  int v86; // [rsp+108h] [rbp+8h]
  int v87; // [rsp+10Ch] [rbp+Ch]
  const wchar_t *v88; // [rsp+110h] [rbp+10h]
  int v89; // [rsp+118h] [rbp+18h]
  int v90; // [rsp+11Ch] [rbp+1Ch]
  __int64 v91; // [rsp+120h] [rbp+20h]
  __int64 v92; // [rsp+128h] [rbp+28h]
  const wchar_t *v93; // [rsp+130h] [rbp+30h]
  int v94; // [rsp+138h] [rbp+38h]
  int v95; // [rsp+13Ch] [rbp+3Ch]
  const wchar_t *v96; // [rsp+140h] [rbp+40h]
  int v97; // [rsp+148h] [rbp+48h]
  int v98; // [rsp+14Ch] [rbp+4Ch]
  __int64 v99; // [rsp+150h] [rbp+50h]
  __int64 v100; // [rsp+158h] [rbp+58h]
  __int64 v101; // [rsp+160h] [rbp+60h]
  __int64 v102; // [rsp+168h] [rbp+68h]
  const wchar_t *v103; // [rsp+170h] [rbp+70h]
  int v104; // [rsp+178h] [rbp+78h]
  int v105; // [rsp+17Ch] [rbp+7Ch]
  const wchar_t *v106; // [rsp+180h] [rbp+80h]
  int v107; // [rsp+188h] [rbp+88h]
  int v108; // [rsp+18Ch] [rbp+8Ch]

  v26 = -1LL;
  v28 = 1;
  v29 = *a24;
  if ( *a24 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( *((_BYTE *)v29 + v30) );
    v31 = v30 + 1;
  }
  else
  {
    v29 = &Str;
    v31 = 1;
  }
  v107 = v31;
  v106 = v29;
  v108 = 0;
  v32 = *a23;
  if ( *a23 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *((_BYTE *)v32 + v33) );
    v34 = v33 + 1;
  }
  else
  {
    v32 = &Str;
    v34 = 1;
  }
  v104 = v34;
  v35 = 2;
  v101 = a22;
  v99 = a21;
  v103 = v32;
  v105 = 0;
  v102 = 4LL;
  v36 = *a20;
  v100 = 4LL;
  if ( v36 )
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
  v97 = v38;
  v96 = v36;
  v98 = 0;
  v39 = *a19;
  if ( *a19 )
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
  v94 = v41;
  v91 = a18;
  v93 = v39;
  v95 = 0;
  v92 = 4LL;
  v42 = *a17;
  if ( *a17 )
  {
    v43 = -1LL;
    do
      ++v43;
    while ( v42[v43] );
    v44 = 2 * v43 + 2;
  }
  else
  {
    v42 = &Src;
    v44 = 2;
  }
  v89 = v44;
  v88 = v42;
  v90 = 0;
  v45 = *a16;
  if ( *a16 )
  {
    v46 = -1LL;
    do
      ++v46;
    while ( *((_BYTE *)v45 + v46) );
    v47 = v46 + 1;
  }
  else
  {
    v45 = &Str;
    v47 = 1;
  }
  v86 = v47;
  v83 = a15;
  v85 = v45;
  v87 = 0;
  v84 = 4LL;
  v48 = *a14;
  if ( *a14 )
  {
    v49 = -1LL;
    do
      ++v49;
    while ( *((_BYTE *)v48 + v49) );
    v50 = v49 + 1;
  }
  else
  {
    v48 = &Str;
    v50 = 1;
  }
  v81 = v50;
  v78 = a13;
  v80 = v48;
  v82 = 0;
  v79 = 4LL;
  v51 = *a12;
  if ( *a12 )
  {
    v52 = -1LL;
    do
      ++v52;
    while ( v51[v52] );
    v35 = 2 * v52 + 2;
  }
  else
  {
    v51 = &Src;
  }
  v73 = a11;
  v75 = v51;
  v76 = v35;
  v77 = 0;
  v53 = *a10;
  v74 = 4LL;
  if ( v53 )
  {
    v54 = -1LL;
    do
      ++v54;
    while ( *((_BYTE *)v53 + v54) );
    v55 = v54 + 1;
  }
  else
  {
    v53 = &Str;
    v55 = 1;
  }
  v71 = v55;
  v68 = a9;
  v70 = v53;
  v72 = 0;
  v69 = 4LL;
  v56 = *a8;
  if ( *a8 )
  {
    do
      ++v26;
    while ( *((_BYTE *)v56 + v26) );
    v28 = v26 + 1;
  }
  else
  {
    v56 = &Str;
  }
  v63 = a7;
  v61 = a6;
  v59 = a5;
  v65 = v56;
  v66 = v28;
  v67 = 0;
  v64 = 4LL;
  v62 = 8LL;
  v60 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 0x16u, &v58);
}
