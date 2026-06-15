/*
 * XREFs of AudioSessionManagerGetExistingSession @ 0x1800285A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180012F0C (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180012FDC (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180028850 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18002941C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerGetExistingSession(__int64 **a1, const unsigned __int16 *a2, _QWORD *a3)
{
  __int64 *v5; // r14
  struct _FILETIME v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  RPC_STATUS v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rax
  int AudioSession; // eax
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD, struct _FILETIME, int *); // rcx
  __int64 (__fastcall **v16)(_QWORD, _QWORD, _QWORD, struct _FILETIME, int *); // rax
  struct _FILETIME v17; // rbx
  int v18; // eax
  __int64 v19; // rax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-79h] BYREF
  unsigned int Pid; // [rsp+38h] [rbp-71h] BYREF
  int v23[2]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD pv[2]; // [rsp+48h] [rbp-61h] BYREF
  DWORD CurrentThreadId; // [rsp+58h] [rbp-51h]
  const wchar_t *v26; // [rsp+60h] [rbp-49h]
  struct _FILETIME v27; // [rsp+68h] [rbp-41h]
  char v28; // [rsp+70h] [rbp-39h]
  __int64 v29; // [rsp+74h] [rbp-35h]
  _BYTE v30[80]; // [rsp+80h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v5 = *a1;
  v6 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v8 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v8;
  CurrentThreadId = GetCurrentThreadId();
  v26 = L"AudioSessionManagerGetExistingSession";
  v27 = v6;
  v28 = 0;
  v29 = 0LL;
  if ( (unsigned int)v7 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v7
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v7) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v7 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v7) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v7 / 3, 0);
    }
  }
  *a3 = 0LL;
  Pid = 0;
  v10 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  v11 = v10 != 0 ? v10 | 0x80010000 : 0;
  if ( (v11 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x647,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)v11);
    goto LABEL_11;
  }
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v30);
  v12 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v30, a2);
  v11 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_14:
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v30);
    goto LABEL_11;
  }
  v13 = *v5;
  pftDueTime = 0LL;
  AudioSession = CAudioSessionManager::FindAudioSession(
                   *(CAudioSessionManager **)(v13 + 96),
                   (struct CAudioSessionInstanceId *)v30,
                   (struct CAudioSession **)&pftDueTime);
  v11 = AudioSession;
  if ( AudioSession < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)AudioSession);
    if ( pftDueTime )
      (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&pftDueTime + 16LL))(pftDueTime);
    goto LABEL_14;
  }
  v15 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, struct _FILETIME, int *))(*v5 + 96);
  v16 = *v15;
  *(_QWORD *)v23 = 0LL;
  v17 = pftDueTime;
  v18 = (*v16)(v15, Pid, 0LL, pftDueTime, v23);
  v11 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x653,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v18);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pftDueTime);
    goto LABEL_14;
  }
  v19 = *(_QWORD *)v23;
  *(_QWORD *)v23 = 0LL;
  *a3 = v19;
  if ( v17 )
    (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v17 + 16LL))(v17);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v30);
  v11 = 0;
LABEL_11:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v11;
}
