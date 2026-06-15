/*
 * XREFs of ??1CProcessSubmixProxy@@MEAA@XZ @ 0x1800441BC
 * Callers:
 *     ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x180044180 (--_GCProcessSubmixProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x180021F90 (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800440B4 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UI.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcessSubmixProxy::~CProcessSubmixProxy(CProcessSubmixProxy *this)
{
  char *v2; // r14
  __int64 *v3; // rsi
  __int64 v4; // rcx
  size_t v5; // rbx
  __int64 v6; // rbx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // [rsp+38h] [rbp-D0h]
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v14[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-A0h] BYREF
  char *v17; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v18[2]; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+88h] [rbp-80h] BYREF
  __int64 v20; // [rsp+90h] [rbp-78h]
  LARGE_INTEGER Frequency; // [rsp+98h] [rbp-70h] BYREF
  char pszDest[64]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v23[128]; // [rsp+E0h] [rbp-28h] BYREF
  STRSAFE_LPSTR v24; // [rsp+160h] [rbp+58h] BYREF
  size_t cbDest[2]; // [rsp+168h] [rbp+60h] BYREF
  unsigned __int16 *v26; // [rsp+178h] [rbp+70h] BYREF
  int v27; // [rsp+180h] [rbp+78h]
  int v28; // [rsp+184h] [rbp+7Ch]
  void *v29; // [rsp+188h] [rbp+80h]
  int v30; // [rsp+190h] [rbp+88h]
  int v31; // [rsp+194h] [rbp+8Ch]
  char **v32; // [rsp+198h] [rbp+90h]
  __int64 v33; // [rsp+1A0h] [rbp+98h]
  __int64 *v34; // [rsp+1A8h] [rbp+A0h]
  __int64 v35; // [rsp+1B0h] [rbp+A8h]
  __int64 *v36; // [rsp+1B8h] [rbp+B0h]
  __int64 v37; // [rsp+1C0h] [rbp+B8h]
  _DWORD *v38; // [rsp+1C8h] [rbp+C0h]
  __int64 v39; // [rsp+1D0h] [rbp+C8h]
  __int64 *v40; // [rsp+1D8h] [rbp+D0h]
  __int64 v41; // [rsp+1E0h] [rbp+D8h]

  *(_QWORD *)this = &CProcessSubmixProxy::`vftable'{for `IInspectable'};
  v2 = (char *)this + 8;
  *((_QWORD *)this + 1) = &CProcessSubmixProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IProcessSubmixProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 2) = &CProcessSubmixProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  v13 = 0LL;
  v3 = (__int64 *)((char *)this + 200);
  v4 = *((_QWORD *)this + 25);
  if ( v4 && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 272LL))(v4, &v13) >= 0 )
  {
    v5 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    PerformanceCount.QuadPart = 0LL;
    v20 = 0LL;
    Frequency.QuadPart = 0LL;
    memset_0(pszDest, 0, sizeof(pszDest));
    memset_0(v23, 0, sizeof(v23));
    cbDest[1] = v5;
    StringCchPrintfExA(pszDest, 0x40uLL, &v24, cbDest, 0, "%s", "ProcessSubmix_DisconnectFromStreamGroup");
    StringCchPrintfExA(v24, cbDest[0], 0LL, 0LL, 0, "-Start");
    QueryPerformanceCounter(&PerformanceCount);
    QueryPerformanceFrequency(&Frequency);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 48LL))(*((_QWORD *)this + 6), v13);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  }
  v6 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v6 > 4u )
  {
    LOBYTE(v12) = *((_BYTE *)this + 124);
    v9 = *((_QWORD *)this + 14);
    if ( v9 )
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
    else
      v10 = 0;
    v14[0] = v10;
    v15 = v13;
    v16 = *((_QWORD *)this + 6);
    v17 = v2;
    v40 = &v12;
    v41 = 1LL;
    v38 = v14;
    v39 = 4LL;
    v36 = &v15;
    v37 = 8LL;
    v34 = &v16;
    v35 = 8LL;
    v32 = &v17;
    v33 = 8LL;
    v18[0] = 0x40B000000LL;
    v18[1] = 0LL;
    v26 = *(unsigned __int16 **)(v6 + 8);
    v27 = *v26;
    v28 = 2;
    v29 = &unk_1801A61C9;
    v30 = 92;
    v31 = 1;
    v14[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v6 + 32), v18, 0LL, 0LL, 7, &v26, v11);
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v7 = (void *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = 0LL;
  if ( v7 )
    CoTaskMemFree(v7);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v3);
  v8 = *((_QWORD *)this + 22);
  if ( v8 )
  {
    std::_Deallocate<16>(v8, (*((_QWORD *)this + 24) - v8) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 14);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 6);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>((__int64)this);
}
