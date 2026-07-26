/*
 * XREFs of ?ndisMIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1400B60E8
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x14005D9A0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 */

void __fastcall ndisMIndicatePMCapabilities(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  _DWORD *StatusBuffer; // rdi
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  KIRQL v7; // dl
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  StatusBuffer = a2->StatusBuffer;
  NewIrql = 0;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  v4 = StatusBuffer[12];
  if ( v4 == 2 || (unsigned int)(v4 - 3) <= 1 )
    a1->PMCurrentParameters.WakeUpFlags = 1;
  else
    a1->PMCurrentParameters.WakeUpFlags &= ~1u;
  v5 = a1->PMCurrentParameters.EnabledWoLPacketPatterns & StatusBuffer[2];
  a1->PMCurrentParameters.EnabledWoLPacketPatterns = v5;
  v6 = StatusBuffer[10];
  if ( v6 == 2 || (unsigned int)(v6 - 3) <= 1 )
    a1->PMCurrentParameters.EnabledWoLPacketPatterns = v5 | 2;
  a1->PMCurrentParameters.EnabledProtocolOffloads &= StatusBuffer[7];
  v7 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v7);
}
