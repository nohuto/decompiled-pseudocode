/*
 * XREFs of ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18001F858
 * Callers:
 *     AudioServerInitialize @ 0x18001E390 (AudioServerInitialize.c)
 *     asm_AudioServerInitializeStream @ 0x1800BD340 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18001DE40 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18001E598 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     ??0CVADServer@@QEAA@XZ @ 0x18001EA20 (--0CVADServer@@QEAA@XZ.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18001EB84 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18001EC10 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18001F318 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18001F658 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800235E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Detail.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180023C5C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ??1?$com_ptr_t@VCVADServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B06B0 (--1-$com_ptr_t@VCVADServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall AudioServerInitialize_Internal(
        void *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        struct tWAVEFORMATEX *a5,
        const struct _GUID *a6,
        struct VadServerSettings *a7,
        unsigned __int16 **a8,
        struct IProcessSubmixProxy *a9,
        void **a10)
{
  struct _FILETIME v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  LPCRITICAL_SECTION v16; // rbx
  CAudioDGProcess *v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rax
  int v21; // eax
  int v22; // edi
  DWORD v23; // eax
  struct IAudioProcess *v24; // rdi
  CVADServer *v25; // rax
  volatile signed __int64 *v26; // rbx
  volatile int *v27; // rdx
  signed __int64 v28; // rax
  signed __int64 v30; // rtt
  struct tWAVEFORMATEX *v31; // rbx
  bool v32; // zf
  LPCRITICAL_SECTION v33; // rbx
  LPCRITICAL_SECTION v34; // rdi
  LPCRITICAL_SECTION v35; // rbx
  struct IAudioProcess *v36; // rbx
  unsigned int (__fastcall *v37)(struct IAudioProcess *); // rsi
  int v38; // edi
  struct IAudioProcess *v40; // [rsp+58h] [rbp-91h] BYREF
  struct _FILETIME pftDueTime; // [rsp+60h] [rbp-89h] BYREF
  char v42; // [rsp+69h] [rbp-80h]
  unsigned int v43; // [rsp+6Ch] [rbp-7Dh]
  struct tWAVEFORMATEX *Src; // [rsp+70h] [rbp-79h] BYREF
  void *v45; // [rsp+78h] [rbp-71h]
  unsigned __int16 **v46; // [rsp+80h] [rbp-69h]
  _QWORD pv[2]; // [rsp+88h] [rbp-61h] BYREF
  DWORD CurrentThreadId; // [rsp+98h] [rbp-51h]
  const wchar_t *v49; // [rsp+A0h] [rbp-49h]
  struct _FILETIME v50; // [rsp+A8h] [rbp-41h]
  char v51; // [rsp+B0h] [rbp-39h]
  __int64 v52; // [rsp+B4h] [rbp-35h]
  __int64 v53; // [rsp+C0h] [rbp-29h]
  __int128 v54; // [rsp+C8h] [rbp-21h]
  __int128 v55; // [rsp+D8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+3Fh]

  v43 = a4;
  Src = a5;
  v46 = a8;
  v54 = *(_OWORD *)a7;
  v55 = v54;
  EtwEventActivityIdControl(4LL, &v55);
  v12 = g_AudioHealthMonitor;
  v13 = g_AudioSrvWatchDogTimerInMs;
  v14 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v14;
  CurrentThreadId = GetCurrentThreadId();
  v49 = L"AudioServerInitialize_Internal";
  v50 = v12;
  v51 = 0;
  v52 = 0LL;
  if ( (unsigned int)v13 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v13
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v13) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v13 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v13) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v13 / 3, 0);
    }
  }
  *a10 = 0LL;
  v16 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v45 = v16;
  if ( ++LODWORD(v16[1].DebugInfo) == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v16);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v16);
  }
  LeaveCriticalSection(v16);
  v42 = 1;
  v18 = CAudioDGProcess::CheckADGStatus(v17);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v18);
    v34 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    pftDueTime = (struct _FILETIME)v34;
    v32 = LODWORD(v34[1].DebugInfo)-- == 1;
    if ( v32 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v34);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&pftDueTime);
    goto LABEL_21;
  }
  v40 = 0LL;
  v20 = *(_QWORD *)g_PolicyManager;
  v40 = 0LL;
  v21 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, struct IAudioProcess **))(v20 + 32))(
          g_PolicyManager,
          a1,
          &v40);
  v22 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA62,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v21);
    if ( v40 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v40 + 16LL))(v40);
    v33 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    v32 = LODWORD(v33[1].DebugInfo)-- == 1;
    if ( v32 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v33);
    goto LABEL_33;
  }
  v23 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v40 + 40LL))(v40);
  if ( !(unsigned int)IsProcessAllowed(v23, a2) )
  {
    v22 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA64,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070005LL);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
    v35 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    pftDueTime = (struct _FILETIME)v35;
    v32 = LODWORD(v35[1].DebugInfo)-- == 1;
    if ( v32 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v35);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&pftDueTime);
    goto LABEL_34;
  }
  if ( a9 )
  {
    v36 = v40;
    v37 = *(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v40 + 48LL);
    v38 = (*(__int64 (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a9 + 200LL))(a9);
    if ( v38 != v37(v36) )
    {
      v22 = -2147024891;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA66,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x80070005LL);
      if ( v40 )
        (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v40 + 16LL))(v40);
      v33 = g_ADGProcess;
      EnterCriticalSection(g_ADGProcess);
      v32 = LODWORD(v33[1].DebugInfo)-- == 1;
      if ( v32 )
        CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v33);
LABEL_33:
      LeaveCriticalSection(v33);
LABEL_34:
      v19 = v22;
      goto LABEL_21;
    }
  }
  v24 = v40;
  pftDueTime = 0LL;
  v25 = (CVADServer *)operator new[](0x230uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v25 )
  {
    v22 = -2147024882;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v22);
    wil::com_ptr_t<CVADServer,wil::err_returncode_policy>::~com_ptr_t<CVADServer,wil::err_returncode_policy>(&pftDueTime);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
    v31 = (struct tWAVEFORMATEX *)g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    Src = v31;
    v32 = v31[2].nSamplesPerSec-- == 1;
    if ( v32 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v31);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&Src);
    goto LABEL_34;
  }
  v26 = (volatile signed __int64 *)CVADServer::CVADServer(v25);
  v45 = (void *)v26;
  v53 = 0LL;
  v22 = CVADServer::RuntimeClassInitialize((CVADServer *)v26, v24, a2, a3, v43, Src, a6, a7, v46, a9);
  if ( v22 < 0 )
  {
    if ( v26 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release(v26);
    goto LABEL_26;
  }
  if ( v26 )
  {
    v28 = *((_QWORD *)v26 + 4);
    while ( v28 >= 0 )
    {
      if ( (_DWORD)v28 != 0x7FFFFFFF )
      {
        v30 = v28;
        v28 = _InterlockedCompareExchange64(v26 + 4, v28 + 1, v28);
        if ( v30 != v28 )
          continue;
      }
      goto LABEL_16;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v28 + 16), v27);
  }
LABEL_16:
  if ( v26 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release(v26);
  *a10 = (void *)v26;
  v42 = 0;
  if ( v40 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v40 + 16LL))(v40);
  v19 = 0;
LABEL_21:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v55);
  return v19;
}
