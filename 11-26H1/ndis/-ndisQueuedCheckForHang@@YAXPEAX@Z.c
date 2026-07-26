/*
 * XREFs of ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x14007AE20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007930 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x140007AE0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140008FD0 (-NdisWdfGetCxBlockFromMiniport@@YAPEAU_NDIS_WDF_CX_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140057C30 (-ndisSetWakeUpTimer@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x140081590 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     Feature_CFHCancelTimerFix__private_IsEnabledDeviceUsageNoInline @ 0x140092D98 (Feature_CFHCancelTimerFix__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ?ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140163170 (-ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisQueuedCheckForHang(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // r12
  unsigned __int8 v4; // r14
  KIRQL v5; // bl
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  unsigned int v7; // ebp
  unsigned int Flags; // ebx
  KIRQL v9; // al
  KIRQL v10; // r15
  struct _NDIS_WDF_CX_DRIVER_BLOCK *CxBlockFromMiniport; // rax
  int v12; // ebx
  int v13; // edx
  unsigned int WSyncFlags; // eax
  KIRQL v15; // si
  bool v16; // sf
  unsigned __int16 CFHangXTicks; // cx
  bool v18; // zf
  KIRQL v19; // al
  LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v2 = 1;
  if ( a1->SelectiveSuspend )
  {
    if ( !((a1->Flags & 0x80u) == 0
         ? ndisWdmSetBusyAsync((__int64)a1, 1u, 0x31u, 0LL, 0)
         : ndisWdfSetBusyAsync((__int64)a1, 1u, 0x31u, 0LL, 0)) )
    {
      v2 = 0;
      goto LABEL_39;
    }
  }
  if ( a1->MajorNdisVersion < 6u )
  {
    v5 = KfRaiseIrql(2u);
    v4 = a1->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(a1->MiniportAdapterContext);
    if ( v5 != 2 )
      KeLowerIrql(v5);
  }
  else
  {
    v4 = ndisMInvokeCheckForHang(a1);
  }
  SelectiveSuspend = a1->SelectiveSuspend;
  v7 = v4 != 0 ? 2 : 0;
  if ( SelectiveSuspend )
  {
    Flags = a1->Flags;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1->SelectiveSuspend);
    *((_DWORD *)SelectiveSuspend + 128) &= ~0x10u;
    v10 = v9;
    if ( (Flags & 0x80u) != 0
      && !*((_DWORD *)SelectiveSuspend + 128)
      && !*((_DWORD *)SelectiveSuspend + 129)
      && !*((_DWORD *)SelectiveSuspend + 132)
      && !*((_DWORD *)SelectiveSuspend + 133)
      && !*((_DWORD *)SelectiveSuspend + 130)
      && !*((_DWORD *)SelectiveSuspend + 131)
      && !*((_DWORD *)SelectiveSuspend + 144)
      && !*((_DWORD *)SelectiveSuspend + 127) )
    {
      CxBlockFromMiniport = NdisWdfGetCxBlockFromMiniport(a1);
      CxBlockFromMiniport->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v10);
  }
  if ( v4 )
  {
LABEL_38:
    ndisMResetMiniportInternal(a1, v7);
    goto LABEL_39;
  }
  if ( (a1->Flags & 0x1000) != 0 )
    goto LABEL_39;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 )
    {
      Interval.QuadPart = -2500000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    v13 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = KeGetCurrentThread();
    WSyncFlags = a1->WSyncFlags;
    if ( (WSyncFlags & 1) == 0 )
    {
      if ( v13 != 254 )
      {
        v18 = v13 == 255;
        goto LABEL_49;
      }
LABEL_51:
      a1->LockThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
      goto LABEL_39;
    }
    if ( (WSyncFlags & 2) == 0 )
      break;
    if ( v13 == 254 )
    {
      a1->LockThread = 0LL;
      KeReleaseSpinLockFromDpcLevel(&a1->Lock);
    }
    else if ( v13 != 255 )
    {
      a1->LockThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v13);
    }
    if ( ++v12 >= 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0x11u,
          0xAu,
          (struct _GUID *)&WPP_e2f6c99a9d093186e9afc0671e670fa3_Traceguids,
          (char)a1,
          a1->PendingOidRequest);
      v7 = 1;
      goto LABEL_38;
    }
  }
  CFHangXTicks = a1->CFHangXTicks;
  if ( CFHangXTicks )
    a1->CFHangXTicks = CFHangXTicks - 1;
  else
    a1->WSyncFlags = WSyncFlags | 2;
  if ( v13 == 254 )
    goto LABEL_51;
  v18 = v13 == 255;
LABEL_49:
  if ( !v18 )
  {
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v13);
  }
LABEL_39:
  if ( (unsigned int)Feature_CFHCancelTimerFix__private_IsEnabledDeviceUsageNoInline() )
  {
    v19 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->MiniportThread = KeGetCurrentThread();
    v15 = v19;
    KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
    _InterlockedExchange(&a1->CFHWorkItemQueued, 0);
    if ( v2 )
    {
      v16 = (a1->Flags & 0x80000000) != 0;
LABEL_54:
      if ( !v16 && (a1->PnPFlags & 0x20080000) == 0 )
        ndisSetWakeUpTimer(a1);
    }
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v15);
  }
  else
  {
    KeSetEvent(&a1->CFHCompletedEvent, 0, 0);
    _InterlockedExchange(&a1->CFHWorkItemQueued, 0);
    if ( v2 )
    {
      v15 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
      v16 = (a1->Flags & 0x80000000) != 0;
      goto LABEL_54;
    }
  }
  ndisDereferenceMiniport(a1, 0x53u);
}
