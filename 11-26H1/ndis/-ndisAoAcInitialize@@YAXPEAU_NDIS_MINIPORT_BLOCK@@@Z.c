/*
 * XREFs of ?ndisAoAcInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140138F74
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017F540 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     NdisInitializeTimer @ 0x140070C20 (NdisInitializeTimer.c)
 */

void __fastcall ndisAoAcInitialize(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  int v3; // edx
  unsigned __int8 v4; // al

  AoAc = a1->AoAc;
  if ( AoAc || (AoAc = (struct _NDIS_MINIPORT_AOAC *)ExAllocatePool2(64LL, 1160LL, 1835091022LL)) != 0LL )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)AoAc);
    *((_QWORD *)AoAc + 2) = (char *)AoAc + 8;
    *((_QWORD *)AoAc + 1) = (char *)AoAc + 8;
    *((_QWORD *)AoAc + 5) = (char *)AoAc + 32;
    *((_QWORD *)AoAc + 4) = (char *)AoAc + 32;
    KeInitializeEvent((PRKEVENT)((char *)AoAc + 392), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)((char *)AoAc + 416), NotificationEvent, 1u);
    v4 = ndisCsResiliency;
    *((_DWORD *)AoAc + 95) |= 0x100u;
    *((_BYTE *)AoAc + 1081) = v4;
    *((_DWORD *)AoAc + 94) = 0;
    *((_BYTE *)AoAc + 288) = 0;
    *((_BYTE *)AoAc + 386) = 1;
    *((_BYTE *)AoAc + 1080) = 0;
    *((_DWORD *)AoAc + 71) = ndisNicQuietDerefDefaultTimeout;
    NdisInitializeTimer((PNDIS_TIMER)((char *)AoAc + 72), (PNDIS_TIMER_FUNCTION)ndisTempRefTimerDpc, a1);
    *((_QWORD *)AoAc + 25) = a1;
    *((_QWORD *)AoAc + 26) = ndisAoAcTempRefWorkItem;
    *((_QWORD *)AoAc + 38) = ndisAoAcWakeWorkItem;
    *((_QWORD *)AoAc + 37) = a1;
    a1->AoAc = AoAc;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      14,
      14,
      (struct _GUID *)&WPP_64b491f4d22c35747c5821aad1f382d9_Traceguids,
      (char)a1);
  }
}
