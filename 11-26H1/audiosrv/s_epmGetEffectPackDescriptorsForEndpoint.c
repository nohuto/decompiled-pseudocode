/*
 * XREFs of s_epmGetEffectPackDescriptorsForEndpoint @ 0x180030E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z @ 0x180030F50 (-GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z.c)
 */

__int64 __fastcall s_epmGetEffectPackDescriptorsForEndpoint(
        __int64 a1,
        const unsigned __int16 *a2,
        struct EffectPackDescriptor **a3,
        unsigned int *a4)
{
  struct _FILETIME v4; // rbx
  __int64 v6; // rdi
  CPolicyConfig *v9; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int EffectPackDescriptorsForEndpoint; // eax
  unsigned int v12; // ebx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-28h]
  const wchar_t *v17; // [rsp+40h] [rbp-20h]
  struct _FILETIME v18; // [rsp+48h] [rbp-18h]
  char v19; // [rsp+50h] [rbp-10h]
  __int64 v20; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v4 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v18 = v4;
  CurrentThreadId = GetCurrentThreadId();
  v17 = L"s_epmGetEffectPackDescriptorsForEndpoint";
  v19 = 0;
  v20 = 0LL;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v6
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v6) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v6 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v6) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v6 / 3, 0);
    }
  }
  EffectPackDescriptorsForEndpoint = CPolicyConfig::GetEffectPackDescriptorsForEndpoint(v9, a2, a3, a4);
  v12 = EffectPackDescriptorsForEndpoint;
  if ( EffectPackDescriptorsForEndpoint >= 0 )
    v12 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)EffectPackDescriptorsForEndpoint);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v12;
}
