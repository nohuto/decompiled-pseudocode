/*
 * XREFs of AudioServerCreateStream @ 0x1801149A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180025ED4 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005D98C (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x18005EEF8 (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007B688 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008DA90 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     wil::scope_exit__lambda_ef0738edc8b2d0d8545a516b48828a5c___ @ 0x180110A3C (wil--scope_exit__lambda_ef0738edc8b2d0d8545a516b48828a5c___.c)
 *     wil::details::lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___::_lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___ @ 0x180110D7C (wil--details--lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___--_lambda_call__lambda_ef07.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerCreateStream(
        _OWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct SYSTEM_AUDIO_STREAM *a6)
{
  __int64 (__fastcall *v10)(struct IAudioPolicyManager *, _QWORD, struct _RTL_CRITICAL_SECTION **); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v15; // edi
  struct AudioSrvTelemetryProvider *v16; // rax
  RPC_STATUS v17; // ebx
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  int ThreadLogonSessionStringSid; // eax
  int Stream; // eax
  _BYTE v23[8]; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int16 *v24; // [rsp+48h] [rbp-61h] BYREF
  int v25; // [rsp+50h] [rbp-59h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+58h] [rbp-51h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v28[16]; // [rsp+98h] [rbp-11h] BYREF
  _BYTE v29[16]; // [rsp+A8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v28, a1);
  v26 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)g_PolicyManager + 32LL);
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset((__int64 *)&v26);
  v11 = v10(g_PolicyManager, 0LL, &v26);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v25 = 0;
    v11 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, bool, _QWORD, int *))v26->DebugInfo[3].CriticalSection)(
            v26,
            a2 == 1,
            a5,
            &v25);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 2936LL;
      goto LABEL_5;
    }
    if ( !v25 )
    {
      v12 = -2005139338;
      goto LABEL_19;
    }
    pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
    v15 = g_AudioSrvWatchDogTimerInMs;
    v16 = AudioSrvTelemetryProvider::Instance();
    CWatchdogTimer<1>::CWatchdogTimer<1>(
      pv,
      *((struct _TP_TIMER **)v16 + 1),
      v15,
      (struct _TP_TIMER *)L"AudioServerCreateStream",
      pftDueTime);
    v24 = 0LL;
    v17 = RpcImpersonateClient(0LL);
    if ( v17 )
    {
      v12 = v17 | 0x80010000;
      v18 = 2951LL;
      v19 = v12;
    }
    else
    {
      wil::scope_exit__lambda_ef0738edc8b2d0d8545a516b48828a5c___((__int64)v23);
      ThreadLogonSessionStringSid = GetThreadLogonSessionStringSid(&v24);
      v12 = ThreadLogonSessionStringSid;
      if ( ThreadLogonSessionStringSid < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8F,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)ThreadLogonSessionStringSid);
        wil::details::lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___::_lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___((__int64)v23);
        goto LABEL_11;
      }
      wil::details::lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___::_lambda_call__lambda_ef0738edc8b2d0d8545a516b48828a5c___((__int64)v23);
      Stream = CVADServer::CreateStream((__int64)a1, v26, a2, a3, a4, (__int64)v24, a6);
      v12 = Stream;
      if ( Stream >= 0 )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v24);
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
        v12 = 0;
        goto LABEL_19;
      }
      if ( Stream == -2005139370 || (unsigned int)(Stream + 2005139335) <= 2 )
        goto LABEL_11;
      v19 = (unsigned int)Stream;
      v18 = 2968LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v19);
LABEL_11:
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v24);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    goto LABEL_19;
  }
  v13 = 2927LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v11);
LABEL_19:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
  EtwEventActivityIdControl(4LL, v29);
  return v12;
}
