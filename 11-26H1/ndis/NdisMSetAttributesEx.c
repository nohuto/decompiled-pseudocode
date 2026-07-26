/*
 * XREFs of NdisMSetAttributesEx @ 0x140182970
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x140080DC0 (NdisMSetMiniportAttributes.c)
 *     NdisMSetAttributes @ 0x1400A2C40 (NdisMSetAttributes.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14000BC50 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     NdisInitializeTimer @ 0x140070C20 (NdisInitializeTimer.c)
 *     ?ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401826A0 (-ndisSetMiniportHandlers@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __stdcall NdisMSetAttributesEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportAdapterContext,
        UINT CheckForHangTimeInSeconds,
        ULONG AttributeFlags,
        NDIS_INTERFACE_TYPE AdapterType)
{
  NDIS_HANDLE v7; // rbp
  KIRQL v9; // r15
  __int64 i; // rdx
  UINT v11; // eax
  int v12; // eax
  KIRQL v13; // bl
  int v14; // edx

  v7 = MiniportAdapterContext;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MiniportAdapterContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportAdapterContext,
      1,
      100,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)MiniportAdapterHandle);
  }
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)MiniportAdapterHandle + 30) & 0x80u) != 0LL
    || (mem::ReadNoFence<unsigned long,void>((unsigned int *)MiniportAdapterHandle + 30) & 0x100) != 0 )
  {
    if ( v7 && *((NDIS_HANDLE *)MiniportAdapterHandle + 3) != v7 )
      NT_ASSERT("MiniportAdapterContext == 0 || Miniport->MiniportAdapterContext == MiniportAdapterContext");
  }
  else
  {
    *((_QWORD *)MiniportAdapterHandle + 3) = v7;
  }
  *((_DWORD *)MiniportAdapterHandle + 454) = AttributeFlags;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  ndisSetMiniportHandlers((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle);
  for ( i = *((_QWORD *)MiniportAdapterHandle + 7); i; i = *(_QWORD *)(i + 392) )
    *(_QWORD *)(i + 56) = *((_QWORD *)MiniportAdapterHandle + 3);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v9);
  *((_DWORD *)MiniportAdapterHandle + 119) = AdapterType;
  if ( CheckForHangTimeInSeconds < 2 )
  {
    v11 = 2;
  }
  else
  {
    v11 = CheckForHangTimeInSeconds & 0xFFFFFFFE;
    if ( CheckForHangTimeInSeconds > 0x40 )
      v11 = 64;
  }
  *((_DWORD *)MiniportAdapterHandle + 94) = v11;
  *((_DWORD *)MiniportAdapterHandle + 468) |= 0x2000000u;
  v12 = *((_DWORD *)MiniportAdapterHandle + 468);
  if ( (AttributeFlags & 8) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)MiniportAdapterHandle + 30, 8u);
    *((_DWORD *)MiniportAdapterHandle + 468) |= 1u;
    v12 = *((_DWORD *)MiniportAdapterHandle + 468);
  }
  if ( (AttributeFlags & 1) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)MiniportAdapterHandle + 30, 0x800u);
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20u;
    v12 = *((_DWORD *)MiniportAdapterHandle + 468);
  }
  if ( (AttributeFlags & 2) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)MiniportAdapterHandle + 30, 0x1000u);
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x40u;
    v12 = *((_DWORD *)MiniportAdapterHandle + 468);
  }
  if ( (AttributeFlags & 0x10) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)MiniportAdapterHandle + 30, 0x8000u);
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x100u;
    v12 = *((_DWORD *)MiniportAdapterHandle + 468);
  }
  if ( (AttributeFlags & 0x40) != 0 )
  {
    *((_DWORD *)MiniportAdapterHandle + 31) |= 0x8000u;
    *((_DWORD *)MiniportAdapterHandle + 468) = v12 | 0x200000;
  }
  if ( (AttributeFlags & 0x100) != 0 )
    _InterlockedAnd((volatile signed __int32 *)MiniportAdapterHandle + 30, 0xFFFDFFFF);
  KeInitializeEvent((PRKEVENT)((char *)MiniportAdapterHandle + 1912), NotificationEvent, 1u);
  if ( (AttributeFlags & 0x20) != 0
    || (mem::ReadNoFence<unsigned long,void>((unsigned int *)MiniportAdapterHandle + 30) & 0x20000) != 0 )
  {
    _InterlockedOr((volatile signed __int32 *)MiniportAdapterHandle + 30, 0x40000u);
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x800u;
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)MiniportAdapterHandle + 216),
      (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpcX,
      MiniportAdapterHandle);
    *((_QWORD *)MiniportAdapterHandle + 55) = ndisMSendCompleteX;
  }
  else
  {
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)MiniportAdapterHandle + 216),
      (PNDIS_TIMER_FUNCTION)ndisMWakeUpDpc,
      MiniportAdapterHandle);
  }
  if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)MiniportAdapterHandle + 30) & 0x20000) != 0 )
    ndisReferencePackage((struct _PKG_REF *)&dword_14011C018);
  if ( *((_BYTE *)MiniportAdapterHandle + 32) > 5u
    || *((_BYTE *)MiniportAdapterHandle + 32) == 5 && *((_BYTE *)MiniportAdapterHandle + 33)
    || (AttributeFlags & 0x200) != 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 2u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20000u;
  }
  if ( ndisPadShortPackets && (AttributeFlags & 0x800) == 0 && (AttributeFlags & 0x10) == 0 )
  {
    *((_BYTE *)MiniportAdapterHandle + 928) |= 8u;
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x20000000u;
  }
  if ( (AttributeFlags & 0x80u) != 0 )
    *((_DWORD *)MiniportAdapterHandle + 468) |= 0x100000u;
  _InterlockedOr((volatile signed __int32 *)MiniportAdapterHandle + 30, 0x10000u);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  ndisSetMiniportHandlers((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v13);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      1,
      101,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)MiniportAdapterHandle);
  }
}
