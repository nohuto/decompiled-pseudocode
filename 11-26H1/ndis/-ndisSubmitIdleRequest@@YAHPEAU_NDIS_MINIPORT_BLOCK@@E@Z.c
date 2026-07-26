/*
 * XREFs of ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140006020
 * Callers:
 *     ?ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1400056E0 (-ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048990 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006280 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400063A0 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006400 (-ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x140006B10 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140007140 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x140008FF0 (McTemplateK0qq_EtwWriteTransfer.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400177D0 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14006D960 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisSubmitIdleRequest(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbp
  __int16 v4; // si
  __int64 result; // rax
  KIRQL v6; // r14
  char v7; // r12
  unsigned int v8; // esi
  int v9; // edx
  _UNKNOWN **v10; // rcx
  _UNKNOWN **v11; // rcx
  int v12; // ebx
  KIRQL v13; // al
  KIRQL v14; // di
  unsigned int v15; // ecx

  SelectiveSuspend = a1->SelectiveSuspend;
  v4 = a2;
  if ( a2 || (a1->PMHardwareCapabilities.Flags & 4) == 0 || ndisShouldEngageNicAutoPowerSaver(a1) )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x404) != 0 || !ndisReferenceMiniport(a1, MPREF_SS_IDLEREQ) )
    {
      v12 = *((_DWORD *)SelectiveSuspend + 126) >> 2;
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
      result = 3221291025LL;
      if ( (v12 & 1) != 0 )
        return 259LL;
    }
    else
    {
      v7 = v4;
      *((_DWORD *)SelectiveSuspend + 126) = *((_DWORD *)SelectiveSuspend + 126) ^ ((unsigned __int16)*((_DWORD *)SelectiveSuspend + 126) ^ (unsigned __int16)(v4 << 8)) & 0x100 | 4;
      KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 200));
      KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 224));
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
      ndisLogMiniportEvent(a1, NdisMEvent_SSIdleReq);
      v8 = a1->DriverHandle->IdleNotificationHandler(a1->MiniportAdapterContext, v4);
      KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 224), 0, 0);
      if ( v8 == 259 )
      {
        v10 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_qD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            15,
            14,
            (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
            (char)a1,
            v7);
        }
        if ( (byte_14011D041 & 8) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, &SSIdleDetected, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF);
        ndisClearIdleTimer(a1);
        return 259LL;
      }
      else
      {
        v11 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            15,
            13,
            (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
            v8,
            (char)a1);
        }
        if ( (byte_14011D041 & 8) != 0 )
          McTemplateK0qq_EtwWriteTransfer(
            v11,
            &SSIdleDeclined,
            &a1->InterfaceGuid,
            (a1->NetLuid.Value >> 24) & 0xFFFFFF,
            v8);
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
        v14 = v13;
        v15 = *((_DWORD *)SelectiveSuspend + 126) & 0xFFFFFEFF;
        *((_DWORD *)SelectiveSuspend + 126) = v15;
        if ( (v15 & 4) != 0 )
        {
          *((_DWORD *)SelectiveSuspend + 126) = v15 & 0xFFFFFFFB;
          KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 200), 0, 0);
          *((_DWORD *)SelectiveSuspend + 126) &= ~0x80u;
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v14);
          ndisDereferenceMiniport(a1, MPREF_SS_IDLEREQ);
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v13);
        }
        return v8;
      }
    }
  }
  else
  {
    ndisNicAutoPowerSaverControlIdleTimer(a1);
    return 3221291025LL;
  }
  return result;
}
