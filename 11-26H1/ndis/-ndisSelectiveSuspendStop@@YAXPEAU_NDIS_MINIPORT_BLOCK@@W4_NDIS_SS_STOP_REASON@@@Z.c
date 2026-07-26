/*
 * XREFs of ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140088080
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048990 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400824B0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1400834E0 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z @ 0x14015C4B0 (-ndisMDisableOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEA_N@Z.c)
 *     ?ndisMStopPowerSavingsForBindings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016E070 (-ndisMStopPowerSavingsForBindings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140185800 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140008810 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140009300 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140044F30 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048230 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x140050880 (-ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisSelectiveSuspendStop(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char v5; // r13
  char v6; // bp
  int v7; // r15d
  KIRQL v8; // r14
  bool IsPowerReferencedForSelectiveSuspend; // r12
  char *v10; // rcx
  unsigned int v11; // eax
  char *v12; // rdx
  __int64 v13; // rdx
  int v14; // eax
  KIRQL v15; // dl
  KIRQL v16; // al

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = 0;
  v6 = 0;
  v7 = a1->Flags & 0x80;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  IsPowerReferencedForSelectiveSuspend = ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, v7 != 0);
  if ( v7
    && !*((_DWORD *)SelectiveSuspend + 128)
    && !*((_DWORD *)SelectiveSuspend + 129)
    && !*((_DWORD *)SelectiveSuspend + 132)
    && !*((_DWORD *)SelectiveSuspend + 133)
    && !*((_DWORD *)SelectiveSuspend + 130)
    && !*((_DWORD *)SelectiveSuspend + 131)
    && !*((_DWORD *)SelectiveSuspend + 144)
    && !*((_DWORD *)SelectiveSuspend + 127) )
  {
    v6 = 1;
    KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 272));
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0x22u,
      (struct _GUID *)&WPP_63e371e5a248373aa5c809d99c379eef_Traceguids,
      (char)a1,
      a2);
  switch ( a2 )
  {
    case 1u:
      *((_DWORD *)SelectiveSuspend + 127) |= 1u;
      v10 = (char *)SelectiveSuspend + 736;
      goto LABEL_25;
    case 2u:
      *((_DWORD *)SelectiveSuspend + 127) |= 2u;
      v10 = (char *)SelectiveSuspend + 736;
      goto LABEL_25;
    case 3u:
      *((_DWORD *)SelectiveSuspend + 127) |= 4u;
      v10 = (char *)SelectiveSuspend + 736;
      *((_DWORD *)SelectiveSuspend + 126) |= 0x400u;
      goto LABEL_25;
    case 4u:
      *((_DWORD *)SelectiveSuspend + 127) |= 8u;
      v10 = (char *)SelectiveSuspend + 736;
      goto LABEL_25;
    case 5u:
      *((_DWORD *)SelectiveSuspend + 127) |= 0x10u;
      v10 = (char *)SelectiveSuspend + 736;
      goto LABEL_25;
    case 6u:
      *((_DWORD *)SelectiveSuspend + 127) |= 0x20u;
      v10 = (char *)SelectiveSuspend + 736;
      goto LABEL_25;
    case 7u:
      *((_DWORD *)SelectiveSuspend + 127) |= 0x40u;
      v10 = (char *)SelectiveSuspend + 736;
      goto LABEL_25;
    case 8u:
      ++*((_DWORD *)SelectiveSuspend + 134);
      v10 = (char *)SelectiveSuspend + 736;
      *((_DWORD *)SelectiveSuspend + 127) |= 0x80u;
      goto LABEL_25;
    case 0xBu:
      *((_DWORD *)SelectiveSuspend + 127) |= 0x400u;
      v10 = (char *)SelectiveSuspend + 736;
      goto LABEL_25;
    case 0xDu:
      ++*((_DWORD *)SelectiveSuspend + 135);
      v10 = (char *)SelectiveSuspend + 736;
      *((_DWORD *)SelectiveSuspend + 127) |= 0x1000u;
      goto LABEL_25;
    default:
      v10 = (char *)SelectiveSuspend + 736;
      if ( !a2 )
        goto LABEL_37;
LABEL_25:
      if ( IsPowerReferencedForSelectiveSuspend )
      {
        *((_DWORD *)SelectiveSuspend + 159) = a2;
        *((_DWORD *)SelectiveSuspend + 160) = 0;
      }
      else
      {
        *((_DWORD *)SelectiveSuspend + 157) = a2;
        *((_DWORD *)SelectiveSuspend + 158) = 0;
      }
      if ( a2 == 7 )
        goto LABEL_37;
      if ( a2 <= 0xF )
      {
        v11 = a2;
      }
      else
      {
        if ( a2 - 33 > 0x20 )
          goto LABEL_37;
        v11 = a2 - 17;
      }
      if ( v11 <= 0x30 )
      {
        v12 = &v10[16 * v11];
        *((_DWORD *)v12 + 1) = a2;
        if ( IsPowerReferencedForSelectiveSuspend )
          ++*((_WORD *)v12 + 1);
        else
          ++*(_WORD *)v12;
      }
LABEL_37:
      if ( !v7 )
      {
        v14 = *((_DWORD *)SelectiveSuspend + 126);
        if ( (v14 & 1) != 0 )
        {
          KeCancelTimer((PKTIMER)((char *)SelectiveSuspend + 16));
          *((_DWORD *)SelectiveSuspend + 126) &= ~1u;
          v5 = 1;
          v14 = *((_DWORD *)SelectiveSuspend + 126);
        }
        if ( (v14 & 0x200) == 0 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
          ndisCancelWaitWake(a1);
          if ( v5 )
          {
            KeFlushQueuedDpcs();
            ndisWaitForKernelObject((char *)SelectiveSuspend + 152);
          }
          ndisCancelIdleRequestSync(a1, a2, 0, 1);
          v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
          *((_DWORD *)SelectiveSuspend + 126) |= 0x200u;
          v15 = v16;
          goto LABEL_54;
        }
LABEL_50:
        v15 = v8;
LABEL_54:
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v15);
        return;
      }
      if ( !v6 && KeReadStateEvent((PRKEVENT)((char *)SelectiveSuspend + 272)) )
        goto LABEL_50;
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
      if ( a2 == 6 )
      {
LABEL_43:
        ndisWdfAcquirePowerReferenceHelper(a1, 0, 0);
        ndisWdfSelectiveSuspendResumeOperations(a1, v13, 1);
        return;
      }
      if ( a2 == 5 )
      {
        if ( !v6 )
          return;
        goto LABEL_43;
      }
      if ( v6 )
        ndisWdfAcquirePowerReferenceHelper(a1, 1, 0);
      else
        KeWaitForSingleObject((char *)SelectiveSuspend + 272, Executive, 0, 0, 0LL);
      return;
  }
}
