/*
 * XREFs of AudioVolumeConnect @ 0x180020900
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     atexit @ 0x1800B2494 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800B89C0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioVolumeConnect(__int64 a1, const wchar_t *a2, __int64 *a3)
{
  struct _FILETIME v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 fPending; // [rsp+30h] [rbp-89h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-81h] BYREF
  __int64 v20; // [rsp+40h] [rbp-79h] BYREF
  unsigned int Pid; // [rsp+48h] [rbp-71h] BYREF
  __int64 v22; // [rsp+50h] [rbp-69h] BYREF
  __int64 v23; // [rsp+58h] [rbp-61h]
  _QWORD pv[2]; // [rsp+60h] [rbp-59h] BYREF
  DWORD CurrentThreadId; // [rsp+70h] [rbp-49h]
  const wchar_t *v26; // [rsp+78h] [rbp-41h]
  struct _FILETIME v27; // [rsp+80h] [rbp-39h]
  char v28; // [rsp+88h] [rbp-31h]
  __int64 v29; // [rsp+8Ch] [rbp-2Dh]
  unsigned __int16 *v30; // [rsp+A0h] [rbp-19h] BYREF
  int v31; // [rsp+A8h] [rbp-11h]
  int v32; // [rsp+ACh] [rbp-Dh]
  void *v33; // [rsp+B0h] [rbp-9h]
  int v34; // [rsp+B8h] [rbp-1h]
  int v35; // [rsp+BCh] [rbp+3h]
  const wchar_t *v36; // [rsp+C0h] [rbp+7h]
  int v37; // [rsp+C8h] [rbp+Fh]
  int v38; // [rsp+CCh] [rbp+13h]
  __int64 *p_fPending; // [rsp+D0h] [rbp+17h]
  __int64 v40; // [rsp+D8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v5 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  LODWORD(fPending) = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v22 = (__int64)&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801D6870;
    qword_1801D6878 = 0LL;
    byte_1801D6880 = 0;
    dword_1801D6884 = 0;
    qword_1801D6870 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801D6888 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    LODWORD(v23) = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v22);
  }
  v7 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v7;
  CurrentThreadId = GetCurrentThreadId();
  v26 = L"AudioVolumeConnect";
  v27 = v5;
  v28 = 0;
  v29 = 0LL;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      Context = (LPVOID)(((unsigned __int64)(((unsigned __int128)(10000 * v6 * (__int128)0x5555555555555555LL) >> 64)
                                           - 10000 * v6) >> 63)
                       + ((__int64)(((unsigned __int128)(10000 * v6 * (__int128)0x5555555555555555LL) >> 64) - 10000 * v6) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&Context, (unsigned int)v6 / 3, 0);
    }
  }
  *a3 = 0LL;
  v9 = *(_QWORD *)g_pVolumeProvider;
  v20 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const wchar_t *, __int64 *))(v9 + 40))(
          g_pVolumeProvider,
          a2,
          &v20);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v14 = v20;
    v20 = 0LL;
    *a3 = v14;
    Pid = 0;
    I_RpcBindingInqLocalClientPID(0LL, &Pid);
    v15 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v15 > 4u
      && (*(_BYTE *)(v15 + 16) & 2) != 0
      && (*(_QWORD *)(v15 + 24) & 2LL) == *(_QWORD *)(v15 + 24) )
    {
      LODWORD(fPending) = Pid;
      p_fPending = &fPending;
      v40 = 4LL;
      if ( a2 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( a2[v16] );
        v17 = 2 * v16 + 2;
      }
      else
      {
        a2 = &LocaleName;
        v17 = 2;
      }
      v36 = a2;
      v37 = v17;
      v38 = 0;
      v22 = 0x40B000000LL;
      v23 = 2LL;
      v30 = *(unsigned __int16 **)(v15 + 8);
      v31 = *v30;
      v32 = 2;
      v33 = &unk_1801A7E3F;
      v34 = 43;
      v35 = 1;
      LODWORD(Context) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(*(_QWORD *)(v15 + 32), &v22, 0LL, 0LL, 4, &v30, fPending);
    }
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v12 = 0;
  }
  else
  {
    v12 = -2004287484;
    if ( v10 == -2004287484 )
    {
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
        (const char *)(unsigned int)v10);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
      v12 = v11;
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v12;
}
