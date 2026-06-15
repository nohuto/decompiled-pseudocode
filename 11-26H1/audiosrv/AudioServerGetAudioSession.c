/*
 * XREFs of AudioServerGetAudioSession @ 0x180051680
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x1800519BC (-AddClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x1800519EC (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1800CC908 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerGetAudioSession(__int64 a1, CServerAudioSessionControl **a2)
{
  GUID v4; // xmm0
  struct _FILETIME v5; // rbx
  CServerAudioSessionControl *v6; // r15
  __int64 v7; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v9; // ebx
  CServerAudioSessionControl **v10; // rsi
  __int64 v11; // r8
  struct _FILETIME pftDueTime[2]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD pv[2]; // [rsp+40h] [rbp-29h] BYREF
  DWORD CurrentThreadId; // [rsp+50h] [rbp-19h]
  const wchar_t *v16; // [rsp+58h] [rbp-11h]
  struct _FILETIME v17; // [rsp+60h] [rbp-9h]
  char v18; // [rsp+68h] [rbp-1h]
  __int64 v19; // [rsp+6Ch] [rbp+3h]
  GUID v20; // [rsp+78h] [rbp+Fh]
  GUID v21; // [rsp+88h] [rbp+1Fh] BYREF

  if ( a1 )
    v4 = *(GUID *)(a1 + 256);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v4;
  v20 = v4;
  v21 = v4;
  EtwEventActivityIdControl(4LL, &v21);
  v5 = g_AudioHealthMonitor;
  v6 = 0LL;
  v7 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v17 = v5;
  CurrentThreadId = GetCurrentThreadId();
  v16 = L"AudioServerGetAudioSession";
  v18 = 0;
  v19 = 0LL;
  if ( (unsigned int)v7 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                                * v7
                                                                                * (__int128)0x5555555555555555LL) >> 64)
                                                           - 10000 * v7) >> 63)
                                       + ((__int64)(((unsigned __int128)(10000 * v7 * (__int128)0x5555555555555555LL) >> 64)
                                                  - 10000 * v7) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v7 / 3, 0);
    }
  }
  v9 = 0;
  if ( !*(_DWORD *)(a1 + 160) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_55a927f0784e38de47faa537a644ca17_Traceguids);
    }
    v9 = -2004287487;
    goto LABEL_31;
  }
  v10 = (CServerAudioSessionControl **)(a1 + 136);
  if ( !*(_QWORD *)(a1 + 136) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
    if ( !*v10 )
    {
      LOBYTE(v11) = 1;
      v9 = (***(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64, _QWORD, __int64))(a1 + 128))(
             *(_QWORD *)(a1 + 128),
             *(unsigned int *)(a1 + 40),
             v11,
             *(_QWORD *)(a1 + 144),
             a1 + 136);
    }
    if ( a1 != -200 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
    if ( v9 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          15LL,
          &WPP_55a927f0784e38de47faa537a644ca17_Traceguids,
          (unsigned int)v9);
      }
      goto LABEL_17;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_55a927f0784e38de47faa537a644ca17_Traceguids, *v10);
    }
  }
  if ( HasTooManyReferences((struct IUnknown *)(((unsigned __int64)*v10 + 8) & -(__int64)(*v10 != 0LL))) )
  {
    v9 = -2147024882;
    goto LABEL_35;
  }
  v6 = *v10;
  CServerAudioSessionControl::AddClientReference(*v10);
LABEL_17:
  if ( v9 < 0 )
  {
LABEL_35:
    AudSrvTraceLoggingErrorHelper("CVADServer::get_AudioSession", 1321, v9);
LABEL_31:
    AudSrvTraceLoggingErrorHelper("AudioServerGetAudioSession", 2739, v9);
    goto LABEL_20;
  }
  if ( !v9 )
    *a2 = v6;
LABEL_20:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v21);
  return (unsigned int)v9;
}
