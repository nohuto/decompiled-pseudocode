/*
 * XREFs of ?StateCheckExpiredCallback@CAudioSession@@AEAAXXZ @ 0x1800142A0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c25bfbbe3eff8159fd381be65f1c93f0__void_::_Do_call @ 0x180014290 (std--_Func_impl_no_alloc__lambda_c25bfbbe3eff8159fd381be65f1c93f0__void_--_Do_call.c)
 * Callees:
 *     ?StateCheckExpired@CAudioSession@@AEAA?AW4StateCheckExpirationResult@1@XZ @ 0x1800140B0 (-StateCheckExpired@CAudioSession@@AEAA-AW4StateCheckExpirationResult@1@XZ.c)
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x180014A5C (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     atexit @ 0x1800B2494 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800B89C0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

void __fastcall CAudioSession::StateCheckExpiredCallback(CAudioSession *this)
{
  int v2; // esi
  __int64 v3; // rcx
  const wchar_t *v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  __int64 fPending; // [rsp+38h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-21h] BYREF
  __int64 v9; // [rsp+48h] [rbp-19h] BYREF
  __int64 v10; // [rsp+50h] [rbp-11h]
  unsigned __int16 *v11; // [rsp+58h] [rbp-9h] BYREF
  int v12; // [rsp+60h] [rbp-1h]
  int v13; // [rsp+64h] [rbp+3h]
  void *v14; // [rsp+68h] [rbp+7h]
  __int64 v15; // [rsp+70h] [rbp+Fh]
  const wchar_t *v16; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  __int64 *p_fPending; // [rsp+88h] [rbp+27h]
  __int64 v20; // [rsp+90h] [rbp+2Fh]

  CAudioSession::PruneTerminatedOwningProcesses(this);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 544));
  Context = 0LL;
  LODWORD(fPending) = 0;
  v2 = CAudioSession::StateCheckExpired((__int64)this);
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v9 = (__int64)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801D6870;
    qword_1801D6870 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801D6878 = 0LL;
    byte_1801D6880 = 0;
    dword_1801D6884 = 0;
    qword_1801D6888 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    LODWORD(v10) = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v9);
  }
  v3 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 4u
    && (*(_DWORD *)(v3 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v3 + 24) & 0x200LL) == *(_QWORD *)(v3 + 24) )
  {
    v4 = (const wchar_t *)*((_QWORD *)this + 82);
    LODWORD(fPending) = v2;
    p_fPending = &fPending;
    v20 = 4LL;
    if ( v4 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( v4[v5] );
      v6 = 2 * v5 + 2;
    }
    else
    {
      v4 = &LocaleName;
      v6 = 2;
    }
    v17 = v6;
    v11 = *(unsigned __int16 **)(v3 + 8);
    v16 = v4;
    v10 = 512LL;
    v18 = 0;
    v9 = 0x40B000000LL;
    v12 = *v11;
    v14 = &unk_1801A43F9;
    v13 = 2;
    v15 = 0x10000003ELL;
    LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    ((void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, int, unsigned __int16 **, __int64, LPVOID))EtwEventWriteTransfer)(
      *(_QWORD *)(v3 + 32),
      &v9,
      0LL,
      0LL,
      4,
      &v11,
      fPending,
      Context);
  }
  if ( this != (CAudioSession *)-544LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 544));
}
