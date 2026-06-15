/*
 * XREFs of ?IsInputFormatSupported@CAPOWrapperClient@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x180021D80
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x180021F90 (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ?IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0001@@PEAUIAudioMediaType@@1PEAPEAU3@@Z @ 0x1800221B0 (-IsAudioFormatSupported@CAPOWrapperClient@@AEAAJW4__MIDL___MIDL_itf_audioenginepolicy_0000_0009_.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x180047460 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     atexit @ 0x1800B2494 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800B89C0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CAPOWrapperClient::IsInputFormatSupported(
        CAPOWrapperClient *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  size_t v8; // rcx
  unsigned int IsAudioFormatSupported; // ebx
  WINBOOL fPending; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-B8h] BYREF
  union _RTL_RUN_ONCE *v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h]
  LARGE_INTEGER Frequency; // [rsp+70h] [rbp-90h] BYREF
  char pszDest[16]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v19; // [rsp+88h] [rbp-78h]
  __int128 v20; // [rsp+98h] [rbp-68h]
  __int128 v21; // [rsp+A8h] [rbp-58h]
  char v22[16]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v23; // [rsp+C8h] [rbp-38h]
  __int128 v24; // [rsp+D8h] [rbp-28h]
  __int128 v25; // [rsp+E8h] [rbp-18h]
  __int128 v26; // [rsp+F8h] [rbp-8h]
  __int128 v27; // [rsp+108h] [rbp+8h]
  __int128 v28; // [rsp+118h] [rbp+18h]
  __int128 v29; // [rsp+128h] [rbp+28h]
  STRSAFE_LPSTR v30; // [rsp+138h] [rbp+38h] BYREF
  size_t cbDest[2]; // [rsp+140h] [rbp+40h] BYREF

  Context = 0LL;
  fPending = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v13 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801D6870;
    qword_1801D6870 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801D6878 = 0LL;
    byte_1801D6880 = 0;
    dword_1801D6884 = 0;
    qword_1801D6888 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v14 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v13);
  }
  v8 = *((_QWORD *)Context + 1);
  PerformanceCount.QuadPart = 0LL;
  v16 = 0LL;
  Frequency.QuadPart = 0LL;
  cbDest[1] = v8;
  *(_OWORD *)pszDest = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  StringCchPrintfExA(pszDest, 0x40uLL, &v30, cbDest, 0, "%s", "SystemEffect_IsInputFormatSupported");
  StringCchPrintfExA(v30, cbDest[0], 0LL, 0LL, 0, "-Start");
  if ( this != (CAPOWrapperClient *)-124LL )
    StringCchCopyA(v22, 0x80uLL, (const char *)this + 124);
  QueryPerformanceCounter(&PerformanceCount);
  QueryPerformanceFrequency(&Frequency);
  IsAudioFormatSupported = CAPOWrapperClient::IsAudioFormatSupported((char *)this - 8, 0LL, a2, a3, a4);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return IsAudioFormatSupported;
}
