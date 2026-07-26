/*
 * XREFs of ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140087E90
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x140005240 (NdisWdfMiniportSetPower.c)
 *     NdisWdfPnpPowerEventHandler @ 0x140005350 (NdisWdfPnpPowerEventHandler.c)
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400452E0 (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140045330 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x140046620 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisMStartOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x14015C440 (-ndisMStartOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140008FD0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400C6A00 (-ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisSelectiveSuspendClearStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  int v4; // r14d
  KIRQL v6; // bp
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax

  SelectiveSuspend = a1->SelectiveSuspend;
  v4 = a1->Flags & 0x80;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0x24u,
      (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
      (char)a1,
      a2);
  switch ( a2 )
  {
    case 1:
      *((_DWORD *)SelectiveSuspend + 127) &= ~1u;
      break;
    case 4:
      *((_DWORD *)SelectiveSuspend + 127) &= ~8u;
      break;
    case 6:
      *((_DWORD *)SelectiveSuspend + 127) &= ~0x20u;
      break;
    case 7:
      *((_DWORD *)SelectiveSuspend + 127) &= ~0x40u;
      break;
    case 8:
      if ( (*((_DWORD *)SelectiveSuspend + 134))-- == 1 )
        *((_DWORD *)SelectiveSuspend + 127) &= ~0x80u;
      break;
    case 9:
      *((_DWORD *)SelectiveSuspend + 127) &= ~0x100u;
      break;
    case 11:
      *((_DWORD *)SelectiveSuspend + 127) &= ~0x400u;
      break;
    case 13:
      v8 = *((_DWORD *)SelectiveSuspend + 127);
      if ( (v8 & 0x1000) == 0 )
        NT_ASSERT("SS->StopFlags.BindChanges");
      v9 = *((_DWORD *)SelectiveSuspend + 135);
      if ( v9 <= 0 )
        NT_ASSERT("SS->PendingBindChangesCount > 0");
      v10 = v9 - 1;
      *((_DWORD *)SelectiveSuspend + 135) = v10;
      if ( !v10 )
        *((_DWORD *)SelectiveSuspend + 127) = v8 & 0xFFFFEFFF;
      break;
    default:
      break;
  }
  if ( v4 )
  {
    if ( !*((_DWORD *)SelectiveSuspend + 128)
      && !*((_DWORD *)SelectiveSuspend + 129)
      && !*((_DWORD *)SelectiveSuspend + 132)
      && !*((_DWORD *)SelectiveSuspend + 133)
      && !*((_DWORD *)SelectiveSuspend + 130)
      && !*((_DWORD *)SelectiveSuspend + 131)
      && !*((_DWORD *)SelectiveSuspend + 144)
      && !*((_DWORD *)SelectiveSuspend + 127) )
    {
      CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
      CxBlockFromMiniport->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
    }
    goto LABEL_28;
  }
  if ( *((_DWORD *)SelectiveSuspend + 127) )
  {
LABEL_28:
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
    return;
  }
  *((_DWORD *)SelectiveSuspend + 126) &= ~0x200u;
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
  ndisSetIdleTimer(a1);
}
