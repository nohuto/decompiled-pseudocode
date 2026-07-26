/*
 * XREFs of ndisRegisterScatterGatherDmaForMiniport @ 0x1400CAA68
 * Callers:
 *     NdisMRegisterScatterGatherDma @ 0x1400CB1E0 (NdisMRegisterScatterGatherDma.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@Z @ 0x1400CA45C (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@EEKK@.c)
 */

__int64 __fastcall ndisRegisterScatterGatherDmaForMiniport(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        _NDIS_SG_DMA_BLOCK **a3)
{
  _DEVICE_OBJECT *PhysicalDeviceObject; // rsi
  unsigned int v7; // ecx
  unsigned int v8; // esi
  _NDIS_SG_DMA_BLOCK *MiniportSGDmaBlock; // rax
  __int64 v11; // [rsp+30h] [rbp-28h]

  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Du,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      (char)a1,
      a2);
  v7 = 2;
  if ( (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x32u)
    && (*(_BYTE *)(a2 + 4) & 2) != 0 )
  {
    v7 = 3;
  }
  if ( *(_BYTE *)(a2 + 1) >= 2u && *(_QWORD *)(a2 + 40) )
    PhysicalDeviceObject = *(_DEVICE_OBJECT **)(a2 + 40);
  v8 = ndisMInitializeScatterGatherDmaInternal(
         a1,
         PhysicalDeviceObject,
         *(_DWORD *)(a2 + 4) & 1,
         (*(_DWORD *)(a2 + 4) & 4) != 0,
         v7,
         *(_DWORD *)(a2 + 8));
  if ( !v8 )
  {
    _InterlockedAnd((volatile signed __int32 *)&a1->Flags, 0xFFFFFFBF);
    MiniportSGDmaBlock = a1->MiniportSGDmaBlock;
    MiniportSGDmaBlock->ProcessSGListHandler = *(void (__fastcall **)(_DEVICE_OBJECT *, void *, _SCATTER_GATHER_LIST *, void *))(a2 + 16);
    MiniportSGDmaBlock->SharedMemAllocateCompleteHandler = *(void (__fastcall **)(void *, void *, _LARGE_INTEGER *, unsigned int, void *))(a2 + 24);
    MiniportSGDmaBlock->Flags = *(_DWORD *)(a2 + 4);
    *a3 = MiniportSGDmaBlock;
    *(_DWORD *)(a2 + 32) = MiniportSGDmaBlock->ScatterGatherListSize;
    _InterlockedOr((volatile signed __int32 *)&a1->Flags, 0x200u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = v8;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x1Fu,
      (struct _GUID *)&WPP_407ea9eeeedc372ae5fce7cbec7f7f91_Traceguids,
      (char)a1,
      v11);
  }
  return v8;
}
