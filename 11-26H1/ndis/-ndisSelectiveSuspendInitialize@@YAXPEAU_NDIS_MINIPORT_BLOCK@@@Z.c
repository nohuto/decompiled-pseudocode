/*
 * XREFs of ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014427C
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisNblTrackerRegisterComponent @ 0x140054300 (NdisNblTrackerRegisterComponent.c)
 *     NdisInitializeTimer @ 0x140070C20 (NdisInitializeTimer.c)
 *     ?ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140077890 (-ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143EF0 (-ndisReadNicAutoPowerSaverTimeoutKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140143FF4 (-ndisReadSSTimeoutKeywords@@_Y2PAGE@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014418C (-ndisSelectiveSuspendFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSelectiveSuspendInitialize(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  struct _NDIS_SELECTIVE_SUSPEND *Pool2; // rax
  int v4; // edx
  struct _NDIS_SELECTIVE_SUSPEND *v5; // rdi
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rax

  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) != 0LL
    || (DriverHandle = a1->DriverHandle, DriverHandle->IdleNotificationHandler)
    && DriverHandle->CancelIdleNotificationHandler )
  {
    Pool2 = (struct _NDIS_SELECTIVE_SUSPEND *)ExAllocatePool2(64LL, 1616LL, 1936933966LL);
    a1->SelectiveSuspend = Pool2;
    v5 = Pool2;
    if ( Pool2 )
    {
      ndisNicAutoPowerSaverResetTelemetryData(a1);
      v6 = ExAllocatePool2(66LL, 120LL, 1936933966LL);
      *((_QWORD *)v5 + 75) = v6;
      if ( v6 )
      {
        *(_OWORD *)v6 = xmmword_1400F8CB0;
        *(_OWORD *)(v6 + 16) = xmmword_1400F8CC0;
        *(_OWORD *)(v6 + 32) = xmmword_1400F8CD0;
        *(_OWORD *)(v6 + 48) = xmmword_1400F8CE0;
        *(_OWORD *)(v6 + 64) = xmmword_1400F8CF0;
        *(_OWORD *)(v6 + 80) = xmmword_1400F8D00;
        *(_OWORD *)(v6 + 96) = xmmword_1400F8D10;
        *(_QWORD *)(v6 + 112) = 0LL;
        *((_QWORD *)v5 + 68) = 0LL;
        *((_QWORD *)v5 + 69) = (char *)v5 + 544;
        *((_QWORD *)v5 + 70) = 0LL;
        *((_QWORD *)v5 + 71) = (char *)v5 + 560;
        *((_QWORD *)v5 + 74) = (char *)v5 + 584;
        *((_QWORD *)v5 + 73) = (char *)v5 + 584;
        ndisReadSSTimeoutKeywords(a1);
        if ( (a1->PMHardwareCapabilities.Flags & 2) == 0 && (a1->PMAdminConfig.Value & 0xC000) != 0 )
          ndisReadNicAutoPowerSaverTimeoutKeywords(a1);
        KeInitializeSpinLock((PKSPIN_LOCK)v5);
        NdisInitializeTimer((PNDIS_TIMER)((char *)v5 + 16), (PNDIS_TIMER_FUNCTION)ndisSSIdleTimerDpc, a1);
        *((_QWORD *)v5 + 37) = a1;
        *((_QWORD *)v5 + 38) = ndisSSIdleTimerWorkItem;
        *((_QWORD *)v5 + 47) = a1;
        *((_QWORD *)v5 + 48) = ndisIdleCancelWorkItem;
        *((_QWORD *)v5 + 59) = ndisSetPowerResumeCompleteWorkItem;
        *((_QWORD *)v5 + 60) = (char *)v5 + 456;
        *((_QWORD *)v5 + 57) = 0LL;
        KeInitializeEvent((PRKEVENT)((char *)v5 + 152), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v5 + 200), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v5 + 248), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v5 + 176), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v5 + 224), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)((char *)v5 + 272), NotificationEvent, 1u);
        *((_QWORD *)v5 + 76) = NdisNblTrackerRegisterComponent(4, (__int64)a1, (__int64)a1->pAdapterInstanceName);
        *((_QWORD *)v5 + 77) = NdisNblTrackerRegisterComponent(5, (__int64)a1, (__int64)a1->pAdapterInstanceName);
        v8 = MEMORY[0xFFFFF78000000014];
        *((_DWORD *)v5 + 126) |= 0x200u;
        *((_DWORD *)v5 + 127) |= 0x100u;
        *((_QWORD *)v5 + 82) = v8;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v7,
            15,
            11,
            (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
            (char)a1);
        }
        ndisSelectiveSuspendFree(a1);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        15,
        10,
        (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
        (char)a1);
    }
  }
}
