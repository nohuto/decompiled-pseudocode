/*
 * XREFs of NdisMPromoteMiniport @ 0x1400A28C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14001BE20 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1400220A0 (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x14008EC90 (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 */

NDIS_STATUS __stdcall NdisMPromoteMiniport(NDIS_HANDLE MiniportHandle)
{
  NDIS_STATUS v1; // esi
  struct _WORK_QUEUE_ITEM *Pool2; // r14
  KIRQL v4; // dl
  __int64 v5; // r15
  KIRQL v6; // dl
  __int64 v7; // rbx
  KIRQL v8; // dl
  __int64 i; // rax
  KIRQL v10; // dl
  KIRQL NewIrql; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  NewIrql = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      106,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)MiniportHandle);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, &NewIrql);
  if ( (*((_DWORD *)MiniportHandle + 30) & 0x10000000) == 0
    || *((NDIS_HANDLE *)MiniportHandle + 22) == MiniportHandle
    || (*((_DWORD *)MiniportHandle + 31) & 0x20000) != 0 )
  {
    v10 = NewIrql;
    v1 = -1073741637;
    *((_QWORD *)MiniportHandle + 65) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v10);
  }
  else
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1769423950LL);
    if ( Pool2 )
    {
      v5 = *((_QWORD *)MiniportHandle + 22);
      Pool2->WorkerRoutine = (void (__fastcall *)(void *))ndisMQueuedPromoteMiniport;
      Pool2->Parameter = MiniportHandle;
      Pool2->List.Flink = 0LL;
      _InterlockedAnd((volatile signed __int32 *)MiniportHandle + 30, 0xEFFFFFFF);
      ndisReferenceMiniportNoCheck((struct _NDIS_MINIPORT_BLOCK *)MiniportHandle, 0x21u);
      v6 = NewIrql;
      *((_QWORD *)MiniportHandle + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v6);
      v7 = *((_QWORD *)MiniportHandle + 470);
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 392));
      for ( i = *(_QWORD *)(v7 + 16); i; i = *(_QWORD *)(i + 8) )
      {
        if ( *(_QWORD *)(i + 176) == v5 )
          *(_QWORD *)(i + 176) = MiniportHandle;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 392), v8);
      ExQueueWorkItem(Pool2, (WORK_QUEUE_TYPE)40);
    }
    else
    {
      v4 = NewIrql;
      v1 = -1073741670;
      *((_QWORD *)MiniportHandle + 65) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportHandle + 12, v4);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      107,
      (struct _GUID *)&WPP_aa77392295b13b3ad77210343ba6186d_Traceguids,
      (char)MiniportHandle);
  NdisTraceLoggingRareMiniportPath();
  return v1;
}
