/*
 * XREFs of ??$Write@U?$_tlgWrapSz@_W@@U1@U1@U1@U1@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@_W@@33333AEBU?$_tlgWrapSz@D@@@Z @ 0x180002CCC
 * Callers:
 *     ??$TriggerRegistrationCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000PEBD@Z @ 0x18007B28C (--$TriggerRegistrationCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerR.c)
 *     ??$TriggerRegistrationFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000PEBD@Z @ 0x18007B390 (--$TriggerRegistrationFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegi.c)
 *     ??$TriggerRegistrationPreconditionFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W000$$QEAPEB_W0PEBD@Z @ 0x18007B494 (--$TriggerRegistrationPreconditionFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WAEAPEB_W@TriggerMa.c)
 *     ??$TriggerStateTransition@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WPEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W000$$QEAPEB_W1PEBD@Z @ 0x18007B598 (--$TriggerStateTransition@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WPEB_W@ContentDeliveryManagerTelem.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CBC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<char>>(
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
        const wchar_t **a11)
{
  __int64 v13; // rcx
  const wchar_t *v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  int v17; // r8d
  const wchar_t *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  const wchar_t *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  const wchar_t *v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  const wchar_t *v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  const wchar_t *v30; // rdx
  __int64 v31; // rax
  int v32; // eax
  const wchar_t *v33; // rdx
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+30h] [rbp-81h] BYREF
  const wchar_t *v36; // [rsp+50h] [rbp-61h]
  int v37; // [rsp+58h] [rbp-59h]
  int v38; // [rsp+5Ch] [rbp-55h]
  const wchar_t *v39; // [rsp+60h] [rbp-51h]
  int v40; // [rsp+68h] [rbp-49h]
  int v41; // [rsp+6Ch] [rbp-45h]
  const wchar_t *v42; // [rsp+70h] [rbp-41h]
  int v43; // [rsp+78h] [rbp-39h]
  int v44; // [rsp+7Ch] [rbp-35h]
  const wchar_t *v45; // [rsp+80h] [rbp-31h]
  int v46; // [rsp+88h] [rbp-29h]
  int v47; // [rsp+8Ch] [rbp-25h]
  const wchar_t *v48; // [rsp+90h] [rbp-21h]
  int v49; // [rsp+98h] [rbp-19h]
  int v50; // [rsp+9Ch] [rbp-15h]
  const wchar_t *v51; // [rsp+A0h] [rbp-11h]
  int v52; // [rsp+A8h] [rbp-9h]
  int v53; // [rsp+ACh] [rbp-5h]
  const wchar_t *v54; // [rsp+B0h] [rbp-1h]
  int v55; // [rsp+B8h] [rbp+7h]
  int v56; // [rsp+BCh] [rbp+Bh]

  v13 = -1LL;
  v14 = *a11;
  if ( *a11 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *((_BYTE *)v14 + v15) );
    v16 = v15 + 1;
  }
  else
  {
    v14 = &Str;
    v16 = 1;
  }
  v55 = v16;
  v17 = 2;
  v54 = v14;
  v56 = 0;
  v18 = *a10;
  if ( *a10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v18 = &Src;
    v20 = 2;
  }
  v52 = v20;
  v51 = v18;
  v53 = 0;
  v21 = *a9;
  if ( *a9 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v21[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v21 = &Src;
    v23 = 2;
  }
  v49 = v23;
  v48 = v21;
  v50 = 0;
  v24 = *a8;
  if ( *a8 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v24 = &Src;
    v26 = 2;
  }
  v46 = v26;
  v45 = v24;
  v47 = 0;
  v27 = *a7;
  if ( *a7 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = 2 * v28 + 2;
  }
  else
  {
    v27 = &Src;
    v29 = 2;
  }
  v43 = v29;
  v42 = v27;
  v44 = 0;
  v30 = *a6;
  if ( *a6 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( v30[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v30 = &Src;
    v32 = 2;
  }
  v40 = v32;
  v39 = v30;
  v41 = 0;
  v33 = *a5;
  if ( *a5 )
  {
    do
      ++v13;
    while ( v33[v13] );
    v17 = 2 * v13 + 2;
  }
  else
  {
    v33 = &Src;
  }
  v36 = v33;
  v37 = v17;
  v38 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v35);
}
