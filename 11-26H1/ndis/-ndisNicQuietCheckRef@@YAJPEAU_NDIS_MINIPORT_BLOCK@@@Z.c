/*
 * XREFs of ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140048990
 * Callers:
 *     ndisDispatchRequest @ 0x14000C5E0 (ndisDispatchRequest.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140048630 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140006020 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x140006B10 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x140065EA0 (-ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140088080 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008C240 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline @ 0x140091624 (Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C67A4 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1401645B0 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

__int64 __fastcall ndisNicQuietCheckRef(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v3; // bp
  __int64 v4; // rcx
  unsigned int v5; // esi
  struct _NDIS_SELECTIVE_SUSPEND **p_SelectiveSuspend; // r14
  bool v7; // zf
  _DEVICE_POWER_STATE DeviceWake; // eax
  KIRQL v9; // al
  int v10; // eax
  char v11; // bp
  KIRQL v12; // al
  KIRQL v13; // bl
  int v15; // eax
  __int64 v16; // rcx

  AoAc = a1->AoAc;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( !*((_DWORD *)AoAc + 13) && !*((_DWORD *)AoAc + 95) && !*((_DWORD *)AoAc + 94) )
  {
    *((_DWORD *)AoAc + 94) = 1;
    KeClearEvent((PRKEVENT)((char *)AoAc + 392));
    KeClearEvent((PRKEVENT)((char *)AoAc + 416));
    v4 = *((_QWORD *)AoAc + 104);
    v5 = 0;
    if ( v4 )
    {
      *((_QWORD *)AoAc + 102) += MEMORY[0xFFFFF78000000008] - v4;
      *((_QWORD *)AoAc + 104) = 0LL;
    }
    if ( (*((_DWORD *)AoAc + 97) & 1) != 0 && a1->LastWakeReason == 65534 )
    {
      ++*((_DWORD *)AoAc + 213);
      ndisUpdateCsSpuriousWakeStats(AoAc, (enum _NDIS_PM_WAKE_REASON_TYPE)65534);
    }
    *((_DWORD *)AoAc + 97) = 0;
    *((_DWORD *)AoAc + 271) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v3);
    p_SelectiveSuspend = &a1->SelectiveSuspend;
    if ( (unsigned int)Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline() )
    {
      v7 = *p_SelectiveSuspend == 0LL;
      if ( !*p_SelectiveSuspend )
        goto LABEL_13;
      if ( (a1->Flags & 0x80u) != 0 )
      {
        ndisSelectiveSuspendStopWdf(a1, 7LL);
        goto LABEL_12;
      }
    }
    else
    {
      v7 = *p_SelectiveSuspend == 0LL;
      if ( !*p_SelectiveSuspend )
      {
LABEL_13:
        if ( !v7
          && (a1->PnPFlags & 0x60) == 0x60
          && ((DeviceWake = a1->DeviceCaps.DeviceWake, DeviceWake == PowerDeviceD1)
           || (unsigned int)(DeviceWake - 3) <= 1) )
        {
          v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
          *((_BYTE *)AoAc + 384) = 0;
          KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v9);
          v10 = ndisSubmitIdleRequest(a1, 1u);
          v11 = v10;
          if ( v10 != 259 )
          {
            NdisUnexpectedAoAcError(a1, 3u, 0);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Lq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0xEu,
                0x1Cu,
                (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
                v11,
                a1);
            v5 = -1073741823;
            goto LABEL_25;
          }
        }
        else
        {
          v5 = ndisRequestNicQuiet(a1, 0);
          if ( v5 )
          {
LABEL_25:
            v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
            *((_DWORD *)AoAc + 94) = 4;
            v13 = v12;
            KeSetEvent((PRKEVENT)((char *)AoAc + 392), 0, 0);
            KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v13);
          }
        }
        KeSetEvent((PRKEVENT)((char *)AoAc + 416), 0, 0);
        return v5;
      }
    }
    ndisSelectiveSuspendStop(a1, 7LL);
LABEL_12:
    v7 = *p_SelectiveSuspend == 0LL;
    goto LABEL_13;
  }
  v15 = *((_DWORD *)AoAc + 94);
  if ( v15 == 1 || v15 == 2 )
  {
    v16 = *((_QWORD *)AoAc + 105);
    if ( v16 )
    {
      *((_QWORD *)AoAc + 103) += MEMORY[0xFFFFF78000000008] - v16;
      *((_QWORD *)AoAc + 105) = 0LL;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v3);
  return 0LL;
}
