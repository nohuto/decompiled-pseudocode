/*
 * XREFs of ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1400463F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x140006B10 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x140044F30 (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x140045DE0 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x140046D40 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x140047EA0 (-ndisRequestDevicePowerD0@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008C240 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140156F90 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisAoAcWakeWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 AoAc; // rdi
  KIRQL v4; // al
  bool v5; // zf
  KIRQL v6; // si
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  char v10; // di
  _DEVICE_POWER_STATE DeviceWake; // eax
  int v12; // [rsp+30h] [rbp-18h]

  AoAc = (__int64)a2->AoAc;
  if ( a2->SelectiveSuspend )
  {
    if ( (a2->PnPFlags & 0x60) == 0x60 )
    {
      DeviceWake = a2->DeviceCaps.DeviceWake;
      if ( DeviceWake == PowerDeviceD1 || (unsigned int)(DeviceWake - 3) <= 1 )
      {
        ndisWaitForKernelObject((void *)(AoAc + 416));
        ndisCancelIdleRequestSync(a2, 7, 0, 0);
      }
    }
  }
  ndisWaitForKernelObject((void *)(AoAc + 392));
  ndisUpdateMiniportCsTrafficStatistics(a2, 2LL);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v5 = *(_DWORD *)(AoAc + 376) == 2;
  v6 = v4;
  *(_BYTE *)(AoAc + 288) = 0;
  if ( v5 )
  {
    *(_DWORD *)(AoAc + 376) = 3;
    KeClearEvent(&a2->PowerD0CompleteEvent);
    *(_DWORD *)(AoAc + 64) = 3;
    v7 = MEMORY[0xFFFFF78000000014];
    ++*(_DWORD *)(AoAc + 808);
    *(_QWORD *)(AoAc + 456) = v7;
    *(_BYTE *)(AoAc + 464) = 1;
    v8 = MEMORY[0xFFFFF78000000008];
    v5 = *(_BYTE *)(AoAc + 1081) == 0;
    *(_QWORD *)(AoAc + 832) = MEMORY[0xFFFFF78000000008];
    if ( v5 )
      v8 = 0LL;
    v5 = *(_WORD *)(AoAc + 290) == 20;
    *(_QWORD *)(AoAc + 840) = v8;
    if ( v5 )
      ++*(_DWORD *)(AoAc + 848);
    ndisAoAcActiveRefIncrement(AoAc, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *(_DWORD *)(AoAc + 52);
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x24u,
        (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
        (char)a2,
        v12);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v6);
    v9 = ndisRequestDevicePowerD0(a2, (enum _NDIS_MINIPORT_EVENT)*(_WORD *)(AoAc + 290));
    v10 = v9;
    if ( v9 != 259 )
    {
      NdisUnexpectedAoAcError(a2, 7u, v9);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x25u,
          (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
          v10,
          a2);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v4);
  }
  ndisDereferenceMiniport(a2, 4u);
}
