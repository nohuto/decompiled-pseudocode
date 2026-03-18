/*
 * XREFs of ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x140047BC8 (rimDoProcessAnyPointerDeviceInput.c)
 *     ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x140048F20 (-OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x140059980 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x14005B780 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x14005F200 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 *     NtUserInjectGenericHidInput @ 0x14005F280 (NtUserInjectGenericHidInput.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x140060460 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x140060B24 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     InvokeMouseCursorPositionCallout @ 0x140064640 (InvokeMouseCursorPositionCallout.c)
 *     ?ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z @ 0x140066A10 (-ProcessTouchpadInput@CTouchProcessor@@QEAAXPEAUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x140070610 (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x140095B10 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14009C8D4 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     NtMITDispatchCompletion @ 0x14009D540 (NtMITDispatchCompletion.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x14009DA80 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     rimInputApc @ 0x14009DFA0 (rimInputApc.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14009F170 (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1400CFC60 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1400E5180 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     UserKSTWait @ 0x1400F0898 (UserKSTWait.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x140118E90 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1401220B0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ @ 0x140128850 (-OnAsyncWorkItemNotification@CBaseInput@@AEAAJXZ.c)
 *     HandleMITWakeSignal @ 0x14012BBF8 (HandleMITWakeSignal.c)
 *     ?ProcessMouseQueue@CPTPProcessor@@SAXXZ @ 0x140149060 (-ProcessMouseQueue@CPTPProcessor@@SAXXZ.c)
 *     NtUserDownlevelTouchpad @ 0x140161B60 (NtUserDownlevelTouchpad.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x140162848 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14016B110 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ @ 0x140174560 (-OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x140186F40 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     NtUserInjectMouseInput @ 0x14018E9E0 (NtUserInjectMouseInput.c)
 *     ?OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ @ 0x1401B0910 (-OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ.c)
 *     NtMITSynthesizeMouseInput @ 0x1401E1680 (NtMITSynthesizeMouseInput.c)
 *     NtMITSynthesizeTouchInput @ 0x1401E1820 (NtMITSynthesizeTouchInput.c)
 *     NtUserInjectDeviceInput @ 0x1401E5960 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1401E6330 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectPointerInput @ 0x1401E6D30 (NtUserInjectPointerInput.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x140219600 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x140219660 (-OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1402196B0 (-OnPTPMarshalNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x140219840 (-OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ.c)
 *     ?UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x140224C2C (-UserModeCallout@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x140016910 (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x14008BEF4 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void ***__fastcall InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        void ***this,
        const char *a2,
        const struct InputTraceLogging::ThreadLockedPerfRegion *a3)
{
  __int64 v3; // rdi
  _QWORD *CurrentThreadWin32Thread; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 UserSessionState; // rax
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  __int64 *v16; // rax
  const GUID *v18; // r8
  const GUID *v19; // r9
  void *v20; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  *this = 0LL;
  if ( (unsigned int)dword_1402A9E40 > 6 && (qword_1402A9E50 & 1) != 0 && (qword_1402A9E58 & 1) == qword_1402A9E58 )
  {
    CurrentThreadWin32Thread = (_QWORD *)PsGetCurrentThreadWin32Thread(this, a2);
    if ( CurrentThreadWin32Thread )
    {
      if ( *CurrentThreadWin32Thread )
      {
        UserSessionState = W32GetUserSessionState(v9, v8, v10);
        v12 = Win32AllocateFromPagedLookasideListImpl(*(char **)(UserSessionState + 19376));
        *this = (void **)v12;
        if ( v12 )
        {
          *(_QWORD *)v12 = a2;
          (*this)[5] = 0LL;
          if ( a3 && *(_QWORD *)a3 )
          {
            *(_OWORD *)(*this + 3) = *(_OWORD *)(*(_QWORD *)a3 + 8LL);
            (*this)[5] = *this + 3;
          }
          EtwActivityIdControl(3u, (LPGUID)(*this + 1));
          if ( (unsigned int)dword_1402A9E40 > 6
            && (qword_1402A9E50 & 1) != 0
            && (qword_1402A9E58 & 1) == qword_1402A9E58 )
          {
            v18 = (const GUID *)(*this + 1);
            v19 = (const GUID *)(*this)[5];
            v20 = **this;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
              (__int64)&dword_1402A9E40,
              byte_140283167,
              v18,
              v19,
              &v20);
          }
          v15 = *this + 6;
          v16 = (__int64 *)PsGetCurrentThreadWin32Thread(v14, v13);
          if ( v16 )
            v3 = *v16;
          *v15 = *(_QWORD *)(v3 + 376);
          *(_QWORD *)(v3 + 376) = v15;
          v15[2] = _lambda_d164783eb83be554e1610dcbf87b8416_::_lambda_invoker_cdecl_;
          v15[1] = this;
        }
      }
    }
  }
  return this;
}
