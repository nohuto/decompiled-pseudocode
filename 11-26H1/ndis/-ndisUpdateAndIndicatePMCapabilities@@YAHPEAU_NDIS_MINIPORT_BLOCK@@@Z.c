/*
 * XREFs of ?ndisUpdateAndIndicatePMCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140006460
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14004EA90 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x140084370 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     ?ndisOidPrePMHaltOnSuspend@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140084FD0 (-ndisOidPrePMHaltOnSuspend@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z @ 0x1400070C0 (-ndisScheduleWorkItemInternal@@YAXPEAU_NDIS_WORK_ITEM@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400220A0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ndisUpdateAndIndicatePMCapabilities(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // edx
  struct _NDIS_WORK_ITEM *Pool2; // rbx

  Pool2 = (struct _NDIS_WORK_ITEM *)ExAllocatePool2(64LL, 80LL, 1769423950LL);
  if ( Pool2 )
  {
    ndisReferenceMiniportNoCheck(a1, MPREF_PM_UPDATECAPS);
    Pool2->Context = a1;
    Pool2->Routine = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))ndisQueuedUpdatePMCapabilities;
    ndisScheduleWorkItemInternal(Pool2);
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v2,
        14,
        120,
        (struct _GUID *)&WPP_588cecccef1c306149c05f90e63600c9_Traceguids);
    }
    return 3221225626LL;
  }
}
