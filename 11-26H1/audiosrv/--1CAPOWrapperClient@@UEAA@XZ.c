/*
 * XREFs of ??1CAPOWrapperClient@@UEAA@XZ @ 0x1800217BC
 * Callers:
 *     ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x180021780 (--_GCAPOWrapperClient@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ @ 0x180021F90 (-StringCchPrintfExA@@YAJPEAD_KPEAPEADPEA_KKPEBDZZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800223A4 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180023C5C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x180047460 (-StringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAPOWrapperClient::~CAPOWrapperClient(CAPOWrapperClient *this)
{
  size_t v2; // rbx
  LPCRITICAL_SECTION v3; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v8; // [rsp+60h] [rbp-A8h]
  LARGE_INTEGER Frequency; // [rsp+68h] [rbp-A0h] BYREF
  char pszDest[64]; // [rsp+70h] [rbp-98h] BYREF
  char v11[128]; // [rsp+B0h] [rbp-58h] BYREF
  STRSAFE_LPSTR v12; // [rsp+130h] [rbp+28h] BYREF
  size_t cbDest[2]; // [rsp+138h] [rbp+30h] BYREF

  *(_QWORD *)this = &CAPOWrapperClient::`vftable'{for `IAPOWrapperClient'};
  *((_QWORD *)this + 1) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 2) = &CAPOWrapperClient::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)this + 3) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 4) = &CAPOWrapperClient::`vftable'{for `IApoAuxiliaryInputConfiguration'};
  *((_QWORD *)this + 5) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 6) = &CAPOWrapperClient::`vftable'{for `IApoAcousticEchoCancellation'};
  *((_QWORD *)this + 7) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>'};
  *((_QWORD *)this + 8) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObjectPreferredFormatSupport'};
  *((_QWORD *)this + 9) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioSystemEffectsCustomFormats>'};
  v2 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  PerformanceCount.QuadPart = 0LL;
  v8 = 0LL;
  Frequency.QuadPart = 0LL;
  memset_0(pszDest, 0, sizeof(pszDest));
  memset_0(v11, 0, sizeof(v11));
  cbDest[1] = v2;
  StringCchPrintfExA(pszDest, 0x40uLL, &v12, cbDest, 0, "%s", "SystemEffect_Release");
  StringCchPrintfExA(v12, cbDest[0], 0LL, 0LL, 0, "-Start");
  if ( this != (CAPOWrapperClient *)-132LL )
    StringCchCopyA(v11, 0x80uLL, (const char *)this + 132);
  QueryPerformanceCounter(&PerformanceCount);
  QueryPerformanceFrequency(&Frequency);
  v3 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v3[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v3);
  LeaveCriticalSection(v3);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_DWORD *)this + 21) = -1073741823;
}
