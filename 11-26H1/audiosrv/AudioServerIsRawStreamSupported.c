/*
 * XREFs of AudioServerIsRawStreamSupported @ 0x18002EF50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18007A858 (-AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerIsRawStreamSupported(
        __int64 a1,
        __int64 a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        _DWORD *a4)
{
  struct _FILETIME v4; // rbx
  __int64 v5; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v10; // ebx
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-19h] BYREF
  EffectPack *v13[2]; // [rsp+40h] [rbp-11h] BYREF
  __int64 v14; // [rsp+50h] [rbp-1h]
  _QWORD pv[2]; // [rsp+58h] [rbp+7h] BYREF
  DWORD CurrentThreadId; // [rsp+68h] [rbp+17h]
  const wchar_t *v17; // [rsp+70h] [rbp+1Fh]
  struct _FILETIME v18; // [rsp+78h] [rbp+27h]
  char v19; // [rsp+80h] [rbp+2Fh]
  __int64 v20; // [rsp+84h] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v4 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  *(_OWORD *)v13 = 0LL;
  v14 = 0LL;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v18 = v4;
  CurrentThreadId = GetCurrentThreadId();
  v17 = L"AudioServerIsRawStreamSupported";
  v19 = 0;
  v20 = 0LL;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v5
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v5) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v5 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v5) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  if ( (unsigned int)a3 <= eConnectorCount )
  {
    v10 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, EffectPack **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                   + 40LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            0LL,
            0LL,
            v13);
    if ( v10 >= 0 )
    {
      *a4 = EffectPack::AllowRawStreamCreation(v13[1], a3);
      goto LABEL_7;
    }
  }
  else
  {
    v10 = -2147024809;
  }
  AudSrvTraceLoggingErrorHelper("AudioServerIsRawStreamSupported", 4369, v10);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1112,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v10);
LABEL_7:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v13);
  return (unsigned int)v10;
}
