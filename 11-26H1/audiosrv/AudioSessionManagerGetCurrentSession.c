/*
 * XREFs of AudioSessionManagerGetCurrentSession @ 0x18006B070
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerGetCurrentSession(_QWORD ***a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  struct _FILETIME v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r10
  struct _TP_TIMER *ThreadpoolTimer; // r10
  _QWORD **v11; // r15
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  _QWORD *v16; // rdx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v21; // rdx
  __int64 v22; // [rsp+50h] [rbp-31h] BYREF
  __int64 v23; // [rsp+58h] [rbp-29h] BYREF
  struct _FILETIME pftDueTime; // [rsp+60h] [rbp-21h] BYREF
  _QWORD pv[2]; // [rsp+68h] [rbp-19h] BYREF
  DWORD CurrentThreadId; // [rsp+78h] [rbp-9h]
  const wchar_t *v27; // [rsp+80h] [rbp-1h]
  struct _FILETIME v28; // [rsp+88h] [rbp+7h]
  char v29; // [rsp+90h] [rbp+Fh]
  __int64 v30; // [rsp+94h] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]
  int v32; // [rsp+E0h] [rbp+5Fh] BYREF
  __int64 v33; // [rsp+E8h] [rbp+67h]
  __int64 v34; // [rsp+F8h] [rbp+77h] BYREF

  v33 = a2;
  v7 = g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v9;
  CurrentThreadId = GetCurrentThreadId();
  v27 = L"AudioSessionManagerGetCurrentSession";
  v28 = v7;
  v29 = 0;
  v30 = 0LL;
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v8
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v8) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v8 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v8) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v8 / 3, 0);
    }
  }
  *a5 = 0LL;
  *a4 = 0LL;
  v11 = *a1;
  v12 = *(_QWORD *)g_PolicyManager;
  v34 = 0LL;
  v13 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(v12 + 32))(
          g_PolicyManager,
          0LL,
          &v34);
  v14 = v13;
  if ( v13 >= 0 )
  {
    lpVtbl = g_DeviceEnumerator->lpVtbl;
    v22 = 0LL;
    v16 = *v11 + 2;
    if ( (*v11)[5] > 7uLL )
      v16 = (_QWORD *)*v16;
    v17 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD *, __int64 *))lpVtbl->GetDevice)(
            g_DeviceEnumerator,
            v16,
            &v22);
    v14 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D4,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v17);
    }
    else
    {
      v23 = 0LL;
      v18 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v22)(
              v22,
              &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
              &v23);
      v14 = v18;
      if ( v18 < 0 )
      {
        v21 = 1495LL;
      }
      else
      {
        v32 = 0;
        v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 24LL))(v23, &v32);
        v14 = v18;
        if ( v18 >= 0 )
        {
          if ( g_ADGProcess )
            (*(__int64 (__fastcall **)(_QWORD *))(*v11[1] + 40LL))(v11[1]);
          (*(void (__fastcall **)(_QWORD *))(*v11[1] + 88LL))(v11[1]);
          v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*v11)[12] + 8LL))(
                  (*v11)[12],
                  v34,
                  v33);
          v14 = v19;
          if ( v19 >= 0 )
          {
            if ( v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            if ( v22 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            if ( v34 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
            v14 = 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x601,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v19);
            if ( v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            if ( v22 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            if ( v34 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          }
          goto LABEL_19;
        }
        v21 = 1498LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v18);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v22);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5D1,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)(unsigned int)v13);
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
LABEL_19:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v14;
}
