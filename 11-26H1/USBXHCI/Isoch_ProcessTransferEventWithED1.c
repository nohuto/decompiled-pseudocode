/*
 * XREFs of Isoch_ProcessTransferEventWithED1 @ 0x140012B70
 * Callers:
 *     Isoch_EP_TransferEventHandler @ 0x140012B40 (Isoch_EP_TransferEventHandler.c)
 * Callees:
 *     Isoch_MapTransfers @ 0x1400101E0 (Isoch_MapTransfers.c)
 *     Isoch_Stage_CompleteTD @ 0x140013290 (Isoch_Stage_CompleteTD.c)
 *     Isoch_Stage_Find @ 0x140013B30 (Isoch_Stage_Find.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1400140D0 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x140014110 (Isoch_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDLDDi @ 0x140016038 (WPP_RECORDER_SF_DDLDDi.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001EE08 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     ESM_AddEvent @ 0x140020E80 (ESM_AddEvent.c)
 *     Isoch_Stage_Release @ 0x140028F84 (Isoch_Stage_Release.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x140029130 (Isoch_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDi @ 0x140029D24 (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_DDqD @ 0x14004CBA8 (WPP_RECORDER_SF_DDqD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1400578F0 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x140057924 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

char __fastcall Isoch_ProcessTransferEventWithED1(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  KIRQL *v4; // r12
  _QWORD *v5; // r14
  char v6; // al
  KSPIN_LOCK *v7; // rcx
  KIRQL v8; // dl
  unsigned int v9; // edi
  __int64 v10; // rdx
  volatile signed __int32 *v11; // r10
  char v12; // cl
  int v13; // eax
  unsigned __int8 *v14; // rdi
  __int64 v15; // r10
  __int64 i; // r10
  int v18; // r9d
  int v19; // r13d
  __int64 ***v20; // rdi
  int v21; // r13d
  __int64 ***v22; // r10
  __int64 *v23; // r12
  __int64 *v24; // rax
  __int64 NextStage; // rax
  __int64 **v26; // rdx
  __int64 **v27; // rdx
  int v28; // eax
  __int64 **v29; // rax
  __int64 ****v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  int v34; // edx
  __int64 v35; // rax
  int v36; // r14d
  __int64 v37; // rbx
  unsigned int v38; // edi
  __int64 v39; // rax
  int v40; // [rsp+60h] [rbp-19h]
  __int64 **v41; // [rsp+68h] [rbp-11h]
  _QWORD *v42; // [rsp+70h] [rbp-9h]
  __int64 *v43; // [rsp+78h] [rbp-1h] BYREF
  __int64 **v44; // [rsp+80h] [rbp+7h]
  __int64 v45; // [rsp+E0h] [rbp+67h] BYREF
  char v46; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 ***v47; // [rsp+F0h] [rbp+77h] BYREF
  int v48; // [rsp+F8h] [rbp+7Fh] BYREF

  v45 = a1;
  v48 = 0;
  v3 = a1;
  v46 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v32 = *(_QWORD *)(a2 + 56);
    v33 = HIWORD(*(_DWORD *)(v3 + 12)) & 0x1F;
    LOBYTE(v33) = 5;
    WPP_RECORDER_SF_DDLDDi(*(_QWORD *)(v32 + 80), v33, *(_DWORD *)(v3 + 8) & 0xFFFFFF, 27);
  }
  if ( (*(_QWORD *)v3 & 3) == 1 )
  {
    *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
    v4 = (KIRQL *)(a2 + 104);
    if ( *(_BYTE *)(v3 + 11) == 36 )
    {
      *(_DWORD *)(a2 + 336) |= 0x80u;
      v35 = *(_QWORD *)(a2 + 40);
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 916));
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 960));
      *(_BYTE *)(v35 + 872) = 1;
    }
    if ( (*(_DWORD *)(a2 + 336) & 0x40) != 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
      return 0;
    }
    v5 = (_QWORD *)Isoch_Stage_Find(a2, v3, v3);
    v42 = v5;
    v6 = *(_BYTE *)(v3 + 11);
    if ( v6 == 26 || (unsigned __int8)(v6 - 27) <= 1u )
    {
      v7 = (KSPIN_LOCK *)(a2 + 96);
      v8 = *(_BYTE *)(a2 + 104);
      v9 = *(_DWORD *)(a2 + 336) | 0x40;
      *(_DWORD *)(a2 + 336) = v9;
      if ( v5 )
      {
        KeReleaseSpinLock(v7, v8);
        Isoch_Stage_CompleteTD(
          (_DWORD)v5,
          HIBYTE(*(_DWORD *)(v3 + 8)),
          *(_DWORD *)(v3 + 8) & 0xFFFFFF,
          0,
          (__int64)&v46,
          (__int64)&v48);
      }
      else
      {
        v38 = (v9 >> 7) & 1;
        KeReleaseSpinLock(v7, v8);
        v39 = *(_QWORD *)(a2 + 40);
        if ( *(_DWORD *)(v39 + 644) == 1 )
          MicrosoftTelemetryAssertTriggeredArgsMsgKM(
            "USBXHCI.SYS",
            *(unsigned __int16 *)(v39 + 652) | (*(unsigned __int16 *)(v39 + 648) << 16),
            v38,
            "Stale Stopped Event With Event Data = 1 Received");
        else
          MicrosoftTelemetryAssertTriggeredMsgKM("Stale Stopped Event With Event Data = 1 Received (ACPI)");
      }
      v11 = *(volatile signed __int32 **)(a2 + 56);
      _m_prefetchw((const void *)(v11 + 8));
      if ( (_InterlockedOr(v11 + 8, 0x10u) & 0x10) != 0 )
      {
        Controller_HwVerifierBreakIfEnabled(
          *(_QWORD *)v11,
          *((_QWORD *)v11 + 1),
          *((_QWORD *)v11 + 3),
          0x2000000,
          (__int64)"Received duplicate Stopped Transfer Events",
          0LL,
          0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v11 + 8));
        if ( (_InterlockedXor(v11 + 8, 8u) & 8) != 0 )
          ESM_AddEvent((PVOID)(v11 + 76));
      }
    }
    else
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *v4);
      if ( !v5 )
        return 0;
      v19 = *(_DWORD *)(v3 + 8);
      v20 = (__int64 ***)*v5;
      v44 = &v43;
      v21 = v19 & 0xFFFFFF;
      v40 = v21;
      v43 = (__int64 *)&v43;
      *v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
      v22 = *(__int64 ****)(a2 + 392);
      v47 = v22;
      if ( v22 == (__int64 ***)(a2 + 392) )
        goto LABEL_31;
      do
      {
        if ( v22 == v20 )
          break;
        v26 = *v22;
        v41 = *v22;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = v22[6];
          v28 = *((_DWORD *)v27 + 32);
          LOBYTE(v27) = 4;
          WPP_RECORDER_SF_DDqD(
            *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
            (_DWORD)v27,
            *(unsigned __int8 *)(*(_QWORD *)(a2 + 48) + 143LL),
            23,
            (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
            *(_BYTE *)(*(_QWORD *)(a2 + 48) + 143LL),
            *(_DWORD *)(*(_QWORD *)(a2 + 56) + 152LL),
            (char)v22[3],
            v28);
          v22 = v47;
          v26 = v41;
        }
        v29 = *v22;
        if ( (*v22)[1] != (__int64 *)v22
          || (v30 = (__int64 ****)v22[1], *v30 != v22)
          || (*v30 = (__int64 ***)v29, v29[1] = (__int64 *)v30, v31 = v44, *v44 != (__int64 *)&v43) )
        {
LABEL_44:
          __fastfail(3u);
        }
        v22[1] = v44;
        *v22 = &v43;
        *v31 = v22;
        v44 = (__int64 **)v22;
        v22 = (__int64 ***)v26;
        v47 = (__int64 ***)v26;
      }
      while ( v26 != (__int64 **)(a2 + 392) );
LABEL_31:
      while ( 1 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
        v23 = v43;
        LODWORD(v47) = 0;
        if ( v43 == (__int64 *)&v43 )
          break;
        if ( (__int64 **)v43[1] != &v43 )
          goto LABEL_44;
        v24 = (__int64 *)*v43;
        if ( *(__int64 **)(*v43 + 8) != v43 )
          goto LABEL_44;
        v43 = (__int64 *)*v43;
        v24[1] = (__int64)&v43;
        v23[1] = (__int64)v23;
        *v23 = (__int64)v23;
        *((_BYTE *)v23 + 133) = *((_BYTE *)v23 + 132);
        *((_BYTE *)v23 + 134) = *((_BYTE *)v23 + 130);
        NextStage = StageQueue_ForwardScanGetNextStage(v23 + 16);
        if ( NextStage )
        {
          v36 = (int)v47;
          v37 = NextStage;
          do
          {
            Isoch_Stage_FreeScatterGatherList(a2, v37);
            *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
            Isoch_Stage_Release(a2, v37);
            KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 96), *(_BYTE *)(a2 + 104));
            ++v36;
            v37 = StageQueue_ForwardScanGetNextStage(v23 + 16);
          }
          while ( v37 );
          v3 = v45;
          v21 = v40;
          LODWORD(v47) = v36;
          v5 = v42;
        }
        *(_BYTE *)(a2 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 96));
        Isoch_Transfer_CompleteCancelable(a2, (_DWORD)v23, -1, -1, 1, 0);
        *(_DWORD *)(a2 + 384) -= (_DWORD)v47;
      }
      v12 = *((_BYTE *)v20 + 130);
      v13 = *((unsigned __int8 *)v20 + 132);
      *((_BYTE *)v20 + 133) = v13;
      *((_BYTE *)v20 + 134) = v12;
      v14 = (unsigned __int8 *)(v20 + 16);
      LOBYTE(v45) = 0;
      if ( v12 )
      {
        v15 = v13 * (unsigned int)*v14;
        v14[6] = v12 - 1;
        v14[5] = (v13 + 1) % (unsigned int)v14[1];
        for ( i = (__int64)&v14[v15 + 16]; i; i = StageQueue_ForwardScanGetNextStage(v14) )
        {
          if ( (_QWORD *)i == v5 )
            break;
          LOBYTE(v18) = 1;
          *(_DWORD *)(i + 48) = *(_DWORD *)(i + 44) + 1;
          Isoch_Stage_CompleteTD(i, 23, 0, v18, (__int64)&v45, (__int64)&v47);
        }
      }
      LOBYTE(v18) = 1;
      Isoch_Stage_CompleteTD((_DWORD)v5, *(unsigned __int8 *)(v3 + 11), v21, v18, (__int64)&v46, (__int64)&v48);
    }
    if ( v46 )
    {
      _InterlockedExchange((volatile __int32 *)(a2 + 352), 1);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 2) != 2 )
      {
        if ( v48 || _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 108), 3, 4) != 4 )
          return 0;
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
          WdfDriverGlobals,
          *(_QWORD *)(a2 + 328),
          0LL);
      }
      Isoch_MapTransfers(a2, v10);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = HIBYTE(*(_DWORD *)(v3 + 12));
      LOBYTE(v34) = 2;
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(*(_QWORD *)(a2 + 56) + 80LL),
        v34,
        *(_QWORD *)v3,
        28,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        HIBYTE(*(_DWORD *)(v3 + 12)),
        HIWORD(*(_DWORD *)(v3 + 12)) & 0x1F,
        *(_QWORD *)v3);
    }
    Controller_ReportFatalError(*(_QWORD *)(a2 + 40), 2, 4126, 0, *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 56), a2);
  }
  return 0;
}
