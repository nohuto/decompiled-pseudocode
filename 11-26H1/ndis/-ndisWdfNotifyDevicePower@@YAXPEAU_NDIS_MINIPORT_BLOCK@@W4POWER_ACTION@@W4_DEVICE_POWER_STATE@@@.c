/*
 * XREFs of ?ndisWdfNotifyDevicePower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x140004C70
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x140005240 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000AC50 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x140044940 (WPP_RECORDER_SF_LqZ.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x14004CB00 (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140057E90 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ @ 0x14005F6A0 (-ProcessEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXXZ.c)
 *     ?ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineException@3@GG@Z @ 0x1400783E0 (-ReportExceptionWithLockHeld@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAAXW4MachineExcep.c)
 *     ndisWdfDevicePowerOn @ 0x140082F10 (ndisWdfDevicePowerOn.c)
 *     ?AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z @ 0x14008C430 (-AddEventToEventQueue@StateMachineEngineImpl@StateMachineEngine@SmFx@@AEAA_NG@Z.c)
 *     ndisWdfDevicePowerDown @ 0x1400B3010 (ndisWdfDevicePowerDown.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140167360 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisWdfNotifyDevicePower(struct _NDIS_MINIPORT_BLOCK *a1, int a2, enum _NDIS_DEVICE_POWER_STATE a3)
{
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *PhysicalPerformanceCounters; // rax
  struct SmFx::StateMachineEngine::StateMachineEngineImpl *m_impl; // rbx
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // si
  int v10; // eax
  unsigned __int16 v11; // r10
  bool v12; // bp
  void (__fastcall *v13)(_QWORD, __int64); // rax
  __int64 v14; // rdx
  unsigned __int8 v15; // r8
  __int64 v16; // rdx
  unsigned __int8 v17; // cl
  char v18; // cl
  bool v19; // al
  unsigned __int8 v20; // cl
  char v21; // r9
  unsigned __int8 v22; // al
  unsigned __int8 v23; // dl
  __int16 v24; // r8
  __int64 v25; // rax
  void (__fastcall *v26)(_QWORD, _QWORD); // rax
  int v27; // eax
  unsigned __int8 v28; // r8
  __int64 v29; // rdx
  unsigned __int8 v30; // cl
  char v31; // cl
  unsigned __int8 v32; // cl
  char v33; // r9
  unsigned __int8 v34; // dl
  __int16 v35; // r8
  __int64 v36; // rax
  void (__fastcall *v37)(_QWORD, _QWORD); // rax

  if ( (a1->Flags & 0x80u) == 0 )
    NT_ASSERT("(MINIPORT_TEST_FLAG(Miniport, 0x00000080))");
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      22,
      (struct _GUID *)&WPP_d81ae1bd0d0e3cce0560c16a859ea6b0_Traceguids,
      a3,
      (char)a1,
      (__int64)a1->pAdapterInstanceName);
  if ( (byte_14011D041 & 8) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _DWORD))McTemplateK0jqxqq_EtwWriteTransfer)(
      a1,
      &MiniportPowerDeviceState,
      &a1->InterfaceGuid,
      &a1->InterfaceGuid,
      a1->IfIndex,
      (_NET_LUID_LH)a1->NetLuid.Value,
      1,
      a3);
  PhysicalPerformanceCounters = a1->PhysicalPerformanceCounters;
  if ( PhysicalPerformanceCounters )
  {
    if ( a3 > NdisDeviceStateD0 )
      ++PhysicalPerformanceCounters->LowPowerTransitions;
    a1->PhysicalPerformanceCounters->DevicePowerState = a3 - 1;
  }
  if ( a3 == NdisDeviceStateD0 )
  {
    if ( a2 )
    {
      ndisWdfDevicePowerOn(a1);
      return;
    }
    if ( ndisIdleCondition != NdisIdleConditionL2ConnectedOnly )
      return;
    m_impl = a1->IdleSm.__ptr_.__value_->m_engine.m_impl;
    v8 = (KSPIN_LOCK *)((char *)m_impl + 1000);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)m_impl + 125);
    *((_BYTE *)m_impl + 1009) = v9;
    v27 = *((_DWORD *)m_impl + 248);
    v11 = 2;
    if ( v27 == 5 )
    {
      if ( *((_WORD *)m_impl + 440) == 2 )
      {
        v13 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)m_impl + 116);
        if ( v13 )
        {
          v14 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 8LL);
          goto LABEL_59;
        }
LABEL_60:
        *((_WORD *)m_impl + 440) = 0;
LABEL_85:
        *((_BYTE *)m_impl + 983) = v9;
        *((_BYTE *)m_impl + 982) = 0;
        if ( v9 >= 2u )
          *((_DWORD *)m_impl + 246) = KeGetPcr()->Prcb.Number;
        else
          *((_QWORD *)m_impl + 123) = KeGetCurrentThread();
        SmFx::StateMachineEngine::StateMachineEngineImpl::ProcessEventQueue(m_impl);
        return;
      }
      v12 = 0;
    }
    else
    {
      v12 = v27 == 1;
    }
    switch ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 10LL) )
    {
      case 1:
        goto LABEL_82;
      case 2:
        v32 = *((_BYTE *)m_impl + 978);
        v33 = 0;
        v22 = *((_BYTE *)m_impl + 979);
        v34 = v32;
        if ( v32 != v22 )
        {
          do
          {
            v35 = *((_WORD *)m_impl + v32 + 416);
            if ( v35 == 2 )
            {
              v33 = 1;
            }
            else
            {
              v36 = v34;
              v34 = (v34 + 1) & 0xF;
              *((_WORD *)m_impl + v36 + 416) = v35;
            }
            v22 = *((_BYTE *)m_impl + 979);
            v32 = (v32 + 1) & 0xF;
          }
          while ( v32 != v22 );
          if ( v33 )
            goto LABEL_38;
        }
        v31 = (v22 + 1) & 0xF;
        if ( v31 == *((_BYTE *)m_impl + 978) )
        {
LABEL_69:
          SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(
            m_impl,
            RequiresDedicatedThread,
            2u,
            0);
          v19 = 0;
          goto LABEL_83;
        }
        *((_WORD *)m_impl + v22 + 416) = 2;
        break;
      case 3:
        v28 = *((_BYTE *)m_impl + 978);
        v29 = *((unsigned __int8 *)m_impl + 979);
        v30 = v28;
        if ( v28 != (_BYTE)v29 )
        {
          while ( *((_WORD *)m_impl + v30 + 416) != 2 )
          {
            v30 = (v30 + 1) & 0xF;
            if ( v30 == (_BYTE)v29 )
              goto LABEL_68;
          }
          goto LABEL_25;
        }
LABEL_68:
        v31 = (v29 + 1) & 0xF;
        if ( v31 == v28 )
          goto LABEL_69;
        *((_WORD *)m_impl + v29 + 416) = 2;
        break;
      default:
        goto LABEL_25;
    }
    v37 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)m_impl + 116);
    *((_BYTE *)m_impl + 979) = v31;
    if ( v37 )
      v37(*((_QWORD *)m_impl + 112), *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 8LL));
LABEL_81:
    v19 = 1;
    goto LABEL_83;
  }
  if ( a3 != NdisDeviceStateD1 && (unsigned int)(a3 - 3) > 1 )
    return;
  if ( !a2 )
  {
    if ( ndisIdleCondition != NdisIdleConditionL2ConnectedOnly )
      return;
    m_impl = a1->IdleSm.__ptr_.__value_->m_engine.m_impl;
    v8 = (KSPIN_LOCK *)((char *)m_impl + 1000);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)m_impl + 125);
    *((_BYTE *)m_impl + 1009) = v9;
    v10 = *((_DWORD *)m_impl + 248);
    v11 = 3;
    if ( v10 != 5 )
    {
      v12 = v10 == 1;
LABEL_22:
      if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 14LL) != 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 14LL) != 2 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 14LL) != 3 )
          {
LABEL_25:
            KeReleaseSpinLock(v8, v9);
            return;
          }
          v15 = *((_BYTE *)m_impl + 978);
          v16 = *((unsigned __int8 *)m_impl + 979);
          v17 = v15;
          if ( v15 != (_BYTE)v16 )
          {
            while ( *((_WORD *)m_impl + v17 + 416) != 3 )
            {
              v17 = (v17 + 1) & 0xF;
              if ( v17 == (_BYTE)v16 )
                goto LABEL_29;
            }
            goto LABEL_25;
          }
LABEL_29:
          v18 = (v16 + 1) & 0xF;
          if ( v18 == v15 )
            goto LABEL_30;
          *((_WORD *)m_impl + v16 + 416) = 3;
          goto LABEL_42;
        }
        v20 = *((_BYTE *)m_impl + 978);
        v21 = 0;
        v22 = *((_BYTE *)m_impl + 979);
        v23 = v20;
        if ( v20 == v22 )
          goto LABEL_40;
        do
        {
          v24 = *((_WORD *)m_impl + v20 + 416);
          if ( v24 == 3 )
          {
            v21 = 1;
          }
          else
          {
            v25 = v23;
            v23 = (v23 + 1) & 0xF;
            *((_WORD *)m_impl + v25 + 416) = v24;
          }
          v22 = *((_BYTE *)m_impl + 979);
          v20 = (v20 + 1) & 0xF;
        }
        while ( v20 != v22 );
        if ( !v21 )
        {
LABEL_40:
          v18 = (v22 + 1) & 0xF;
          if ( v18 == *((_BYTE *)m_impl + 978) )
          {
LABEL_30:
            SmFx::StateMachineEngine::StateMachineEngineImpl::ReportExceptionWithLockHeld(
              m_impl,
              RequiresDedicatedThread,
              3u,
              0);
            v19 = 0;
            goto LABEL_83;
          }
          *((_WORD *)m_impl + v22 + 416) = 3;
LABEL_42:
          v26 = (void (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)m_impl + 116);
          *((_BYTE *)m_impl + 979) = v18;
          if ( v26 )
          {
            v26(*((_QWORD *)m_impl + 112), *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 12LL));
            v19 = 1;
            goto LABEL_83;
          }
          goto LABEL_81;
        }
LABEL_38:
        *((_WORD *)m_impl + ((v22 - 1) & 0xF) + 416) = v11;
        goto LABEL_39;
      }
LABEL_82:
      v19 = SmFx::StateMachineEngine::StateMachineEngineImpl::AddEventToEventQueue(m_impl, v11);
LABEL_83:
      if ( !v19 )
        return;
      if ( v12 )
        goto LABEL_85;
LABEL_39:
      KeReleaseSpinLock(v8, *((_BYTE *)v8 + 9));
      return;
    }
    if ( *((_WORD *)m_impl + 440) != 3 )
    {
      v12 = 0;
      goto LABEL_22;
    }
    v13 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)m_impl + 116);
    if ( v13 )
    {
      v14 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)m_impl + 111) + 16LL) + 12LL);
LABEL_59:
      v13(*((_QWORD *)m_impl + 112), v14);
      goto LABEL_60;
    }
    goto LABEL_60;
  }
  if ( !ndisIsMiniportStarted(a1) )
    NT_ASSERT("ndisIsMiniportStarted(Miniport)");
  if ( a1->PnPDeviceState != NdisPnPDeviceStarted )
    NT_ASSERT("Miniport->PnPDeviceState == NdisPnPDeviceStarted");
  if ( (a1->PnPFlags & 0x800) != 0
    || (KeClearEvent(&a1->OpenReadyEvent.Event), ndisPrepForLowPowerCommon(a1, a3), (a1->PnPFlags & 0x800) != 0) )
  {
    ndisSetDeviceInterfaceState(a1, 0);
    _InterlockedOr((volatile signed __int32 *)&a1->InterlockedFlags, 0x10u);
  }
  ndisWdfDevicePowerDown(a1, a3);
}
