/*
 * XREFs of ?ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1400056E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140006020 (-ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

void __fastcall ndisSSIdleTimerWorkItem(struct _NDIS_WORK_ITEM *a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  KIRQL v4; // dl
  KIRQL v5; // al
  KIRQL v6; // di

  SelectiveSuspend = a2->SelectiveSuspend;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  if ( *((_DWORD *)SelectiveSuspend + 127)
    || *((_DWORD *)SelectiveSuspend + 128)
    || *((_DWORD *)SelectiveSuspend + 129)
    || *((_DWORD *)SelectiveSuspend + 132)
    || *((_DWORD *)SelectiveSuspend + 133)
    || *((_DWORD *)SelectiveSuspend + 130)
    || *((_DWORD *)SelectiveSuspend + 131)
    || *((_DWORD *)SelectiveSuspend + 144)
    || *((_DWORD *)SelectiveSuspend + 36) < 3u
    || (*((_DWORD *)SelectiveSuspend + 126) & 0x14) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v4);
  }
  else
  {
    *((_DWORD *)SelectiveSuspend + 36) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v4);
    ndisSubmitIdleRequest(a2, 0);
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  *((_DWORD *)SelectiveSuspend + 126) &= ~2u;
  v6 = v5;
  KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 152), 0, 0);
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
  ndisDereferenceMiniport(a2, MPREF_SS_IDLETIMER);
}
