/*
 * XREFs of AudioVolumeAddMasterVolumeNotification @ 0x180065780
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioVolumeAddMasterVolumeNotification(__int64 *a1)
{
  struct _FILETIME v1; // rbx
  __int64 v3; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  __int64 v5; // rdi
  RPC_STATUS v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  _QWORD pv[2]; // [rsp+20h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-30h]
  const wchar_t *v14; // [rsp+38h] [rbp-28h]
  struct _FILETIME v15; // [rsp+40h] [rbp-20h]
  char v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+4Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int Pid; // [rsp+80h] [rbp+20h] BYREF
  struct _FILETIME pftDueTime; // [rsp+88h] [rbp+28h] BYREF

  v1 = g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v15 = v1;
  CurrentThreadId = GetCurrentThreadId();
  v14 = L"AudioVolumeAddMasterVolumeNotification";
  v16 = 0;
  v17 = 0LL;
  if ( (unsigned int)v3 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v3
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v3) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v3 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v3) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v3 / 3, 0);
    }
  }
  v5 = *a1;
  Pid = 0;
  v6 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  v7 = v6 != 0 ? v6 | 0x80010000 : 0;
  if ( (v7 & 0x80000000) != 0 )
  {
    v9 = v7;
    v10 = 425LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)v9);
    goto LABEL_9;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 248LL))(v5, Pid);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 426LL;
    goto LABEL_8;
  }
  v7 = 0;
LABEL_9:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v7;
}
