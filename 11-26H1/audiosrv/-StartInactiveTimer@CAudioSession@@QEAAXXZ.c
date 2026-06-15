/*
 * XREFs of ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x18001A94C
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019060 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180027B30 (-FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioS.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180041710 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_RecurringTask@@@Z @ 0x18001AD04 (-reset@-$unique_ptr@U_RecurringTask@@U-$default_delete@U_RecurringTask@@@std@@@std@@QEAAXPEAU_Re.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x18001BEB0 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001BF60 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??R?$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z @ 0x18001C238 (--R-$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAudioSession::StartInactiveTimer(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  __int64 v3; // rsi
  __int64 v4; // r12
  _QWORD *v5; // r14
  signed int v6; // ebx
  PTP_POOL Threadpool; // rax
  signed int v8; // eax
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int v10; // eax
  PTP_TIMER *v11; // rax
  PTP_TIMER *v12; // rdi
  HANDLE ProcessHeap; // rax
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  volatile signed __int32 *v16; // r14
  _BYTE *v17; // rcx
  _BYTE *v18; // rdx
  PTP_TIMER *v19; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v21; // rsi
  signed int v22; // eax
  _QWORD *v23; // rdx
  signed int LastError; // eax
  _QWORD v25[7]; // [rsp+28h] [rbp-49h] BYREF
  _QWORD *v26; // [rsp+60h] [rbp-11h]
  _BYTE v27[56]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE *v28; // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  struct _FILETIME pftDueTime; // [rsp+D8h] [rbp+67h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 496);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 496));
  v3 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
  v25[0] = off_180171768;
  v25[1] = this;
  v26 = v25;
  v4 = *((unsigned int *)this + 60);
  v5 = 0LL;
  v6 = 0;
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load(v3 + 80) )
    goto LABEL_31;
  if ( !*(_QWORD *)v3 )
  {
    Threadpool = CreateThreadpool(0LL);
    *(_QWORD *)v3 = Threadpool;
    if ( !Threadpool )
    {
      LastError = GetLastError();
      v6 = LastError;
      if ( LastError > 0 )
        v6 = (unsigned __int16)LastError | 0x80070000;
      if ( v6 < 0 )
        goto LABEL_31;
    }
    if ( !SetThreadpoolThreadMinimum(*(PTP_POOL *)v3, 1u) )
    {
      v8 = GetLastError();
      v6 = v8;
      if ( v8 > 0 )
        v6 = (unsigned __int16)v8 | 0x80070000;
      if ( v6 < 0 )
        goto LABEL_31;
    }
    ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
    *(_QWORD *)(v3 + 168) = ThreadpoolCleanupGroup;
    if ( !ThreadpoolCleanupGroup )
    {
      v10 = GetLastError();
      v6 = v10;
      if ( v10 > 0 )
        v6 = (unsigned __int16)v10 | 0x80070000;
      if ( v6 < 0 )
        goto LABEL_31;
    }
    SetThreadpoolThreadMaximum(*(PTP_POOL *)v3, 1u);
    *(_QWORD *)(v3 + 16) = *(_QWORD *)v3;
    *(_QWORD *)(v3 + 24) = *(_QWORD *)(v3 + 168);
    *(_QWORD *)(v3 + 32) = 0LL;
  }
  v11 = (PTP_TIMER *)operator new[](0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    *v11 = 0LL;
    v11[1] = 0LL;
    v11[2] = 0LL;
    v28 = 0LL;
    if ( v26 )
      v28 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v26)(v26, v27);
    v12[3] = (PTP_TIMER)v3;
    ProcessHeap = GetProcessHeap();
    v14 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
    v15 = v14;
    if ( v14 )
    {
      v14[2] = 1;
      v14[3] = 1;
      *(_QWORD *)v14 = &std::_Ref_count_obj2<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
      std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v14 + 4, v27);
    }
    else
    {
      v15 = 0LL;
    }
    v12[1] = (PTP_TIMER)(v15 + 4);
    v16 = (volatile signed __int32 *)v12[2];
    v12[2] = (PTP_TIMER)v15;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    v5 = v12[1];
    v6 = v5 == 0LL ? 0x8007000E : 0;
    v17 = v28;
    if ( v28 )
    {
      v18 = v27;
      LOBYTE(v18) = v28 != v27;
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v28 + 32LL))(v28, v18);
    }
    v19 = v12;
    if ( v5 )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(CSerialWorkQueue::TimerCallback, v12, (PTP_CALLBACK_ENVIRON)(v3 + 8));
      v21 = ThreadpoolTimer;
      v5 = 0LL;
      if ( ThreadpoolTimer )
      {
        v6 = 0;
        *v12 = ThreadpoolTimer;
LABEL_30:
        pftDueTime = (struct _FILETIME)(-10000 * v4);
        SetThreadpoolTimer(v21, &pftDueTime, 0, 0);
        std::unique_ptr<_RecurringTask>::reset((char *)this + 536, v12);
        goto LABEL_31;
      }
      v22 = GetLastError();
      v6 = v22;
      if ( v22 > 0 )
        v6 = (unsigned __int16)v22 | 0x80070000;
      *v12 = 0LL;
      v19 = v12;
      if ( v6 >= 0 )
        goto LABEL_30;
    }
    std::default_delete<_RecurringTask>::operator()(v17, v19);
  }
  else
  {
    v6 = -2147024882;
  }
LABEL_31:
  if ( v26 )
  {
    v23 = v25;
    LOBYTE(v23) = v26 != v25;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v26 + 32LL))(v26, v23);
    v26 = v5;
  }
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xDCD,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v6,
      v25[0]);
  if ( v2 )
    LeaveCriticalSection(v2);
}
