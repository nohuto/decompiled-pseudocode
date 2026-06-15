/*
 * XREFs of ??1CStreamInstanceProxy@@UEAA@XZ @ 0x180062D2C
 * Callers:
 *     ??_GCStreamInstanceProxy@@UEAAPEAXI@Z @ 0x180062CF0 (--_GCStreamInstanceProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18005B9B8 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CStreamInstanceProxyImpl@@QEAA@XZ @ 0x180062F4C (--1CStreamInstanceProxyImpl@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStreamInstanceProxy::~CStreamInstanceProxy(CStreamInstanceProxy *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  struct AudioSrvTelemetryProvider *v5; // rax
  int v6; // eax
  int v7; // [rsp+20h] [rbp-E0h]
  __int64 v8; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C0h] BYREF
  CStreamInstanceProxy *v11; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v12[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v15; // [rsp+150h] [rbp+50h] BYREF
  int v16; // [rsp+158h] [rbp+58h]
  int v17; // [rsp+15Ch] [rbp+5Ch]
  void *v18; // [rsp+160h] [rbp+60h]
  __int64 v19; // [rsp+168h] [rbp+68h]
  CStreamInstanceProxy **v20; // [rsp+170h] [rbp+70h]
  __int64 v21; // [rsp+178h] [rbp+78h]
  __int64 *v22; // [rsp+180h] [rbp+80h]
  __int64 v23; // [rsp+188h] [rbp+88h]
  __int64 *v24; // [rsp+190h] [rbp+90h]
  __int64 v25; // [rsp+198h] [rbp+98h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  *(_QWORD *)this = &CStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<CStreamInstanceProxyImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IStreamInstanceProxy>>'};
  *((_QWORD *)this + 5) = &CStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IStreamInstanceProxy>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IStreamInstanceProxy>>'};
  v2 = (__int64 *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    v4 = *v2;
    v8 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v4 + 72))(v2, &v8) >= 0 )
    {
      v5 = AudioSrvTelemetryProvider::Instance();
      CPerfTracker::CPerfTracker(
        &PerformanceCount,
        *((const struct _tlgProvider_t **)v5 + 1),
        "StreamInstance_DisconnectFromRightSubmix",
        0LL);
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 80LL))(*((_QWORD *)this + 2), v8);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xFF1,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v6,
          v7);
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  }
  v3 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v3 > 4u
    && (*(_DWORD *)(v3 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v3 + 24) & 0x200LL) == *(_QWORD *)(v3 + 24) )
  {
    v9 = *((_QWORD *)this + 4);
    v10 = *((_QWORD *)this + 3);
    v11 = this;
    v24 = &v9;
    v25 = 8LL;
    v22 = &v10;
    v23 = 8LL;
    v20 = &v11;
    v21 = 8LL;
    v12[0] = 184549376;
    v12[1] = 4;
    v13 = 512LL;
    v15 = *(unsigned __int16 **)(v3 + 8);
    v16 = *v15;
    v17 = 2;
    v18 = &unk_1801A5FE0;
    v19 = 0x10000005BLL;
    LODWORD(v8) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v3 + 32), v12, 0LL, 0LL, 5, &v15, v8);
  }
  *((_DWORD *)this + 13) = -1073741823;
  CStreamInstanceProxyImpl::~CStreamInstanceProxyImpl(this);
}
