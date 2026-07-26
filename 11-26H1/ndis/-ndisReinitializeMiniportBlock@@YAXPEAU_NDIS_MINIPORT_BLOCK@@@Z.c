/*
 * XREFs of ?ndisReinitializeMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401736D0
 * Callers:
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14007B620 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x14009B2C4 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisOpenULongRef@@YAXPEAU_ULONG_REFERENCE@@@Z @ 0x1400C8D5C (-ndisOpenULongRef@@YAXPEAU_ULONG_REFERENCE@@@Z.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140181AB0 (-ndisMInitializeMiniportBlockFront@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 */

void __fastcall ndisReinitializeMiniportBlock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int v1; // esi
  void *MiniportAdapterContext; // rbp
  KIRQL v4; // al
  volatile signed __int32 *p_Flags; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // r13d
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  _NDIS_MINIPORT_STATS *BottomIfStats; // rcx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  KIRQL NewIrql; // [rsp+70h] [rbp+8h]
  USHORT Size; // [rsp+78h] [rbp+10h]

  v1 = 0;
  MiniportAdapterContext = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      100,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  p_Flags = (volatile signed __int32 *)&a1->Flags;
  v6 = a1->PnPFlags & 0x8613000;
  v7 = a1->FilterPnPFlags & 0x200;
  NewIrql = v4;
  v8 = a1->Flags & 0x40000000;
  v9 = a1->InfoFlags & 0x4000;
  Size = a1->Header.Size;
  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) != 0LL )
  {
    MiniportAdapterContext = a1->MiniportAdapterContext;
    v1 = a1->MacOptions & 8;
  }
  memset(&a1->Header + 1, 0, 0xE58uLL);
  ndisMInitializeMiniportBlockFront(a1, Size);
  DriverHandle = a1->DriverHandle;
  a1->PnPFlags = v6;
  a1->FilterPnPFlags = v7;
  *p_Flags = v8;
  *(_QWORD *)&a1->SyncFlags = 0LL;
  a1->InfoFlags = v9;
  if ( (DriverHandle->Flags & 0x40) != 0 )
  {
    _InterlockedOr(p_Flags, 0x80u);
    a1->MacOptions = v1;
    a1->MiniportAdapterContext = MiniportAdapterContext;
  }
  if ( (a1->DriverHandle->Flags & 1) != 0 )
    _InterlockedOr(p_Flags, 0x8000u);
  BottomIfStats = a1->BottomIfStats;
  if ( BottomIfStats )
    memset(BottomIfStats, 0, 112LL * ndisMaxNumberOfProcessors);
  Offload = a1->Offload;
  if ( Offload )
    memset(Offload, 0, sizeof(_NDIS_MINIPORT_OFFLOAD));
  KeReleaseSpinLock(&ndisMiniportListLock, NewIrql);
  ndisOpenULongRef(&a1->Ref.SpinLock);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      101,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1);
}
