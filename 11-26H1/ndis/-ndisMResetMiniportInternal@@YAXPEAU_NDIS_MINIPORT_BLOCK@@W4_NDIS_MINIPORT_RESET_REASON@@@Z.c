/*
 * XREFs of ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x140081590
 * Callers:
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x14007AE20 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 *     ndisQueuedResetMiniport @ 0x1400A4280 (ndisQueuedResetMiniport.c)
 * Callees:
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x140009060 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140058680 (-ndisMSwapOpenHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140088490 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1400886C0 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     NdisMResetComplete @ 0x1400A2AD0 (NdisMResetComplete.c)
 *     McTemplateK0jqxzqq_EtwWriteTransfer @ 0x1400A42CC (McTemplateK0jqxzqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     ndisMInvokeReset @ 0x14013B190 (ndisMInvokeReset.c)
 */

void __fastcall ndisMResetMiniportInternal(__int64 a1, int a2)
{
  int v4; // edx
  KIRQL v5; // r15
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // rcx
  NDIS_STATUS v11; // edi
  KIRQL v12; // si
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  __int64 v14; // [rsp+30h] [rbp-D0h]
  BOOLEAN v15[16]; // [rsp+50h] [rbp-B0h] BYREF
  struct _KTIMER Timer; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v18; // [rsp+B0h] [rbp-50h]
  __int128 v19; // [rsp+C0h] [rbp-40h]
  __int128 v20; // [rsp+D0h] [rbp-30h]
  __int128 v21; // [rsp+E0h] [rbp-20h]
  __int128 v22; // [rsp+F0h] [rbp-10h]
  __int128 v23; // [rsp+100h] [rbp+0h]

  v15[0] = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0xDu,
      (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids,
      a1,
      a2);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  if ( (*(_DWORD *)(a1 + 120) & 0x81200000) != 0
    || (*(_DWORD *)(a1 + 124) & 0x80000) != 0
    || (v6 = *(_DWORD *)(a1 + 3880), v6 == 2)
    || (unsigned int)(v6 - 3) <= 1 )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
  }
  else
  {
    if ( a2 == 1 )
    {
      ++*(_WORD *)(a1 + 1784);
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      ++*(_WORD *)(a1 + 1786);
    }
    if ( (byte_14011D045 & 0x40) != 0 )
      McTemplateK0jqxzqq_EtwWriteTransfer(
        *(unsigned __int16 *)(a1 + 1784) + *(unsigned __int16 *)(a1 + 1786),
        v4,
        a1 + 4008,
        a1 + 4008,
        *(_DWORD *)(a1 + 4056),
        *(_QWORD *)(a1 + 4024),
        *(_QWORD *)(*(_QWORD *)(a1 + 3856) + 8LL),
        a2,
        *(_WORD *)(a1 + 1784) + *(_WORD *)(a1 + 1786));
    _InterlockedOr((volatile signed __int32 *)(a1 + 120), 0x200000u);
    *(_QWORD *)(a1 + 392) = 0LL;
    ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)a1, 1u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 120), 0x80000u);
    for ( ; *(_DWORD *)(a1 + 1824); *(_QWORD *)(a1 + 520) = KeGetCurrentThread() )
    {
      *(_QWORD *)(a1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
      memset(&Timer, 0, sizeof(Timer));
      KeInitializeTimerEx(&Timer, SynchronizationTimer);
      KeSetTimer(&Timer, (LARGE_INTEGER)-500LL, 0LL);
      KeWaitForSingleObject(&Timer, Executive, 0, 0, 0LL);
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
    v7 = *(_QWORD *)(a1 + 3760);
    v8 = *(_QWORD *)(a1 + 5288);
    v17[0] = 7340440LL;
    v17[1] = a1;
    v18 = 0LL;
    DWORD1(v18) = 1073807364;
    v19 = 0LL;
    v20 = 0uLL;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    (*((void (__fastcall **)(_QWORD, __int64, __int64, _QWORD *))g_MiniportHookDrivers
     + 16 * (__int64)*(int *)(v7 + 896)
     + 8))(
      *((_QWORD *)g_MiniportHookDrivers + 16 * (__int64)*(int *)(v7 + 896) + 3),
      v8,
      a1,
      v17);
    if ( (byte_14011D041 & 4) != 0 )
    {
      LODWORD(v14) = 65539;
      LODWORD(Timeout) = *(_DWORD *)(a1 + 4056);
      McTemplateK0jqxd_EtwWriteTransfer(
        v10,
        (__int64)&CallMiniportReset,
        a1 + 4008,
        a1 + 4008,
        (__int64)Timeout,
        *(_QWORD *)(a1 + 4024),
        v14);
    }
    if ( *(_QWORD *)(a1 + 4448) )
    {
      if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
        ndisWdmSetBusySync(a1, 36LL, 0LL);
      else
        ndisWdfSetBusySync(a1, 36LL, 0LL);
    }
    if ( *(_BYTE *)(a1 + 32) < 6u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          17,
          14,
          (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids);
      }
      v12 = KfRaiseIrql(2u);
      v11 = (*(__int64 (__fastcall **)(BOOLEAN *, _QWORD))(*(_QWORD *)(a1 + 3760) + 192LL))(v15, *(_QWORD *)(a1 + 24));
      if ( v12 != 2 )
        KeLowerIrql(v12);
    }
    else
    {
      v11 = ndisMInvokeReset(a1);
    }
    if ( v11 != 259 )
      NdisMResetComplete((NDIS_HANDLE)a1, v11, v15[0]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v14) = a2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x11u,
        0xFu,
        (struct _GUID *)&WPP_5c8f887eaf433a39d6a8a30c25163583_Traceguids,
        a1,
        v14);
    }
  }
}
