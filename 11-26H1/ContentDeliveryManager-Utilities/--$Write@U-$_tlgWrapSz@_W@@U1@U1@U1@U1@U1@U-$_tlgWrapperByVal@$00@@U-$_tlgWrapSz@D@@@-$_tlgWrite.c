/*
 * XREFs of ??$Write@U?$_tlgWrapSz@_W@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@_W@@33333AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@D@@@Z @ 0x180002EAC
 * Callers:
 *     ??$TriggerUnregisterCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAE@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000AEAEPEBD@Z @ 0x18007B69C (--$TriggerUnregisterCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAE@TriggerManage.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CBC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<1>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        const wchar_t **a6,
        const wchar_t **a7,
        const wchar_t **a8,
        const wchar_t **a9,
        const wchar_t **a10,
        __int64 a11,
        const wchar_t **a12)
{
  __int64 v14; // rcx
  const wchar_t *v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  int v18; // r8d
  const wchar_t *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  const wchar_t *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  const wchar_t *v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  const wchar_t *v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  const wchar_t *v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  const wchar_t *v34; // rdx
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+30h] [rbp-99h] BYREF
  const wchar_t *v37; // [rsp+50h] [rbp-79h]
  int v38; // [rsp+58h] [rbp-71h]
  int v39; // [rsp+5Ch] [rbp-6Dh]
  const wchar_t *v40; // [rsp+60h] [rbp-69h]
  int v41; // [rsp+68h] [rbp-61h]
  int v42; // [rsp+6Ch] [rbp-5Dh]
  const wchar_t *v43; // [rsp+70h] [rbp-59h]
  int v44; // [rsp+78h] [rbp-51h]
  int v45; // [rsp+7Ch] [rbp-4Dh]
  const wchar_t *v46; // [rsp+80h] [rbp-49h]
  int v47; // [rsp+88h] [rbp-41h]
  int v48; // [rsp+8Ch] [rbp-3Dh]
  const wchar_t *v49; // [rsp+90h] [rbp-39h]
  int v50; // [rsp+98h] [rbp-31h]
  int v51; // [rsp+9Ch] [rbp-2Dh]
  const wchar_t *v52; // [rsp+A0h] [rbp-29h]
  int v53; // [rsp+A8h] [rbp-21h]
  int v54; // [rsp+ACh] [rbp-1Dh]
  __int64 v55; // [rsp+B0h] [rbp-19h]
  __int64 v56; // [rsp+B8h] [rbp-11h]
  const wchar_t *v57; // [rsp+C0h] [rbp-9h]
  int v58; // [rsp+C8h] [rbp-1h]
  int v59; // [rsp+CCh] [rbp+3h]

  v14 = -1LL;
  v15 = *a12;
  if ( *a12 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *((_BYTE *)v15 + v16) );
    v17 = v16 + 1;
  }
  else
  {
    v15 = &Str;
    v17 = 1;
  }
  v58 = v17;
  v55 = a11;
  v57 = v15;
  v56 = 1LL;
  v18 = 2;
  v59 = 0;
  v19 = *a10;
  if ( *a10 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v19[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v19 = &Src;
    v21 = 2;
  }
  v53 = v21;
  v52 = v19;
  v54 = 0;
  v22 = *a9;
  if ( *a9 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v22[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v22 = &Src;
    v24 = 2;
  }
  v50 = v24;
  v49 = v22;
  v51 = 0;
  v25 = *a8;
  if ( *a8 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v25 = &Src;
    v27 = 2;
  }
  v47 = v27;
  v46 = v25;
  v48 = 0;
  v28 = *a7;
  if ( *a7 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v28 = &Src;
    v30 = 2;
  }
  v44 = v30;
  v43 = v28;
  v45 = 0;
  v31 = *a6;
  if ( *a6 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v31 = &Src;
    v33 = 2;
  }
  v41 = v33;
  v40 = v31;
  v42 = 0;
  v34 = *a5;
  if ( *a5 )
  {
    do
      ++v14;
    while ( v34[v14] );
    v18 = 2 * v14 + 2;
  }
  else
  {
    v34 = &Src;
  }
  v37 = v34;
  v38 = v18;
  v39 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 0xAu, &v36);
}
