/*
 * XREFs of s_rtgGetDefaultAudioEndpoint @ 0x1800157B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800160F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAUIMMDevice@@@Z @ 0x18001611C (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180053ED0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     atexit @ 0x1800B2494 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800B89C0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_rtgGetDefaultAudioEndpoint(__int64 a1, unsigned int a2, int a3, _QWORD *a4, _DWORD *a5)
{
  char *v9; // rdi
  struct _FILETIME v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  DynamicAudioEndpointManager *v14; // rbx
  RTL_SRWLOCK *v15; // r14
  __int64 v16; // rax
  int v17; // eax
  int DefaultAudioEndpoint; // esi
  unsigned int v19; // eax
  LPVOID v20; // rbx
  int v21; // eax
  void *v22; // rbx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v25; // rbx
  _WORD *v26; // rax
  _WORD *v27; // rcx
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  signed __int64 v30; // r8
  __int16 v31; // cx
  _WORD *v32; // rcx
  int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 (__fastcall *v36)(__int64, WINBOOL *); // rsi
  int v37; // eax
  int v38; // [rsp+20h] [rbp-71h]
  _WORD *lpMem; // [rsp+30h] [rbp-61h]
  WINBOOL fPending[2]; // [rsp+38h] [rbp-59h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-51h] BYREF
  __int64 v42; // [rsp+48h] [rbp-49h] BYREF
  __int64 v43; // [rsp+50h] [rbp-41h] BYREF
  RTL_SRWLOCK *v44; // [rsp+58h] [rbp-39h] BYREF
  _FILETIME pftDueTime; // [rsp+60h] [rbp-31h] BYREF
  int v46; // [rsp+68h] [rbp-29h]
  _QWORD pv[2]; // [rsp+70h] [rbp-21h] BYREF
  DWORD CurrentThreadId; // [rsp+80h] [rbp-11h]
  const wchar_t *v49; // [rsp+88h] [rbp-9h]
  struct _FILETIME v50; // [rsp+90h] [rbp-1h]
  char v51; // [rsp+98h] [rbp+7h]
  __int64 v52; // [rsp+9Ch] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]
  int v54; // [rsp+100h] [rbp+6Fh] BYREF
  _QWORD *v55; // [rsp+108h] [rbp+77h]

  v55 = a4;
  v9 = 0LL;
  lpMem = 0LL;
  LOBYTE(v54) = 0;
  v10 = g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  fPending[0] = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    pftDueTime = (_FILETIME)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801D6870;
    qword_1801D6878 = 0LL;
    byte_1801D6880 = 0;
    dword_1801D6884 = 0;
    qword_1801D6870 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801D6888 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v46 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&pftDueTime);
  }
  v12 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v12;
  CurrentThreadId = GetCurrentThreadId();
  v49 = L"s_rtgGetDefaultAudioEndpoint";
  v50 = v10;
  v51 = 0;
  v52 = 0LL;
  if ( (unsigned int)v11 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (_FILETIME)(((unsigned __int64)(((unsigned __int128)(10000 * v11 * (__int128)0x5555555555555555LL) >> 64)
                                                 - 10000 * v11) >> 63)
                             + ((__int64)(((unsigned __int128)(10000 * v11 * (__int128)0x5555555555555555LL) >> 64)
                                        - 10000 * v11) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v11 / 3, 0);
    }
  }
  if ( a3 >= 6 )
  {
    DefaultAudioEndpoint = -2147024809;
    v22 = 0LL;
    goto LABEL_25;
  }
  if ( !a4 || !a5 )
  {
    DefaultAudioEndpoint = -2147467261;
    v22 = 0LL;
    goto LABEL_25;
  }
  *a5 = 0;
  v14 = g_DynamicAudioEndpointManager;
  v15 = (RTL_SRWLOCK *)((char *)g_DynamicAudioEndpointManager + 16);
  AcquireSRWLockShared((PSRWLOCK)g_DynamicAudioEndpointManager + 2);
  v44 = v15;
  v42 = 0LL;
  *(_QWORD *)fPending = 0LL;
  v16 = *(_QWORD *)g_PolicyManager;
  v43 = 0LL;
  v17 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(v16 + 32))(
          g_PolicyManager,
          a1,
          &v43);
  DefaultAudioEndpoint = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEA,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v17,
      v38);
    if ( v43 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    if ( *(_QWORD *)fPending )
      CoTaskMemFree(*(LPVOID *)fPending);
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    goto LABEL_22;
  }
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 40LL))(v43);
  Context = 0LL;
  DefaultAudioEndpoint = DynamicAudioEndpointManager::GetDefaultAudioEndpoint(v14, v19, a2, (unsigned int)a3);
  if ( DefaultAudioEndpoint < 0 )
    goto LABEL_57;
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  v20 = Context;
  v21 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))Context)(
          Context,
          &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
          &v42);
  DefaultAudioEndpoint = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEF,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v21,
      (int)&v54);
    if ( v43 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    if ( *(_QWORD *)fPending )
      CoTaskMemFree(*(LPVOID *)fPending);
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_22:
    if ( v15 )
      ReleaseSRWLockShared(v15);
    goto LABEL_24;
  }
  v35 = v42;
  v36 = *(__int64 (__fastcall **)(__int64, WINBOOL *))(*(_QWORD *)v42 + 56LL);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    fPending,
    0LL);
  v37 = v36(v35, fPending);
  DefaultAudioEndpoint = v37;
  if ( v37 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v37,
      (int)&v54);
LABEL_57:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(fPending);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v44);
    goto LABEL_24;
  }
  v9 = *(char **)fPending;
  *(_QWORD *)fPending = 0LL;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(fPending);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&Context);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v44);
  if ( v9 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( *(_WORD *)&v9[2 * v34] );
    v25 = 2 * v34 + 2;
    if ( v25 > 0x40000 )
    {
      v22 = 0LL;
    }
    else
    {
      v26 = operator new[](v25, (const struct std::nothrow_t *)&std::nothrow);
      v27 = v26;
      lpMem = v26;
      if ( v26 )
      {
        v28 = v25 >> 1;
        if ( v28 && v28 <= 0x7FFFFFFF )
        {
          v29 = 2147483646 - v28;
          v30 = v9 - (char *)v26;
          do
          {
            if ( !(v28 + v29) )
              break;
            v31 = *(_WORD *)((char *)v26 + v30);
            if ( !v31 )
              break;
            *v26++ = v31;
            --v28;
          }
          while ( v28 );
          v32 = v26 - 1;
          if ( v28 )
            v32 = v26;
          *v32 = 0;
          v33 = -2147024774;
          if ( v28 )
            v33 = 0;
          v27 = lpMem;
        }
        else
        {
          DefaultAudioEndpoint = -2147024809;
          v33 = -2147024809;
          if ( v28 )
          {
            *v27 = 0;
            v22 = v27;
            goto LABEL_25;
          }
        }
        DefaultAudioEndpoint = v33;
        if ( v33 >= 0 )
        {
          *v55 = v27;
          *a5 = (unsigned __int8)v54;
          goto LABEL_26;
        }
        goto LABEL_24;
      }
      v22 = 0LL;
    }
    DefaultAudioEndpoint = -2147024882;
    goto LABEL_25;
  }
  DefaultAudioEndpoint = -2147023728;
LABEL_24:
  v22 = lpMem;
LABEL_25:
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v22);
LABEL_26:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  CoTaskMemFree(0LL);
  CoTaskMemFree(v9);
  return (unsigned int)DefaultAudioEndpoint;
}
