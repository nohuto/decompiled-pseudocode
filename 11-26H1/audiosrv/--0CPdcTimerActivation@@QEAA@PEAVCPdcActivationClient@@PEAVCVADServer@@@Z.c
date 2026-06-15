/*
 * XREFs of ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x180022F88
 * Callers:
 *     ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18005DD0C (-AcquirePdcTimerActivation@CPdcActivationClient@@QEAA-AV-$shared_ptr@VCPdcTimerActivation@@@std@.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x18002322C (-GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 */

CPdcTimerActivation *__fastcall CPdcTimerActivation::CPdcTimerActivation(
        CPdcTimerActivation *this,
        struct CPdcActivationClient *a2,
        CAudioStream **a3)
{
  const unsigned __int16 *ClientFriendlyName; // rdx
  const wchar_t *v6; // rcx
  __int64 v7; // rax
  int v8; // esi
  __int64 v9; // r10
  __int64 v11; // rcx
  int v12; // [rsp+44h] [rbp-BCh] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v14[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v17[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v18; // [rsp+70h] [rbp-90h]
  _DWORD v19[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v20; // [rsp+80h] [rbp-80h]
  const wchar_t *v21; // [rsp+88h] [rbp-78h]
  _QWORD *v22; // [rsp+90h] [rbp-70h]
  __int128 v23; // [rsp+98h] [rbp-68h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  _QWORD v25[3]; // [rsp+B0h] [rbp-50h] BYREF
  char v26[152]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 *v27; // [rsp+160h] [rbp+60h] BYREF
  int v28; // [rsp+168h] [rbp+68h]
  int v29; // [rsp+16Ch] [rbp+6Ch]
  void *v30; // [rsp+170h] [rbp+70h]
  int v31; // [rsp+178h] [rbp+78h]
  int v32; // [rsp+17Ch] [rbp+7Ch]
  __int64 *v33; // [rsp+180h] [rbp+80h]
  __int64 v34; // [rsp+188h] [rbp+88h]
  _DWORD *v35; // [rsp+190h] [rbp+90h]
  __int64 v36; // [rsp+198h] [rbp+98h]
  __int64 *v37; // [rsp+1A0h] [rbp+A0h]
  __int64 v38; // [rsp+1A8h] [rbp+A8h]
  int *v39; // [rsp+1B0h] [rbp+B0h]
  __int64 v40; // [rsp+1B8h] [rbp+B8h]
  int *v41; // [rsp+1C0h] [rbp+C0h]
  __int64 v42; // [rsp+1C8h] [rbp+C8h]

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a3;
  *(_QWORD *)this = 0LL;
  v25[1] = a3;
  v25[0] = 1LL;
  v25[2] = 560LL;
  memset_0(v26, 0, 0x90uLL);
  ClientFriendlyName = CAudioStream::GetClientFriendlyName(a3[22]);
  v19[0] = 1;
  v19[1] = 300;
  v22 = v25;
  v6 = L"Unknown";
  v20 = 0LL;
  v21 = L"Unknown";
  v24 = 0LL;
  v23 = 0LL;
  if ( ClientFriendlyName )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( ClientFriendlyName[v7] );
    if ( v7 )
      v6 = ClientFriendlyName;
    v21 = v6;
  }
  v8 = Pdcv2ActivationClientActivate(
         **((_QWORD **)this + 1),
         v19,
         *((_QWORD *)this + 2),
         2LL,
         L"TimerForAudioPlayback",
         0);
  if ( v8 >= 0 )
    Pdcv2ActivationClientSetBrokeredProcessId(*(_QWORD *)this, *((unsigned int *)a3 + 10));
  v9 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v9 > 4u
    && (*(_BYTE *)(v9 + 16) & 0x40) != 0
    && (*(_QWORD *)(v9 + 24) & 0x40LL) == *(_QWORD *)(v9 + 24) )
  {
    v11 = *((_QWORD *)this + 2);
    v12 = 0;
    v42 = 4LL;
    v40 = 4LL;
    v36 = 4LL;
    v13 = v8;
    v15 = *(_QWORD *)(v11 + 544);
    v14[0] = *(_DWORD *)(v11 + 40);
    v41 = &v12;
    v39 = &v13;
    v37 = &v15;
    v35 = v14;
    v33 = &v16;
    v17[1] = 4;
    v27 = *(unsigned __int16 **)(v9 + 8);
    v16 = v11;
    v38 = 8LL;
    v34 = 8LL;
    v17[0] = 184549376;
    v18 = 64LL;
    v28 = *v27;
    v30 = &unk_1801A6EF8;
    v29 = 2;
    v31 = 89;
    v32 = 1;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v9 + 32), v17, 0LL, 0LL, 7, &v27, this);
  }
  return this;
}
