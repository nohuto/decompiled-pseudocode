/*
 * XREFs of ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1400790C0
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1401565F0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x14017C1A0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x14008FC60 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 *     ?ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DFD28 (-ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_N.c)
 */

__int64 __fastcall ndisIovGetNicSwitchList(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_NIC_SWITCH_CAPABILITIES *a2,
        struct _NDIS_SRIOV_CAPABILITIES *a3,
        struct _NDIS_NIC_SWITCH_INFO_ARRAY **a4)
{
  unsigned int v4; // r13d
  unsigned int v6; // edi
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v8; // r12
  KIRQL v10; // r14
  struct _NDIS_NIC_SWITCH_INFO_ARRAY *Pool2; // rax
  struct _NDIS_NIC_SWITCH_INFO *v12; // rbp
  _LIST_ENTRY *i; // r15

  v4 = 0;
  v6 = 0;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      26,
      94,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  v10 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->MiniportThread = KeGetCurrentThread();
  *a4 = 0LL;
  if ( ndisIovNicSwitchWithoutIovSupported(v8) || a3 && v8 && (a3->SriovCapabilities & 3) == 3 )
  {
    Pool2 = (struct _NDIS_NIC_SWITCH_INFO_ARRAY *)ExAllocatePool2(64LL, 572 * a1->NumSwitches + 16, 1869169742LL);
    *a4 = Pool2;
    if ( Pool2 )
    {
      Pool2->Header.Type = 0x80;
      (*a4)->Header.Revision = 1;
      (*a4)->Header.Size = 16;
      (*a4)->FirstElementOffset = 16;
      (*a4)->NumElements = a1->NumSwitches;
      (*a4)->ElementSize = 572;
      v12 = (struct _NDIS_NIC_SWITCH_INFO *)(&(*a4)->Header.Type + (*a4)->FirstElementOffset);
      for ( i = a1->NicSwitchList.Flink; i != &a1->NicSwitchList; ++v4 )
      {
        if ( v4 >= a1->NumSwitches )
          break;
        ndisIovCopyNicSwitchInfo(v12, (struct _NDIS_NIC_SWITCH_BLOCK *)i, v8);
        i = i->Flink;
        v12 = (struct _NDIS_NIC_SWITCH_INFO *)((char *)v12 + 572);
      }
    }
    else
    {
      v6 = -1073741670;
    }
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x5Fu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1,
      v6);
  return v6;
}
