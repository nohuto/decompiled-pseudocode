/*
 * XREFs of PolicyConfigGetDeviceFormatForConnector @ 0x18010D430
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     MIDL_user_allocate @ 0x180031380 (MIDL_user_allocate.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006C618 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormatForConnector(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5)
{
  unsigned int v8; // ebx
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v10; // edi
  struct AudioSrvTelemetryProvider *v11; // rax
  __int64 v12; // rax
  __int64 (__fastcall *v13)(CPolicyConfig *, __int64, _QWORD, _QWORD, int *); // rax
  __int64 v14; // rdx
  void *v15; // rax
  void *Src; // [rsp+38h] [rbp-21h] BYREF
  void **p_Src; // [rsp+40h] [rbp-19h] BYREF
  int v19[2]; // [rsp+48h] [rbp-11h] BYREF
  char v20; // [rsp+50h] [rbp-9h]
  struct _TP_TIMER *pv[8]; // [rsp+58h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]

  if ( a3 <= 4 )
  {
    pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
    v10 = g_AudioSrvWatchDogTimerInMs;
    Src = 0LL;
    v11 = AudioSrvTelemetryProvider::Instance();
    CWatchdogTimer<1>::CWatchdogTimer<1>(
      pv,
      *((struct _TP_TIMER **)v11 + 1),
      v10,
      (struct _TP_TIMER *)L"PolicyConfigGetDeviceFormatForConnector",
      pftDueTime);
    *a5 = 0LL;
    v12 = *(_QWORD *)g_PolicyConfig;
    p_Src = &Src;
    *(_QWORD *)v19 = 0LL;
    v13 = *(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, _QWORD, int *))(v12 + 304);
    v20 = 1;
    v8 = v13(g_PolicyConfig, a2, a3, a4, v19);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&p_Src);
    if ( (v8 & 0x80000000) == 0 )
    {
      v15 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
      *a5 = v15;
      if ( v15 )
      {
        memcpy_0(v15, Src, *((unsigned __int16 *)Src + 8) + 18LL);
        v8 = 0;
        goto LABEL_9;
      }
      v8 = -2147024882;
      v14 = 2310LL;
    }
    else
    {
      v14 = 2303LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v8);
LABEL_9:
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &Src,
      0LL);
    return v8;
  }
  v8 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8F8,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x80070057LL);
  return v8;
}
