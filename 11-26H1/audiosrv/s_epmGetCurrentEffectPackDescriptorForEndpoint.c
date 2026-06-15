/*
 * XREFs of s_epmGetCurrentEffectPackDescriptorForEndpoint @ 0x18006EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z @ 0x18006EBFC (-GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z.c)
 */

__int64 __fastcall s_epmGetCurrentEffectPackDescriptorForEndpoint(
        __int64 a1,
        const unsigned __int16 *a2,
        struct EffectPackDescriptor *a3)
{
  struct _FILETIME v3; // rbx
  __int64 v5; // rdi
  CPolicyConfig *v7; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int CurrentEffectPackDescriptorForEndpoint; // eax
  unsigned int v10; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-30h]
  const wchar_t *v14; // [rsp+38h] [rbp-28h]
  struct _FILETIME v15; // [rsp+40h] [rbp-20h]
  char v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+4Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct _FILETIME pftDueTime; // [rsp+98h] [rbp+38h] BYREF

  v3 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v15 = v3;
  CurrentThreadId = GetCurrentThreadId();
  v14 = L"s_epmGetCurrentEffectPackDescriptorForEndpoint";
  v16 = 0;
  v17 = 0LL;
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
  CurrentEffectPackDescriptorForEndpoint = CPolicyConfig::GetCurrentEffectPackDescriptorForEndpoint(v7, a2, a3);
  v10 = CurrentEffectPackDescriptorForEndpoint;
  if ( CurrentEffectPackDescriptorForEndpoint >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB16,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)CurrentEffectPackDescriptorForEndpoint);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v10;
}
