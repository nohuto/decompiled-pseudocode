/*
 * XREFs of ?QueueRecurringItem@CSerialWorkQueue@@QEAAJKKV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_RecurringTask@@U?$default_delete@U_RecurringTask@@@std@@@3@@Z @ 0x18001B6E0
 * Callers:
 *     ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004052C (-StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?OnStreamGroupDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUIStreamGroupProxy@@@Z @ 0x18007D2E0 (-OnStreamGroupDestroyed@CBtAudioResourceManagerBase@@UEAAXW4AUDIO_DIRECTION@@PEAUIStreamGroupPro.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800C6FB0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     _lambda_f9af5205c481f305144dca2dd7f10086_::operator() @ 0x1800E0788 (_lambda_f9af5205c481f305144dca2dd7f10086_--operator().c)
 *     ?OnStreamStateChanged@CBtAudioResourceManagerBase@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800E4C10 (-OnStreamStateChanged@CBtAudioResourceManagerBase@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamSta.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1801095B0 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     _lambda_c4f66075b064f94c83b6e478b87a895c_::operator() @ 0x180111044 (_lambda_c4f66075b064f94c83b6e478b87a895c_--operator().c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z @ 0x180119E90 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJ_N@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x18001BEB0 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001BF60 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??R?$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z @ 0x18001C238 (--R-$default_delete@U_RecurringTask@@@std@@QEBAXPEAU_RecurringTask@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 CSerialWorkQueue::QueueRecurringItem(__int64 a1, unsigned int a2, __int64 a3, ...)
{
  struct _FILETIME v3; // r15
  __int64 v4; // r13
  signed int v6; // r14d
  PTP_POOL Threadpool; // rax
  signed int v8; // eax
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int v10; // eax
  PTP_TIMER *v11; // rax
  _BYTE *v12; // rcx
  PTP_TIMER *v13; // rdi
  PTP_TIMER *v14; // rbx
  __int64 (__fastcall ***v15)(_QWORD, _BYTE *); // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v17; // rax
  _DWORD *v18; // rsi
  volatile signed __int32 *v19; // r14
  PTP_TIMER v20; // rsi
  _BYTE *v21; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v23; // rsi
  signed int LastError; // eax
  PTP_TIMER *v25; // rsi
  volatile signed __int32 *v26; // rdi
  volatile signed __int32 *v27; // rdi
  __int64 *v28; // rcx
  __int64 v29; // rdx
  signed int v31; // eax
  _BYTE v32[56]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE *v33; // [rsp+68h] [rbp-40h]
  struct _FILETIME pftDueTime; // [rsp+C8h] [rbp+20h] BYREF
  va_list pftDueTimea; // [rsp+C8h] [rbp+20h]
  PTP_TIMER **v36; // [rsp+D0h] [rbp+28h]
  va_list va1; // [rsp+D8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(pftDueTimea, a3);
  pftDueTime = va_arg(va1, struct _FILETIME);
  v36 = va_arg(va1, PTP_TIMER **);
  v3 = pftDueTime;
  v4 = a2;
  v6 = 0;
  if ( (unsigned __int8)std::_Atomic_storage<bool,1>::load(a1 + 80) )
    goto LABEL_48;
  if ( *(_QWORD *)a1 )
  {
LABEL_13:
    v11 = (PTP_TIMER *)operator new[](0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v11;
    if ( v11 )
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      v11[2] = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    v14 = v13;
    if ( v13 )
    {
      v33 = 0LL;
      v15 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(*(_QWORD *)&v3 + 56LL);
      if ( v15 )
        v33 = (_BYTE *)(**v15)(v15, v32);
      v13[3] = (PTP_TIMER)a1;
      ProcessHeap = GetProcessHeap();
      v17 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v18 = v17;
      if ( v17 )
      {
        *(_OWORD *)v17 = 0LL;
        v17[2] = 1;
        v17[3] = 1;
        *(_QWORD *)v17 = &std::_Ref_count_obj2<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
        std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v17 + 4, v32);
      }
      else
      {
        v18 = 0LL;
      }
      v13[1] = (PTP_TIMER)(v18 + 4);
      v19 = (volatile signed __int32 *)v13[2];
      v13[2] = (PTP_TIMER)v18;
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        }
      }
      v20 = v13[1];
      v6 = -2147024882;
      if ( v20 )
        v6 = 0;
      v12 = v33;
      if ( v33 )
      {
        v21 = v32;
        LOBYTE(v21) = v33 != v32;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v33 + 32LL))(v33, v21);
      }
      if ( !v20 )
        goto LABEL_46;
      ThreadpoolTimer = CreateThreadpoolTimer(CSerialWorkQueue::TimerCallback, v13, (PTP_CALLBACK_ENVIRON)(a1 + 8));
      v23 = ThreadpoolTimer;
      if ( ThreadpoolTimer )
      {
        v6 = 0;
        *v13 = ThreadpoolTimer;
      }
      else
      {
        LastError = GetLastError();
        v6 = LastError;
        if ( LastError > 0 )
          v6 = (unsigned __int16)LastError | 0x80070000;
        *v13 = 0LL;
        if ( v6 < 0 )
          goto LABEL_46;
      }
      pftDueTime = (struct _FILETIME)(-10000 * v4);
      SetThreadpoolTimer(v23, (PFILETIME)pftDueTimea, 0, 0);
      v14 = 0LL;
      v25 = *v36;
      *v36 = v13;
      if ( v25 )
      {
        if ( *v25 )
        {
          SetThreadpoolTimer(*v25, 0LL, 0, 0);
          WaitForThreadpoolTimerCallbacks(*v25, 1);
          CloseThreadpoolTimer(*v25);
        }
        v25[1] = 0LL;
        v26 = (volatile signed __int32 *)v25[2];
        v25[2] = 0LL;
        if ( v26 )
        {
          if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          }
        }
        v27 = (volatile signed __int32 *)v25[2];
        if ( v27 )
        {
          if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
            if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          }
        }
        operator delete(v25, (const struct std::nothrow_t *)0x20);
      }
    }
    else
    {
      v6 = -2147024882;
    }
LABEL_46:
    if ( v14 )
      std::default_delete<_RecurringTask>::operator()(v12, v14);
    goto LABEL_48;
  }
  Threadpool = CreateThreadpool(0LL);
  *(_QWORD *)a1 = Threadpool;
  if ( Threadpool )
    goto LABEL_11;
  v31 = GetLastError();
  v6 = v31;
  if ( v31 > 0 )
    v6 = (unsigned __int16)v31 | 0x80070000;
  if ( v6 >= 0 )
  {
LABEL_11:
    if ( SetThreadpoolThreadMinimum(*(PTP_POOL *)a1, 1u) )
      goto LABEL_60;
    v8 = GetLastError();
    v6 = v8;
    if ( v8 > 0 )
      v6 = (unsigned __int16)v8 | 0x80070000;
    if ( v6 >= 0 )
    {
LABEL_60:
      ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
      *(_QWORD *)(a1 + 168) = ThreadpoolCleanupGroup;
      if ( ThreadpoolCleanupGroup )
        goto LABEL_12;
      v10 = GetLastError();
      v6 = v10;
      if ( v10 > 0 )
        v6 = (unsigned __int16)v10 | 0x80070000;
      if ( v6 >= 0 )
      {
LABEL_12:
        SetThreadpoolThreadMaximum(*(PTP_POOL *)a1, 1u);
        *(_QWORD *)(a1 + 16) = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 168);
        *(_QWORD *)(a1 + 32) = 0LL;
        goto LABEL_13;
      }
    }
  }
LABEL_48:
  v28 = *(__int64 **)(*(_QWORD *)&v3 + 56LL);
  if ( v28 )
  {
    v29 = *v28;
    LOBYTE(v29) = v28 != *(__int64 **)&v3;
    (*(void (__fastcall **)(__int64 *, __int64))(*v28 + 32))(v28, v29);
    *(_QWORD *)(*(_QWORD *)&v3 + 56LL) = 0LL;
  }
  return (unsigned int)v6;
}
