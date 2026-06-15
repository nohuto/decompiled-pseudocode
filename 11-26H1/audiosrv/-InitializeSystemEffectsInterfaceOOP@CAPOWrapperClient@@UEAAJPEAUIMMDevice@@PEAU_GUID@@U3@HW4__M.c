/*
 * XREFs of ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800219E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x180021F90 (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x180047460 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     atexit @ 0x1800B2494 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800B89C0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP(
        CAPOWrapperClient *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct IAudioSystemEffects2 **a7)
{
  size_t v11; // rcx
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64, LPVOID, struct _GUID *, __int128 *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, bool, char *); // rax
  int v17; // eax
  void *v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  LPVOID pv; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+88h] [rbp-78h]
  LARGE_INTEGER Frequency; // [rsp+90h] [rbp-70h] BYREF
  char pszDest[16]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v30; // [rsp+A8h] [rbp-58h]
  __int128 v31; // [rsp+B8h] [rbp-48h]
  __int128 v32; // [rsp+C8h] [rbp-38h]
  char v33[16]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v34; // [rsp+E8h] [rbp-18h]
  __int128 v35; // [rsp+F8h] [rbp-8h]
  __int128 v36; // [rsp+108h] [rbp+8h]
  __int128 v37; // [rsp+118h] [rbp+18h]
  __int128 v38; // [rsp+128h] [rbp+28h]
  __int128 v39; // [rsp+138h] [rbp+38h]
  __int128 v40; // [rsp+148h] [rbp+48h]
  STRSAFE_LPSTR v41; // [rsp+158h] [rbp+58h] BYREF
  size_t cbDest[2]; // [rsp+160h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  Context = 0LL;
  fPending = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    *(_QWORD *)&v25 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801D6870;
    qword_1801D6870 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801D6878 = 0LL;
    byte_1801D6880 = 0;
    dword_1801D6884 = 0;
    qword_1801D6888 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    DWORD2(v25) = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v25);
  }
  v11 = *((_QWORD *)Context + 1);
  PerformanceCount.QuadPart = 0LL;
  v27 = 0LL;
  Frequency.QuadPart = 0LL;
  cbDest[1] = v11;
  *(_OWORD *)pszDest = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  *(_OWORD *)v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  StringCchPrintfExA(pszDest, 0x40uLL, &v41, cbDest, 0, "%s", "SystemEffect_Initialize");
  StringCchPrintfExA(v41, cbDest[0], 0LL, 0LL, 0, "-Start");
  if ( this != (CAPOWrapperClient *)-132LL )
    StringCchCopyA(v33, 0x80uLL, (const char *)this + 132);
  QueryPerformanceCounter(&PerformanceCount);
  QueryPerformanceFrequency(&Frequency);
  if ( !a2 )
  {
    v20 = 129LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x80070057LL);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    return 2147942487LL;
  }
  if ( !*((_QWORD *)this + 11) )
  {
    v20 = 130LL;
    goto LABEL_18;
  }
  lpVtbl = a2->lpVtbl;
  pv = 0LL;
  v13 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))lpVtbl->GetId)(a2, &pv);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)(unsigned int)v13);
    v19 = pv;
    if ( !pv )
      goto LABEL_16;
    goto LABEL_15;
  }
  v15 = *((_QWORD *)this + 11);
  v16 = *(__int64 (__fastcall **)(__int64, LPVOID, struct _GUID *, __int128 *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, bool, char *))(*(_QWORD *)v15 + 32LL);
  v25 = (__int128)*a4;
  v17 = v16(v15, pv, a3, &v25, a5, a6, a7 != 0LL, (char *)this + 104);
  v14 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)(unsigned int)v17);
    v19 = pv;
    if ( !pv )
    {
LABEL_16:
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
      return v14;
    }
LABEL_15:
    CoTaskMemFree(v19);
    goto LABEL_16;
  }
  if ( a7 )
  {
    v21 = (**(__int64 (__fastcall ***)(CAPOWrapperClient *, GUID *, struct IAudioSystemEffects2 **))this)(
            this,
            &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
            a7);
    v14 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
        (const char *)(unsigned int)v21);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
      goto LABEL_16;
    }
  }
  if ( pv )
    CoTaskMemFree(pv);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return 0LL;
}
