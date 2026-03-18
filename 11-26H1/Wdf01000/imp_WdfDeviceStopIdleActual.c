/*
 * XREFs of imp_WdfDeviceStopIdleActual @ 0x140010F50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x140007B28 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z @ 0x1400326D0 (-ProcessEventLocked@FxPowerIdleMachine@@IEAAXW4FxPowerIdleEvents@@@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400328C0 (WPP_IFR_SF_qqLL.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_dd @ 0x140055174 (WPP_IFR_SF_dd.c)
 *     ?ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1400573E0 (-ReleaseAndRestore@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x14005C350 (-StoreAndReferenceMemory@FxRequestContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x140061CB0 (-CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfDeviceStopIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        unsigned __int8 WaitForD0,
        void *Tag,
        int Line,
        char *File)
{
  unsigned __int8 v6; // r13
  WDFDEVICE__ *v7; // rsi
  __int64 v8; // rax
  _FX_DRIVER_GLOBALS **v9; // rbx
  _FX_DRIVER_GLOBALS *v10; // r14
  void (__fastcall *CallbackRoutine)(_KBUGCHECK_CALLBACK_REASON, _KBUGCHECK_REASON_CALLBACK_RECORD *, void *, unsigned int); // rcx
  unsigned int v12; // r12d
  void (__fastcall *v13)(_KBUGCHECK_CALLBACK_REASON, _KBUGCHECK_REASON_CALLBACK_RECORD *, void *, unsigned int); // rdi
  unsigned __int64 *v14; // r15
  KIRQL v15; // al
  char v16; // cl
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  FxPowerIdleStates _a3; // ebx
  __int64 v22; // r13
  __int64 v23; // rcx
  const void *_a1; // rdx
  char v25; // al
  void (__fastcall *v26)(FxRequestContext *__hidden, struct FxRequestBuffer *); // rax
  int v27; // ebx
  FxTagTracker *v28; // rcx
  _FX_DRIVER_GLOBALS *v29; // rcx
  KIRQL CurrentIrql; // al
  _FX_DRIVER_GLOBALS *v32; // rax
  unsigned __int8 v33; // dl
  unsigned int v34; // r8d
  unsigned __int16 v35; // r9
  __int64 v36; // r13
  _FX_DRIVER_GLOBALS *v37; // rcx
  __int64 v38; // r15
  KIRQL v39; // al
  char v40; // cl
  const void *v41; // r8
  _FX_DRIVER_GLOBALS *v42; // r11
  const void *v43; // r10
  const void *v44; // rdx
  _LIST_ENTRY *Flink; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  struct _KTHREAD *_a2; // [rsp+30h] [rbp-50h]
  struct _KTHREAD *_a2a; // [rsp+30h] [rbp-50h]
  struct _KTHREAD *_a2b; // [rsp+30h] [rbp-50h]
  KIRQL NewIrql; // [rsp+50h] [rbp-30h]
  _FX_DRIVER_GLOBALS **v51; // [rsp+58h] [rbp-28h] BYREF
  __int64 v52; // [rsp+60h] [rbp-20h]
  _FX_DRIVER_GLOBALS *v53; // [rsp+68h] [rbp-18h] BYREF
  __int16 v54; // [rsp+70h] [rbp-10h]
  __int16 v55; // [rsp+72h] [rbp-Eh]
  int v56; // [rsp+74h] [rbp-Ch]
  KIRQL v58; // [rsp+C8h] [rbp+48h]

  v6 = WaitForD0;
  v7 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v8) = 0;
  v9 = (_FX_DRIVER_GLOBALS **)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v8 = *(unsigned __int16 *)v9;
    v9 = (_FX_DRIVER_GLOBALS **)((char *)v9 - v8);
  }
  if ( *((_WORD *)v9 + 4) == 4098 )
  {
    v51 = v9;
  }
  else
  {
    v55 = v8;
    v51 = 0LL;
    v56 = 0;
    v32 = *v9;
    v53 = (_FX_DRIVER_GLOBALS *)&v51;
    v54 = 4098;
    if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, _FX_DRIVER_GLOBALS **))v32->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
           v9,
           &v53) < 0 )
    {
      WPP_IFR_SF_qDqD(v9[2], v33, v34, v35, traceGuid, v7, 0x1002u, v9, *((unsigned __int16 *)v9 + 4));
      FxVerifierBugCheckWorker(v9[2], WDF_INVALID_HANDLE, (unsigned __int64)v7, 0x1002uLL);
    }
    v9 = v51;
  }
  v10 = v9[2];
  v53 = v10;
  if ( v6 && v10->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v10, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(v10);
      return (unsigned int)-1073741808;
    }
    v9 = v51;
  }
  CallbackRoutine = v9[81][1].BugCheckCallbackRecord.CallbackRoutine;
  if ( CallbackRoutine )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)CallbackRoutine + 187, 12, 5);
    v12 = 0;
    v13 = v51[81][1].BugCheckCallbackRecord.CallbackRoutine;
    v14 = (unsigned __int64 *)((char *)v13 + 16);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 2);
    v16 = *((_BYTE *)v13 + 224);
    NewIrql = v15;
    if ( (v16 & 0x10) != 0 || (v16 & 0x20) == 0 )
    {
      v27 = -1073741101;
    }
    else
    {
      v17 = *((_DWORD *)v13 + 6);
      v52 = *((_QWORD *)v13 + 78);
      v12 = v17 + 1;
      v18 = *((unsigned __int8 *)v13 + 225);
      *((_DWORD *)v13 + 6) = v12;
      *((_DWORD *)v13 + v18 + 58) = 512;
      *((_BYTE *)v13 + 225) = (*((_BYTE *)v13 + 225) + 1) & 7;
      v19 = 0LL;
      v20 = *((int *)v13 + 57);
      while ( (unsigned int)v19 < FxPowerIdleMachine::m_StateTable[v20 - 1].TargetStatesCount )
      {
        if ( FxPowerIdleMachine::m_StateTable[v20 - 1].TargetStates[v19].PowerIdleEvent == PowerIdleEventIoIncrement )
        {
          _mm_lfence();
          _a3 = FxPowerIdleMachine::m_StateTable[v20 - 1].TargetStates[v19].PowerIdleState;
          if ( _a3 != FxIdleMax )
          {
            v22 = v52;
            do
            {
              v23 = *(_QWORD *)(v22 + 96);
              _a1 = (const void *)(v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !*(_WORD *)(v23 + 10) )
                _a1 = 0LL;
              WPP_IFR_SF_qqLL(
                *(_FX_DRIVER_GLOBALS **)(v22 + 16),
                4u,
                0x15u,
                0x11u,
                WPP_PowerIdleStateMachine_cpp_Traceguids,
                _a1,
                *(const void **)(v23 + 144),
                _a3,
                *((_DWORD *)v13 + 57));
              *((_DWORD *)v13 + *((unsigned __int8 *)v13 + 226) + 66) = _a3;
              v25 = *((_BYTE *)v13 + 226) + 1;
              *((_DWORD *)v13 + 57) = _a3;
              *((_BYTE *)v13 + 226) = v25 & 7;
              v26 = funcs_140011152[3 * _a3];
              if ( !v26 )
                break;
              _a3 = ((unsigned int (__fastcall *)(void (__fastcall *)(_KBUGCHECK_CALLBACK_REASON, _KBUGCHECK_REASON_CALLBACK_RECORD *, void *, unsigned int)))v26)(v13);
            }
            while ( _a3 != FxIdleMax );
            v7 = (WDFDEVICE__ *)Device;
            v14 = (unsigned __int64 *)((char *)v13 + 16);
            v10 = v53;
            v6 = WaitForD0;
          }
          break;
        }
        v19 = (unsigned int)(v19 + 1);
      }
      v27 = 0;
      if ( !KeReadStateEvent((PRKEVENT)v13 + 8) )
        v27 = 259;
    }
    KeReleaseSpinLock(v14, NewIrql);
    if ( v27 == 259 && v6 )
    {
      v36 = *((_QWORD *)v13 + 78);
      v37 = *(_FX_DRIVER_GLOBALS **)(v36 + 16);
      v38 = v36 + 96;
      if ( v37->FxVerboseOn )
      {
        _a2 = KeGetCurrentThread();
        v41 = (const void *)(*(_QWORD *)v38 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !*(_WORD *)(*(_QWORD *)v38 + 10LL) )
          v41 = 0LL;
        WPP_IFR_SF_qq(v37, 5u, 0xCu, 0xCu, WPP_PowerIdleStateMachine_cpp_Traceguids, v41, _a2);
      }
      FxCREvent::EnterCRAndWaitAndLeave((FxCREvent *)v13 + 6);
      v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13 + 2);
      v58 = v39;
      v40 = *((_BYTE *)v13 + 224) & 0x10;
      if ( v40 || (*((_BYTE *)v13 + 224) & 0x20) == 0 )
      {
        v42 = *(_FX_DRIVER_GLOBALS **)(v36 + 16);
        v27 = -1073741101;
        if ( v42->FxVerboseOn )
        {
          if ( v40 )
          {
            _a2a = KeGetCurrentThread();
            v43 = (const void *)(*(_QWORD *)v38 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*(_WORD *)(*(_QWORD *)v38 + 10LL) )
              v43 = 0LL;
            WPP_IFR_SF_qqd(v42, 5u, 0xCu, 0xDu, WPP_PowerIdleStateMachine_cpp_Traceguids, v43, _a2a, 0xC00002D3);
          }
          else
          {
            _a2b = KeGetCurrentThread();
            v44 = (const void *)(*(_QWORD *)v38 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*(_WORD *)(*(_QWORD *)v38 + 10LL) )
              v44 = 0LL;
            WPP_IFR_SF_qqd(v42, 5u, 0xCu, 0xEu, WPP_PowerIdleStateMachine_cpp_Traceguids, v44, _a2b, 0xC00002D3);
          }
        }
        --*((_DWORD *)v13 + 6);
        FxPowerIdleMachine::ProcessEventLocked((FxPowerIdleMachine *)v13, PowerIdleEventIoDecrement);
        v39 = v58;
      }
      else
      {
        v27 = 0;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v13 + 2, v39);
      v6 = WaitForD0;
    }
    v28 = (FxTagTracker *)*((_QWORD *)v13 + 4);
    if ( v28 && (!v27 || v27 == 259) )
      FxTagTracker::UpdateTagHistory(v28, Tag, Line, File, TagAddRef, v12);
    if ( v10->FxVerboseOn )
      WPP_IFR_SF_qdd(v10, 5u, 0x12u, 0x26u, WPP_FxDeviceApi_cpp_Traceguids, v7, v6, v27);
    if ( v27 >= 0 )
    {
      v29 = v51[81];
      if ( BYTE4(v29[2].FxPoolFrameworks.PagedHead.Blink) == 1
        && _InterlockedIncrement((volatile signed __int32 *)&v29[2].FxPoolFrameworks.PagedHead.Blink) == 1 )
      {
        Flink = v29[2].FxPoolFrameworks.PagedHead.Flink;
        if ( Flink )
        {
          if ( Flink[1].Flink )
            SleepstudyHelper_ComponentActive();
        }
      }
    }
  }
  else
  {
    v27 = -1073741436;
    WPP_IFR_SF_qd(v10, 2u, 0x12u, 0x25u, WPP_FxDeviceApi_cpp_Traceguids, v7, -1073741436);
  }
  return (unsigned int)v27;
}
